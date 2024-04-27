#include<iostream>

using namespace std;

int main(int argc,char* argv[])
{
    int num=0,n=0,m=0,k=0,cost=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cost=0;
        cin>>n>>m>>k;
        cost=(n-1)+n*(m-1);
        if(cost==k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
