/**
∗ @author Patience
∗ @file Scheduler.cpp
∗ @date 25/09/2022
∗ @brief Cette classe permet de définir la fréquence à laquelle les données des capteurs seront récupérées,
puis transmises au serveur pour être affichées et/ou stockées.
*/

#include "../Header/Scheduler.hpp"
#include "../Header/Sensor.hpp"
#include "../Header/Humidity.hpp"
#include "../Header/Temperature.hpp"
#include "../Header/Pression.hpp"
#include "../Header/Light.hpp"
#include "../Header/Server.hpp"
#include <iostream>


using namespace std;

   
//Cette methode permet de recuperer les donnees des differents capteurs a de differentes frequences et l'envoyer au serveur
void  Scheduler::getDatas(){
    
        float m_resh; 
        float m_rest;
        int m_resp; 
        bool m_resl;
        Server m_s;

        while (m_s.m_consolActivation==true && m_s.m_logActivation==true)
        {
            
        for(int i=0;i<5;i++){
            if(i%2){
                m_resh=m_h.getData();// recuperation du capteur Humidite
                m_s.consoleWrite("Humidity: ",m_resh);//visualisation dans la console
                m_s.fileWrite("../Logs/Humidity.txt","Humidity: ",m_resh);//stockage dans le fichier .txt
                            
            }
             if(i%3){
                m_rest=m_t.getData();//recuperation du capteur Temperature
                m_s.consoleWrite("Temperature: ",m_rest);//visualisation dans la console
                m_s.fileWrite("../Logs/Temperature.txt","Temperature: ",m_rest);//stockage dans le fichier .txt
                
            }
             if(i%4){
                m_resp=m_p.getData();//recuperation du capteur Pression
                m_s.consoleWrite("Pression: ",m_resp);//visualisation dans la console
                m_s.fileWrite("../Logs/Pression.txt","Pression: ",m_resp);//stockage dans le fichier .txt
               
            }
             if(i%5){
                m_resl=m_l.getData();//recuperation du capteur Lumiere
                m_s.consoleWrite("Light: ",m_resl);//visualisation dans la console
                m_s.fileWrite("../Logs/Light.txt","Light: ",m_resl);//stockage dans le fichier .txt
                
            }
        }
        
       
}

    

    
}




 
    
