#include<iostream>
using namespace std;
int main(){
    int x=9, y=12, temp;
    //pertukaran yang memakai variabel sementara
    cout << "Nilai Awal x=" << x << " dan y=" << y << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "setelah ditukar x=" << x << " dan y=" << y << endl;
    return 0;
}
