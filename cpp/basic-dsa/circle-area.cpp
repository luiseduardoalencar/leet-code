#include<iostream>
using namespace std;

int main(){

    double area, raio;
    float pi = 3.14159;

    std::cout << "raio: ";
    std::cin >> raio;
    area = pi * raio * raio;

    std::cout << "A=" << area << endl;

    return 0;

}