
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

class Pression: public Sensor<int>
{
    public:
    //constructeur par defaut
        Pression():Sensor()
        { }

    //constructeur par recopie
        Pression(const Pression& param_p ):Sensor(param_p)
        {}

    //operateur d'affectation
        Pression& operator=(const Pression& param_p )
        { 
              this->Sensor::operator=(param_p);
              return *this;
        }
    //destructeur 
        virtual ~ Pression()
        { }

    /**
    ∗ @brief redefinition de la methode de clase mere qui récupère les données genérées 
    ∗ @return une donnée de type int
     
    */
        int getData();

    protected:
    /**
    ∗ @brief redefinition de la methode de clase mere qui génère les données aléatoires
    ∗ @return une donnée de type int
     
    */
        int aleaGenVal();
};
#endif // PRESSION_H 

