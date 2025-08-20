#include <iostream>

using namespace std;

#define pi 3.14159 // aqui eu defino uma constante global

int n1, n2; // defino uma variável global

int main()
{

    int n3, n4;

    int n5 = 0;
    int n6 = 10;
    cout << n5;

    n5 = n5 + 1; // incremento
    cout << n5;

    n5 += 1; // incremento
    cout << n5;

    n5++; // incremento

    cout << n5;

    n5 *= 2;
    cout << n5;
    n5 *= 6;
    cout << n5;
    n5 /= 2;
    cout << n5;

    // pos-fixado e pre fixado
    ++n5; // aqui a variavel mostra o valor ja incrementado
    n5++; // aqui a variavel ao ser printada ela n está ainda incrementada

    // int vidas=3, tiros=500, life=100;

    // cout << pi << endl;

    // char letra='B'; //b
    // double decimal=5.2; //2,5
    // float decimal2=5.2;//2,5
    // bool vivo=true; //true or false
    // string nome="Bruno"; //"luis"

    // cout << "Digite o numero de vidas: ";
    // cin >> vidas;
    // cout << "Digite uma letra: ";
    // cin >> letra;
    // cout << "Digite o numero decimal: ";
    // cin >> decimal;
    // cout << "Digite seu nome: ";
    // cin >> nome;
    // cout << vidas << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n";


    //operador de inversão

    //aqui o valor da variavel n muda, ele só está com o seu valor invertido momentaneamente
    int num = 10;

    cout << -num << endl;
    cout << num << endl;

    return 0;
}