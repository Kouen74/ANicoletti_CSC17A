/* 
 * File:   Celsius Table.cpp
 * Author: Andrew Nicoletti
 * Created on 3/7/2018 11:13 AM
 * Purpose:  Review
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void celsius(int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int fahr, count;
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Input Fahrenheit"<<endl;
    cin>>fahr;  
    for(count = 0; count<21; count++){
        celsius(count);
    }
    celsius(fahr);
    
    //Exit
    return 0;
}

void celsius(int num)
{
    int cel;
    cel = 0;
    cout<<"Fahrenheit   "<<num<<endl;
    cel = (5.0/9.0)*(num-32);
    cout<<"Celsius      "<<cel<<endl;
}

