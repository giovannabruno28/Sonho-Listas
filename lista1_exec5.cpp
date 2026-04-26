#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int num {};
    cout << "Digite um número de 4 digitos: ";
    cin >> num;
    cout << endl;

    int mil {};
    int cen {};
    int dez {};
    int un {};
    int a {};
    int b {};

    mil = num/1000;
    a = num%1000; //resto da divisão por 1000 = xxx
    cen = (a)/100;
    b = a%100; //resto da divisão por 100 = xx
    dez = b/10;
    un = b%10;

    cout << left;
    cout << setw(25) <<"Dígito 1 (milhar):" << setw(10) << mil << endl;
    cout << setw(25) <<"Dígito 2 (centena):" << setw(10) << cen << endl;
    cout << setw(25) <<"Dígito 3 (dezena):" << setw(10) << dez << endl;
    cout << setw(25) <<"Dígito 4 (unidade):" << setw(10) << un << endl;

    return 0;
}