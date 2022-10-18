
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

using namespace std;
//classe abstraite
template<class T> class Sensor
{
    public:
        //constructeur par defaut
        Sensor()
        { }
        //destructeur 
        virtual ~ Sensor()
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
    ∗ @brief méthode virtuelle qui récupère les données genérées
    * et qui sera implementée par les classes filles
    ∗ @return une valeur de type T generique 
    */

    virtual T getData()=0;
       
    protected:
    /**
    ∗ @brief méthode virtuelle qui génère une valeur de façon aléatoire
    * et qui sera implementée par les classes filles
    ∗ @return une valeur de type T generique 
     
    */
        virtual T aleaGenVal()=0;
      
       

};
#endif // SENSOR_H 

