#include<iostream>
using namespace std;
int main(){
    double a,b;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B :";
    cin>>b;
    char operation;
    cout<<"Enter an Arithmetic Operation :";
    cin>>operation;

    switch (operation)
    {
    case '+':
    cout<<"Answer is :"<<a<<operation<<b<<"="<<a+b<<endl;
    break;

    case '-':
    cout<<"Answer is :"<<a<<operation<<b<<"="<<a-b<<endl;
    break;

    case '*':
    cout<<"Answer is :"<<a<<operation<<b<<"="<<a*b<<endl;
    break;

    case '/':
    if(b==0){
        cout<<"Answer is :"<<a<<operation<<b<<"="<<"NOT DEFINED!!!"<<endl;
    }
    else{
    cout<<"Answer is :"<<a<<operation<<b<<"="<<a/b<<endl;
    }
    break;

    default:
    cout<<"PLEASE ENTER CORRECT OPERATOR!!!"<<endl;
    break;
    }
    
    return 0;
}
