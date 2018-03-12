/* 
 * File:   GeoCalc.cpp
 * Author: Andrew Nicoletti 
 * Created on March 12, 2018 10:16AM
 * Purpose:  Review
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float pie = 3.14159;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void circle();
void rect();
void tri();
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int num;
    //Input or initialize values Here
    cout<<"Geometry Calculator"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"Press the number of the function you want and press enter (1-4)"<<endl;
    cout<<"1. Calculate the Area of a Circle."<<endl;
    cout<<"2. Calculate the Area of a Rectangle."<<endl;
    cout<<"3. Calculate the Area of a Triangle."<<endl;
    cout<<"4. Quit."<<endl;
    cin>>num;
    //Process/Calculations Here
    while (num<1||num>4){
        cout<<"Please choose between 1-4"<<endl;
        cin>>num;
    };
    
    if(num==1){
        circle();
    }
    if(num==2){
        rect();
    }
    if(num==3){
        tri();
    }
    if(num==4){
        return 0;
    }
    //Output Located Here
    

    //Exit
    return 0;
}

void circle(){
    float area,radius;
    cout<<"Input the radius of the circle."<<endl;
    cin>>radius;
    area = pie*(radius*radius);
    cout<<"The area of the circle is "<<area<<"."<<endl;
}

void rect(){
    float length,width,area;
    cout<<"Input the length of the circle."<<endl;
    cin>>length;
    cout<<"Input he width of the circle."<<endl;
    cin>>width;
    area = length*width;
    cout<<"The area of the rectangle is "<<area<<"."<<endl;
}

void tri(){
    float base,height,area;
    cout<<"Input the base of the triangle."<<endl;
    cin>>base;
    cout<<"Input the height of the triangle."<<endl;
    cin>>height;
    area = (base*height)*0.5;
    cout<<"The area of the triangle is "<<area<<"."<<endl;
}
