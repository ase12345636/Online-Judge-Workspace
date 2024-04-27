#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc,char* argv[])
{
    int time=0,n=0,f=0,m=-1;
    cin>>time;
    for(int i=0;i<time;i++)
    {
        f=0;
        m=-1;
        cin>>n;
        int rounte[n-1],sum[n-1],start[n-1];
        for(int j=0;j<n-1;j++)
            cin>>rounte[j];
        sum[0]=rounte[0];
        start[0]=1;
        for(int j=1;j<n-1;j++)
        {
            if((sum[j-1]+rounte[j])>=rounte[j])
            {
                sum[j]=(sum[j-1]+rounte[j]);
                start[j]=start[j-1];
            }
            else
            {
                sum[j]=rounte[j];
                start[j]=j+1;
            }
        }
        for(int j=0;j<n-1;j++)
        {
            if(m==sum[j])
            {
                if(((j+2)-start[j])>((f+2)-start[f]))
                    f=j;
            }
            else if(m<sum[j])
            {
                m=sum[j];
                f=j;
            }
        }
        if(m>0)
            cout<<"The nicest part of route "<<i+1<<" is between stops "<<start[f]<<" and "<<f+2<<endl;
        else
            cout<<"Route "<<i+1<<" has no nice parts"<<endl;

    }
}
