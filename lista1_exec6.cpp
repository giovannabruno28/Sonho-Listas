#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int num {};
    cout << "Digite um número de 3 digitos: ";
    cin >> num;
    cout << endl;

    int cen {};
    int dez {};
    int un {};
    int a {};

    cen = num/100;
    a = num%100; //resto da divisão por 100 = xxx
    dez = (a)/10;
    un = a%10; 

    int ncen {}; //nova centena
    int ndez {};
    int nun {};

    ncen = un;
    ndez = dez;
    nun = cen;

    int novo_num {};

    novo_num = 100*ncen + 10*ndez + nun;

    cout << left;
    cout << setw(25) <<"Número original :" << setw(10) << num << endl;
    cout << setw(25) <<"Número invertido :" << setw(10) << novo_num << endl;
    
    return 0;
}