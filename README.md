---

# Where in the Code is Carmen Sandiego

This is a C++ text-based adventure game inspired by the classic "Where in the World is Carmen Sandiego" with a modern, quirky spin. The goal of the game is to defeat hackers and prevent Carmen Sandiego from stealing top-secret server data. Players must navigate through different server rooms, fight hackers, collect resources, and manage their frustration levels to complete the mission.

## Features

- **Navigate 5 server rooms**: Explore various rooms, defeat hackers, and advance through the game.
- **Combat System**: Engage in battles with Carmen's hackers. Use your internet provider, VPNs, and more to fight them off.
- **Resource Management**: Earn and spend Dogecoin to buy essential items like computer parts, VPNs, and antivirus software.
- **Frustration Meter**: Maintain your composure! If your frustration level reaches 100, you will rage quit.
- **Interactive NPCs**: Interact with friendly and enemy NPCs who can either help or hinder your progress.

## Game Mechanics

1. **Starting Point**: 
   - Players begin the game by shopping for supplies at Best Buy using Dogecoin. 
   - Supplies include computer parts, antivirus software, VPNs, and internet provider upgrades.

2. **Server Room Navigation**: 
   - Move through 5 server rooms, defeating 1 to 3 hackers in each room to progress.
   - Each room contains NPCs, a Best Buy location, and hidden hackers that players must find and defeat.

3. **Hacker Battles**: 
   - Players engage in battles with hackers using a strategy based on their internet provider level, VPNs, and the current room's challenge.
   - Victory in battles rewards players with Dogecoin, while defeat increases Carmen’s progress and can damage the player's computer.

4. **Computer Repairs**: 
   - If the player's computer breaks down, it can be repaired using collected computer parts.
   - The player's computer maintenance level affects their chances of winning battles and continuing the game.

5. **Misfortunes & Random Events**: 
   - Random misfortunes like losing computer parts or getting viruses can occur during exploration.
   - Positive events such as finding spare computer parts are also possible.

6. **Win/Lose Conditions**: 
   - The player wins the game after defeating all hackers across the 5 server rooms.
   - The game ends if Carmen steals all the server data, the player's frustration level reaches 100, or their computer's maintenance level drops to 0.

## How to Play

- **W/A/S/D**: Move around the map.
- **Fight Hackers**: Choose between "Attack" or "Forfeit" when encountering a hacker.
- **Interact with NPCs**: Solve puzzles or take your chances to gain resources.
- **Monitor Stats**: Keep an eye on your computer's maintenance level, frustration, Dogecoin, and hackers defeated.

## Game Flow

1. **Start at Best Buy**: Purchase items to help you on your journey.
2. **Navigate Rooms**: Explore each server room, fight hackers, and avoid misfortunes.
3. **Defeat Carmen’s Hackers**: Fight your way through each room and prevent Carmen from stealing the server data.

## Files

- `main.cpp`: The main game logic.
- `map.cpp`: Handles the 2D map and player navigation.
- `map.h`: Header file for map-related functions.
- `hackers.txt`: List of potential hackers to battle.
- `puzzles.txt`: Collection of puzzles for NPC interactions.
- `answers.txt`: Answers to puzzles for NPC encounters.

## Requirements

- 4+ user-defined classes with appropriate methods and data members.
- Use of a 2D map and at least 2 classes containing arrays or vectors of objects.
- Implement 6+ if-else statements, 6+ loops (including 2+ nested loops), and file I/O for game stats.
- Fully interactive game with player input, a menu, and a status update display each turn.


------------------------
HOW TO COMPILE AND RUN
------------------------
Clone: git clone https://github.com/username/where-in-the-code-is-carmen-sandiego.git
Compile: g++ -std=c++11 project3.cpp Hacker.cpp NPC.cpp Player.cpp Map.cpp BestBuy.cpp
Run: ./a.out

<img width="567" alt="Screenshot 2024-09-25 at 4 25 20 PM" src="https://github.com/user-attachments/assets/dee1f69d-9c12-41b2-a075-7407b90c0f7b">
<img width="274" alt="Screenshot 2024-09-25 at 4 24 43 PM" src="https://github.com/user-attachments/assets/2c55be03-16ce-4cdd-87aa-db5bbb1317c3">
<img width="648" alt="Screenshot 2024-09-25 at 4 31 26 PM" src="https://github.com/user-attachments/assets/a2beee37-7e08-48bc-aa8d-0e596b865e2a">
<img width="634" alt="Screenshot 2024-09-25 at 4 31 44 PM" src="https://github.com/user-attachments/assets/9f5705f4-91be-4f7d-92e6-e51a4022e938">


