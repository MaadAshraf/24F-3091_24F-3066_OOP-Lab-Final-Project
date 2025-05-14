#ifndef PHASE2
#define PHASE2
#include <iostream>
#include <string>
using namespace std;
class AllianceManager 
{
public:
    string statusalliance;
    void formAlliance(string player1, string player2);
    void breakAlliance(string player1, string player2);
    void getAllianceStatus(string player1, string player2);
};

class TradeSystem 
{
public:
    string tradestatus;
    string smuggleststus;
    void offerTrade(string from, string to, string resource, int quantity);
    void attemptSmuggle(string from, string to, string resource);
};

class ConflictManager
{
public:
    string eventhappen;
    void declareWar(string attacker, string defender);
    void betrayAlliance(string attacker, string ally);
};

class MapSystem
{
public:
    char grid[5][5];
    string kingdoms[5][5];
    void initializegrid();
    void clearPosition(int x, int y);
    void placeKingdom(string player, int x, int y);
    void movePlayer(string player, string direction);
    void displayMap();
};
class Logger
{
public:
    void logEvent(string type, string data);
};

#endif 
