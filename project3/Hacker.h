// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3 

#ifndef HACKER_H 
#define HACKER_H

#include <string>
#include <vector>
using namespace std;





class Hacker
//possibly use vectors?
{
    private: //members that cannot be accessed without public functions
    string name;
    int serverRoomNumber;

    public: //members that can access private members
    Hacker();
    Hacker(string name, int serverRoomNumber);
    string getName();
    void setName(string name);
    int getServerRoomNumber();
    void setServerRoomNumber(int serverRoomNumber);
    
      
};



#endif
