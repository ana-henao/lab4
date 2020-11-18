#include <iostream>
#include<enrutador.h>

using namespace std;

int main()
{
   enrutador router1('A',4,7,5);
   int* costos=router1.getCostos();
   for(int i=0; i<10; i++){
       cout<< *(costos+i)<< endl;
   }
   router1.AgregarEnrutador(5, 10);
   costos=router1.getCostos();
   for(int i=0; i<10; i++){
       cout<< *(costos+i)<< endl;
   }
   router1.EliminarEnrutador(9);
   return 0;
}
