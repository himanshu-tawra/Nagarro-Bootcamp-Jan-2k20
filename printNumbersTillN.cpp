// Program to print numbers from 1 till N.


#include<iostream>
using namespace std;

int main()
{   
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int i = 1;
    while(i <= num)
    {
        cout<<i<<endl;
        i = i + 1;
    }

    return 0;
}