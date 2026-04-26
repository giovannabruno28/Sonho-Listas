#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int num1 {42};
    short int nume2 {100};
    long long num3 {500000};
    float num4 {3.14f};
    double num5 {2.72};
    char letra {'A'};
    bool vdd {true};


    cout << left;
    cout << "========================================" << endl;
    cout << setw(15) <<"Tipo"<< setw(15) << "Valor" << setw(15) << "Bytes" << endl;
    cout << "========================================" << endl;
    cout << setw(15) <<"int"<< setw(15) << num1 << setw(15) << sizeof(num1) << endl;
    cout << setw(15) <<"short"<< setw(15) << nume2 << setw(15) << sizeof(nume2) << endl;
    cout << setw(15) <<"long long"<< setw(15) << num3 << setw(15) << sizeof(num3) << endl;
    cout << setw(15) <<"float"<< setw(15) << num4 << setw(15) << sizeof(num4) << endl;
    cout << setw(15) <<"double"<< setw(15) << num5 << setw(15) << sizeof(num5) << endl;
    cout << setw(15) <<"char"<< setw(15) << letra << setw(15) << sizeof(letra) << endl;
    cout << setw(15) <<"bool"<< setw(15) << vdd << setw(15) << sizeof(vdd) << endl;
    cout << "========================================" << endl;
    
    
    return 0;
}