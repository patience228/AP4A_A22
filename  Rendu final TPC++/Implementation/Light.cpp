/**
∗ @author Patience
∗ @file Light.cpp
∗ @date 25/09/2022
∗ @brief Cette classe herite de Sensor
*/

#include "../Header/Light.hpp"
#include <random>
#include <iostream>
using namespace std;


// Implementation de la methode 
    bool Light:: aleaGenVal()
    {
        int param_min=0; //definition d'une valeur min
        int param_max=1; //definition d'une valeur max
        random_device m_rd;  //generateur random 
        mt19937 gen(m_rd());  //generer de facon aleatoire
        uniform_int_distribution<> dist(param_min,param_max); //distribue les résultats entre min et max

        for (int i = 0; i < 1; ++i) {
            return dist(gen) ;//on passe les valeurs generees au distributeur et on l'a limite a une seule valeur
        }
                      
    }

// on recupere la valeur genereree
    
    bool Light::getData()
    {
        if ( aleaGenVal()==1)
        return true;
        else
        return false;
                    
    }