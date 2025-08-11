#include <iostream>

using namespace std;

void printItems(int n){

    for (int i = 0; i < n; i++ ){

        cout << i << endl;
    }

}

void printItemstwo(int n){

    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j ++){
            cout << i << j << endl;

        }
    }

}

int main(){
    printItems(5);
    printItemstwo(5);
}