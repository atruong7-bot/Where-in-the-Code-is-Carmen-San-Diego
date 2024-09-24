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

// void PressKey(char a)
// {
//     char ans2;
//     cout << "Press any key to continue." << endl << endl;
//     cin >> ans2;
// }

bool isSameString(string genre, string compare){
    int sizeG = genre.size();
    int sizeC = compare.size();
    int check = 0; //will be used to figure out if all characters of string genre match all characters of string compare
    if(sizeG != sizeC) //genres being compared must be same length first
    {
        return false;
    }
    else
    {
        for(int i = 0; i < sizeG; i++)
        {
            if( (genre[i] == compare[i]) || (genre[i] == compare[i]+32) || (genre[i] == compare[i] -32) ) //check if each character is the same 
            {
            check = check + 1; //when character is the same, check is iterated
           
            }
        }
        
        if(check == sizeG) // if all characters of string genre match all characters of string compare
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

void statusUpdate(Player p1)
{

    cout << "The computer’s current maintenance level: " << p1.getMaintenance() << endl;
    cout << "How many viruses the computer has: " << p1.getViruses() << endl;
    cout << "Computer parts available: " << p1.getComputerParts() << endl;;
    cout << "Antivirus USB sticks available: " << p1.getAntivirusSoftware() << endl;
    cout << "VPNs available: " << p1.getNumOfVPN() << endl;
    cout << "CPUs available: " << p1.getCPU() << endl;
    cout << "GPUs available: " << p1.getGPU() << endl;
    cout << "Power Supply Units available: " << p1.getPowerSupplyUnit() << endl;
    cout << "Computer Cases available: " << p1.getComputerCase() << endl;
    cout << "Internet cards available: " << p1.getInternetCard() << endl;
    cout << "Keyboard(s) and Mouse(s) available: " << p1.getKeyboardAndMouse() << endl;
    cout << "Premade computer available: " << p1.getPremadeComputer() << endl;
    cout << "Internet provider level: " << p1.getInternetProviderLevel() << endl;
    cout << "Dogecoins available: " << p1.getDogeCoins() << endl;
    cout << "Frustration level: " << p1.getFrustrationLevel() << endl;
    cout << "Carmen’s progress: " << p1.getCarmenProgress() << endl;
    cout << "Hackers defeated so far: " << p1.getHackersDefeated() << endl;
}


int VPN(Player &p1, BestBuy &b1)
{
    int option = 0;
    string file = "antivirusSoftware.txt";
    int total = 0;

    do
    {
        statusUpdate(p1);
        printText(file);
        cout << "Dogecoins spent on VPN: " << total << endl;
        cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        cin >> option;

        if (option == 1)
        {
            if (p1.getNumOfVPN() < 2)
            {
                if (p1.getDogeCoins() >= b1.getCostVPN())
                {
                    p1.setNumOfVPN(p1.getNumOfVPN() + 1);
                    p1.setDogeCoins(p1.getDogeCoins() - b1.getCostVPN());
                    total += b1.getCostVPN();
                }

                else 
                {
                    cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
                }
            }

            else 
            {
                cout << "Cannot hold more VPNs, purchase declined." << endl;
            }
        }

        else if (option == 2)
        {
            cout << "Dogecoins spent on VPN: " << total << endl;
            cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        }

        else
        {
            cout << "Invalid Input. Choose between Options 1 - 8." << endl;
        }

    }while (option !=2);

    return total;

}