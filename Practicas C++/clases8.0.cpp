//clases 8
#include <iostream>

using namespace std;

class Persona
{
protected:
  char nombre[40];
  int edad;
public:
   void cargarDatosPersonales ();
   void imprimirDatosPersonales ();
};

class Empleado:public Persona
{
private:
  float sueldo;
public:
  void cargarSueldo ();
  void imprimirSueldo ();
};

void
Persona::cargarDatosPersonales ()
{
  cout << "ingrese nombre: ";
  cin.getline (nombre, 40);
  cout << "ingrese edad: ";
  cin >> edad;
  cin.ignore();
  cin.get ();
}

void
Persona::imprimirDatosPersonales ()
{
  cout << "nombre: " << nombre << endl;
  cout << "edad: " << edad << endl;
}

void
Empleado::cargarSueldo ()
{
  cout << "ingrese sueldo: ";
  cin >> sueldo;
}

void
Empleado::imprimirSueldo ()
{
  cout << "sueldo: " << sueldo << endl;
}

int
main ()
{
  Persona persona1;
  persona1.cargarDatosPersonales ();
  persona1.imprimirDatosPersonales ();

  Empleado empleado1;
  empleado1.cargarDatosPersonales ();
  empleado1.cargarSueldo ();
  empleado1.imprimirDatosPersonales ();
  empleado1.imprimirSueldo ();
  return 0;
}
