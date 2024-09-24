// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3 

#ifndef BESTBUY_H 
#define BESTBUY_H

#include <string>
using namespace std;

class BestBuy
{
    private:  //members that cannot be accessed without public functions
    int costCPU;
    int costGPU; 
    int costPowerSupplyUnit;
    int costComputerCase;
    int costInternetCard;
    int costKeyboardAndMouse;
    int costPremadeComputer;
    int costAntivirusSoftware;
    int costVPN;
    int costInternet2;
    int costInternet3;
    int costInternet4;
    int costInternet5;

    public: //members that can access private members
    BestBuy(); //default constuctor
    BestBuy(int costCPU, int costGPU, int costPowerSupplyUnit, int costComputerCase, int costInternetCard, int costKeyboardAndMouse, int costPremadeComputer,  int costAntivirusSoftware, int costVPN, int costInternet2, int costInternet3, int costInternet4, int costInternet5); //parameterized constructor
    int getCostCPU();
    void setCostCPU(int costCPU);
    int getCostGPU();
    void setCostGPU(int costGPU);
    int getCostPowerSupplyUnit();
    void setCostPowerSupplyUnit(int costPowerSupplyUnit);
    int getCostComputerCase();
    void setCostComputerCase(int costComputerCase);
    int getCostInternetCard();
    void setCostInternetCard(int costInternetCard);
    int getCostKeyboardAndMouse();
    void setCostKeyboardAndMouse(int costKeyboardAndMouse);
    int getCostPremadeComputer();
    void setCostPremadeComputer(int costPremadeComputer);
    int getCostAntivirusSoftware();
    void setCostAntivirusSoftware(int costAntivirusSoftware);
    int getCostVPN();
    void setCostVPN(int costVPN);
    int getCostInternet2();
    void setCostInternet2(int costInternet2);
    int getCostInternet3();
    void setCostInternet3(int costInternet3);
    int getCostInternet4();
    void setCostInternet4(int costInternet4);
    int getCostInternet5();
    void setCostInternet5(int costInternet5);

    // void buyCPU();
    // void buyGPU();
    // void buyPowerSupplyUnit();
    // void buyComputerCase();
    // void buyInternetCard();
    // void buyKeyboardAndMouse();
    // void buyPremadeComputer();

};

#endif
