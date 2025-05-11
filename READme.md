Stronghold Game - OOP Lab Final Project

Explanation of the Code

This project is a turn-based strategy game called "Stronghold," developed in C++ for the OOP Lab Final Project. The game allows players to manage a kingdom by handling various systems: Population, Resources, Military, Leadership, Economy, Bank, EventHandler, and SocialStructure. Players interact through a menu with 12 options (e.g., manage population, resources, military, save/load game, trigger events, advance turns, exit), and the game progresses turn-by-turn. Key features include:

A streamlined menu with sub-options for managing each system.
File I/O: saving/loading game state to game_save.txt and logging scores to score.txt.
Error handling using cout messages.
Events trigger every 3 turns (e.g., famine, prosperity), impacting all systems.
Game over condition: revoltRisk > 80, checked during "Next Turn."

Project Division

Phase 1
24F-3091: Implemented Military, Leadership, Economy, Bank, and EventHandler systems, and finalized the turn-based loop and menu system.
24F-3066: Implemented Population, Resources, and SocialStructure systems, handled file I/O.
Phase 2
24F-3091: Imolemented main (added new files).
24F-3066: Implemented phase2 cpp and header file, communication cpp and header file.

Technologies Used

Language: C++.

Libraries: Usage of <iostream> for I/O and <fstream> for file handling.

Constraints: Used pointers, I/O (cout/cin with using namespace std).

What We Did in the Project

We completed Module 1 of the Stronghold Project, implementing all required systems in C++. The project was developed iteratively:

Created classes for each system (Population, Resources, Military, etc.) with methods to manage game state (e.g., updatePopulation, gatherResources, recruitSoldiers).

Integrated systems via main.cpp with a menu-driven interface and turn-based gameplay loop.
Added file I/O to save/load game state and log scores.
Exception handling with cout messages for errors (e.g., "Invalid resource amounts").
Streamlined the menu of 12 with sub-menus for better usability.
