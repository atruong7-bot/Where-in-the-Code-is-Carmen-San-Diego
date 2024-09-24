// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3

#include "Player.h"
#include "BestBuy.h"
#include <fstream>
#include <iostream>


using namespace std;

//constructors
Player::Player()
{
    playerName = "Player";
    frustrationLevel = 0;
    dogeCoins = 200;
    internetProviderLevel = 1;
    numOfVPN = 1;
    computer = 1;
    maintenance = 100;
    viruses = 0;
    computerParts = 0;
    CPU = 0;
    GPU = 0;
    powerSupplyUnit = 0;
    computerCase = 0;
    internetCard = 0;
    keyboardAndMouse = 0;
    premadeComputer = 0;
    antivirusSoftware = 0;
    carmenProgress = 0;
    hackersDefeated = 0;
    serverRoom = 1;
}

Player::Player(string playerName_, int frustrationLevel_, int dogeCoins_, int internetProviderLevel_, int numOfVPN_, int computer_, int  maintenance_, int viruses_, int computerParts_, int CPU_, int GPU_, int powerSupplyUnit_, int computerCase_, int internetCard_, int keyboardAndMouse_, int premadeComputer_, int antivirusSoftware_, int carmenProgress_, int hackersDefeated_, int serverRoom_)
{
    playerName = playerName_;
    frustrationLevel = frustrationLevel_;
    dogeCoins = dogeCoins_;
    internetProviderLevel = internetProviderLevel_;
    numOfVPN = numOfVPN_;
    computer = computer_;
    maintenance = maintenance_;
    viruses = viruses_;
    computerParts = computerParts_; 
    CPU = CPU_;
    GPU = GPU_;
    powerSupplyUnit = powerSupplyUnit_;
    computerCase = computerCase_;
    internetCard = internetCard_;
    keyboardAndMouse = keyboardAndMouse_;
    premadeComputer = premadeComputer_;
    antivirusSoftware = antivirusSoftware_;
    carmenProgress = carmenProgress_;
    hackersDefeated = hackersDefeated_;
    serverRoom = serverRoom_;

}

//getters/setters

string Player::getPlayerName()
{
    return playerName;
} 

void Player::setPlayerName(string setName)
{
    playerName = setName;
}

int Player::getFrustrationLevel()
{
    return frustrationLevel;
}

void Player::setFrustrationLevel(int setFrustrationLevel)
{
    frustrationLevel = setFrustrationLevel;
}

int Player::getDogeCoins()
{
    return dogeCoins;
}

void Player::setDogeCoins(int setDogeCoins)
{
    dogeCoins = setDogeCoins;
}

int Player::getInternetProviderLevel()
{
    return internetProviderLevel;
}

void Player::setInternetProviderLevel(int setInternetProviderLevel)
{
    internetProviderLevel = setInternetProviderLevel;
}

int Player::getNumOfVPN()
{
    return numOfVPN;
}

void Player::setNumOfVPN(int setNumOfVPN)
{
    numOfVPN = setNumOfVPN;
}

int Player::getComputer()
{
    return computer;
}

void Player::setComputer(int setComputer)
{
    computer = setComputer;
}

int Player::getMaintenance()
{
    return maintenance;
}

void Player::setMaintenance(int setMaintenance)
{
    maintenance = setMaintenance;
}

int Player::getViruses()
{
    return viruses;
}

void Player::setViruses(int setViruses)
{
    viruses = setViruses;
}

int Player::getComputerParts()
{
    return computerParts;
}

void Player::setComputerParts(int setComputerParts)
{
    computerParts = setComputerParts;
}

int Player::getCPU()
{
    return CPU;
}

void Player::setCPU(int setCPU)
{
    CPU = setCPU;
}

int Player::getGPU()
{
    return GPU;
}

void Player::setGPU(int setGPU)
{
    GPU = setGPU;
}

int Player::getPowerSupplyUnit()
{
    return powerSupplyUnit;
}

void Player::setPowerSupplyUnit(int setPowerSupplyUnit)
{
    powerSupplyUnit = setPowerSupplyUnit;
}

int Player::getComputerCase()
{
    return computerCase;
}

void Player::setComputerCase(int setComputerCase)
{
    computerCase = setComputerCase;
}

int Player::getInternetCard()
{
    return internetCard;
}

void Player::setInternetCard(int setInternetCard)
{
    internetCard = setInternetCard;
}

int Player::getKeyboardAndMouse()
{
    return keyboardAndMouse;
}

void Player::setKeyboardAndMouse(int setKeyboardAndMouse)
{
    keyboardAndMouse = setKeyboardAndMouse;
}

int Player::getPremadeComputer()
{
    return premadeComputer;
}

void Player::setPremadeComputer(int setPremadeComputer)
{
    premadeComputer = setPremadeComputer;
}

int Player::getAntivirusSoftware()
{
    return antivirusSoftware;
}

void Player::setAntivirusSoftware(int setAntivirusSoftware)
{
    antivirusSoftware = setAntivirusSoftware;
}

int Player::getCarmenProgress()
{
    return carmenProgress;
}

void Player::setCarmenProgress(int setCarmenProgress)
{
    carmenProgress = setCarmenProgress;
}

int Player::getHackersDefeated()
{
    return hackersDefeated;
}

void Player::setHackersDefeated(int setHackersDefeated)
{
    hackersDefeated = setHackersDefeated;
}

int Player::getServerRoom()
{
    return serverRoom;
}

void Player::setServerRoom(int setServerRoom)
{
    serverRoom = setServerRoom;
}

