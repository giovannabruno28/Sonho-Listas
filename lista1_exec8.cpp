#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    float r {}; //resistencia
    float V {}; // tensão
    float t {}; // tempo
    float i {}; //corrente
    float P {}; //potencia
    float E {}; //energia

    cout << "Digite a resistência (ohms): ";
    cin >> r;
    cout << endl;

    cout << "Digite a tensão (volts): ";
    cin >> V;
    cout << endl;

    cout << "Digite o tempo (horas): ";
    cin >> t;
    cout << endl;

    i = V/r;
    P = r*i*i;
    E = P*t/1000;

    cout << fixed <<setprecision(2);
    cout << "===========================================================" << endl;
    cout << setfill(' ') << setw(40) <<"Circuito Elétrico" << endl;
     cout << "===========================================================" << endl;
    cout << left <<setfill('.');
    cout << setw(30) <<"Resistência: " << setw(15) << r << "ohms" << endl;
    cout << setw(30) <<"Tensão: " << setw(15) << V << "V" << endl;
    cout << setw(30) <<"Corrente: " << setw(15) << i << "A" << endl;
    cout << setw(30) <<"Potência " << setw(15) << P << "W" << endl;
    cout << setw(30) <<"Tempo: " << setw(15) << t << "h" << endl;
    cout << setw(30) <<"Energia consumida: " << setw(15) << E << "kWh" << endl;
    cout << "===========================================================" << endl;

    return 0;
}