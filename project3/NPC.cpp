// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3

#include "NPC.h"
#include <iostream>


using namespace std;

//constructors
NPC::NPC()
{
    name = "Random";
    statusFriend = false;
    statusNeutral = false;
    statusEnemy = false;
    puzzleComplete = false;
}

NPC::NPC(string name_, bool statusFriend_, bool statusNeutral_, bool statusEnemy_, bool puzzleComplete_)
{
    name = name_;
    statusFriend = statusFriend_;
    statusNeutral = statusNeutral_;
    statusEnemy = statusEnemy_;
    puzzleComplete =  puzzleComplete_;
}

//getters/setters

string NPC::getName()
{
    return name;
}

void NPC::setName(string setName)
{
    name = setName;
}

bool NPC::getStatusFriend()
{
    return statusFriend;
}

void NPC::setStatusFriend(bool setStatusFriend)
{
    statusFriend = setStatusFriend; 
}

bool NPC::getStatusNeutral()
{
    return statusNeutral;
}

void NPC::setStatusNeutral(bool setStatusNeutral)
{
    statusNeutral = setStatusNeutral;
}
bool NPC::getStatusEnemy()
{
    return statusEnemy;
}

void NPC::setStatusEnemy(bool setStatusEnemy)
{
    statusEnemy = setStatusEnemy;
}

bool NPC::getPuzzleComplete()
{
    return puzzleComplete;
}

void NPC::setPuzzleComplete(bool setPuzzleComplete)
{
    puzzleComplete = setPuzzleComplete;
}



