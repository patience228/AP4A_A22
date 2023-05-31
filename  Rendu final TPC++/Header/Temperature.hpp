
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

class Temperature : public Sensor<float>
{
    public:
    //constructeur par defaut
        Temperature():Sensor()
        { }
    //constructeur par recopie
        Temperature(const Temperature& param_t ):Sensor(param_t)
        { }

    //operateur d'affectation
        Temperature& operator=(const Temperature& param_t )
        { 
              this->Sensor::operator=(param_t);
              return *this;
        }
    //destructeur 
        virtual ~ Temperature()
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
#endif // TEMPERATURE_H 

