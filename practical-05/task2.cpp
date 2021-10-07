Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@rohaniscoding 
manisha1928
/
opps-projects
Public
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
opps-projects/practical-5/task2.cpp
@manisha1928
manisha1928 Add files via upload
Latest commit 9a8c122 2 days ago
 History
 1 contributor
88 lines (88 sloc)  1.48 KB
   
#include<iostream>
using namespace std;
void charFunction()
{
cout<<"char function value:";
 char a='A';
 cout<<a<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(char)<<endl;
}
void boolFunction()
{
cout<<"bool function value:";
 int a=7;
 bool b=(a>5);
 cout<<b<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(bool)<<endl;
}
void shortFunction()
{
cout<<"short function value:";
 short a=2;
 cout<<a<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(short)<<endl;
}
void intFunction()
{
cout<<"int function value:";
 int a=523457;
 cout<<a<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(int)<<endl;
}
void longFunction()
{
cout<<"long function value:";
 long a=521;
 cout<<a<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(long)<<endl;
}
void floatFunction()
{
cout<<"float function value:";
 float a=1.234f;
 cout<<a<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(float)<<endl;
}
void doubleFunction()
{
cout<<"double function value:";
 double a=1.234;
 cout<<a<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(double)<<endl;
}
void longdoubleFunction()
{
cout<<"longdouble function value:";
 long double a=2^80;
 cout<<a<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(long double)<<endl;
}
void widecharFunction()
{
cout<<"widechar function value:";
 wchar_t a=L'\0';
 cout<<a<<endl;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(wchar_t)<<endl;
}
int main()
{
 charFunction();
 boolFunction();
 shortFunction();
 intFunction();
 longFunction();
 floatFunction();
 doubleFunction();
 longdoubleFunction();
 widecharFunction();
 return 0;
}
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete
