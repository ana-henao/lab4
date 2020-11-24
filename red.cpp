#include "red.h"


using namespace std;

red::red(string nombre){
    this->nombre=nombre;
}

void red::AgregarEnrutador(enrutador n){
    if(Enrutadores.find(n.getNombre())==Enrutadores.end()){//no existe el enrutador
        this->Enrutadores[n.getNombre()]=n;
    }
    else{
        cout<<"El enrutador ya se encuentra en la red.";
    }
}

void red::EliminarEnrutador(char n){//char problemas en tipos de variables
    if(Enrutadores.find(n)==Enrutadores.end()){//no existe el enrutador
        cout<<"El enrutador no existe en la red.";
    }
    else{
        Enrutadores.erase(n);
    }
}

void red::VerEnrutadores(){
    map <char,enrutador>::iterator it=Enrutadores.begin();
    while (it!=Enrutadores.end()) {
        enrutador e=it->second;
        cout << "Enrutador: "<< e.getNombre()<<endl;
        it++;
    }

}

void red::VerTablaEnlaces(){
    map <char,enrutador>::iterator it=Enrutadores.begin();
    while (it!=Enrutadores.end()) {//cambia de enrutador
        enrutador e=it->second;
        cout << "Enrutador: "<< e.getNombre();
        map<char, int> enlaces=e.getEnlaces();
        map <char,int>::iterator it_=enlaces.begin();
        while (it_!=enlaces.end()) {//cambia de enlace, muestra cada enlce del enrutador
            int valor=it_->second;
            cout << " "<< valor;
            it_++;

        }
        it++;
        cout << endl;
    }
}

void red::obtenerEnrutador(){

}
