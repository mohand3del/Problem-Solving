#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;

using namespace std;

const int sz=1e6+10;
int arr[sz];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+s);
    for(int i = 0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}