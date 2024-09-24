// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3
// Interview: https://cuboulder.zoom.us/j/8948945865 Friday, 3 December 2021 12:20 PM – 12:40 PM

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include "Map.h"
#include "BestBuy.h"
#include "Hacker.h"
#include "NPC.h"
#include "Player.h"
#include <stdlib.h>

using namespace std;

int split(string a, char sep, string arr[], int size)
{
    int stringSize = a.size();

    int position = 0; //to keep track of the position of the array

    if(a == "") //if the string is nothing
    {
        return 0;
    }

    for(int i = 0; i < stringSize; i++) //traverse string a
    {
        if(a[i] == sep)
        {
            position++; //once the character of the string is the seperator, position of the array moves to the next element
        }

        else
        {
            arr[position] = arr[position] + a[i]; //constructing the element letter by letter
        }
        
    }
    if(position + 1 > size) //If the string is split into more pieces than the size of the array (the last parameter), 
    //then the function returns -1. 
    {
        return -1;
    }
    return position + 1; //the number of pieces the string was split into

}


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
    cout << "Player name: " << p1.getPlayerName() << endl;
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
    cout << "Current server room: " << p1.getServerRoom() << endl;
}

void inventory(Player p1)
{
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
}



int computerParts(Player &p1, BestBuy &b1)
{
    int option = 0;
    int total = 0;

    do
    {
        inventory(p1);
        cout << "Best Buy recommends that the player should purchase at least 1 of each computer part in case your main computer breaks. " << endl;
        cout << "You can have a maximum of 3 of each computer part and 1 extra premade computer. These are the different parts:" << endl;
        cout << "1. A CPU costs " << b1.getCostCPU() << " Dogecoins" << endl;
        cout << "2. A GPU costs " << b1.getCostGPU() << " Dogecoins" << endl;
        cout << "3. A Power Supply Unit costs " << b1.getCostPowerSupplyUnit() << " Dogecoins" << endl;
        cout << "4. A Computer Case costs " << b1.getCostComputerCase() << " Dogecoins" << endl;
        cout << "5. An internet card costs " << b1.getCostInternetCard() << " Dogecoins" << endl;
        cout << "6. A keyboard and mouse costs " << b1.getCostKeyboardAndMouse() << " Dogecoins" << endl;
        cout << "7. A premade computer costs " << b1.getCostPremadeComputer() << " Dogecoins" << endl;
        cout << "8. None/Quit" << endl;
        cout << "Please select a number between 1 - 8" << endl << endl;
        cout << "Dogecoins spent on Computer Parts: " << total << endl;
        cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        cin >> option;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


        if (option == 1)
        {
            if (p1.getCPU() < 3)
            {
                if (p1.getDogeCoins() >= b1.getCostCPU())
                {
                    p1.setComputerParts(p1.getComputerParts() + 1);
                    p1.setCPU(p1.getCPU() + 1);
                    p1.setDogeCoins(p1.getDogeCoins() - b1.getCostCPU());
                    total += b1.getCostCPU();
                }

                else 
                {
                    cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
                }
            }

            else 
            {
                cout << "Cannot hold more CPUs, purchase declined." << endl;
            }
        }

        else if (option == 2)
            {
                if (p1.getGPU() < 3)
                {
                    if (p1.getDogeCoins() >= b1.getCostGPU())
                    {
                        p1.setComputerParts(p1.getComputerParts() + 1);
                        p1.setGPU(p1.getGPU() + 1);
                        p1.setDogeCoins(p1.getDogeCoins() - b1.getCostGPU());
                        total += b1.getCostGPU();
                    }

                    else 
                    {
                        cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
                    }
                }

                else 
                {
                    cout << "Cannot hold more GPUs, purchase declined." << endl;
                }
        }

        else if (option == 3)
        {
            if (p1.getPowerSupplyUnit() < 3)
            {
                if (p1.getDogeCoins() >= b1.getCostPowerSupplyUnit())
                {
                    p1.setComputerParts(p1.getComputerParts() + 1);
                    p1.setPowerSupplyUnit(p1.getPowerSupplyUnit() + 1);
                    p1.setDogeCoins(p1.getDogeCoins() - b1.getCostPowerSupplyUnit());
                    total += b1.getCostPowerSupplyUnit();
                }

                else 
                {
                    cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
                }
            }

            else 
            {
                cout << "Cannot hold more Power Supply Units, purchase declined." << endl;
            }
        }

        else if (option == 4)
        {
            if (p1.getComputerCase() < 3)
            {
                if (p1.getDogeCoins() >= b1.getCostComputerCase())
                {
                    p1.setComputerParts(p1.getComputerParts() + 1);
                    p1.setComputerCase(p1.getComputerCase() + 1);
                    p1.setDogeCoins(p1.getDogeCoins() - b1.getCostComputerCase());
                    total += b1.getCostComputerCase();
                }

                else 
                {
                    cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
                }
            }

            else 
            {
                cout << "Cannot hold more Computer Cases, purchase declined." << endl;
            }
        }

        else if (option == 5)
        {
            if (p1.getInternetCard() < 3)
            {
                if (p1.getDogeCoins() >= b1.getCostInternetCard())
                {
                    p1.setComputerParts(p1.getComputerParts() + 1);
                    p1.setInternetCard(p1.getInternetCard() + 1);
                    p1.setDogeCoins(p1.getDogeCoins() - b1.getCostInternetCard());
                    total += b1.getCostInternetCard();
                }

                else 
                {
                    cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
                }
            }

            else 
            {
                cout << "Cannot hold more Internet Cards, purchase declined." << endl;
            }
        }

        else if (option == 6)
        {
            if (p1.getKeyboardAndMouse() < 3)
            {
                if (p1.getDogeCoins() >= b1.getCostKeyboardAndMouse())
                {
                    p1.setComputerParts(p1.getComputerParts() + 1);
                    p1.setKeyboardAndMouse(p1.getKeyboardAndMouse() + 1);
                    p1.setDogeCoins(p1.getDogeCoins() - b1.getCostKeyboardAndMouse());
                    total += b1.getCostKeyboardAndMouse();
                }

                else 
                {
                    cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
                }
            }

            else 
            {
                cout << "Cannot hold more Keyboard(s) and Mouse(s), purchase declined." << endl;
            }
        }

        else if (option == 7)
        {
            if (p1.getPremadeComputer() == 0)
            {
                if (p1.getDogeCoins() >= b1.getCostPremadeComputer())
                {
                    p1.setPremadeComputer(p1.getPremadeComputer() + 1);
                    p1.setDogeCoins(p1.getDogeCoins() - b1.getCostPremadeComputer());
                    total += b1.getCostPremadeComputer();
                }

                else 
                {
                    cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
                }
            }

            else 
            {
                cout << "Already have a Premade Computer, purchase declined." << endl;
            }
        }

        else if (option == 8)
        {
            cout << "Dogecoins spent on Computer Parts: " << total << endl;
            cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        }

        else 
        {
            cout << "Invalid Input. Choose between Options 1 - 8." << endl;
        }

    }while (option != 8);

    return total;
}

