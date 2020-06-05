#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1)
    {
        if(n&1)
        {
          n=(n*3)+1;
          cout<<n<<" ";
        }
        else
        {
           n=n/2;
           cout<<n<<" ";
        }
    }
    return 0;
}
