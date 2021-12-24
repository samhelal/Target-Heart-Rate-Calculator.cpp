/*(Target-Heart-Rate Calculator) While exercising, you can
use a heart-rate monitor to see that your heart rate stays within
a safe range suggested by your trainers and doctors. According
to the American Heart Association (AHA) ( http://bit.ly/
AHATargetHeartRates ) (c++ how to program)*/
#include<iostream>
using namespace std ;
#include<string>
#include "Target-Heart-Rate-Calculator.h"
int main(){
    HeartRates jan ("Jan","Green",5,9,2001) ;
    int date=2021; // date identfier
    int age = date - jan.getYear() ; // age claculating
    jan.setAge(age);    // set the age in the set function
    int maximumRate = 220 - age ; // calculating the maximum rate
    jan.setMaximumHeartRate(maximumRate) ; // set the maximum rate
    int maximum = (jan.getMaximumHeartRate() * 85) / 100 ; // calculating maximum target
    int minimum = (jan.getMaximumHeartRate() * 50) / 100 ; // calculating minimum target
    jan.setMaximum(maximum); // set the maximum target
    jan.setMinimum(minimum) ;// set the minimum target

    cout<<" \n The all info is : "<<jan.getHeartRates()<<endl ;
    cout<<" The age is : " << jan.getAge() << endl ;
    cout<<" The maximum heart rate : "<< jan.getMaximumHeartRate() << endl ;
    cout<<" The target heart rate range : "<< jan.getTargetHeartRate() << endl ;
}
