#include <iostream>
#include <fstream>
#include <cstring>
#include "persona.h"
using namespace std;

int main(){
    Persona yo;
    strcpy(yo.nombre,"Hannah");
    strcpy(yo.apellido,"Fabián");
    yo.dia=29;
    yo.mes=2;

    ofstream f("cumples/1.cumple", fstream::binary);
    f.write( (char *)&yo, sizeof(Persona));
    f.close();


    int i=0;
    string t=".cumple";
    string r= to_string(i) + t;

    ifstream f2(r, fstream::binary);
    Persona x;
    f2.read((char *)&x, sizeof(Persona));
    
    
    cout<<x.nombre <<" " <<x.apellido 
        <<" " <<x.dia <<" " <<x.mes <<endl;
    f2.close();
    

    //INSTRUCCIONES
    //subir su archivo de datos al drive indicado
    //descargar los archivos de todos sus compañeros 
    //crear un programa que una todos los datos en un 
    //solo archivo con toda la información
    //después, crear otro programa que lea la información
    //y permita preguntar un nombre y un apellido
    //y regresar su día y mes de cumpleaños (por nombre de mes)

}