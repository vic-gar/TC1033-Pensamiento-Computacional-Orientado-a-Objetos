# TC1033-Pensamiento-Computacional-Orientado-a-Objetos

## CONTEXTO
Una casa de acogida animal necesita llevar un registro de los animales que entran a la casa y de distintos datos para categorizarlos hasta que estos sean adoptados. Se les categorizará por el tipo de animal y serán distingidos por su nombre, raza y edad, además de que se aportarán diversos datos de salud para sus futuros dueños. 

## FUNCIONALIDAD 
El programa por el momento sol permite el acceso a los datos de cada animal y de modificar estos datos, además del cálculo de su alimento diario depnediendo de su peso y del tipo de mascota que sea.

## CORRECCIONES
1. Se separaron las clases en distintos archivos .h y se modificó el nombre del include.
2. Se incluyeron los constructores en el Diagrama de Clases.
3. Se modificó el simbolo en el UML de los atributos protected de la clase Mascota.
4. Se modificó el como se imprimen los nombres y razas de las mascotas, esto para evitar un problema que sucede al momento de querer colocar un nombre o raza con dos o mas palabras separadas por espacios.
> ANTES:
  > std::cin >> nombre;
  > std::cin >> raza;

> NUEVO:
  > std::cin.ignore();
  > std::getline(std::cin, nombre);
  > std::cin.ignore();
  > std::getline(std::cin, raza);
