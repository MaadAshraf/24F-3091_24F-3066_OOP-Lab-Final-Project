#include "Phase2.h"
void AllianceManager::formAlliance(string player1, string player2) 
{
    cout << player1 << " and " << player2 << " formed an alliance." << endl;
}

void AllianceManager::breakAlliance(string player1, string player2) 
{
    cout << player1 << " broke alliance with " << player2 << "." << endl;
}

void AllianceManager::getAllianceStatus(string player1, string player2)
{
    cout << "Checking alliance status between " << player1 << " and " << player2 << "." << endl;
}


void TradeSystem::offerTrade(string from, string to, string resource, int quantity) 
{
    cout << from << " offers " << quantity << " units of " << resource << " to " << to << "." << endl;
}

void TradeSystem::attemptSmuggle(string from, string to, string resource)
{
    cout << from << " attempts to smuggle " << resource << " to " << to << "." << endl;
}


void ConflictManager::declareWar(string attacker, string defender)
{
    cout << attacker << " has declared war on " << defender << "!" << endl;
}

void ConflictManager::betrayAlliance(string attacker, string ally)
{
    cout << attacker << " has betrayed their alliance with " << ally << "!" << endl;
}


void MapSystem::placeKingdom(string player, int x, int y) 
{
    cout << "Placed " << player << "'s kingdom at (" << x << "," << y << ")." << endl;
}

void MapSystem::movePlayer(string player, string direction) 
{
    cout << player << " moves " << direction << "." << endl;
}

void MapSystem::displayMap()
{
    cout << "Displaying map..." << endl;
}


void Logger::logEvent(string type, string data) 
{
    cout << "[" << type << "] " << data << endl;
}