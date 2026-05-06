#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int x=123;
    int y=27;
    ofstream f1("datos.out");
    f1<<x<<y;
    f1.close();

    ifstream f2("datos.out");
    int z;
    f2>>z;
    cout<<z;
    

}
