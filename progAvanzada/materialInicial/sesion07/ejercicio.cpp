#include <iostream>
#include <bitset>
using namespace std;

int main(){
    using bin8 = bitset<8>;
    using bin16 = bitset<16>;
    using bin32 = bitset<32>;
    short x = 35;
    int i= 4;
    int mask = 1<<i;
    int resultado;
    resultado= x|mask;
    
    cout<< x <<endl;
    cout<< (bin32)x <<endl;
    cout<<  (x>>i) <<endl;
    cout<< (bin32)(x>>i) <<endl;
}