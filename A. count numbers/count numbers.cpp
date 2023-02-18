#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int const N = 100000+5;
int a[N];
int main()
{
    int n,q;
    cin>>n>>q;
    while(q--)
    {
        int z,x;
        cin>>z>>x;
        if(z==1)a[x]++;
        else cout<<a[x]<<endl;
    }



    return 0;
}