#include <iostream>

using namespace std;

long factorial(int x)
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
    int n;
    cout<<"Enter the number :: ";
    
    cin>>n;
    cout<< factorial(4);

    return 0;
}
