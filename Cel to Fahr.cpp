/* 
 * File:   Homework 3.12
 * Author: Andrew Nicoletti
 * Created on Feb 28, 2018
 * Purpose:  Review CSC5
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main() {
    //Declare all Variables Here
    
    float Cel, Fahr;
    
    //Input or initialize values Here
    
    cout<<"Input the temperature in Celsius:"<<endl;
    cin>>Cel;
    //Process/Calculations Here
    
    Fahr=(9.00/5.00)*Cel+32;
    
    //Output Located Here
    cout<<setprecision(2)<<fixed<<"The temperature in Fahrenheit is "<<Fahr<<" degrees Fahrenheit."<<endl;

    //Exit
    return 0;
}

