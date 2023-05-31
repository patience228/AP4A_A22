
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

class Server
{
    private:
    //definition des attributs
        bool m_consolActivation;
        bool m_logActivation;

        

    public:
    //definition de la forme canonique
        //constructeur par defaut
       
        Server():m_consolActivation(),m_logActivation()
        { }
        //destructeur 
        ~ Server()
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
 
    */

        void consoleWrite ();
    

     /**
    ∗ @brief stocker les données des capteurs dans des fichiers de logs.

    */

        void filesWrite ();


    /**
    ∗ @brief stocker les données des capteurs dans des fichiers de logs.
    ∗ @param parametre − un fichier, du texte et une donnée int
    */

        void fileWrite (char* param_fichier, char* param_text, int param_val);

   


};
#endif // SERVER_H 

