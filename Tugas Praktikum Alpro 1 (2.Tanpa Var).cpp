#include<iostream>
using namespace std;
int main(){
    int x=9, y=12, temp;
    //pertukaran yang tidak pakai variabel sementara
    cout << "Nilai Awal x=" << x << " dan y=" << y << endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "setelah ditukar x=" << x << " dan y=" << y << endl;
    return 0;
}
