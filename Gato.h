/*
  * Proyecto Casa de Adopción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 07/11/2024
*/

/*
  * Clase Gato contiene los metodos genéricos para llevar a cabo la gestión y
  * modificación de los valores raza y cantidad (comida)
*/

#include"Mascota.h"
#include<string>

//Declaración de clase Gato
class Gato: public Mascota{
private:
  //Declaro variables
  std::string raza;
  float cantidad;

public:
  //Declaro métodos que tendra el objeto
  Gato();
  Gato(std::string nom, int ed, float pe, std::string raz):Mascota(nom, ed, pe){
    raza = raz;
  };

  std::string get_raza();

  void set_raza(std::string );

  float cantidadAlimentoGato();
};

//Constructor default clase Gato
Gato::Gato(){
  raza = "";
}

//getters raza
std::string Gato::get_raza(){
  return raza;
}

//setters de raza
void Gato::set_raza(std::string raz){
  raza = raz;
}

//Método cantidad de alimento por peso (comida seca)
float Gato::cantidadAlimentoGato(){
  if (peso > 1.0 || peso < 2.0){
    cantidad = 22.5;
  } else if (peso >= 2.0 || peso < 3.0){
    cantidad = 37.5;
  } else if (peso >= 3.0 || peso < 4.0){
    cantidad = 52.5;
  } else if (peso >= 4.0 || peso < 5.0){
    cantidad = 67.5;
  } else if (peso >= 5.0 || peso < 6.0){
    cantidad = 82.5;
  } else if (peso >= 6.0){
    cantidad = 90.0;
  }
  return cantidad;
}