int antivirusSoftware(Player &p1, BestBuy &b1)
{
    int option = 0;
    int total = 0;

    do
    {
        inventory(p1);
        cout << "One USB stick of antivirus software costs 10 Dogecoins and will give you a one-time use" << endl;
        cout << "to get rid of any viruses on your computer." << endl;
        cout << "Pick an option between 1 - 2:" << endl;
        cout << "1. A USB stick of Antivirus software costs " << b1.getCostAntivirusSoftware() << endl;
        cout << "2. None/Quit" << endl << endl;
        cout << "Dogecoins spent on Antivirus Software: " << total << endl;
        cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        cin >> option;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


        if (option == 1)
        {
            if (p1.getDogeCoins() >= b1.getCostAntivirusSoftware())
            {
                p1.setAntivirusSoftware(p1.getAntivirusSoftware() + 1);
                p1.setDogeCoins(p1.getDogeCoins() - b1.getCostAntivirusSoftware());
                total += b1.getCostAntivirusSoftware();
            }

            else 
            {
                cout << "You do not have enough Dogecoins for this item. Please choose something else." << endl;
            }
        }

        else if (option == 2)
        {
            cout << "Dogecoins spent on Antivirus Software: " << total << endl;
            cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        }

        else
        {
            cout << "Invalid Input. Choose between Options 1 - 2." << endl;
        }

    }while (option !=2);

    return total;

}

