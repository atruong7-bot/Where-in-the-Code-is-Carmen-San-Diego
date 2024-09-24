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