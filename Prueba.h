//
// Created by aleca on 4/9/2025.
//

#ifndef PRUEBA_H
#define PRUEBA_H

#include <iostream>
using namespace std;

class Prueba {
private:
  int prueba;
  int num;

 public:

 Prueba(int p, int n);
 ~Prueba();
 void setPrueba(int p);
 void setNum(int n);
 int getPrueba();
 int getNum();

 void quieroAlgo (){
 cout << "hola" << endl;
 }

};



#endif //PRUEBA_H
