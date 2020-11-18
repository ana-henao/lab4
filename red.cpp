#include "red.h"


using namespace std;

red::red(enrutador a, enrutador b, enrutador c, enrutador d){
    this->Enrutadores[0]=a;
    this->Enrutadores[1]=b;
    this->Enrutadores[2]=c;
    this->Enrutadores[3]=d;


}
void red::AgregarEnrutador(enrutador n){
    for(int i=0; i<10; i++){
        if(Enrutadores[i].getNombre()==NULL){
            Enrutadores[i]=n;
            break;
        }
    }
}

