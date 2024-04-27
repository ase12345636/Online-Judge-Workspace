#include<iostream>

using namespace std;

int cal(int* ma,int* num,int i)
{
    return ma[i-1]+num[i];
}

int main(int argc,char* argv[])
{
    int n=0;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        int m=-1,num[n],ma[n];
        for(int i=0;i<n;i++)
            cin>>num[i];
        ma[0]=num[0];
        for(int i=1;i<n;i++)
            ma[i]=max(cal(ma,num,i),num[i]);
        for(int i=0;i<n;i++)
            if(m<ma[i])
                m=ma[i];
        if(m>0)
            cout<<"The maximum winning streak is "<<m<<"."<<endl;
        else
            cout<<"Losing streak."<<endl;
    }
    return 0;
}
