#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){

     srand(time(0));

        int randombit = rand() % 2; 
        
        if(randombit == 0){
            cout << "Employee is Absent" << endl;;
        }
        else{
            cout << "Employee is Present";
        }

    return 0;
}