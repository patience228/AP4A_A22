/**
∗ @author Patience
∗ @file Scheduler.cpp
∗ @date 25/09/2022
∗ @brief Cette classe permet de définir la fréquence à laquelle les données des capteurs seront récupérées,
puis transmises au serveur pour être affichées et/ou stockées.
*/

#include "../Header/Scheduler.hpp"
#include "../Header/Sensor.hpp"
#include <iostream>

using namespace std;

int Scheduler::getTemperature()
{
    Sensor m_t;
    int res=m_t.getData();
    return res;
}

int Scheduler::getHumidity()
{
    Sensor m_h; 
    int res=m_h.getData();
    return res;
}

int Scheduler::getPression()
{
    Sensor m_p; 
    int res=m_p.getData();
    return res;
}

int Scheduler::getLight()
{
    Sensor m_l; 
    int res=m_l.getData();
    return res;
}
    

