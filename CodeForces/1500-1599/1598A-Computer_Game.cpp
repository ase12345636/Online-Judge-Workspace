#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc,char* argv[])
{
    int num=0,l=0,f=0;
    string s1,s2;

    cin>>num;
    for(int i=0;i<num;i++)
    {
        f=0;
        cin>>l;
        cin>>s1>>s2;
        for(int j=0;j<l;j++)
            if((s1[j]=='1')&&(s2[j]=='1'))
            {
                f=1;
                break;
            }
        if(s2[l-1]=='1')
            f=1;
        if(f==1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
