#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,t,i;
	while(cin>>t)
	{
		if(0<=t<=20)
		{
			for(i=1;i<=t;i++)
			{
			cin>>a>>b>>c>>d;
				if(b-a==c-b)
				{
					e=b-a+d;
					cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
				}
				else if(b/a==c/b)
				{
					e=d*b/a;
					cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
				}
			}
		
		}
	}
	return 0;
}
