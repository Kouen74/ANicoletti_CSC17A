/* 
 * File:   Homework 4.10
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
    
    int month,year;
    month=0;
    year=0;
    
    bool leap;
    leap=false;
    //Input or initialize values Here
    
    cout<<"Enter a month in a year (1-12)"<<endl;
    cin>>month;
    cout<<"Enter a year"<<endl;
    cin>>year;
    
    //Process/Calculations Here
  
    if (year%100==0&&year%400==0){leap=true;}
    if (year%100!=0&&year%4==0) {leap=true;}
    if (month==2&&leap==true){cout<<"29 days"<<endl;}
    if (month==2&&leap==false) {cout<<"28 days"<<endl;}
    if (month==4||month==6||month==9||month==11){cout<<"30 days"<<endl;}
    else if (leap==false&&month!=2)cout<<"31 days"<<endl;
    //Output Located Here
    
    

    //Exit
    return 0;
}