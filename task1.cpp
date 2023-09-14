#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));
    int guessed = rand()%10+ 1;
    int ans{};
    do
    {
        cout<<"We've guessed a number from 1-10, Let's see if you can guess it or not\nEnter the Number: ";
        int num; cin>>num;
        ans =num;
        if(guessed != num)
        {
            if(num<guessed)
                cout<<"You guessed lower number\n";
            else
                cout<<"You guessed a higher number\n";
        }
    }while(ans!=guessed);
    cout<<"Congratualtion! You guessed it right";
    return 0;
}