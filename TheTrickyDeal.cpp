#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    for(long l=0;l<t;l++)
    {
        long a;
        cin>>a;
        long sumFrnd = 0;
        long sumChef = 0;
        long i=1;
        long d1=0,d2=0;
        long max=0;
        while((sumFrnd-sumChef)>=0)
        {
            long h = pow(2,i-1);
            sumChef += h;
            sumFrnd += a;
            i++;
            d1++;
            if(max<(sumFrnd-sumChef))
            {
                max = sumFrnd-sumChef;
                d2++;
            }

            //cout<<"Sum Frnd = "<<sumFrnd<<"\nSum Chef = "<<sumChef<<endl;
            //cout<<"sumFrnd-sumChef = "<<sumFrnd-sumChef<<endl;
        }
        d1 = d1-1;
        cout<<d1<<" "<<d2<<endl;
        // while((sumFrnd-sumChef)>=0)
        // {
        //     int h = pow(2,i-1);
        //     sumChef += h;
        //     sumFrnd += a;
        //     i++;
            
        //     //cout<<"Sum Frnd = "<<sumFrnd<<"\nSum Chef = "<<sumChef<<endl;
        //     //cout<<"sumFrnd-sumChef = "<<sumFrnd-sumChef<<endl;
        // }
    }
}