#include "enrutador.h"


using namespace std;

enrutador::enrutador(){
       this->nombre=' ';
}

enrutador::enrutador(char nom, int v1, int v2, int v3){
    this->nombre=nom;
    this->conex[0]=0;
    this->conex[1]=v1;
    this->conex[2]=v2;
    this->conex[3]=v3;
    this->conex[4]=-1;
    this->conex[5]=-1;
    this->conex[6]=-1;
    this->conex[7]=-1;
    this->conex[8]=-1;
    this->conex[9]=-1;
}

char enrutador::getNombre(){
    return this->nombre;
}

int* enrutador::getCostos(){
    return this->conex;
}

void enrutador::EliminarEnrutador(int pos){
    if(conex[pos]==-1){
        cout <<"El enrutador no existe."<<endl;
    }
    else{
        this->conex[pos]=-1;//elimina el enrutador
    }

}
void enrutador::AgregarEnrutador(int pos, int valor){
    if(conex[pos]==-1){
        this->conex[pos]=valor;
    }
    else{
        cout <<"El enrutador ya existe."<<endl;
    }
}

void enrutador::CambiarCosto(int pos, int valor){
    if(conex[pos]==-1){
        cout <<"El enrutador no existe."<<endl;
    }
    else{
        this->conex[pos]=valor;
    }


}
