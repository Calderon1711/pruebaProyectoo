//
// Created by aleca on 4/6/2025.
//

#ifndef PERSONA_H
#define PERSONA_H
using namespace std;
#include <iostream>


class Persona {
private:
  string id;
  string name;
  public:
    Persona() {

    }
    ~Persona() {

    }
    void setIDPersona(string& r){
      this->id = r;
      }
};



#endif //PERSONA_H
