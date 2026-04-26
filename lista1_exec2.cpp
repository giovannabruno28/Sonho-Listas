#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    float C {}; //temp em celsius 
    float F {}; // temp em fahrenheit
    float K {}; // temp em kelvin

    cout << "Digite a temperatura em Celsius: ";
    cin >> C;
    cout << endl;

    F = 9*C/5 + 32;
    K = C + 273;

    cout << fixed <<setprecision(2);
    cout << left;
    cout << "========================================" << endl;
    cout << setw(30) <<"Conversão de Temperatura"<< endl;
    cout << "========================================" << endl;
    cout << setw(25) <<"Celsius:"<< setw(25) << C << "°C" << endl;
    cout << setw(25) <<"Fahrenheit:"<< setw(25) << F << "°F" << endl;
    cout << setw(25) <<"Kelvin:"<< setw(25) << K << "K" << endl;
    cout << "========================================" << endl;


    return 0;
}