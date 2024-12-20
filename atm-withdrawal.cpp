#include<iostream>
using namespace std;

int withdraw( int &amount , int withdrawalamount, int &tennote, int &twentynote, int &hundrednote, int &twohundrednote, int &fivehundrednote){
    
    if(withdrawalamount % 500 == 0){
        int x = withdrawalamount / 500;
        fivehundrednote = fivehundrednote - x;
        amount = amount - withdrawalamount;
        return amount;
    }

    else if(withdrawalamount % 200 == 0){
        int x = withdrawalamount / 200;
        twohundrednote = twohundrednote - x;
        amount = amount - withdrawalamount;
        return amount;
    }

    else if(withdrawalamount % 100 == 0){
        int x = withdrawalamount / 100;
        hundrednote = hundrednote - x;
        amount = amount - withdrawalamount;
        return amount;
    }

    else if(withdrawalamount % 20 == 0){
        if()
        int x = withdrawalamount / 20;
        twentynote = twentynote - x;
        amount = amount - withdrawalamount;
        return amount;
    }

    else{
        int x = withdrawalamount / 10;
        tennote = tennote - x;
        amount = amount - withdrawalamount;
        return amount;
    }

    return 0;

}

int main(){

    int tennote = 100;
    int twentynote = 50;
    int hundrednote = 10;
    int twohundrednote = 5;
    int fivehundrednote = 2;

    while(true){

    int amount = tennote * 10 + twentynote * 20 + hundrednote * 100 + twohundrednote * 200 + fivehundrednote * 500;

    int withdrawalamount;

    cout << "Enter the withdrawalamount" << endl;
    cin >> withdrawalamount;

    if(withdrawalamount == -1){
        break;
    }
    if(amount < withdrawalamount){
        cout << "Balance is not sufficient" << endl;
    }

    else{

        int balance = withdraw(amount, withdrawalamount, tennote, twentynote, hundrednote, twohundrednote, fivehundrednote);

        cout << "Current Balance " << balance << endl;
        cout << "No. of tennote - " << tennote << endl;
        cout << "No. of twentynote - " << twentynote << endl;
        cout << "No. of hundrednote - " << hundrednote << endl;
        cout << "No. of twohundrednote - " << twohundrednote << endl;
        cout << "No. of fivehundrednote - " << fivehundrednote << endl;

    }

    }

    return 0;
}

