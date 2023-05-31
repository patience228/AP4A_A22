/**
∗ @author Patience
∗ @file Server.cpp
∗ @date 25/09/2022
∗ @brief Cette classe constitue le main qui va nos permettre de faire les tests.
*/

#include <iostream>
using namespace std;

#include "../Header/Server.hpp"
#include "../Header/Sensor.hpp"
#include "../Header/Scheduler.hpp"



int main(int argc, char const *argv[])
{
    Server m_s;
    Scheduler m_msc;
    Sensor m_c;

//test de la methode consoleWrite()
   m_s.consoleWrite();
//test de la methode fileWrite()
   m_s.filesWrite();
    
    return 0;
}


