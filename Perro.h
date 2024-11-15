/*
  * Proyecto Casa de Adopción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 07/11/2024
*/

/*
  * Clase Perro contiene los metodos genéricos para llevar a cabo la gestión y
  * modificación de los valores raza y cantidad (comida)
*/

#include"Mascota.h"
#include<string>

//Declaración de clase Perro
class Perro: public Mascota{
private:
  //Declaro variables
  std::string raza;
  float cantidad;

public:
  //Declaro métodos que tendra el objeto
  Perro();
  Perro(std::string nom,int ed,float pe,std::string raz): Mascota(nom, ed, pe){
    raza = raz;
  };

  std::string get_raza();

  void set_raza(std::string );

  float cantidadAlimentoPerro();
};

//Constructor default clase Perro
Perro::Perro(){
  raza = "";
}

//getters raza
std::string Perro::get_raza(){
  return raza;
}

//setters de raza
void Perro::set_raza(std::string raz){
  raza = raz;
}

//Método cantidad de alimento por peso (croquetas)
float Perro::cantidadAlimentoPerro(){
  if (peso > 1.0 || peso < 5.0){
    cantidad = 65.0;
  } else if (peso >= 5.0 || peso < 10.0){
    cantidad = 135.0;
  } else if (peso >= 10.0 || peso < 20.0){
    cantidad = 235.0;
  } else if (peso >= 20.0 || peso < 30.0){
    cantidad = 350.0;
  } else if (peso >= 30.0 || peso < 40.0){
    cantidad = 450.0;
  } else if (peso >= 40.0 || peso < 50.0){
    cantidad = 550.0;
  } else if (peso >= 50.0){
    cantidad = 600.0;
  }
  return cantidad;
}
