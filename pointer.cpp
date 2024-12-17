#include<iostream>
using namespace std;

int main(){

    int* intptr = new int(10);
    double* doubleptr = new double(10);
    float* floatptr = new float(10);
    char* chptr = new char('A');
    long* longptr = new long(10);
    short* shortptr = new short(10);
    bool* boolptr = new bool(false);
    unsigned int* uintPtr = new unsigned int(42);

    cout << uintPtr << " " << *uintPtr << endl;
    cout << intptr << " " << *intptr << endl;
    cout << doubleptr << " " << *doubleptr << endl;
    cout << floatptr << " " <<*floatptr << endl;
    cout << chptr << " " << *chptr << endl;
    cout << longptr << " " << *longptr << endl;
    cout << shortptr << " " << *shortptr << endl;
    cout << boolptr << " " << *boolptr << endl;


    return 0;
}