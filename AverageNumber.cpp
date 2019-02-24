#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int n,k;
        long v;
        cin>>n>>k>>v;
        long ar[n];
        long sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum = sum+ar[i];
        }
        //cout<<"Sum = "<<sum<<endl;
        int x,flag=-1;
        x = v*(n+k)-sum;
        if(x/k<=0 || x%k!=0)
        {
            cout<<flag<<endl;
        }
        else
        {
            cout<<x/k<<endl;
        }
    }
}