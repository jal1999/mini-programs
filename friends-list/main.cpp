/**
 * This file is to be used as a testing file for the functions pertaining to
 * the Friend List portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

#include <iostream>
#include "friendslist.hpp"
#include <vector>
#include <map>

int main() {
    std::map<std::string, std::vector<std::string> > friends = add_all_friend_connections("input.txt");
    for (std::string s : friends["Abby"]) {
        std::cout << s << std::endl;
    }
    return 0;
}