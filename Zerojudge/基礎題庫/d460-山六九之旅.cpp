#include<iostream>
using namespace std;
int main()
{
	int a,p;
	while(cin>>a)
	{
		if(a<6)
		p=0;
		else if((a>=6)&&(a<=11))
		p=590;
		else if((a>=12)&&(a<=17))
		p=790;
		else if((a>=18)&&(a<=59))
		p=890;
		else
		p=399;
		cout<<p<<endl;
	}
	return 0;
}
