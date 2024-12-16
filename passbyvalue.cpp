#include<iostream>
using namespace std;

void incrementByOne(int n){
    n = n + 1;
}

int main(){

    int a = 10;
    incrementByOne(a);
    cout << a << endl;
    return 0;
    
}