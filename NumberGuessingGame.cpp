#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    int n;
    int turn=4;
    int ans=1;
    int randomGuess=1+rand()%100; //gives a random number between 1 and 100  

    do{
        cout<<"Remaining Attempts are:"<<turn+1<<endl;
        cout<<"Enter a Number Between 1 and 100 :";
        cin>>n;
        

        if(n==randomGuess){
            cout<<"Congratulations ,Your Guess was Right!!!\nYou Win!!!"<<endl;
            ans=0;
        }

        else if(n>randomGuess && turn ){
            cout<<"\nTOO HIGH !!!\nTry Entering a Smaller Number!!!\n"<<endl;
        }

        else if (n<randomGuess && turn ){
            cout<<"\nTOO LOW !!!\nTry Entering a Higher Number!!!\n"<<endl;
        }
        else if(turn==0) {
            cout<<"Sorry ,You Lose!!!";
            
        }

    }while( ans && turn-- );

    return 0;
}
