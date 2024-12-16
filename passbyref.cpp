#include<iostream>
using namespace std;

int incrementByOne(int &n){
        return ++n;
}

int main(){

    int a = 10;
    cout << incrementByOne(a) << endl;
    return 0;
    
}