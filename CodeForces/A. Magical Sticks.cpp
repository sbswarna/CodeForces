#include<bits/stdc++.h>
using namespace std;
long long tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            if(n==2)
                cout<<1<<endl;
            else if(n==3)
                cout<<2<<endl;
            else
            {
                if(n%2==0)
                    cout<<(n/2)<<endl;
                else
                    cout<<(n/2)+1<<endl;
            }
        }
    }
    return 0;
}
