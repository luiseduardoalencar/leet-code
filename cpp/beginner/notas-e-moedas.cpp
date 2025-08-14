#include<iostream>
#include <math.h>
using namespace std;

int main(){
    float v;
    int valor;

    cin>>v;

    valor = static_cast<int>(round(v * 100));
   
    //eu transformo o valor inserido em centavos, e verifico se o valor inserido é maior que o valor da maior cédula, no caso de 100 reais
    //quando for menor que 100 reais, ou 10000 moedas, ele vai para o de baixo
    int cedulas_100 = valor / 10000;
    valor %= 10000;

    int cedulas_50 = valor / 5000;
    valor %= 5000;

    int cedulas_20 = valor / 2000;
    valor %= 2000;

    int cedulas_10 = valor / 1000;
    valor %= 1000;

    int cedulas_5 = valor / 500;
    valor %= 500;

    int cedulas_2 = valor / 200;
    valor %= 200;

    // --- MOEDAS ---
    int moedas_100 = valor / 100;
    valor %= 100;

    int moedas_50 = valor / 50;
    valor %= 50;

    int moedas_25 = valor / 25;
    valor %= 25;

    int moedas_10 = valor / 10;
    valor %= 10;

    int moedas_5 = valor / 5;
    valor %= 5;

    int moedas_1 = valor;
    valor%= 1;

    cout << "NOTAS:" << endl;
    cout << cedulas_100 << " nota(s) de R$ 100.00" << endl;
    cout << cedulas_50  << " nota(s) de R$ 50.00" << endl;
    cout << cedulas_20  << " nota(s) de R$ 20.00" << endl;
    cout << cedulas_10  << " nota(s) de R$ 10.00" << endl;
    cout << cedulas_5   << " nota(s) de R$ 5.00" << endl;
    cout << cedulas_2   << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << moedas_100 << " moeda(s) de R$ 1.00" << endl;
    cout << moedas_50  << " moeda(s) de R$ 0.50" << endl;
    cout << moedas_25  << " moeda(s) de R$ 0.25" << endl;
    cout << moedas_10  << " moeda(s) de R$ 0.10" << endl;
    cout << moedas_5   << " moeda(s) de R$ 0.05" << endl;
    cout << moedas_1   << " moeda(s) de R$ 0.01" << endl;


 return 0;

}