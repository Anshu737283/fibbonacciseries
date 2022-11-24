#include<iostream>
using namespace std;

int main()
{
    int i=0,j=1,n,f;
    
    cin>>n;
    cout<<"0,1,";
    while(i+j<=n)
    {
        f=i+j;
        cout<<f<<",";
        i=j;
        j=f;
    }
    return 0;
}