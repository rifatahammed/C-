#include <iostream>

using namespace std;

long fact(int x)
{
    int i;
    long f=1;

    for(i=1;i<=x;++i)
    {
        f=f*i;
    }

    return f;
}


int main()
{
   int i,j,k,n;

    cout<<"Enter line Numbers: ";
    cin>>n;

    /*------------------main loop Start--------------------------*/
    for(i=0;i<n;++i)
    {
        //loop for spaces
        for(j=1;j<=(n-i-1);++j)
        {
            cout<<" ";
        }

        //loop for values
        for(k=0;k<=i;++k)
        {
             cout<<fact(i)/(fact(i-k)*fact(k))<<" ";
        }

        cout<<"\n";    //print new line after each row
    }
    /*------------------main loop Start--------------------------*/

    return 0;
}
