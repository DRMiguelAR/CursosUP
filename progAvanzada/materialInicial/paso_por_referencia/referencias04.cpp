#include <iostream>
using namespace std;

void sumauno(int* x){
    (*x) ++;
}
int main(){
    int a=10;
    int *p;
    p= &a;
    sumauno(p);
    cout<< a << endl; 
}