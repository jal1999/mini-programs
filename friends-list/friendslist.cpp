/**
 * This file contains the function definitions for all functions pertaining to the 
 * Friend List portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#include "friendslist.hpp"
#include <iostream>
#include <map>
#include <vector>

std::map<std::string, std::vector<std::string> > add_all_friend_connections(std::string filename) {
    std::map<std::string, std::vector<std::string> > friends;
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        bool first = false, second = false;
        int idx = line.find(" ");
        std::string first_friend = line.substr(0, idx);
        std::string second_friend = line.substr(idx + 1);
        if (friends.count(first_friend) == 0) {
            first = true;
            std::vector<std::string> vec;
            friends[first_friend] = vec;
            friends[first_friend].push_back(second_friend);
        } if (friends.count(second_friend) == 0) {
            second = true;
            std::vector<std::string> vec;
            friends[second_friend] = vec;
            friends[second_friend].push_back(first_friend);
        } if (!first || !second) {
            if (!first) {
            std::vector<std::string> vec = friends[first_friend];
            vec.push_back(second_friend);
            friends[first_friend] = vec;
            } if (!second) {
            std::vector<std::string> vec = friends[second_friend];
            vec.push_back(first_friend);
            friends[second_friend] = vec;
            }
        }
    }
    return friends;
}