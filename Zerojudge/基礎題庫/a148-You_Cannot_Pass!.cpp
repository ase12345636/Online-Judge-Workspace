#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		long long int a,m=0;
		for(int i=n;i>0;i--)
		{	
			cin>>a;
			m+=a;
		}
	if(m<=59*n)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	}
	return 0; 
} 
