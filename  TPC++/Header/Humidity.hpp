
/**
∗ @author Patience
∗ @file Humidity.hpp
∗ @date 25/09/2022
∗ @brief Cette classe herite de Sensor.
*/

//
// Define guards
#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "Sensor.hpp"

class Humidity: private Sensor
{
    public:
    //constructeur par defaut
        Humidity()
        { }

    //constructeur par recopie
        Humidity(const Humidity& param_h )
        { *this=param_h;}
    //destructeur 
        ~ Humidity()
        { }

    /**
    ∗ @brief récupère les données genérées 
    ∗ @return une donnée int
     
    */
        int getData();
};
#endif // HUMIDITY_H 

