/*
  * Proyecto Casa de Apoción de mascotas
  * Víctor Adrián García Galván
  * A01713062
  * 07/11/2024
*/

/*
  * Clase Perro contiene los metodos genéricos para llevar a cabo la gestión y
  * modificación de los valores raza, nombre, edad y vacunación de los animales
*/


//Declaración de calse Perro
class Perro{
private:
  //Declaro variables
  std::string raza;
  std::string nombre;
  int edad;
  float peso;
  bool vacunacion;
  float cantidad;

public:
  //Declaro métodos que tendra el objeto
  Perro();
  Perro(std::string raz,std::string nom, int ed, float pe, bool vac):
  raza(raz), nombre(nom), edad(ed), peso(pe), vacunacion(vac){};

  std::string get_raza();
  std::string get_nombre();
  int get_edad();
  float get_peso();
  bool get_vacunacion();

  void set_raza(std::string );
  void set_nombre(std::string );
  void set_edad(int );
  void set_peso(float );
  void set_vacunacion(bool );

  float get_cantidad_alimento();
};

//Constructor clase Perro
Perro::Perro(){
  raza = "";
  nombre = "";
  edad = 0;
  peso = 0.0;
  vacunacion = false;
}

//getters raza, nombre, edad y vacunación
std::string Perro::get_raza(){
  return raza;
}
std::string Perro::get_nombre(){
  return nombre;
}
int Perro::get_edad(){
  return edad;
}
float Perro::get_peso(){
  return peso;
}
bool Perro::get_vacunacion(){
  return vacunacion;
}

//setters de raza, nombre, edad y vacunación
void Perro::set_raza(std::string raz){
  raza = raz;
}
void Perro::set_nombre(std::string nom){
  nombre = nom;
}
void Perro::set_edad(int ed){
  edad = ed;
}
void Perro::set_peso(float pe){
  peso = pe;
}
void Perro::set_vacunacion(bool vac){
  vacunacion = vac;
}

//Método cantidad de alimento por peso (croquetas)
float Perro::get_cantidad_alimento(){
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


/*
  * Clase Gato contiene los metodos genéricos para llevar a cabo la gestión y
  * modificación de los valores raza, nombre, edad y vacunación de los animales
*/

//Declaración de clase Gato
class Gato {
private:
  //Declaro variables
  std::string raza;
  std::string nombre;
  int edad;
  float peso;
  bool vacunacion;
  float cantidad;

public:
  //Declaro metodos que tendrá el objeto
  Gato();
  Gato(std::string raz, std::string nom, int ed,float pe, bool vac): raza(raz),
  nombre(nom), edad(ed), peso(pe), vacunacion(vac){};

  std::string get_raza();
  std::string get_nombre();
  int get_edad();
  float get_peso();
  bool get_vacunacion();

  void set_raza(std::string );
  void set_nombre(std::string );
  void set_edad(int );
  void set_peso(float );
  void set_vacunacion(bool );

  float get_cantidad_alimento();
};

//Constructor clase Gato
Gato::Gato(){
  raza = "";
  nombre = "";
  edad = 0;
  peso = 0.0;
  vacunacion = false;
}

//getters de raza, nombre, edad y vacunación
std::string Gato::get_raza(){
  return raza;
}
std::string Gato::get_nombre(){
  return nombre;
}
int Gato::get_edad(){
  return edad;
}
float Gato::get_peso(){
  return peso;
}
bool Gato::get_vacunacion(){
  return vacunacion;
}

//setters de raza, nombre, edad y vacunación
void Gato::set_raza(std::string raz){
  raza = raz;
}
void Gato::set_nombre(std::string nom){
  nombre = nom;
}
void Gato::set_edad(int ed){
  edad = ed;
}
void Gato::set_peso(float pe){
  peso = pe;
}
void Gato::set_vacunacion(bool vac){
  vacunacion = vac;
}

//Método cantidad de alimento por peso (comida seca)
float Gato::get_cantidad_alimento(){
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

/*
  * Clase Gato contiene los metodos genéricos para llevar a cabo la gestión y
  * modificación de los valores raza, nombre, edad y vacunación de los animales
*/

//Declaración de clase Conejo
class Conejo{
private:
  //Declaro variabes
  std::string raza;
  std::string nombre;
  int edad;
  float peso;
  bool vacunacion;
  float cantidad;

public:
  //Declaro métodos que tendra el objeto
  Conejo();
  Conejo(std::string raz,std::string nom,int ed, float pe, bool vac): raza(raz),
  nombre(nom), edad(ed), peso(pe), vacunacion(vac){};

  std::string get_raza();
  std::string get_nombre();
  int get_edad();
  float get_peso();
  bool get_vacunacion();

  void set_raza(std::string );
  void set_nombre(std::string );
  void set_edad(int );
  void set_peso(float );
  void set_vacunacion(bool );

  float get_cantidad_alimento();
};

//Constructor de la clase Conejo
Conejo::Conejo(){
  raza = "";
  nombre = "";
  edad = 0;
  peso = 0.0;
  vacunacion = false;
}

//getters de raza, nombre, edad y vacunación
std::string Conejo::get_raza(){
  return raza;
}
std::string Conejo::get_nombre(){
  return nombre;
}
int Conejo::get_edad(){
  return edad;
}
float Conejo::get_peso(){
  return peso;
}
bool Conejo::get_vacunacion(){
  return vacunacion;
}

//setters de raza, nombre, edad y vacunación
void Conejo::set_raza(std::string raz){
  raza = raz;
}
void Conejo::set_nombre(std::string nom){
  nombre = nom;
}
void Conejo::set_edad(int ed){
  edad = ed;
}
void Conejo::set_peso(float pe){
  peso = pe;
}
void Conejo::set_vacunacion(bool vac){
  vacunacion = vac;
}

//Método cantidad de alimento por peso (Pellets)
float Conejo::get_cantidad_alimento(){
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
