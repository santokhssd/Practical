#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{
return a-b;
}

int mul(int a,int b)
{
return a*b;
}

int main()
{
int num1,num2;
cin>>num1>>num2;
cout<<"Sum:"<<sum(num1,num2);
cout<<"Sub:"<<sub(num1,num2);
cout<<"mul:"<<mul(num1,num2);
}
