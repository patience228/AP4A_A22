
/**
∗ @author Patience
∗ @file Pression.hpp
∗ @date 25/09/2022
∗ @brief Cette classe herite de Sensor.
*/

//
// Define guards
#ifndef PRESSION_H
#define PRESSION_H

#include "Sensor.hpp"

class Pression: private Sensor
{
    public:
    //constructeur par defaut
        Pression()
        { }

    //constructeur par recopie
        Pression(const Pression& param_p )
        {*this=param_p; }
    //destructeur 
        ~ Pression()
        { }

    /**
    ∗ @brief récupère les données genérées 
    ∗ @return une donnée int
     
    */
        int getData();
};
#endif // PRESSION_H 

