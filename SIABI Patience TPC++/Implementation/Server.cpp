/**
∗ @author Patience
∗ @file Server.cpp
∗ @date 25/09/2022
∗ @brief Cette classe permet de recevoir les données des capteurs et de les visualiser dans la 
  console et/ou de les stocker dans des fichiers de logs.
*/
#include <stdio.h>
#include <string.h>
#include <string>
#include "../Header/Server.hpp"
#include "../Header/Scheduler.hpp"
#include <iostream>
#include <fstream>

using namespace std;

  Scheduler m_sc;
  int m_t, m_h, m_p, m_l;

void Server::consoleWrite()
{
  
  m_t = m_sc.getTemperature();
  m_h = m_sc.getHumidity();
  m_p = m_sc.getPression();
  m_l = m_sc.getLight();

  cout << "La valeur de l'humidité vaut: " << m_h << endl;
  cout << "La valeur de la lumière vaut: " << m_l << endl;
  cout << "La valeur de la pression vaut: " << m_p << endl;
  cout << "La valeur de la température vaut: " << m_t << endl;
 
 
 
}

void Server::fileWrite(char* param_file,char* param_text,int param_val)
{
  ofstream m_flux(param_file); //
  if (!m_flux.is_open())
  {
    cout << "Ouverture en ecriture du fichier impossible !\n";
  }
  else
  {
    m_flux << param_text << param_val;
  }

  m_flux.close();
}


  

void Server::filesWrite()
{

  fileWrite("../Logs/Humidity.txt","La valeur de l'humidité est égale à : ",m_h); 
  fileWrite("../Logs/Light.txt","La valeur du Light est égale à : ",m_l); 
  fileWrite("../Logs/Pression.txt","La valeur de la pression est égale à : ",m_p); 
  fileWrite("../Logs/Temperature.txt","La valeur de la température est égale à : ",m_t); 
  

}



