//
// Created by aleca on 4/6/2025.
//

#ifndef PERSONA_H
#define PERSONA_H
using namespace std;
#include <iostream>


class Persona {
private:
  string cedula;
  string name;
  public:
    Persona(){

    }
    Persona(string cedula, string name){
      this->cedula = cedula;
      this->name = name;

    }
    ~Persona(){

    }

    //Cambios master.

};



#endif //PERSONA_H
