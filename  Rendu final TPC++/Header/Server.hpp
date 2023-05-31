
/**
∗ @author Patience
∗ @file Server.hpp
∗ @date 25/09/2022
∗ @brief Cette classe permet de recevoir les données des capteurs et de les visualiser dans la 
  console et/ou de les stocker dans des fichiers de logs.
*/

//
// Define guards
#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Server
{
    private:
    //definition des attributs
        bool m_consolActivation;
        bool m_logActivation;

        

    public:
    //definition de la forme canonique
        //constructeur par defaut
       
        Server():m_consolActivation(true),m_logActivation(true)
        { }
        //destructeur 
        virtual ~ Server()
        { }
        //constructeur par recopie
        Server(const Server& param_s ):m_consolActivation(param_s.m_consolActivation),m_logActivation(param_s.m_logActivation)
        { }
        //operateur d'affectation
        Server& operator=(const Server& param_s )
        {
            (*this)=param_s;
            return *this;
        }
   /**
    ∗ @brief visualiser les données arrivantes dans la console.
    ∗ @param parametre −  un texte et la valeur du capteur 
    */

    template < class T>  void consoleWrite ( string param_text, T param_val)
    {
      
      cout << param_text << param_val << endl ;
            
            
    }
    

    /**
    ∗ @brief stocker les données des capteurs dans des fichiers logs.
    ∗ @param parametre − un fichier, du texte et la valeur du capteur 
    */

      template < class T>  void fileWrite (string param_fichier, string param_text, T param_val)
      {
        
        ofstream m_flux(param_fichier.c_str(),ios::app); //ouverture du fichier en écriture et positionnement en dernière ligne
        if (!m_flux.is_open())
        {
          cout << "Ouverture en ecriture du fichier impossible !\n";
        } 
        else
        {
          m_flux << param_text << param_val << endl;
        }

        m_flux.close();// fermeture du fichier
        
        
           
      }

      friend class Scheduler;

};
#endif // SERVER_H 

