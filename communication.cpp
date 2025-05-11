#include "communication.h"
void comms::sendMessage(string from, string to, string message)
{
    cout << "[" << from << " -> " << to << "]: " << message << endl;
}
void comms::receiveMessage(string player) 
{
    cout << player << " is checking messages." << endl;
}
