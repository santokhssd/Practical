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

int mul(int a,int b,int c)
{
return a*b*c;
}


int sum(int a,int b,int c)
{
return a+b+c;
}

int main()
{
int num1,num2,num3;
cin>>num1>>num2>>num3;
cout<<"Sum:"<<sum(num1,num2);
cout<<"Sub:"<<sub(num1,num2);
cout<<"mul:"<<mul(num1,num2);
cout<<"sum:"<<mul(num1,num2,num3);
cout<<"mul:"<<mul(num1,num2,num3);
}
