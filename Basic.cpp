#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void swap(int *x , int *y){
    int swap = *x;
    *x = *y;
    *y = swap;
}

void chngstr(string s){
    s[1] = 't';
    cout<<s;
}


int main(){

    int x = 200;
    int y = 300;

    swap(&x , &y);
    cout<<x<<endl;
    cout<<y<<endl;

    string s;
    cin>>s;
    chngstr(s);




    //Learning about some basic pointer stuff
    int a = 10;

    cout<<&a<<endl;
    int n = 5;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    cout<<&arr[0]<<endl;

   

    return 0;
}