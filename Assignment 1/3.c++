#include <iostream>
#include <cmath> 
using namespace std; 

float add(float x,float y){
    return x+y;
}

float sub(float x,float y){
    return x-y;
}

float div(float x, float y) {
    if (y == 0) {
        cerr << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle error as needed
    }
    return x / y;
}

int mod(int x, int y) {
    if (y == 0) {
        cout << "Error: Modulus by zero!" << endl;
        return 0; // Return 0 or handle error as needed
    }
}

float ln(float x){
    return log(x);
}

int main(){
    int n;
    cout << "Enter no of operations :";
    cin >> n;
    // cout << ln(1);
}