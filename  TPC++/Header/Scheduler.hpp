/**
∗ @author Patience
∗ @file Scheduler.hpp
∗ @date 25/09/2022
∗ @brief Cette classe permet de définir la fréquence à laquelle les données des capteurs seront récupérées,
puis transmises au serveur pour être affichées et/ou stockées.
*/

//
// Define guards
#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "Sensor.hpp"

class Scheduler
{
    
   
    public:
    //constructeur par defaut
        Scheduler()
        { }
    //constructeur par recopie
        Scheduler(const Scheduler& param_s )
        { *this=param_s;}

    //destructeur 
       ~ Scheduler()
        { }

    /**
    ∗ @brief récupère la valeur de la température  
    ∗ @return une donnée int
     
    */
        int getTemperature();
    /**
    ∗ @brief récupère la valeur de l'humidité
    ∗ @return une donnée int
     
    */
        int getHumidity();
    /**
    ∗ @brief récupère la valeur de la pression
    ∗ @return une donnée int
     
    */
        int getPression();
    /**
    ∗ @brief récupère la valeur du light 
    ∗ @return une donnée int
     
    */
        int getLight();

  
};
#endif // SCHEDULER_H 
