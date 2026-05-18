#include <iostream>
using namespace std;

int main(int argc, char **argv){
    cout<< "Recibí " <<argc <<  " argumentos\n";
    char *x = argv[1];
    int i=0;
    while (true){
        if (x[i]=='\0') break;
        cout<<x[i]<<endl;
        i++;
    }

}