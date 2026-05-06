#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream ifile("canciones.txt");
    string cancion;

    while (getline(ifile, cancion)){
        cout<< cancion <<endl;
    } 

}