using namespace std;
#include<iostream>

void reversehalfstar(int n){
    for(int i=0; i<5; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        
        for(int k=0; k<2*n-(2*i+1); k++){
            cout<<"*";
        }

        for(int l=0; l<i; l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void arrow(int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-(i+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
void zeroonepattern(int n){
    int ans = 1;
    for(int i=0; i<n; i++){
        if(i%2 !=0 ){
            ans = 0;
        }

        for(int j=0; j<=i; j++){
            cout<<ans;
            if(ans>0){
                ans--;
            }
            else{
                ans++;
            }
        }
        ans = 1;
        cout<<endl;

    }
}
void numspacenum(int n){
    int space = 2 * (n-1);
    
    
    for(int i=1; i<=n; i++){
        //number
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //spaces
        for(int k=1; k<=space; k++){
            cout<<" ";
        }
        //number
        for(int l=i; l>=1; l--){
            cout<<l;
        }
        space = space-2;
        cout<<endl;
    }
}
void numsequence(int n){
    int ans = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ans<<" ";
            ans++;
        }
        cout<<endl;
    }
}

void charseq(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch<= 'A' + i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(){
    int n=5;

    reversehalfstar(n);
    arrow(n);
    zeroonepattern(n);
    numspacenum(n);
    numsequence(n);
    charseq(n);


    return 0;
}