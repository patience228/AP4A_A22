
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

class Humidity: public Sensor<float>
{
    public:
    //constructeur par defaut
        Humidity():Sensor()
        { }

    //constructeur par recopie
        Humidity(const Humidity& param_h ):Sensor(param_h)
        { }

    //operateur d'affectation
        Humidity& operator=(const Humidity& param_h )
        { 
              this->Sensor::operator=(param_h);
              return *this;
        }
      
    //destructeur 
       virtual ~ Humidity()
        { }

    /**
    ∗ @brief redefinition de la methode de clase mere qui récupère les données genérées 
    ∗ @return une donnée de type float
     
    */
        float getData();

    protected:
    /**
    ∗ @brief redefinition de la methode de clase mere qui génère les données aléatoires
    ∗ @return une donnée de type float
     
    */
        float aleaGenVal();
      
};
#endif // HUMIDITY_H 

