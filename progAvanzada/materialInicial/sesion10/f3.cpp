#include <iostream>
using namespace std;

int pot3(int);
int main(){
    int x;
    cin>>x;
    cout<<pot3(x) <<endl;
}
int pot3(int x){
    if (x==0) return 1;
    return 3*pot3(x-1);
}
