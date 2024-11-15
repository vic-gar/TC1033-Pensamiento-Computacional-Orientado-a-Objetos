/*
  * Proyecto Casa de Adopción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 07/11/2024
*/

/*
  * Clase Conejo contiene los metodos genéricos para llevar a cabo la gestión y
  * modificación de los valores raza y cantidad
*/

#include"Mascota.h"
#include<string>

//Declaración de clase Gato
class Conejo: public Mascota{
private:
  //Declaro variables
  std::string raza;
  float cantidad;

public:
  //Declaro métodos que tendra el objeto
  Conejo();
  Conejo(std::string nom,int ed,float pe,std::string raz):Mascota(nom, ed, pe){
    raza = raz;
  };

  std::string get_raza();

  void set_raza(std::string );

  float cantidadAlimentoConejo();
};

//Constructor default clase Gato
Conejo::Conejo(){
  raza = "";
}

//getters raza
std::string Conejo::get_raza(){
  return raza;
}

//setters de raza
void Conejo::set_raza(std::string raz){
  raza = raz;
}

//Método cantidad de alimento por peso (Pellets)
float Conejo::cantidadAlimentoConejo(){
  if (peso > 1.0 || peso < 2.0){
    cantidad = 12.5;
  } else if (peso >= 2.0 || peso < 4.0){
    cantidad = 25.0;
  } else if (peso >= 4.0 || peso < 6.0){
    cantidad = 50.0;
  } else if (peso >= 6.0){
    cantidad = 100.0;
  }
  return cantidad;
}
