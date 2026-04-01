#include <iostream>
using namespace std;

int suma(int);
int main(){
    cout<<"La suma del 1 al diez es " <<suma(10) <<endl;
}
int suma(int x){
    if (x==0)
        return 0;
    return x + suma(x-1);
}
