#include <stdio.h>
#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
 
double A, B;

cin >> A;
cin >> B;
if(A<0 || A > 10 || B<0 || B> 10){
    return 0;
}
cout << fixed << setprecision(5) << "MEDIA = " << (A * 3.5 + B *7.5)/11 << endl;

    return 0;
}