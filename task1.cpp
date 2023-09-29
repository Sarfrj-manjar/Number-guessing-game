#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int random = rand()%100+20;
    int guess = 0;
    int moves = 0;
    do{
        moves++;
        cout<<"Enter your guess: ";
        cin>> guess;
        if(guess == random)
            cout<<"congrats! right guess after " << moves <<" moves"<<endl;
        else if(guess < random)
            cout<<"Wrong guess! you entered a lower number!"<<endl;
        else
        cout<<"Wrong guess! you entered a higher number!"<<endl;
    }while(guess!=random);
}