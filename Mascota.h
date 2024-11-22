/*
  * Proyecto Casa de Adopción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 21/11/2024
*/

/*
  * Clase Mascota contiene los metodos genéricos para llevar a cabo la gestión y
  * modificación de los valores nombre, edad y peso. Contiene 3 clases hijas que
  * son especificaciónes de Mascota: Perro, Gato y Conejo
*/
#ifndef MASCOTA_H_
#define MASCOTA_H_

#include <string>
#include <sstream>


//Declaración de clase Mascota
class Mascota {

protected:
  std::string nombre;
  int edad;
  float peso;

public:
  //Declaro el constructor por Default de la clase Mascota
  Mascota(): nombre(""), edad(0), peso(0.0){};
  /*
  Declaro el constructor donde recibe valores para llenar las variables de
  instancia
  */
  Mascota(std::string nom, int ed, float pe): nombre(nom), edad(ed), peso(pe){};

  //Declaro metodos que tendrá la clase
  std::string get_nombre();
  int get_edad();
  float get_peso();

  void set_nombre(std::string );
  void set_edad(int );
  void set_peso(float );

  std::string toString();
};

/**
 * getters nombre, edad y peso
 *
 * @return string: nombre de la mascota
 * @return entero: edad de la mascota
 * @return float: peso de la mascota
*/
std::string Mascota::get_nombre(){
  return nombre;
}
int Mascota::get_edad(){
  return edad;
}
float Mascota::get_peso(){
  return peso;
}

