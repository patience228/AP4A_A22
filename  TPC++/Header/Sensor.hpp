
/**
∗ @author Patience
∗ @file Sensor.hpp
∗ @date 25/09/2022
∗ @brief Cette classe permet de générer les données qui devront être remontées
via le Scheduler, au Server.
*/

//
// Define guards
#ifndef SENSOR_H
#define SENSOR_H
//classe abstraite
class Sensor
{
    public:
    //constructeur par defaut
        Sensor()
        { }
        //destructeur 
        ~ Sensor()
        { }
         //constructeur par recopie
        Sensor(const Sensor& param_s )
        {
             (*this)=param_s;
         }
        //operateur d'affectation
        Sensor& operator=(const Sensor& param_s )
        {
            (*this)=param_s;
            return *this;
        }

     /**
    ∗ @brief génère une valeur de façon aléatoire
    ∗ @return un int
    */

        int aleaGenVal();

     /**
    ∗ @brief récupère les données genérées 
    ∗ @return une donnée int
     
    */
        int getData();
};
#endif // SENSOR_H 

