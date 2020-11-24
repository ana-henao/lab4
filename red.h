#ifndef RED_H
#define RED_H
#include<enrutador.h>
#include<map>

class red
{
private:
    map<char,enrutador> Enrutadores;
    string nombre;

public:
    red(string nombre);
    void AgregarEnrutador(enrutador n);
    void EliminarEnrutador(char n);//char
    void VerEnrutadores();
    void VerTablaEnlaces();
    void obtenerEnrutador();


};


#endif // RED_H
