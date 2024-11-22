/*
  * Proyecto Casa de Adopción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 21/11/2024
*/

/*
 * Clase Casa, maneja grupos de de mascotas, divididos en Perros, Gatos y
 * Conejos
 */

#ifndef CASA_H_
#define CASA_H_
#include<string>
#include<iostream>

#include "Mascota.h"

class Casa{
private:
  //Declaro las variables de instancia
  Perro perros[100];
  Gato gatos[100];
  Conejo conejos[100];
  int max_perros;
  int max_gatos;
  int max_conejos;

public:
  //Constructor
  Casa();
  //Métodos miembros de la clase
  void imprimePerros();
  void imprimeGatos();
  void imprimeConejos();
  void comidaPerros();
  void comidaGatos();
  void comidaConejos();
  void agregaPerro(std::string, int, float, std::string);
  void agregaGato(std::string, int, float, std::string);
  void agregaConejo(std::string, int, float, std::string);
};

/**
 * Constructor por default
 *
 * @return Objeto Casa
 */
Casa::Casa(){
  max_perros = 0;
  max_gatos = 0;
  max_conejos = 0;
}

/**
 * Se utiliza el arreglo de Perro y su maximo.
 * Recorre todo el arreglo, imprimiendo cada uno de los objetos dentro del mismo
 * arreglo.
 *
 * @return
*/
void Casa::imprimePerros(){
  std::cout << "\nInformacion de Perros\n";
  for(int i = 0; i < max_perros; i++){
    std::cout << perros[i].toString();
  }
}

/**
 * Se utiliza el arreglo de Gato y su maximo.
 * Recorre todo el arreglo, imprimiendo cada uno de los objetos dentro del mismo
 * arreglo.
 *
 * @return
*/
void Casa::imprimeGatos(){
  std::cout << "\nInformacion de Gatos\n";
  for(int i = 0; i < max_gatos; i++){
    std::cout << gatos[i].toString();
  }
}

/**
 * Se utiliza el arreglo de Conejos y su maximo.
 * Recorre todo el arreglo, imprimiendo cada uno de los objetos dentro del mismo
 * arreglo.
 *
 * @return
*/
void Casa::imprimeConejos(){
  std::cout << "\nInformacion de Conejos\n";
  for(int i = 0; i < max_conejos; i++){
    std::cout << conejos[i].toString();
  }
}

/**
 * Utiliza el arreglo Perros y su maximo.
 * imprime las cantidades de comida necesarias para cada perro dentro del
 * arreglo
 *
 * @param
 * @return
*/
void Casa::comidaPerros(){
  std::cout << "\nCantidad de alimento (Perros)\n";
  for (int i = 0; i < max_perros; i++){
    std::cout << perros[i].get_nombre() << ": " <<
    perros[i].cantidadAlimentoPerro() << "g\n";
  }
}

/**
 * Utiliza el arreglo Gatos y su maximo.
 * imprime las cantidades de comida necesarias para cada gato dentro del
 * arreglo
 *
 * @param
 * @return
*/
void Casa::comidaGatos(){
  std::cout << "\nCantidad de alimento (Gatos)\n";
  for (int i = 0; i < max_gatos; i++){
    std::cout << gatos[i].get_nombre() << ": " <<
    gatos[i].cantidadAlimentoGato() << "g\n";
  }
}

/**
 * Utiliza el arreglo Conejos y su maximo.
 * imprime las cantidades de comida necesarias para cada conejo dentro del
 * arreglo
 *
 * @param
 * @return
*/
void Casa::comidaConejos(){
  std::cout << "\nCantidad de alimento (Conejos)\n";
  for (int i = 0; i < max_conejos; i++){
    std::cout << conejos[i].get_nombre() << ": " <<
    conejos[i].cantidadAlimentoConejo() << "g\n";
  }
}

/**
 * Utiliza arreglo de perros y su maximo
 * Recibe el nombre, la edad, el peso y la raza
 * El metodo agrega un nuevo objeto Perro y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Casa::agregaPerro(std::string nom, int edad, float peso, std::string raza){
    perros[max_perros] = Perro(nom, edad, peso, raza);
    max_perros += 1;
}

/**
 * Utiliza arreglo de gatos y su maximo
 * Recibe el nombre, la edad, el peso y la raza
 * El metodo agrega un nuevo objeto Gato y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Casa::agregaGato(std::string nom, int edad, float peso, std::string raza){
    gatos[max_gatos] = Gato(nom, edad, peso, raza);
    max_gatos += 1;
}

/**
 * Utiliza arreglo de conejos y su maximo
 * Recibe el nombre, la edad, el peso y la raza
 * El metodo agrega un nuevo objeto Conejo y lo agrega al arreglo
 *
 * @param
 * @return
 */
void Casa::agregaConejo(std::string nom,int edad,float peso, std::string raza){
    conejos[max_conejos] = Conejo(nom, edad, peso, raza);
    max_conejos += 1;
}

#endif
