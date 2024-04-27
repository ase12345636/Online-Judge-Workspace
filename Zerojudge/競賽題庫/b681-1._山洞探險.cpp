#include<iostream>
using namespace std;
int main()
{
	int L,d=0;
	while(cin>>L)
	{
		if(L>0)
		d=2*L-1;
		else
		d=L*(-2);
		cout<<d<<endl;
	}
	return 0;
}
