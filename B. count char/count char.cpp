#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;

using namespace std;

const int sz=1e6+10;
int arr[sz];
int vis[52];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    for(auto t: s)
    {
        if(t>='A'&&t<='Z')
            vis[t-'A']++;
        else
            vis[t-'a'+26]++;
    }
    for(int i=0;i<52;i++)
    {
        if(vis[i]){
            if(i<26){
                cout<<char('A'+i)<<" "<<vis[i]<<endl;
            }
            else
                cout<<char('a'+i-26)<<" "<<vis[i]<<endl;
        }
    }



    return 0;
}