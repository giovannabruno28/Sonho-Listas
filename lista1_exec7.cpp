#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int qth {}; //qtt de horas
    float vh {}; // valor da hora
    float sal_br {}; //salário bruto

    cout << "Digite o valor da hora trabalho: ";
    cin >> vh;
    cout << endl;

    cout << "Digite a quantidade de horas trabalhadas no mês: ";
    cin >> qth;
    cout << endl;

    sal_br = vh * qth;

    //Taxas

    float inss {0.11f};
    float irrf {0.15f};
    float sind {0.01f};
    float vt {0.06f};

    float fgts {0.08f};

    float sal_liq {};

    float total_desc {};

    //Cálculos

    inss = inss * sal_br;
    irrf = irrf * sal_br;
    sind = sind * sal_br;
    vt = vt * sal_br;
    fgts = fgts * sal_br;

    total_desc = inss + irrf + sind + vt;

    sal_liq = sal_br - total_desc;

    cout << fixed <<setprecision(2);
    cout << left;
    cout << setw(30) <<"Salário Bruto: " << setw(15) << "R$" << sal_br << endl;
    cout << setw(30) <<"(-) INSS (11%): " << setw(15) << "R$" << inss << endl;
    cout << setw(30) <<"(-) IRRF (15%): " << setw(15) << "R$" << irrf << endl;
    cout << setw(30) <<"(-) Sindicato (1%): " << setw(15) << "R$" << sind << endl;
    cout << setw(30) <<"(-) Vale Transporte (6%): " << setw(15) << "R$" << vt << endl;
    cout << "===========================================================" << endl;
    cout << setw(30) <<"Total de Descontos: " << setw(15) << "R$" << total_desc << endl;
    cout << setw(30) <<"Salario Liquido: " << setw(15) << "R$" << sal_liq << endl;
    cout << "===========================================================" << endl;
    cout << setw(30) <<"FGTS Recolhido (8%): " << setw(15) << "R$" << fgts << endl;

    return 0;
}