#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i;
	while(cin>>a>>b>>c)
	{
			if((a+b>c)&&(a+c>b)&&b+c>a)
			i++;
	}
	cout<<i;
	return 0;
}
