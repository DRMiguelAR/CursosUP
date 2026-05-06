#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int x=123;
    int y=27;
    ofstream f1("datosbin.out", fstream::binary);

    f1.write( (char *)&x, sizeof(int));
    f1.write( (char *)&y, sizeof(int));
    f1.close();

    ifstream f2("datosbin.out", fstream::binary);
    int w, z;
    f2.read((char *)&w, sizeof(int));
    f2.read((char *)&z, sizeof(int));
    cout<<w <<" "<<z <<endl;
}
