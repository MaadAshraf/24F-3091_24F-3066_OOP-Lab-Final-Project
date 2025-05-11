#ifndef COMMUNICATION
#define COMMUNICATION
#include<iostream>
#include<string>
using namespace std;
class comms
{
public:
    void sendMessage(string from, string to, string message);
    void receiveMessage(string player);
};
#endif