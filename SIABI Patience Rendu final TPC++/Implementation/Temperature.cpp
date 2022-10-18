/**
∗ @author Patience
∗ @file Temperature.cpp
∗ @date 25/09/2022
∗ @brief Cette classe herite de Sensor
*/

#include "../Header/Temperature.hpp"
#include <random>
#include <iostream>
using namespace std;

// Implementation de la methode 
   float Temperature:: aleaGenVal()
   {
        float param_min=-40.0; //definition d'une valeur min
        float param_max=40.0; //definition d'une valeur max
        random_device m_rd;  //generateur random 
        mt19937 gen(m_rd());  //generer de facon aleatoire
        uniform_real_distribution<> dist(param_min,param_max); //distribue les résultats entre min et max

        for (int i = 0; i < 1; ++i) {
            return dist(gen) ;//on passe les valeurs generees au distributeur et on l'a limite a une seule valeur
        }
                      
   }

// on recupere la valeur genereree
   float Temperature:: getData()
   {
      float res =aleaGenVal();
      return  res;
                         
   }
   