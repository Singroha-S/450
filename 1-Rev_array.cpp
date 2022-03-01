#include <bits/stdc++.h>
using namespace std;

void rev(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    rev(a,n);
    return 0;
}