/**
 * setters nombre, edad y peso
 *
 * guarda string: nombre de la mascota
 * guarda entero: edad de la mascota
 * guarda float: peso de la mascota
*/
void Mascota::set_nombre(std::string nom){
  nombre = nom;
}
void Mascota::set_edad(int ed){
  edad = ed;
}
void Mascota::set_peso(float pe){
  peso = pe;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de mascota
*/
std::string Mascota::toString(){
  std::stringstream ss;
  ss << nombre << ": Edad -> " << edad << ", Peso -> " << peso << "\n";
  return ss.str();
}

//Declaro objeto Perro que hereda de Empleado
class Perro: public Mascota{
private:
  //Declaro variables
  std::string raza;
  float cantidad_perro;

public:
  //Declaro el constructor por Default de la clase Perro
  Perro();
  /*
  Declaro el constructor donde recibe valores para llenar las variables de
  instancia
  */
  Perro(std::string nom,int ed,float pe,std::string raz): Mascota(nom, ed, pe){
    raza = raz;
  };

  //Declaro métodos que tendra el objeto
  std::string get_raza();
  void set_raza(std::string );
  float cantidadAlimentoPerro();
  std::string toString();
};

//Constructor default clase Perro
Perro::Perro(){
  raza = "";
}

/**
 * getter raza
 *
 * @return string: raza del perro
*/
std::string Perro::get_raza(){
  return raza;
}

/**
 * setters raza
 *
 * guarda string: raza del perro
*/
void Perro::set_raza(std::string raz){
  raza = raz;
}

/**
 * Metodo que calcula la cantidad de alimento (croquetas) por peso del perro en
 * gramos
 *
 * @param
 * @return float cantidad de alimento
*/
float Perro::cantidadAlimentoPerro(){
  if (peso >= 1.0 && peso < 5.0){
    cantidad_perro = 65.0;
  }
  else if (peso >= 5.0 && peso < 10.0){
    cantidad_perro = 135.0;
  }
  else if (peso >= 10.0 && peso < 20.0){
    cantidad_perro = 235.0;
  }
  else if (peso >= 20.0 && peso < 30.0){
    cantidad_perro = 350.0;
  }
  else if (peso >= 30.0 && peso < 40.0){
    cantidad_perro = 450.0;
  }
  else if (peso >= 40.0 && peso < 50.0){
    cantidad_perro = 550.0;
  }
  else if (peso >= 50.0){
    cantidad_perro = 600.0;
  }
  return cantidad_perro;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del objeto Perro
*/
std::string Perro::toString(){
  std::stringstream ss;
  ss << nombre << ": Edad -> " << edad << ", Peso -> "
  << peso << "kg, Raza -> " << raza << "\n";
  return ss.str();
}

//Declaro objeto Gato que hereda de Empleado
class Gato: public Mascota{
private:
  //Declaro variables
  std::string raza;
  float cantidad_gato;

public:
  //Declaro el constructor por Default de la clase Gato
  Gato();
  /*
  Declaro el constructor donde recibe valores para llenar las variables de
  instancia
  */
  Gato(std::string nom, int ed, float pe, std::string raz):Mascota(nom, ed, pe){
    raza = raz;
  };

  //Declaro métodos que tendra el objeto
  std::string get_raza();
  void set_raza(std::string );
  float cantidadAlimentoGato();
  std::string toString();
};

//Constructor default clase Gato
Gato::Gato(){
  raza = "";
}

/**
 * getter raza
 *
 * @return string: raza del gato
*/
std::string Gato::get_raza(){
  return raza;
}

/**
 * setters raza
 *
 * guarda string: raza del gato
*/
void Gato::set_raza(std::string raz){
  raza = raz;
}

/**
 * Metodo que calcula la cantidad de alimento (comida seca) por peso del gato en
 * gramos
 *
 * @param
 * @return float cantidad de alimento
*/
float Gato::cantidadAlimentoGato(){
  if (peso >= 1.0 && peso < 2.0){
    cantidad_gato = 22.5;
  }
  else if (peso >= 2.0 && peso < 3.0){
    cantidad_gato = 37.5;
  }
  else if (peso >= 3.0 && peso < 4.0){
    cantidad_gato = 52.5;
  }
  else if (peso >= 4.0 && peso < 5.0){
    cantidad_gato = 67.5;
  }
  else if (peso >= 5.0 && peso < 6.0){
    cantidad_gato = 82.5;
  }
  else if (peso >= 6.0){
    cantidad_gato = 90.0;
  }
  return cantidad_gato;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del objeto Gato
*/
std::string Gato::toString(){
  std::stringstream ss;
  ss << nombre << ": Edad -> " << edad << ", Peso -> "
  << peso << "kg, Raza -> " << raza << "\n";
  return ss.str();
}

//Declaro objeto Conejo que hereda de Empleado
class Conejo: public Mascota{
private:
  //Declaro variables
  std::string raza;
  float cantidad_conejo;

public:
  //Declaro el constructor por Default de la clase Conejo
  Conejo();
  /*
  Declaro el constructor donde recibe valores para llenar las variables de
  instancia
  */
  Conejo(std::string nom,int ed,float pe,std::string raz): Mascota(nom, ed, pe){
    raza = raz;
  };

  //Declaro métodos que tendra el objeto
  std::string get_raza();
  void set_raza(std::string );
  float cantidadAlimentoConejo();
  std::string toString();
};

//Constructor default clase Conejo
Conejo::Conejo(){
  raza = "";
}

/**
 * getter raza
 *
 * @return string: raza del conejo
*/
std::string Conejo::get_raza(){
  return raza;
}

/**
 * setter raza
 *
 * guarda string: raza del conejo
*/
void Conejo::set_raza(std::string raz){
  raza = raz;
}

/**
 * Metodo que calcula la cantidad de alimento (pellets) por peso del conejo en
 * gramos
 *
 * @param
 * @return float cantidad de alimento
*/
float Conejo::cantidadAlimentoConejo(){
  if (peso >= 1.0 && peso < 2.0){
    cantidad_conejo = 12.5;
  }
  else if (peso >= 2.0 && peso < 4.0){
    cantidad_conejo = 25.0;
  }
  else if (peso >= 4.0 && peso < 6.0){
    cantidad_conejo = 50.0;
  }
  else if (peso >= 6.0){
    cantidad_conejo = 100.0;
  }
  return cantidad_conejo;
}

/**
 * Almacenda los valores de las variables de instancia en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos del objeto Conejo
*/
std::string Conejo::toString(){
  std::stringstream ss;
  ss << nombre << ": Edad -> " << edad << ", Peso -> "
  << peso << "kg, Raza -> " << raza << "\n";
  return ss.str();
}

#endif