int VPN(Player &p1, BestBuy &b1)
{
    int option = 0;
    int total = 0;

    do
    {
        inventory(p1);
        cout << "A VPN costs " << b1.getCostVPN() << " Dogecoins each. VPNs reduce your chances of getting hacked by" << endl;
        cout << "preventing hackers from tracking down your main computer. The increase in security" << endl;
        cout << "maxes out at 2 VPNs." << endl;
        cout << "Pick an option between 1 - 2: " << endl;
        cout << "1. A VPN costs " << b1.getCostVPN() << " Dogecoins" << endl;
        cout << "2. None/Quit" << endl << endl;
        cout << "Dogecoins spent on VPN: " << total << endl;
        cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        cin >> option;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


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

int internet(Player &p1, BestBuy &b1)
{
    int option = 0;
    int total = 0;

    do
    {
        inventory(p1);
        cout << "Having a better internet provider increases the player’s chances of winning a hacker battle." << endl;
        cout << "You can upgrade your internet provider at a later time if you desire." << endl;
        cout << "Internet provider level 2 costs "<< b1.getCostInternet2() << " Dogecoins" << endl;
        cout << "Internet provider level 3 costs "<< b1.getCostInternet3() << " Dogecoins" << endl;
        cout << "Internet provider level 4 costs "<< b1.getCostInternet4() << " Dogecoins" << endl;
        cout << "Internet provider level 5 costs "<< b1.getCostInternet5() << " Dogecoins" << endl;
        cout << "Max internet provider level is 5." << endl;
        cout << "You are currently at Internet Provider level " << p1.getInternetProviderLevel() << "." << endl;
        cout << "Would you like to upgrade to Internet Provider level " << p1.getInternetProviderLevel() + 1 << "?" << " Pick between 1 - 2" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Dogecoins spent on VPN: " << total << endl;
        cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        cin >> option;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


        if (option == 1)
        {
            if (p1.getInternetProviderLevel() < 5)
            {
                if (p1.getInternetProviderLevel() == 1)
                {
                    if (p1.getDogeCoins() >= b1.getCostInternet2())
                    {
                        p1.setInternetProviderLevel(2);
                        p1.setDogeCoins(p1.getDogeCoins() - b1.getCostInternet2());
                        total += b1.getCostInternet2();
                    }

                    else 
                    {
                        cout << "You do not have enough Dogecoins for this purchase. Please choose something else." << endl;
                    }
                }

                else if (p1.getInternetProviderLevel() == 2)
                {
                    if (p1.getDogeCoins() >= b1.getCostInternet3())
                    {
                        p1.setInternetProviderLevel(3);
                        p1.setDogeCoins(p1.getDogeCoins() - b1.getCostInternet3());
                        total += b1.getCostInternet3();
                    }

                    else 
                    {
                        cout << "You do not have enough Dogecoins for this purchase. Please choose something else." << endl;
                    }
                }

                else if (p1.getInternetProviderLevel() == 3)
                {
                    if (p1.getDogeCoins() >= b1.getCostInternet4())
                    {
                        p1.setInternetProviderLevel(4);
                        p1.setDogeCoins(p1.getDogeCoins() - b1.getCostInternet4());
                        total += b1.getCostInternet4();
                    }

                    else 
                    {
                        cout << "You do not have enough Dogecoins for this purchase. Please choose something else." << endl;
                    }
                }

                else if (p1.getInternetProviderLevel() == 4)
                {
                    if (p1.getDogeCoins() >= b1.getCostInternet5())
                    {
                        p1.setInternetProviderLevel(5);
                        p1.setDogeCoins(p1.getDogeCoins() - b1.getCostInternet5());
                        total += b1.getCostInternet5();
                    }

                    else 
                    {
                        cout << "You do not have enough Dogecoins for this purchase. Please choose something else." << endl;
                    }
                }
            }

            else 
            {
                cout << "Already at max Internet Provider Level " << p1.getInternetProviderLevel() << " . Cannot upgrade further." << endl;
            }
        }

        else if (option == 2)
        {
            cout << "Dogecoins spent on Internet: " << total << endl;
            cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        }

        else
        {
            cout << "Invalid Input. Choose between Options 1 - 2." << endl;
        }

    }while (option !=2);

    return total;

}

void store(Player &p1, BestBuy &b1)
{
    int total = 0;
    int totalComp = 0;
    int totalAntivirus = 0;
    int totalVPN = 0;
    int totalInternet = 0;
    string option;

    if (p1.getServerRoom() == 2)
    {
        b1.setCostCPU(10 * 1.10);
        b1.setCostGPU(20 * 1.10);
        b1.setCostPowerSupplyUnit(5 * 1.10);
        b1.setCostComputerCase(15 * 1.10);
        b1.setCostInternetCard(5 * 1.10);
        b1.setCostKeyboardAndMouse(10 * 1.10);
        b1.setCostPremadeComputer(100 * 1.10);
        b1.setCostAntivirusSoftware(10 * 1.10);
        b1.setCostVPN(20 * 1.10);
        b1.setCostInternet2(10 * 1.10);
        b1.setCostInternet3(25 * 1.10);
        b1.setCostInternet4(40 * 1.10);
        b1.setCostInternet5(50 * 1.10);


    }

    else if (p1.getServerRoom() == 3)
    {
        b1.setCostCPU(10 * 1.20);
        b1.setCostGPU(20 * 1.20);
        b1.setCostPowerSupplyUnit(5 * 1.20);
        b1.setCostComputerCase(15 * 1.20);
        b1.setCostInternetCard(5 * 1.20);
        b1.setCostKeyboardAndMouse(10 * 1.20);
        b1.setCostPremadeComputer(100 * 1.20);
        b1.setCostAntivirusSoftware(10 * 1.20);
        b1.setCostVPN(20 * 1.20);
        b1.setCostInternet2(10 * 1.20);
        b1.setCostInternet3(25 * 1.20);
        b1.setCostInternet4(40 * 1.20);
        b1.setCostInternet5(50 * 1.20);

    }

    else if (p1.getServerRoom() == 4)
    {
        b1.setCostCPU(10 * 1.25);
        b1.setCostGPU(20 * 1.25);
        b1.setCostPowerSupplyUnit(5 * 1.25);
        b1.setCostComputerCase(15 * 1.25);
        b1.setCostInternetCard(5 * 1.25);
        b1.setCostKeyboardAndMouse(10 * 1.25);
        b1.setCostPremadeComputer(100 * 1.25);
        b1.setCostAntivirusSoftware(10 * 1.25);
        b1.setCostVPN(20 * 1.25);
        b1.setCostInternet2(10 * 1.25);
        b1.setCostInternet3(25 * 1.25);
        b1.setCostInternet4(40 * 1.25);
        b1.setCostInternet5(50 * 1.25);

    }

    else if (p1.getServerRoom() == 5)
    {
        b1.setCostCPU(10 * 1.30);
        b1.setCostGPU(20 * 1.30);
        b1.setCostPowerSupplyUnit(5 * 1.30);
        b1.setCostComputerCase(15 * 1.30);
        b1.setCostInternetCard(5 * 1.30);
        b1.setCostKeyboardAndMouse(10 * 1.30);
        b1.setCostPremadeComputer(100 * 1.30);
        b1.setCostAntivirusSoftware(10 * 1.30);
        b1.setCostVPN(20 * 1.30);
        b1.setCostInternet2(10 * 1.30);
        b1.setCostInternet3(25 * 1.30);
        b1.setCostInternet4(40 * 1.30);
        b1.setCostInternet5(50 * 1.30);

    }


    do
    {
        cout << "Hello, " << p1.getPlayerName() << "! " << "You are currently in Best Buy." << endl << endl;
        cout << "Would you like to purchase items? Please select a number between 1 - 5?" << endl;
        cout << "1. Computer Parts" << endl;
        cout << "2. Antivirus software" << endl;
        cout << "3. Virtual Private Network (VPN)" << endl;
        cout << "4. Internet Provider" << endl;
        cout << "5. None, I would like to leave" << endl;
        cin >> option;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;

        if (option == "1")
        {
            totalComp = computerParts(p1, b1);
            total += totalComp;
            cout << "Total dogecoins spent so far: " << total << endl;
        }

        else if (option == "2")
        {
            totalAntivirus = antivirusSoftware(p1, b1);
            total += totalAntivirus;
            cout << "Total dogecoins spent so far: " << total << endl;
        }

        else if (option == "3")
        {
            totalVPN = VPN(p1, b1);
            total += totalVPN;
            cout << "Total dogecoins spent so far: " << total << endl;
        }

        else if (option == "4")
        {
            totalInternet = internet(p1, b1);
            total += totalInternet;
            cout << "Total dogecoins spent so far: " << total << endl;
        }

        else if (option == "5")
        {
            cout << "Thank you for shopping at Best Buy!" << endl;
        }

        else
        {
            cout << "Invalid option. Choose between 1-5" << endl;
        }


    }while (option != "5");
    total = totalComp + totalAntivirus + totalVPN + totalInternet;
    cout << "Dogecoins spent this visit at Best Buy: " << total << endl;
}


void printFinalStats(Player p1)
{
    ofstream file;

    file.open("results.txt");
    file << "Player name: " << p1.getPlayerName() << endl;
    file << "The computer’s current maintenance level: " << p1.getMaintenance() << endl;
    file << "How many viruses the computer has: " << p1.getViruses() << endl;
    file << "Computer parts available: " << p1.getComputerParts() << endl;;
    file << "Antivirus USB sticks available: " << p1.getAntivirusSoftware() << endl;
    file << "VPNs available: " << p1.getNumOfVPN() << endl;
    file << "CPUs available: " << p1.getCPU() << endl;
    file << "GPUs available: " << p1.getGPU() << endl;
    file << "Power Supply Units available: " << p1.getPowerSupplyUnit() << endl;
    file << "Computer Cases available: " << p1.getComputerCase() << endl;
    file << "Internet cards available: " << p1.getInternetCard() << endl;
    file << "Keyboard(s) and Mouse(s) available: " << p1.getKeyboardAndMouse() << endl;
    file << "Premade computer available: " << p1.getPremadeComputer() << endl;
    file << "Internet provider level: " << p1.getInternetProviderLevel() << endl;
    file << "Dogecoins available: " << p1.getDogeCoins() << endl;
    file << "Frustration level: " << p1.getFrustrationLevel() << endl;
    file << "Carmen’s progress: " << p1.getCarmenProgress() << endl;
    file << "Hackers defeated: " << p1.getHackersDefeated() << endl;
    file << "Got to server room " << p1.getServerRoom() << endl;

    file.close();
}


void lostMaintenance(Player p1)
{
    cout << "You have lost the game due to your computer maintenance level reaching 0." << endl;
    cout << "Hackers defeated: " << p1.getHackersDefeated() << endl;
    cout << "Dogecoin: " << p1.getDogeCoins() << endl;
    cout << "Your finals stats have been saved in the file 'results.txt'" << endl;
    printFinalStats(p1);

    exit(0);
}

void lostCarmen(Player p1)
{
    cout << "You have lost the game due to Carmen's progress level reaching 100." << endl;
    cout << "Hackers defeated: " << p1.getHackersDefeated() << endl;
    cout << "Dogecoin: " << p1.getDogeCoins() << endl;
    cout << "Your finals stats have been saved in the file 'results.txt'" << endl;
    printFinalStats(p1);

    exit(0);
}

void lostFrustration(Player p1)
{
    cout << "OH NO! You have rage quit! Looks like you couldn’t handle Carmen’s hackers." << endl;
    cout << "You have lost the game due your frustration level reaching 100." << endl;
    cout << "Hackers defeated: " << p1.getHackersDefeated() << endl;
    cout << "Dogecoin: " << p1.getDogeCoins() << endl;
    cout << "Your finals stats have been saved in the file 'results.txt'" << endl;
    printFinalStats(p1);

    exit(0);
}

void quit(Player p1)
{
    cout << "You gave up! Better luck next time!" << endl;
    cout << "Hackers defeated: " << p1.getHackersDefeated() << endl;
    cout << "Dogecoin: " << p1.getDogeCoins() << endl;
    cout << "Your finals stats have been saved in the file 'results.txt'" << endl;
    printFinalStats(p1);

    exit(0);
}

void checkMaintenance(Player &p1)
{
    if (p1.getMaintenance() < 0 && p1.getPremadeComputer() == 1)
    {
        cout << p1.getPlayerName() << ", your current computer has dropped to maintenance level 0! Luckily you have a premade computer to continue onwards!" << endl;
        cout << "Your broken computer was replaced with the spare computer. Maintenance level set to 100!" << endl;
        p1.setMaintenance(100);
        p1.setPremadeComputer(0);
    }

    if (p1.getMaintenance() < 0 && p1.getPremadeComputer() == 0)
    {
        lostMaintenance(p1);
    }
}

void checkProgressLevelCarmen(Player p1)
{
    if (p1.getCarmenProgress() >= 100)
    {
        lostCarmen(p1);
    }
}

void checkFrustrationLevel(Player p1)
{
    if (p1.getFrustrationLevel() >= 100)
    {
        lostFrustration(p1);
    }
}

void virus(Player &p1)
{
    srand(time(0));

    int chance = (rand() % 10) + 1;
    if (chance == 1)
    {
        p1.setViruses(p1.getViruses() + 1);
    }
}

void attackHacker(Player &p1, Hacker &h1, Map &map, bool &defeatedHacker)
{
    srand(time(0));

    int i = p1.getInternetProviderLevel();
    int v = p1.getNumOfVPN();
    int c = h1.getServerRoomNumber();
    int r1 = (rand() % 6) + 1;
    int r2 = (rand() % 6) + 1;
    int result = (r1 * i) - ((r2 * c) * (1/v));

    if (result > 0)
    {
        cout << "Congradulations! You beat the hacker!" << endl;
        cout << "You gained 50 dogecoins" << endl;
        p1.setDogeCoins(p1.getDogeCoins() + 50);
        p1.setHackersDefeated(p1.getHackersDefeated() + 1);
        map.setHackerCount(map.getHackerCount() - 1);
        defeatedHacker = true;
    }

    else if (result <= 0)
    {
        cout << "Oh no! You lost to the hacker!" << endl;
        cout << "Carmen progress level progress went up 25!" << endl;
        p1.setCarmenProgress(p1.getCarmenProgress() + 25);
        checkProgressLevelCarmen(p1);
        p1.setMaintenance(p1.getMaintenance() - 20);
        checkMaintenance(p1);

    }






    
}

void loseParts(Player &p1)
{
    p1.setCPU(0);
    p1.setGPU(0);
    p1.setPowerSupplyUnit(0);
    p1.setComputerCase(0);
    p1.setInternetCard(0);
    p1.setKeyboardAndMouse(0);
    p1.setComputerParts(0);
}

void loseRandomPart(Player &p1)
{
    srand(time(0));
    int random = (rand() % 6) + 1;
    if (random == 1)
    {
        cout << "You lost a CPU. " << endl;
        if (p1.getCPU() > 0)
        {
            p1.setCPU(p1.getCPU() - 1);
            p1.setComputerParts(p1.getComputerParts() - 1);
        }

        if (p1.getCPU() < 0)
        {
            p1.setCPU(0);
        }
    }

    else if (random == 2)
    {
        cout << "You lost a GPU. " << endl;

        if (p1.getGPU() > 0)
        {
            p1.setGPU(p1.getGPU() - 1);
            p1.setComputerParts(p1.getComputerParts() - 1);
        }

        if (p1.getGPU() < 0)
        {
            p1.setGPU(0);
        }
    }

    else if (random == 3)
    {
        cout << "You lost a Power Supply Unit. " << endl;

        if (p1.getPowerSupplyUnit() > 0)
        {
            p1.setPowerSupplyUnit(p1.getPowerSupplyUnit() - 1);
            p1.setComputerParts(p1.getComputerParts() - 1);
        }

        if (p1.getPowerSupplyUnit() < 0)
        {
            p1.setPowerSupplyUnit(0);
        }
    }

    else if (random == 4)
    {
        cout << "You lost a Computer Case. " << endl;
        if (p1.getComputerCase() > 0)
        {
            p1.setComputerCase(p1.getComputerCase() - 1);
            p1.setComputerParts(p1.getComputerParts() - 1);
        }

        if (p1.getComputerCase() < 0)
        {
            p1.setComputerCase(0);
        }
    }

    else if (random == 5)
    {
        cout << "You lost a Internet Card. " << endl;
        if (p1.getInternetCard() > 0)
        {
            p1.setInternetCard(p1.getInternetCard() - 1);
            p1.setComputerParts(p1.getComputerParts() - 1);
        }

        if (p1.getInternetCard() < 0)
        {
            p1.setInternetCard(0);
        }
    }

    else if (random == 6)
    {
        cout << "You lost a Keyboard and Mouse. " << endl;
        if (p1.getKeyboardAndMouse() > 0)
        {
            p1.setKeyboardAndMouse(p1.getKeyboardAndMouse() - 1);
            p1.setComputerParts(p1.getComputerParts() - 1);
        }

        if (p1.getKeyboardAndMouse() < 0)
        {
            p1.setKeyboardAndMouse(0);
        }
    }

}

void gainRandomPart(Player &p1)
{
    srand(time(0));
    int gain = (rand() % 6) + 1;

    if (gain == 1)
    {
        cout << "You gained 1 CPU!" << endl;
        p1.setCPU(p1.getCPU() + 1);
        p1.setComputerParts(p1.getComputerParts() + 1);
    }

    else if (gain == 2)
    {
        cout << "You gained 1 GPU!" << endl;
        p1.setGPU(p1.getGPU() + 1);
        p1.setComputerParts(p1.getComputerParts() + 1);
    }

    else if (gain == 3)
    {
        cout << "You gained 1 Power Supply Unit!" << endl;
        p1.setPowerSupplyUnit(p1.getPowerSupplyUnit() + 1);
        p1.setComputerParts(p1.getComputerParts() + 1);
    }

    else if (gain == 4)
    {
        cout << "You gained 1 Computer Case!" << endl;
        p1.setComputerCase(p1.getComputerCase() + 1);
        p1.setComputerParts(p1.getComputerParts() + 1);
    }

    else if (gain == 5)
    {
        cout << "You gained 1 Internet Card!" << endl;
        p1.setInternetCard(p1.getInternetCard() + 1);
        p1.setComputerParts(p1.getComputerParts() + 1);
    }

    else if (gain == 6)
    {
        cout << "You gained 1 Keyboard and Mouse!" << endl;
        p1.setKeyboardAndMouse(p1.getKeyboardAndMouse() + 1);
        p1.setComputerParts(p1.getComputerParts() + 1);
    }
}

void chanceMaintenance(Player &p1)
{
    srand(time(0));
    int chanceMaintenanceDrop = (rand() % 10) + 1;
    if (chanceMaintenanceDrop <= 3 && p1.getServerRoom() < 5)
    {
        cout << "Oh no! Your computer maintenance level just dropped by 10 due to chance after this hacker battle." << endl;
        p1.setMaintenance(p1.getMaintenance() - 10);
        checkMaintenance(p1);
    }
}

void misfortune(Player &p1)
{
    srand(time(0));
    int misfortune = (rand() % 10) + 1;
    if (misfortune <= 3)
    {
        int random = (rand() % 3) + 1;
        if (random == 1)
        {
            int partsOrAntivirus = (rand() % 2) + 1;
            if (partsOrAntivirus == 1)
            {
                cout << "Misfortune occured!" << endl;
                cout << "OH NO! Your team was robbed by Carmen’s dastardly hackers!" << endl;
                cout << "You have lost all your computer parts!" << endl;
                loseParts(p1);
            }

            else if (partsOrAntivirus == 2)
            {
                cout << "Misfortune occured!" << endl;
                cout << "OH NO! Your team was robbed by Carmen’s dastardly hackers!" << endl;
                cout << "You have lost all your antivirus software!" << endl;
                p1.setAntivirusSoftware(0);
            }
        }

        else if (random == 2)
        {
            cout << "Misfortune occured!" << endl;
            cout << "OH NO! Your computer was damaged!" << endl;
            cout << "Your maintenance level just dropped by 10!" << endl;
            p1.setMaintenance(p1.getMaintenance() - 10);
            checkMaintenance(p1);
        }

        else if (random == 3)
        {
            cout << "Misfortune occured!" << endl;
            cout << "OH NO! Why won’t my code work!!!!" << endl;
            cout << "Your frustration level was increased by 10." << endl;
            p1.setFrustrationLevel(p1.getFrustrationLevel() + 10);
            checkFrustrationLevel(p1);
        }
    }
}

bool puzzle1(Player &p1)
{
    string answer;
    printText("puzzle1.txt");
    cin >> answer;
    cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


    if (answer == "21")
    {
        cout << "You solved the puzzle!" << endl;
        cout << "Your frustration level went down!" << endl;
        gainRandomPart(p1);
        p1.setFrustrationLevel(p1.getFrustrationLevel() - 5);
        return true;
    }

    else 
    {
        cout << "That is incorrect. Better luck next time!" << endl;
        return false;
    }
}

bool puzzle2(Player &p1)
{
    string answer;
    printText("puzzle2.txt");
    cin >> answer;
    cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


    if (answer == "13")
    {
        cout << "You solved the puzzle!" << endl;
        cout << "Your frustration level went down!" << endl;
        gainRandomPart(p1);
        p1.setFrustrationLevel(p1.getFrustrationLevel() - 5);
        return true;
    }

    else 
    {
        cout << "That is incorrect. Better luck next time!" << endl;
        return false;
    }
}

bool puzzle3(Player &p1)
{
    string answer;
    printText("puzzle3.txt");
    cin >> answer;
    cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


    if (answer == "b" || answer == "B")
    {
        cout << "You solved the puzzle!" << endl;
        cout << "Your frustration level went down!" << endl;
        gainRandomPart(p1);
        p1.setFrustrationLevel(p1.getFrustrationLevel() - 5);
        return true;
    }

    else 
    {
        cout << "That is incorrect. Better luck next time!" << endl;
        return false;
    }
}

bool puzzle4(Player &p1)
{
    string answer;
    printText("puzzle4.txt");
    cin >> answer;
    cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


    if (answer == "a" || answer == "A")
    {
        cout << "You solved the puzzle!" << endl;
        cout << "Your frustration level went down!" << endl;
        gainRandomPart(p1);
        p1.setFrustrationLevel(p1.getFrustrationLevel() - 5);
        return true;
    }

    else 
    {
        cout << "That is incorrect. Better luck next time!" << endl;
        return false;
    }
}

bool puzzle5(Player &p1)
{
    string answer;
    printText("puzzle5.txt");
    cin >> answer;
    cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


    if (answer == "d" || answer == "D")
    {
        cout << "You solved the puzzle!" << endl;
        cout << "Your frustration level went down!" << endl;
        gainRandomPart(p1);
        p1.setFrustrationLevel(p1.getFrustrationLevel() - 5);
        return true;
    }

    else 
    {
        cout << "That is incorrect. Better luck next time!" << endl;
        return false;
    }
}

bool NPCpuzzle(Player &p1)
{
    srand(time(0));
    int random = (rand() % 5) + 1;

    if (random == 1)
    {
        puzzle1(p1);
        if (puzzle1(p1) == true)
        {
            return true;
        }

        else 
        {
            return false;
        }
    }

    else if (random == 2)
    {
        puzzle2(p1);
        if (puzzle2(p1) == true)
        {
            return true;
        }

        else 
        {
            return false;
        }
    }

    else if (random == 3)
    {
        puzzle3(p1);
        if (puzzle3(p1) == true)
        {
            return true;
        }

        else 
        {
            return false;
        }
    }

    else if (random == 4)
    {
        puzzle4(p1);
        if (puzzle4(p1) == true)
        {
            return true;
        }

        else 
        {
            return false;
        }
    }

    else if (random == 5)
    {
        puzzle5(p1);
        if (puzzle5(p1) == true)
        {
            return true;
        }

        else 
        {
            return false;
        }
    }

    else 
    {
        return true;
    }
}

void stackOverflow(Player &p1)
{
    srand(time(0));
    NPCpuzzle(p1);

    if (NPCpuzzle(p1) == true)
    {
        if (p1.getFrustrationLevel() > 5)
        {
            cout << "Your frustration level went down!" << endl;
            p1.setFrustrationLevel(p1.getFrustrationLevel() - 15);
        }
    }
}

void encounteredNPC1(Player &p1, NPC &n1)
{
    srand(time(0));

    int chance = (rand() % 3) + 1;



    if (chance == 1)
    {
        int option = 0;
        cout << "Want to complete their puzzles? Select 1 - 3" << endl;
        cout << "1. Yes (If you complete a puzzle, you will gain a free randomly chose computer part, there is no penalty to getting them wrong)" << endl;
        cout << "2. No (Nothing happens)" << endl;
        cout << "3. Take your chances to see if this NPC is a friend. If they are a friend, they give you a free random computer part. " << endl;
        cout << "If they are neutral, nothing happens. If they are an enemy, they will steal a random part." << endl;
        cin >> option;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


        if (option == 1)
        {
            NPCpuzzle(p1);

            if (NPCpuzzle(p1) == true)
            {
                gainRandomPart(p1);
          
                return;
            }

            else 
            {

                cout << "Sorry! You did not solve the puzzle." << endl;
                return;
            }
        }

        else if (option == 2)
        {

            return;
        }

        else if (option == 3)
        {
            int test = (rand() % 3) + 1;
            if (test == 1)
            {
                // n1.setStatusFriend(true);
                gainRandomPart(p1);

                return;
            }

            else if (test == 2)
            {
                // n1.setStatusNeutral(true);
                cout << "The NPC was neutral. Nothing happens." << endl;

                return;
            }

            else if (test == 3)
            {
                // n1.setStatusEnemy(true);
                loseRandomPart(p1);

                return;
            }
        }

    }

    else if (chance == 2)
    {
        // n1.setStatusNeutral(true);
        cout << "NPC is neutral, nothing happens." << endl;
      
        return;
    }

    else if (chance == 3)
    {
        cout << "NPC is an enemy! They steal a random computer part from your inventory." << endl;

        loseRandomPart(p1);
    }


}

void antivirus(Player &p1)
{
    if (p1.getAntivirusSoftware() > 0 && p1.getViruses() > 0 )
    {
        cout << "You used 1 antivirus software USB to remove all viruses from your computer!" << endl;
        p1.setAntivirusSoftware(p1.getAntivirusSoftware() - 1);
        p1.setViruses(0);
    }

    else 
    {
        cout << "You either have no antivirus software or no viruses to remove. Select another action." << endl;
    }
    
}

void repairComputer(Player &p1)
{
    string answer;
    int quantity = 0;
    if (p1.getViruses() > 0)
    {
        cout << "You cannot repair your computer because you have a virus(s) on your computer! Use antivirus software first!" << endl;
        return;
    }

    if (p1.getMaintenance() == 100)
    {
        cout << "Your computer maintenance level is already at 100. Cannot repair computer." << endl;
        return;
    }

    cout << "INVENTORY: " << endl;
    cout << "CPU: " << p1.getCPU() << endl;
    cout << "GPU: " << p1.getGPU() << endl;
    cout << "Power Supply Unit: " << p1.getPowerSupplyUnit() << endl;
    cout << "Computer Case: " << p1.getComputerCase() << endl;
    cout << "Internet Card: " << p1.getInternetCard() << endl;
    cout << "Keyboard and mouse: " << p1.getKeyboardAndMouse() << endl;
    cout << "Enter the name of the computer part you would like to use: " << endl;
    cin.ignore();
    getline(cin, answer);
    cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


    if (isSameString("CPU", answer) == true)
    {
        cout << "How many parts would you like to use? Choose between 1 - 5. Each part increases maintenance level by 20." << endl;
        cin >> quantity;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;

        if (quantity >=1 && quantity <=5 )
        {
            if (p1.getCPU() >= quantity)
            {
                cout << "Your maintenance level increased by " << (20 * quantity) << "! (Maintenance cannot be greater than 100)" << endl;
                p1.setCPU(p1.getCPU() - quantity);
                p1.setMaintenance(p1.getMaintenance() + (20 * quantity));
                if (p1.getMaintenance() > 100)
                {
                    p1.setMaintenance(100);
                }
            }

            else 
            {
                cout << "Not enough parts." << endl;
                return;
            }
        }

        else 
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    else if (isSameString("GPU", answer) == true)
    {
        cout << "How many parts would you like to use? Choose between 1 - 5. Each part increases maintenance level by 20." << endl;
        cin >> quantity;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;

        if (quantity >=1 && quantity <=5 )
        {
            if (p1.getGPU() >= quantity)
            {
                cout << "Your maintenance level increased by " << (20 * quantity) << "! (Maintenance cannot be greater than 100)" << endl;
                p1.setGPU(p1.getGPU() - quantity);
                p1.setMaintenance(p1.getMaintenance() + (20 * quantity));
                if (p1.getMaintenance() > 100)
                {
                    p1.setMaintenance(100);
                }
            }

            else 
            {
                cout << "Not enough parts." << endl;
                return;
            }
        }

        else 
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    else if (isSameString("Power Supply Unit", answer) == true)
    {
        cout << "How many parts would you like to use? Choose between 1 - 5. Each part increases maintenance level by 20." << endl;
        cin >> quantity;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;

        if (quantity >=1 && quantity <=5 )
        {
            if (p1.getPowerSupplyUnit() >= quantity)
            {
                cout << "Your maintenance level increased by " << (20 * quantity) << "! (Maintenance cannot be greater than 100)" << endl;
                p1.setPowerSupplyUnit(p1.getPowerSupplyUnit() - quantity);
                p1.setMaintenance(p1.getMaintenance() + (20 * quantity));
                if (p1.getMaintenance() > 100)
                {
                    p1.setMaintenance(100);
                }
            }

            else 
            {
                cout << "Not enough parts." << endl;
                return;
            }
        }

        else 
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    else if (isSameString("Computer Case", answer) == true)
    {
        cout << "How many parts would you like to use? Choose between 1 - 5. Each part increases maintenance level by 20." << endl;
        cin >> quantity;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;

        if (quantity >=1 && quantity <=5 )
        {
            if (p1.getComputerCase() >= quantity)
            {
                cout << "Your maintenance level increased by " << (20 * quantity) << "! (Maintenance cannot be greater than 100)" << endl;
                p1.setComputerCase(p1.getComputerCase() - quantity);
                p1.setMaintenance(p1.getMaintenance() + (20 * quantity));
                if (p1.getMaintenance() > 100)
                {
                    p1.setMaintenance(100);
                }
            }

            else 
            {
                cout << "Not enough parts." << endl;
                return;
            }
        }

        else 
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    else if (isSameString("Internet Card", answer) == true)
    {
        cout << "How many parts would you like to use? Choose between 1 - 5. Each part increases maintenance level by 20." << endl;
        cin >> quantity;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;

        if (quantity >=1 && quantity <=5 )
        {
            if (p1.getInternetCard() >= quantity)
            {
                cout << "Your maintenance level increased by " << (20 * quantity) << "! (Maintenance cannot be greater than 100)" << endl;
                p1.setInternetCard(p1.getInternetCard() - quantity);
                p1.setMaintenance(p1.getMaintenance() + (20 * quantity));
                if (p1.getMaintenance() > 100)
                {
                    p1.setMaintenance(100);
                }
            }

            else 
            {
                cout << "Not enough parts." << endl;
                return;
            }
        }

        else 
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    else if (isSameString("Keyboard and Mouse", answer) == true)
    {
        cout << "How many parts would you like to use? Choose between 1 - 5. Each part increases maintenance level by 20." << endl;
        cin >> quantity;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;

        if (quantity >=1 && quantity <=5 )
        {
            if (p1.getKeyboardAndMouse() >= quantity)
            {
                cout << "Your maintenance level increased by " << (20 * quantity) << "! (Maintenance cannot be greater than 100)" << endl;
                p1.setKeyboardAndMouse(p1.getKeyboardAndMouse() - quantity);
                p1.setMaintenance(p1.getMaintenance() + (20 * quantity));
                if (p1.getMaintenance() > 100)
                {
                    p1.setMaintenance(100);
                }
            }

            else 
            {
                cout << "Not enough parts." << endl;
                return;
            }
        }

        else 
        {
            cout << "Invalid input" << endl;
            return;
        }
    }

    else
    {
        cout << "That's not a valid option" << endl;
        return;
    }

}

vector<Hacker> enemyDatabase()
{

    vector<Hacker> vec;

    ifstream file;
    file.open("hackers.txt");

    string line; //used for getline

    while(getline(file, line)) //The number of songs stored in the array cannot exceed the songArrSize
    {
        string arr1[2];
        
        
        if (line == "") 
        {
            continue; //empty lines are not added to array
        }
        
        if (line != "")
        {
            split (line, ',', arr1, 2);

            Hacker addToVector; 
            addToVector.setName(arr1[0]);
            addToVector.setServerRoomNumber(stoi(arr1[1]));

            vec.push_back(addToVector);
        }



    }
    return vec;
}





void serverRoom(Player &p1, BestBuy &b1, bool &bestBuyRoom1, int serverRoomNum, vector<Hacker> &vec)
{
    srand(time(0));
    int r1 = rand() % (4 - 0 + 1) + 0;
    int c1 = rand() % (8 - 0 + 1) + 0;
    int r2 = rand() % (4 - 0 + 1) + 0;
    int c2 = rand() % (8 - 0 + 1) + 0;
    int r3 = rand() % (4 - 0 + 1) + 0;
    int c3 = rand() % (8 - 0 + 1) + 0;

    Hacker h1 = Hacker();

    //rand() % (b - a + 1) + a;
    if (serverRoomNum == 1)
    {
        int random = (rand() % 4);
        h1 = Hacker(vec[random].getName(), vec[random].getServerRoomNumber());
    }

    else if (serverRoomNum == 2)
    {
        int random = rand() % (7 - 4 + 1) + 4;
        h1 = Hacker(vec[random].getName(), vec[random].getServerRoomNumber());
    }

    else if (serverRoomNum == 3)
    {
        int random = rand() % (11 - 8 + 1) + 8;
        h1 = Hacker(vec[random].getName(), vec[random].getServerRoomNumber());
    }

    else if (serverRoomNum == 4)
    {
        int random = rand() % (15 - 12 + 1) + 12;
        h1 = Hacker(vec[random].getName(), vec[random].getServerRoomNumber());
    }

    else if (serverRoomNum == 5)
    {
       int random = rand() % (19 - 16 + 1) + 16;
       h1 = Hacker(vec[random].getName(), vec[random].getServerRoomNumber());
    }

 
    bool defeatedHacker = false;
    bool foundNPC1 = false;
    NPC n1 = NPC();
    p1.setServerRoom(serverRoomNum);
    statusUpdate(p1);
    srand(time(0));
    Map map;  // create object called map of type Map
    if (bestBuyRoom1 == true)
    {
        map.spawnBestBuy(0, 0);
        bestBuyRoom1 = false;
    }

    if (bestBuyRoom1 == false)
    {
        map.spawnBestBuy(r1, c1);
    }
    map.spawnNPC(r2, c2);
    map.spawnHacker(r3, c3);

    char move;  // for storing user input

    bool canMoveNextRoom = false;

    // quit after 1000 moves, I don't want the player to be penalized by their moves
    for(int i = 0; i < 1000; i++) 
    {
        map.displayMap();  // pretty print map_data in terminal
        cout << "Hacker count: " << map.getHackerCount() << endl;

        cout << "Valid moves are: " << endl; 
        map.displayMoves();  // give user a menu of valid moves to pick from
        cout << "b (Display status update)" << endl;
        cout << "q (Quit the game)" << endl;
        cout << "m (browse StackOverflow to try to reduce frustration level)" << endl;
        cout << "v (use antivirus software to remove viruses)" << endl;
        cout << "o (repair computer if maintenance level is less than 100)" << endl;
        if (canMoveNextRoom == true)
        {
            cout << "You have the option to move to the next server room! Press 'p' to continue onto the next level!" << endl;
        }
        
        cout << "Input a move: " << endl;
        cin >> move;
        cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;
        if (move == 'b')
        {
            statusUpdate(p1);
        }

        if (move == 'q')
        {
            quit(p1);
        }

        if (move == 'p')
        {
            return;
        }

        if (move == 'm')
        {
            stackOverflow(p1);
        }

        if (move == 'v')
        {
            antivirus(p1);
        }

        if (move == 'o')
        {
            repairComputer(p1);
        }

        if (move != 'b' && move != 'q' && move != 'p' && move != 'm' && move != 'v' && move != 'o')
        {
            misfortune(p1);
        }

        cout << endl;
        map.executeMove(move);  // move the player on map based on user input
        p1.setFrustrationLevel(p1.getFrustrationLevel() + 1);
        if (p1.getViruses() >= 1)
        {
            p1.setMaintenance(p1.getMaintenance() - (p1.getViruses() * 10));
            checkMaintenance(p1);
        }
        p1.setDogeCoins(p1.getDogeCoins() + 5);
        if (p1.getGPU() == 1)
        {
            p1.setDogeCoins(p1.getDogeCoins() + 5);
        }

        if (p1.getGPU() == 2)
        {
            p1.setDogeCoins(p1.getDogeCoins() + 10);
        }


        if (map.isBestBuyLocation()) {
            // cout << "You're in a Best Buy!" << endl;
            store(p1, b1);
        }

        if (map.isHackerLocation() && defeatedHacker == false) {
            int option = 0;
            cout << "You just ran into " << h1.getName() << " Think you can beat this hacker’s skills?" << endl;
            cout << "Select an option between 1 - 2" << endl;
            cout << "1. Attack" << endl;
            cout << "2. Surrender (Will lose all computer parts!) " << endl;
            cin >> option;
            cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;


            if (option == 1)
            {
                if (p1.getMaintenance() > 0)
                {
                    attackHacker(p1, h1, map, defeatedHacker);
                }

                else 
                {
                    checkMaintenance(p1);
                }
            }

            else if (option == 2)
            {
                cout << "Since you surrender, you lost all your computer parts!" << endl;
                loseParts(p1);
            }

            loseRandomPart(p1);
            chanceMaintenance(p1);


        }

        if (map.isNPCLocation() && foundNPC1 == false ) 
        {   foundNPC1 = true;
            cout << "You've encountered an NPC! You cannot encounter an NPC again in the same server room" << endl;
            encounteredNPC1(p1, n1);

        }

        if (map.getHackerCount() == 0)
        {
            canMoveNextRoom = true;
        }

    
        
        checkMaintenance(p1);
        checkProgressLevelCarmen(p1);
        checkFrustrationLevel(p1);
    }
}

int main()
{
    Player p1 = Player();
    BestBuy b1 = BestBuy();
    Hacker h1 = Hacker();
    vector<Hacker> vec = enemyDatabase();
    NPC n1 = NPC(); 
    bool bestBuyRoom1 = true;
    int serverRoomNum = 1;

    string game = "'Where in the Code is Carmen Sandiego'";

    cout << "Welcome to " << game <<  "!" << endl << endl;

    string overview = "overview.txt";
    printText(overview);

    string ans1;
    cout << "Would you like to play? Press N for no, press anything else to play" << endl; 
    cin >> ans1;
    cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;

    if (isSameString(ans1, "n"))
    {
        cout << "Hope you could play another time!" << endl;
        return 0;
    }

    string name;

    cout << "Please enter your name: " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "-------------------------------CURRENT ACTION-------------------------------" << endl;
    p1.setPlayerName(name);


    store(p1, b1);

    for (int i = 0; i < 5; i++)
    {
        serverRoom(p1, b1, bestBuyRoom1, serverRoomNum, vec);
        serverRoomNum++;
    }

    cout << "Congradulations " << p1.getPlayerName() << "! You defeated all the hackers and won the game!" << endl;
    cout << "Hackers defeated: " << p1.getHackersDefeated() << endl;
    cout << "Dogecoin: " << p1.getDogeCoins() << endl;
    cout << "Your finals stats have been saved in the file 'results.txt'" << endl;
    printFinalStats(p1);

}