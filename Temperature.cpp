#include<iostream>
using namespace std;

float convertToCelsius(float x){
    return (((x-32)*5)/9);
}

float convertToFahrenheit(float x){
    return ((9*x)/5+32);
}

int main(){
    int n;
    float fahrenheit,celsius;
    cout<<"Press 1 for Fahrenheit to Celsius Conversion "<<endl;
    cout<<"Press 2 for Celsius to Fahrenheit Conversion "<<endl;
    cin>>n;
    if(n==1){
        cout<<"Enter Temperature in Fahrenheit:";
        cin>>fahrenheit;
        cout<<fahrenheit<<" Fahrenheit is equal to "<<convertToCelsius(fahrenheit)<<" Celsius!!!";
    }
    else if(n==2){
        cout<<"Enter Temperature in Celsius:";
        cin>>celsius;
        cout<<celsius<<" Celsius is equal to "<<convertToFahrenheit(celsius)<<" Fahrenheit!!!";
    }
    else{
        cout<<"Wrong Input!!!";
    }
    return 0;
}