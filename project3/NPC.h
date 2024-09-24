// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3 

#ifndef NPC_H 
#define NPC_H

#include <string>
using namespace std;

class NPC
{
    private: //members that cannot be accessed without public functions
    string name;
    bool statusFriend;
    bool statusNeutral;
    bool statusEnemy;
    bool puzzleComplete;

    public: //members that can access private members
    NPC(); //default constructor
    NPC(string name, bool statusFriend, bool statusNeutral, bool statusEnemy, bool puzzleComplete); //parameterized constructor
    string getName();
    void setName(string name);
    bool getStatusFriend();
    void setStatusFriend(bool statusFriend);
    bool getStatusNeutral();
    void setStatusNeutral(bool statusNeutral);
    bool getStatusEnemy();
    void setStatusEnemy(bool statusEnemy);
    bool getPuzzleComplete();
    void setPuzzleComplete(bool puzzleComplete);

};

#endif
