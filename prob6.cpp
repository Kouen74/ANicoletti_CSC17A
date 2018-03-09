
/* 
 * File:   prob6.cpp
 * Author: Andrew Nicoletti
 * Created on July 12, 2016, 12:10 PM
 * Purpose: Just another sequence
 */
 
#include <iostream>     // System Library
#include <cmath>        // Math Library
#include <iomanip>
using namespace std;    // Standard I/O Namespace

// User Libraries 

// Global Constants

// Functions Prototypes 

// Exe begins here

int main(int argc, char** argv) {
    float x,terms,result,expnent,fact;
    
    cout<<"Input for x"<<endl;
    cin>>x;
    cout<<"Input the number of terms"<<endl;
    cin>>terms;
    expnent=1;
    fact=1;
    
    result=x;
    for (int count=1;count<terms;count++){
        if(count%2!=0){
            fact*=(fact*count);
            result-=pow(x,(count*2)-1)/fact;
            cout<<"test odd"<<endl;
            
        }
    if(count%2==0){
        fact*=(fact*count);
        result+=pow(x,(count*2)-1)/fact;
        cout<<"test even"<<endl;
        
       
    }
    }
    
    cout<<"The result is "<<setprecision(15)<<result;
    
    return 0;
}

