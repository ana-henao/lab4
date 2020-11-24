#include <iostream>
#include<enrutador.h>
#include<red.h>
#include<fstream>

using namespace std;

void Lectura(string a);

int main()
{
   enrutador router1('A');
   enrutador router2('B');
   router1.AgregarEnlace('B',10);
   router2.AgregarEnlace('A',10);

   red red1("red1");
   red1.AgregarEnrutador(router1);
   red1.AgregarEnrutador(router2);
   red1.VerEnrutadores();
   red1.VerTablaEnlaces();
   //funcion obtener enrutador for del vector enrutador y comparar nombres y retornar el router
   //vector de enrutadores

   return 0;
}

//buscar el enrutador A (fouter1) funcion en la red1 que sea obtener enrutador asignar enlace con el nombre y buscar el router b
//y asignar enlace con a y con el valor

void Lectura(string a){
   string data;

   // Abre el archivo en modo lectura
   ifstream infile;

   // Se pone de manera explicita la ruta relativa donde se encuentra el archivo
   infile.open("../Practica4/red.txt");

   // Se comprueba si el archivo fue abierto exitosamente
   if (!infile.is_open())
   {
     cout << "Error abriendo el archivo" << endl;
     exit(1);
   }
   infile.close();
   //return data;
}
