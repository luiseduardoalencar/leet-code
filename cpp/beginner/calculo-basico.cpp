#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
float calcular(float a, float b ,float c,float x, float y ,float z){
    return (y*z+b*c);
;
} 

int main() {
float a,b,c,x,y,z;
  
cin>>a>>b>>c;
cin>>x>>y>>z;


float resultado = calcular(a,b,c,x,y,z);
cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " <<  resultado << endl;
    return 0;
}