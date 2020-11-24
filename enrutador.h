#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include<string>
#include<iostream>
#include<map>

using namespace std;

class enrutador//topologia
{

private:
    char nombre=' ';
    map<char,int> conex;

public:
    enrutador();
    enrutador(char nom);//valores enrutadores conectados
    char getNombre();
    map<char,int> getEnlaces();
    void EliminarEnlace(char n);
    void AgregarEnlace(char n, int valor);
    void CambiarCosto(char n, int valor);


};

#endif // ENRUTADOR_H
/*
nombre
costo
eliminar
relacionar un enrutador con otro

*/
