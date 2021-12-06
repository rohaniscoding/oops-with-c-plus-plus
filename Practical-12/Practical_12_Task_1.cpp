#include<iostream>
using namespace std;
class A
{
	public:
		int a;
};
class B:public A{};
class C:public B{};
class D:public C{};
int main()
{
	B obj;
	obj.a=10;
	cout<<obj.a<<endl;
	return 0;
}
