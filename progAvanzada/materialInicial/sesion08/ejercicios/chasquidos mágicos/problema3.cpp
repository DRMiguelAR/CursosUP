#include <iostream>
using namespace std;

int main(){
    int s, c;
    cin>> s >>c;
    int m;
    m= 1<<s-1;
    if (c & m == m) cout <<"PRENDIDA";
    else cout<< "APAGADO";
}