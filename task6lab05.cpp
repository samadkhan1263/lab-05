#include<iostream>
using namespace std;
int main()
{
int num;
int cube=0;
cout<<"Enter a number of which you want cube";
cin>>num;
for (int i= 1; i<=num; i++)
{
    cube= i*i*i;
    cout<<"Cube of number is"<<cube<<endl;
}

return 0;
}