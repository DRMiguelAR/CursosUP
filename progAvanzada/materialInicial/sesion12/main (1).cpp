#include <iostream>
using namespace std;
void pintarTorre(){cout<<"    |    ";}
void pintarVacio(){for(int i=0; i<3; i++){pintarTorre();}}
void pintarBase(){cout<<"=============================";}
void pintarTorres(){
    for(int i=0; i<6; i++){
        pintarVacio();
        cout<<endl;
    }
    pintarBase();
    cout<<endl;
}
int main(){
    pintarTorres();
}