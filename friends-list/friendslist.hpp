/**
 * This file contains the function declarations for all functions pertaining to the 
 * Friend List portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

 #ifndef FRIENDSLIST_HPP
 #define FRIENDSLIST_HPP

 #include <fstream>
 #include <string>
 #include <map>
 #include <vector>

 std::map<std::string, std::vector<std::string> > add_all_friend_connections(std::string filename);

 #endif