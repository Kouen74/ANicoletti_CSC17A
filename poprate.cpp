/* 
 * File:   population.cpp
 * Author: Andrew Nicoletti 
 * Created on March 12, 2018 10:46AM
 * Purpose:  Review
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int pop();
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int startp,years;
    float birth, death;
    //Input or initialize values Here
    cout<<"Population"<<endl;
    cout<<"__________"<<endl;
    cout<<"Input the starting size of a population"<<endl;
    cin>>startp;
    cout<<"Input the annual birth rate"<<endl;
    cin>>birth;
    cout<<"Input the annual death rate"<<endl;
    cin>>death;
    cout<<"Input the number of years to display."<<endl;
    cin>>years;
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}

int pop(int spop,float brate, float drate){
    
}