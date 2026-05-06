#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
   ifstream fresultados("resultados.txt");
   int x,y,z;
   fresultados>>x >>y >>z;
   cout<<"La suma de " <<x <<" " <<y <<" y " <<z;
   cout<<" es " <<x+y+z <<endl;
}