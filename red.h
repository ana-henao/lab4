#ifndef RED_H
#define RED_H
#include<enrutador.h>


class red
{
private:
    enrutador Enrutadores[10]={};

public:
    red();
    red(enrutador a, enrutador b, enrutador c, enrutador d);
    void AgregarEnrutador(enrutador n);
    void EliminarEnrutador(char n);

};


#endif // RED_H
