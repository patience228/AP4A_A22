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
#include "../Header/Humidity.hpp"
#include "../Header/Temperature.hpp"
#include "../Header/Pression.hpp"
#include "../Header/Light.hpp"
#include "../Header/Server.hpp"

class Scheduler
{
    private:
    //declaration des objets composants le scheduler
        
        Humidity m_h; 
        Temperature m_t;
        Pression m_p; 
        Light m_l;
        Server m_s;
   
    public:
    //constructeur par defaut
        Scheduler()
        { }
    //constructeur par recopie
        Scheduler(const Scheduler& param_s )
        { *this=param_s;}

    //destructeur 
        virtual ~ Scheduler()
        { }
    //methode qui va recuperer tous les capteurs et l'envoyer au serveur 
        void getDatas();
       
   
};
#endif // SCHEDULER_H 
