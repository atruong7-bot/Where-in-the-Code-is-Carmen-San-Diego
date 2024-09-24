// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3

#include "BestBuy.h"
#include <iostream>


using namespace std;

//constructors
BestBuy::BestBuy()
{
    costCPU = 10;
    costGPU = 20;
    costPowerSupplyUnit = 5;
    costComputerCase = 15;
    costInternetCard = 5;
    costKeyboardAndMouse = 10;
    costPremadeComputer = 100;
    costAntivirusSoftware = 10;
    costVPN = 20;
    costInternet2 = 10;
    costInternet3 = 25;
    costInternet4 = 40;
    costInternet5 = 50;
}

BestBuy::BestBuy(int costCPU_, int costGPU_, int costPowerSupplyUnit_, int costComputerCase_, int costInternetCard_, int costKeyboardAndMouse_, int costPremadeComputer_, int costAntivirusSoftware_, int costVPN_, int costInternet2_, int costInternet3_, int costInternet4_, int costInternet5_)
{
    costCPU = costCPU_; 
    costGPU = costGPU_;
    costPowerSupplyUnit = costPowerSupplyUnit_;
    costComputerCase = costComputerCase_;
    costInternetCard = costInternetCard_;
    costKeyboardAndMouse = costKeyboardAndMouse_;
    costPremadeComputer = costPremadeComputer_;
    costAntivirusSoftware = costAntivirusSoftware_;
    costVPN = costVPN_;
    costInternet2 = costInternet2_;
    costInternet3 = costInternet3_;
    costInternet4 = costInternet4_;
    costInternet5 = costInternet5_;
}

//getters/setters

int BestBuy::getCostCPU()
{
    return costCPU;
}

void BestBuy::setCostCPU(int setCostCPU)
{
    costCPU = setCostCPU;
}

int BestBuy::getCostGPU()
{
    return costGPU;
}

void BestBuy::setCostGPU(int setCostGPU)
{
    costGPU = setCostGPU;
}

int BestBuy::getCostPowerSupplyUnit()
{
    return costPowerSupplyUnit;
}

void BestBuy::setCostPowerSupplyUnit(int setCostPowerSupplyUnit)
{
    costPowerSupplyUnit = setCostPowerSupplyUnit;
}

int BestBuy::getCostComputerCase()
{
    return costComputerCase;
}

void BestBuy::setCostComputerCase(int setCostComputerCase)
{
    costComputerCase = setCostComputerCase;
}

int BestBuy::getCostInternetCard()
{
    return costInternetCard;
}

void BestBuy::setCostInternetCard(int setCostInternetCard)
{
    costInternetCard = setCostInternetCard;
}

int BestBuy::getCostKeyboardAndMouse()
{
    return costKeyboardAndMouse;
}

void BestBuy::setCostKeyboardAndMouse(int setCostKeyboardAndMouse)
{
    costKeyboardAndMouse = setCostKeyboardAndMouse;
}

int BestBuy::getCostPremadeComputer()
{
    return costPremadeComputer;
}

void BestBuy::setCostPremadeComputer(int setCostPremadeComputer)
{
    costPremadeComputer = setCostPremadeComputer;
}

int BestBuy::getCostAntivirusSoftware()
{
    return costAntivirusSoftware;
}

void BestBuy::setCostAntivirusSoftware(int setCostAntivirusSoftware)
{
    costAntivirusSoftware = setCostAntivirusSoftware;
}

int BestBuy::getCostVPN()
{
    return costVPN;
}

void BestBuy::setCostVPN(int setCostVPN)
{
    costVPN = setCostVPN;
}

int BestBuy::getCostInternet2()
{
    return costInternet2;
}

void BestBuy::setCostInternet2(int setCostInternet2)
{
    costInternet2 = setCostInternet2;
}

int BestBuy::getCostInternet3()
{
    return costInternet3;
}

void BestBuy::setCostInternet3(int setCostInternet3)
{
    costInternet3 = setCostInternet3;
}

int BestBuy::getCostInternet4()
{
    return costInternet4;
}

void BestBuy::setCostInternet4(int setCostInternet4)
{
    costInternet4 = setCostInternet4;
}

int BestBuy::getCostInternet5()
{
    return costInternet5;
}

void BestBuy::setCostInternet5(int setCostInternet5)
{
    costInternet5 = setCostInternet5;
}


