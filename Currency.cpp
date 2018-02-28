/* 
 * File:   Homework 3.13
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
const float EPD=0.82, YPD=106.68;
//Function Prototypes Here

//Program Execution Begins Here
int main() {
    //Declare all Variables Here
    
    float dollar;
    dollar=0;
    //Input or initialize values Here
    cout<<"Input the amount of money in dollars."<<endl;
    cin>>dollar;
    
    
    //Process/Calculations Here
    
    
    //Output Located Here
    cout<<setprecision(2)<<fixed<<"$"<<dollar<<"    "<<dollar*EPD<<endl;
    cout<<setprecision(2)<<fixed<<"$"<<dollar<<"    "<<dollar*YPD<<endl;
    

    //Exit
    return 0;
}