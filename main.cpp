/*
  * Proyecto Casa de Apoción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 07/11/2024
*/

/**
  * Descripción del Proyecto
  * Este proyecto para la clase de Pensamiento Computacional Orientado a Objetos
  * es un programa que guarda diferentes tipos de animales en una casa de
  * acojida con sus respectivos nombres, razas, edades, peso y datos de su
  * alimentación, calculando su dieta dependiendo de que animal es y de su peso.
**/

//Bibliotecas
#include <iostream> //Para imprimir
#include <string>
#include "Mascota.h" // Objetos de mi proyecto
#include "Casa.h"

//Menú
void menu(){
  //Imprime el menú de los métodos que se pueden utilizar
    std::cout << "\n============== Menu ==============\n";
    std::cout << "1. Agregar un Perro \n";
    std::cout << "2. Agregar un Gato \n";
    std::cout << "3. Agregar un Conejo \n";
    std::cout << "4. Mostrar Perros \n";
    std::cout << "5. Mostrar Gatos \n";
    std::cout << "6. Mostrar Conejos \n";
    std::cout << "7. Cantidad de alimento Perros \n";
    std::cout << "8. Cantidad de alimento Gatos \n";
    std::cout << "9. Cantidad de alimento Conejos \n";
    std::cout << "10. Salir \n";
}

//Main del programa
int main(){
  Casa casa;

  std::string nombre;
  int edad;
  float peso;
  std::string raza;

  int opcion = 0;

  //Ciclo para desplegar el menú de los metodos hasta que el usuario desee salir
  while(opcion < 10 && opcion >= 0){
    //Se imprime el menú
    menu();
    //Pide al usuario la opción que desea ejecutar
    std::cin >> opcion;

    //Condiciaonal para ejecuar la opción deseada por el usuario
    if (opcion == 1){
      std::cout << "Cual es su nombre\n";
      std::cin.ignore();
      std::getline(std::cin, nombre);
      std::cout << "Cual es su edad\n";
      std::cin >> edad;
      std::cout << "Cual es su peso\n";
      std::cin >> peso;
      std::cout << "Cual es su raza\n";
      std::cin.ignore();
      std::getline(std::cin, raza);
      casa.agregaPerro(nombre, edad, peso, raza);
    }
    else if (opcion == 2){
      std::cout << "Cual es su nombre\n";
      std::cin.ignore();
      std::getline(std::cin, nombre);
      std::cout << "Cual es su edad\n";
      std::cin >> edad;
      std::cout << "Cual es su peso\n";
      std::cin >> peso;
      std::cout << "Cual es su raza\n";
      std::cin.ignore();
      std::getline(std::cin, raza);
      casa.agregaGato(nombre, edad, peso, raza);
    }
    else if (opcion == 3){
      std::cout << "Cual es su nombre\n";
      std::cin.ignore();
      std::getline(std::cin, nombre);
      std::cout << "Cual es su edad\n";
      std::cin >> edad;
      std::cout << "Cual es su peso\n";
      std::cin >> peso;
      std::cout << "Cual es su raza\n";
      std::cin.ignore();
      std::getline(std::cin, raza);
      casa.agregaConejo(nombre, edad, peso, raza);
    }
    else if (opcion == 4){
      casa.imprimePerros();
    }
    else if (opcion == 5){
      casa.imprimeGatos();
    }
    else if (opcion == 6){
      casa.imprimeConejos();
    }
    else if (opcion == 7){
      casa.comidaPerros();
    }
    else if (opcion == 8){
      casa.comidaGatos();
    }
    else if (opcion == 9){
      casa.comidaConejos();
    }
    else if (opcion == 10){
      break;
    }
    else {
      std::cout << "\nEntrada invalida, intenta de nuevo.\n";
    }

  }

  return 0;
}
