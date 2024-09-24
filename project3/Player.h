// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3 

#ifndef PLAYER_H 
#define PLAYER_H 

#include <string>
using namespace std;


class Player
{
    private: //members that cannot be accessed without public functions
    string playerName;
    int frustrationLevel;
    int dogeCoins;
    int internetProviderLevel;
    int numOfVPN;
    int computer;
    int maintenance;
    int viruses;
    int computerParts;
    int CPU;
    int GPU;
    int powerSupplyUnit;
    int computerCase;
    int internetCard;
    int keyboardAndMouse;
    int premadeComputer;
    int antivirusSoftware;
    int carmenProgress;
    int hackersDefeated;
    int serverRoom;

    public: //members that can access private members
    Player(); //default constructor
    Player(string playerName, int frustrationLevel, int dogeCoins, int internetProviderLevel, int numOfVPN, int computer, int maintenance, int viruses, int computerParts, int CPU, int GPU, int powerSupplyUnit, int computerCase, int internetCard, int keyboardAndMouse, int premadeComputer, int antivirusSoftware, int carmenProgress, int hackersDefeated, int serverRoom); //parameterized constructor
    string getPlayerName();
    void setPlayerName(string name);
    int getFrustrationLevel();
    void setFrustrationLevel(int frustrationLevel);
    int getDogeCoins();
    void setDogeCoins(int dogeCoins);
    int getInternetProviderLevel();
    void setInternetProviderLevel(int internetProviderLevel);
    int getNumOfVPN();
    void setNumOfVPN(int numOfVPN);
    int getComputer();
    void setComputer(int computer);
    int getMaintenance();
    void setMaintenance(int maintenance);
    int getViruses();
    void setViruses(int setViruses);
    int getComputerParts();
    void setComputerParts(int computerParts);
    int getCPU();
    void setCPU(int CPU);
    int getGPU();
    void setGPU(int GPU);
    int getPowerSupplyUnit();
    void setPowerSupplyUnit(int PowerSupplyUnit);
    int getComputerCase();
    void setComputerCase(int computerCase);
    int getInternetCard();
    void setInternetCard(int internetCard);
    int getKeyboardAndMouse();
    void setKeyboardAndMouse(int keyboardAndMouse);
    int getPremadeComputer();
    void setPremadeComputer (int premadeComputer);
    int getAntivirusSoftware();
    void setAntivirusSoftware(int antivirusSoftware);
    int getCarmenProgress();
    void setCarmenProgress(int carmenProgress);
    int getHackersDefeated();
    void setHackersDefeated(int hackersDefeated);
    int getServerRoom();
    void setServerRoom(int serverRoom);





};
#endif