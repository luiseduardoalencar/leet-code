/**
 * Operações Bitwise
 * 
 * ex: 
 * a = 12 => 00001100
 * b = 10 => 00001010
 * 
 * AND = & 
 * 12 & 10 = 00001100 * 00001010 = 00001000
 * 
 * OR = |
 * 
 * 12 | 10 = 00001100 or 00001010 = 00001110
 * 
 * XOR = ^ 
 * 
 * 12 ^ 10 = 00001100 ^ 00001010 = 00000110
 */

#include <iostream>
using namespace std;

int main(){
    
    long long int a, b;

    while(cin >> a >> b){
        cout << (a^b) << endl;
    }
    
    return 0;
}
