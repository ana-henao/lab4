#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include<string>
#include<iostream>

using namespace std;

class enrutador//topologia
{

private:
    char nombre=' ';
    int conex[10]={};

public:
    enrutador();
    enrutador(char nom, int v1, int v2, int v3);//valores enrutadores conectados
    char getNombre();
    int* getCostos();
    void EliminarEnrutador(int pos);
    void AgregarEnrutador(int pos, int valor);
    void CambiarCosto(int pos, int valor);


};

#endif // ENRUTADOR_H
/*
nombre
costo
eliminar
relacionar un enrutador con otro

*/
