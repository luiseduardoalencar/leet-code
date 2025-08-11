#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){

    string A;
    double B,C;
    cin>>A;
    cin>>B;
    cin>>C;

    cout << fixed << setprecision(2) << "TOTAL = R$ "<< B + C * 0.15 << endl;

    return 0;
}