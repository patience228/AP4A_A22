
/**
∗ @author Patience
∗ @file Light.hpp
∗ @date 25/09/2022
∗ @brief Cette classe herite de Sensor.
*/

//
// Define guards
#ifndef LIGHT_H
#define LIGHT_H

#include "Sensor.hpp"

class Light: private Sensor
{
    public:
    //constructeur par defaut
        Light()
        { }

    //constructeur par recopie
        Light(const Light& param_l)
        { *this=param_l;}
    //destructeur 
      ~ Light()
      { }

    /**
    ∗ @brief récupère les données genérées 
    ∗ @return une donnée int
     
    */
        int getData();
};
#endif // LIGHT_H 

