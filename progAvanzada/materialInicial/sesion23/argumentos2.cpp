#include <iostream>
using namespace std;

int main(int argc, char **argv){
    cout<< "Recibí " <<argc <<  " argumentos\n";
    for (int i=1; i<argc; i++){
        cout<<"\t" <<argv[i] <<endl;
    }

}