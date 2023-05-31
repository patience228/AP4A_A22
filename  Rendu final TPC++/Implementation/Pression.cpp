/**
∗ @author Patience
∗ @file Pression.cpp
∗ @date 25/09/2022
∗ @brief Cette classe herite de Sensor
*/

#include "../Header/Pression.hpp"
#include <random>
#include <iostream>
using namespace std;


// Implementation de la methode 
    int Pression:: aleaGenVal()
    {
        int param_min=-10; //definition d'une valeur min
        int param_max=10; //definition d'une valeur max
        random_device m_rd;  //generateur random 
        mt19937 gen(m_rd());  //generer de facon aleatoire
        uniform_int_distribution<> dist(param_min,param_max); //distribue les résultats entre min et max

        for (int i = 0; i < 1; ++i) {
            return dist(gen) ;//on passe les valeurs generees au distributeur et on l'a limite a une seule valeur
        }
                      
    }

// on recupere la valeur genereree
    
    int Pression::getData()
    {
        int res=aleaGenVal();
        return res;
                    
    }