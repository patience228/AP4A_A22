
/**
∗ @author Patience
∗ @file Temperature.hpp
∗ @date 25/09/2022
∗ @brief Cette classe herite de Sensor.
*/

//
// Define guards
#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "Sensor.hpp"

class Temperature : private Sensor
{
    public:
    //constructeur par defaut
        Temperature()
        { }
    //constructeur par recopie
        Temperature(const Temperature& param_t )
        { *this=param_t;}
    //destructeur 
        ~ Temperature()
        { }

    /**
    ∗ @brief récupère les données genérées 
    ∗ @return une donnée int
     
    */
        int getData();
};
#endif // TEMPERATURE_H 

