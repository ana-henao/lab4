#include "enrutador.h"


using namespace std;

enrutador::enrutador(){
       this->nombre=' ';
}

enrutador::enrutador(char nom){
    this->nombre=nom;
    this->conex[nom]=0;

}

char enrutador::getNombre(){
    return this->nombre;
}

map<char,int> enrutador::getEnlaces(){
    return this->conex;
}

void enrutador::EliminarEnlace(char n){
    if(conex.find(n)==conex.end()){//no existe el enrutador
        cout<<"el enlace no se encuentra en el enrutador.";
    }
    else{
        conex.erase(n);

    }

}
void enrutador::AgregarEnlace(char n, int valor){
    if(conex.find(n)==conex.end()){//no existe el enrutador
        this->conex[n]=valor;
    }
    else{
        cout<<"el enlace ya se encuentra en el enrutador.";
    }
}

void enrutador::CambiarCosto(char n, int valor){
    if(conex.find(n)==conex.end()){//no existe el enrutador
        cout<<"el enlace no se encuentra en el enrutador.";

    }
    else{
        this->conex[n]=valor;
    }


}
