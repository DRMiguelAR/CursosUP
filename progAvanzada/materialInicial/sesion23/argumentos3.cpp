// PRÁCTICA 3 DE ARGUMENTOS

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    if (argc!=3){
        cerr<<"Debes mandar dos números\n";
        cerr<<"./suma n1 n2\n";
        return 0;
    }   
    int x, y;
    x= atoi(argv[1]);
    y= atoi(argv[2]);
    cout<<"La suma de " <<x <<" + " <<y <<" = " <<x+y<<endl;
}