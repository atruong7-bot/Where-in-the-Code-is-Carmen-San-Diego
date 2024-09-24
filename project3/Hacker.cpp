// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3

#include "Hacker.h"
#include "fstream"
#include <vector>
#include <iostream>

using namespace std;



//constructors

Hacker::Hacker()
{
    name = "Hacker";
    serverRoomNumber = 0;
}

Hacker::Hacker(string name_, int serverRoomNumber_)
{
    name = name_;
    serverRoomNumber = serverRoomNumber_;
}


string Hacker::getName()
{
    return name;
}

void Hacker::setName(string setName)
{
    name = setName;
}

int Hacker::getServerRoomNumber()
{
    return serverRoomNumber;
}

void Hacker::setServerRoomNumber(int setServerRoomNumber)
{
    serverRoomNumber = setServerRoomNumber;
}
