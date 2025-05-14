#include "Phase2.h"
void AllianceManager::formAlliance(string player1, string player2) 
{
    cout << player1 << " and " << player2 << " formed an alliance." << endl;
    statusalliance = "Formed";
}

void AllianceManager::breakAlliance(string player1, string player2) 
{
    cout << player1 << " broke alliance with " << player2 << "." << endl;
    statusalliance = "Broken";
}

void AllianceManager::getAllianceStatus(string player1, string player2)
{
    cout << "Alliance status between " << player1 << " and " << player2 << " is "<<statusalliance << endl;
}


void TradeSystem::offerTrade(string from, string to, string resource, int quantity) 
{

    cout << from << " offers " << quantity << " units of " << resource << " to " << to << "." << endl;
    int choice, priceperun, tp;
    {
        cout << "Player " << to << "Want Trade? (1=yes,0=No)." << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Trade attempted ! " << endl;
            cout << "Enter Perunit price of Resource?" << endl;
            cin >> priceperun;
            tp = priceperun * quantity;
            cout << "Total Ammount " << tp << "$ is Paid.Happy Trade !" << endl;
        }
        else
        {
            cout << to << " rejected to trade." << endl;
        }
    }
}

void TradeSystem::attemptSmuggle(string from, string to, string resource)
{
    int choice, ammount;
    string event;
    cout << from << " attempts to smuggle " << resource << " to " << to<< endl;
    cout << "Try Succeded ? (1=Yes,0=Not) :" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter Ammount Paid ?" << endl;
        cin >> ammount;
        cout << "Ammount Paid to Player " << from << " For Smuggling!" << endl;
    }
    else
    {
       
        cout << "1.Police Raid \n2.Spy information\n3.Mismanagement" << endl;
        cin >> event;
        cout << "Smuggling Failed due to " <<event<< endl;
    }

}


void ConflictManager::declareWar(string attacker, string defender)
{
    cout << attacker << " has declared war on " << defender << "!" << endl;
    cout << defender << " is attacked!." << endl;
}

void ConflictManager::betrayAlliance(string attacker, string ally)
{
    cout << attacker << " has betrayed their alliance with " << ally << "!" << endl;
    eventhappen = "Broked.";
}

void MapSystem::initializegrid() 
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            grid[i][j] = '.';
            kingdoms[i][j] = "";
        }
    }
}
void MapSystem::placeKingdom(string player, int x, int y) 
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (kingdoms[i][j] == player)
            {
                clearPosition(i, j);
            }
        }
    }

    grid[x][y] = toupper(player[0]);
    kingdoms[x][y] = player;
    cout << player << " placed at (" << x << "," << y << ")\n";
}
void MapSystem::clearPosition(int x, int y)
{
    grid[x][y] = '.';
    kingdoms[x][y] = "";

}
void MapSystem::movePlayer(string player, string direction) 
{
    int x = -1, y = -1;

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            if (kingdoms[i][j] == player)
            {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1)
        {
            break;
        }
    }

    if (x == -1) 
    {
        cout << player << " not found on map!\n";
        return;
    }

    int newx = x, newy = y;

    if (direction == "up")
    {
        newx--;
    }
    else if (direction == "down")
    {
        newx++;
    }
    else if (direction == "left")
    {
        newy--;
    }
    else if (direction == "right")
    {
        newy++;
    }
    else
    {
        cout << "Invalid direction! Use: up, down, left, right"<<endl;
        return;
    }
    grid[x][y] = '.';                 
    kingdoms[x][y] = "";

    grid[newx][newy] = player[0];
    kingdoms[newx][newy] = player;
    cout << player << " moved to (" << newx << "," << newy << ")"<<endl;
    displayMap();
}

void MapSystem::displayMap()
{
    cout << "Current Game Map : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) 
        {
            if (kingdoms[i][j] != "")
            {
               
                cout << "[ " << grid[i][j] << " ]";
            }
            else 
            {
                cout << "[   ]";
            }
        }
        cout << endl;
    }
    cout << "Kingdom Positions : " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) 
        {
            if (kingdoms[i][j] != "")
            {
                cout << kingdoms[i][j] << " at (" << i << "," << j << ")"<<endl;
            }
        }
    }
}
void Logger::logEvent(string type, string data) 
{
    cout << "[" << type << "] " << data << endl;
}
