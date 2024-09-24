// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Map.h"
#include "BestBuy.h"
#include "Hacker.h"
#include "NPC.h"
#include "Player.h"

using namespace std;

void printText(string fileName)
{
    ifstream file;
    file.open(fileName);

    string line;

    while (getline(file, line))
    {
        if (line == "") //if line is empty
        {
            continue; //empty lines are not added to array
        }

        if (line != "") //if line has stuff in it
        {   
            cout << line << endl << endl;
        }
        
    }
}