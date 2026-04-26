#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    float km {}; //velocidade em km/h
    float m {}; // velocidade em m/s
    float mph {}; // velocidade em milhas por hora

    cout << "Digite a velocidade em km/h: ";
    cin >> km;
    cout << endl;

    m = km/3.6;
    mph = km*0.621371;

    cout << fixed <<setprecision(2);
    cout << left;
    cout << "========================================" << endl;
    cout << setw(30) <<"Conversão de Velocidade"<< endl;
    cout << "========================================" << endl;
    cout << setw(25) << "km/h:"<< setw(25) << km << endl;
    cout << setw(25) <<"m/s:"<< setw(25) << m << endl;
    cout << setw(25) <<"mph:"<< setw(25) << mph << endl;
    cout << "========================================" << endl;


    return 0;
}