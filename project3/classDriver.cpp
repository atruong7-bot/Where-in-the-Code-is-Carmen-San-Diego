// CSCI1300 Fall 2021
// Author: Andrew Truong
// Recitation: 118 – Naga Sai Meenakshi Sistla
// Project 3

#include <iostream>
#include <vector>
#include "Player.h" //copies content
#include "BestBuy.h"
#include "Hacker.h"
#include "NPC.h"

using namespace std;

int main()
{
    // //testing Player class
    // Player p1 = Player();
    // string name = "Andrew";
    // p1.setPlayerName(name);
    // cout << p1.getPlayerName() << endl;

    // //testing BestBuy class
    // BestBuy b1 = BestBuy();
    // int costOfCPU = 10;
    // b1.setCostCPU(costOfCPU);
    // cout << b1.getCostCPU() << endl;

    // //testing Hacker class
    // Hacker h1 = Hacker();
    // string hackerName = "hansolo1337";
    // h1.setName(hackerName);
    // cout << h1.getName() << endl;

    // //testing NPC class
    // NPC n1 = NPC();
    // string NPCName = "Bob";
    // n1.setName(NPCName);
    // cout << n1.getName() << endl;

    //testing enemyTeam class
    Hacker h1 = Hacker();
    enemyTeam t1 = enemyTeam();
    t1.enemyTeamConstructor();
    t1.getHacker(2);





    return 0;
}