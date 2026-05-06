#include <iostream>
#include <fstream>
#include "persona.h"
using namespace std;

int main(){
    for(int i=0; i<24; i++){

    string r= "cumples/" +to_string(i) + ".cumple";

    ifstream f2(r, fstream::out | fstream::binary);

    Persona x;
    f2.read((char *)&x, sizeof(x));

 

   cout<<x.nombre<<" ";
   cout<<x.apellido<<": ";
   cout<<x.dia<<"/";
   cout<<x.mes<<endl;
   f2.close();
   }
    

    //INSTRUCCIONES
    //subir su archivo de datos al drive indicado
    //descargar los archivos de todos sus compañeros 
    //crear un programa que una todos los datos en un 
    //solo archivo con toda la información
    //después, crear otro programa que lea la información
    //y permita preguntar un nombre y un apellido
    //y regresar su día y mes de cumpleaños (por nombre de mes)

}