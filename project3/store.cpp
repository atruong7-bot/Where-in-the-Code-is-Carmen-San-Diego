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


int computerParts(Player &p1, BestBuy &b1)
{
    int option = 0;
    int total = 0;

    do
    {
        statusUpdate(p1);
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
        statusUpdate(p1);
        cout << "One USB stick of antivirus software costs 10 Dogecoins and will give you a one-time use" << endl;
        cout << "to get rid of any viruses on your computer." << endl;
        cout << "Pick an option between 1 - 2:" << endl;
        cout << "1. A USB stick of Antivirus software costs " << b1.getCostAntivirusSoftware() << endl;
        cout << "2. None/Quit" << endl << endl;
        cout << "Dogecoins spent on Antivirus Software: " << total << endl;
        cout << "Dogecoins remaining: " << p1.getDogeCoins() << endl;
        cin >> option;

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
        statusUpdate(p1);
        cout << "A VPN costs " << b1.getCostVPN() << " Dogecoins each. VPNs reduce your chances of getting hacked by" << endl;
        cout << "preventing hackers from tracking down your main computer. The increase in security" << endl;
        cout << "maxes out at 2 VPNs." << endl;
        cout << "Pick an option between 1 - 2: " << endl;
        cout << "1. A VPN costs " << b1.getCostVPN() << " Dogecoins" << endl;
        cout << "2. None/Quit" << endl << endl;
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

int internet(Player &p1, BestBuy &b1)
{
    int option = 0;
    int total = 0;

    do
    {
        statusUpdate(p1);
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
    int option = 0;

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

        if (option == 1)
        {
            totalComp = computerParts(p1, b1);
            total += totalComp;
            cout << "Total dogecoins spent so far: " << total << endl;
        }

        else if (option == 2)
        {
            totalAntivirus = antivirusSoftware(p1, b1);
            total += totalAntivirus;
            cout << "Total dogecoins spent so far: " << total << endl;
        }

        else if (option == 3)
        {
            totalVPN = VPN(p1, b1);
            total += totalVPN;
            cout << "Total dogecoins spent so far: " << total << endl;
        }

        else if (option == 4)
        {
            totalInternet = internet(p1, b1);
            total += totalInternet;
            cout << "Total dogecoins spent so far: " << total << endl;
        }

        else if (option == 5)
        {
            cout << "Thank you for shopping at Best Buy!" << endl;
        }


    }while (option != 5);
    total = totalComp + totalAntivirus + totalVPN + totalInternet;
    cout << "Dogecoins spent this visit at Best Buy: " << total << endl;
}

int main()
{
    Player p1 = Player();
    BestBuy b1 = BestBuy();

    store (p1, b1);
}