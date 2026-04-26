#include <iostream>

using namespace std;

int main (){

    int seg {};
    int dseg {}; //segundos depois da conversão
    int a {};
    int min {}; // minutos depois da conversão
    int h {}; // horas depois da conversão

    cout << "Digite o tempo em segundos: ";
    cin >> seg;
    cout << endl;

    dseg = seg%60;
    a = (seg - dseg)/60;
    min = a%60;
    h = (a - min)/60;

    cout << seg << " segundos equivalem a: " << h << "h " << min << "min " << dseg << "s" << endl;


    return 0;
}