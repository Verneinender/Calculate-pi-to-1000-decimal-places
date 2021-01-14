#include<iostream>
using namespace std;
int main()
{
    long double z = 2.0, p;
    int k = 0;
    for(int k = 0; z>1e-15; k++)
    {
        z *= k/(2*k+1);
        p = 2 + z;
        
    }
    cout<<p<<endl;
    return 0;
}