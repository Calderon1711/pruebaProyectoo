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

    void jefeboss (){
      cout << "unodos";
    }

    //Cambios master.
  void jefeb1oss (){
      cout << "334";
    }

  void jefeb143oss (){
      cout << "365445543";
    }

  void jefeb34433443343oss (){
      cout << "435345345";
    }
  //Fin aca.
};



#endif //PERSONA_H
