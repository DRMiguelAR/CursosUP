#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream ofile("resultados.txt");
    int x= 10;
    int y= 20;

    ofile<< x+y <<" ";
    ofile<< y-x <<" ";
    ofile<< (x+y)/2 <<endl;

    ofile.close();
}