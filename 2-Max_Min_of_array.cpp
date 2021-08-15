#include <bits/stdc++.h>
using namespace std;

void fn(int a[],int n)
{
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=mx)
        {
            mx=max(mx,a[i]);
        }
        if(a[i]<=mn)
        {
            mn=min(mn,a[i]);
        }
    }
    cout<<"max is:"<<mx<<endl;
    cout<<"min is:"<<mn;
}

int main()
{
    int a[]={1,22,3,-8,5};
    int n=sizeof(a)/sizeof(a[0]);
    fn(a,n);
    return 0;
}
