#include<iostream>
using namespace std;
int main()
{
	int a=0,n,b=1;
	std::cout<<"enter the limit of fibonacci no..\n";
	std::cin>>n;
	std::cout<<a<<" "<<b<<" ";
	for(int i=2;i<n;i++)
	{
		int c = a + b;
		std::cout<<c<<" ";
		a=b;
		b=c;
	}
	return 0;
}