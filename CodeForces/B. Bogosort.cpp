#include<bits/stdc++.h>
using namespace std;
int tst,a[102],n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n-1;i>=0;i--)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
