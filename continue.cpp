// Program to print all the numbers from 1 to 100 which are not divisble by 3. 

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
            continue;
        else
            cout<<i<<"  ";
    }
    return 0;
}
