#include <iostream> 
using namespace std;

int factor(int n)
{
	int r=1;
	for(int i=1;i<=n;i++)1
	r*=i;
	return r;
	
}
int main()
{
	int num;
	cout<<" Enter a positive number: ";
	cin>>num;
	cout<<" "<<num<<" factorial is: "<<factor(num);
}
