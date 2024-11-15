/*
  * Proyecto Casa de Adopción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 07/11/2024
*/

/*
  * Clase Mascota contiene los metodos genéricos para llevar a cabo la gestión y
  * modificación de los valores nombre, edad y peso
*/
#ifndef MASCOTA_H
#define MASCOTA_H
#include<string>

//Declaración de clase Mascota
class Mascota {

public:
  std::string nombre;
  int edad;
  float peso;

  //Declaro metodos que tendrá la clase
  Mascota();
  Mascota(std::string nom, int ed, float pe): nombre(nom), edad(ed), peso(pe){};

  std::string get_nombre();
  int get_edad();
  float get_peso();

  void set_nombre(std::string );
  void set_edad(int );
  void set_peso(float );
};

//Constructor default de la clase Mascota
Mascota::Mascota(){
  nombre = "";
  edad = 0;
  peso = 0.0;
}

//getters de nombre, edad y peso
std::string Mascota::get_nombre(){
  return nombre;
}
int Mascota::get_edad(){
  return edad;
}
float Mascota::get_peso(){
  return peso;
}

//setters de nombre, edad y peso
void Mascota::set_nombre(std::string nom){
  nombre = nom;
}
void Mascota::set_edad(int ed){
  edad = ed;
}
void Mascota::set_peso(float pe){
  peso = pe;
}

#endif
