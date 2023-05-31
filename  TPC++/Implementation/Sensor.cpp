/**
∗ @author Patience
∗ @file Sensor.cpp
∗ @date 25/09/2022
∗ @brief Cette classe permet de générer les données qui devront être remontées
via le Scheduler, au Server.
*/

#include "../Header/Sensor.hpp"
#include <random>
#include <iostream>

using namespace std;


int Sensor::aleaGenVal()
{
    int m_res;
    int m_min = -50;
    int m_max = 50;
    random_device m_rd;   
    mt19937 gen(m_rd());  
    uniform_int_distribution<> dist(m_min,m_max); 

    for (int i = 0; i < 1; ++i) {
        m_res=dist(gen) ;
    }
     
    return m_res;
    
}

int Sensor::getData()
{
    int m_data=aleaGenVal();
    return m_data;
    
}

