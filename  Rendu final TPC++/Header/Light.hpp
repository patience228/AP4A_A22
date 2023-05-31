
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

class Light: public Sensor<bool>
{
    public:
    //constructeur par defaut
        Light():Sensor()
        { }

    //constructeur par recopie
        Light(const Light& param_l):Sensor(param_l)
        { }

    //operateur d'affectation
        Light& operator=(const Light& param_l )
        { 
              this->Sensor::operator=(param_l);
              return *this;
        }
    //destructeur 
      virtual ~ Light()
      { }

     /**
    ∗ @brief redefinition de la methode de clase mere qui récupère les données genérées 
    ∗ @return une donnée de type bool
     
    */
        bool getData();

    protected:
    /**
    ∗ @brief redefinition de la methode de clase mere qui génère les données aléatoires
    ∗ @return une donnée de type bool
     
    */
        bool aleaGenVal();
};
#endif // LIGHT_H 

