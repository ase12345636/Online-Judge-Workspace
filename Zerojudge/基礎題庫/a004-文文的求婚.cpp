#include<iostream>
using namespace std;
int main()
{
	int Y;
	while(cin>>Y)
	{
		if(Y%400==0)
		cout<<"�|�~"<<endl;
		else if((Y%4==0)&&(Y%100!=0))
		cout<<"�|�~"<<endl;
		else
		cout<<"���~"<<endl;
	}
	return 0;
}
