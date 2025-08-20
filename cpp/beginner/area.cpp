#include <iostream>
#include <iomanip>
using namespace std;

float calcarea(float a, float b, float c){

    float triangulo = (a*b)/2;
    float circulo = 3.14159*c*c;
    float trapezio = (a+b)*c/2;
    float quadrado = b*b;
    float retangulo = a*b;
    
    return triangulo, circulo, trapezio, quadrado, retangulo;
}

int main(){
    
    float a,b,c;
    cin >> a>>b>>c;
    float triangulo, circulo, trapezio, quadrado, retangulo;
    float resultado = calcarea(a,b,c);
    
    cout << fixed << setprecision(1) << "TRIANGULO: " << triangulo << endl;
    cout << fixed << setprecision(1)<< "CIRCULO: " << circulo << endl;
    cout << fixed << setprecision(1)<< "TRAPEZIO: " << trapezio << endl;
    cout << fixed << setprecision(1)<< "QUADRADO: " << quadrado << endl;
    cout << fixed << setprecision(1)<< "RETANGULO: " << retangulo << endl;
    
    return 0;

}