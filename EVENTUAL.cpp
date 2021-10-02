#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define tie cin.tie(NULL)
#define mod 1000000007
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define forn(n) for(ll i=0;i<n;i++)
#define forin(n1,n2) for(ll i=n1;i<n2;i++)
using namespace std;

int main() {
    fastio;tie;
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char, int> count;
        int flag=1;
        forn(s.length()) {
            if(count.find(s[i])==count.end()) {
                count[s[i]]=1;
            }
            else {
                count[s[i]]++;
            }
        }
        for(auto i:count) {
            if(i.second%2!=0) {
                flag=0;
                break;
            }
        }
        if(flag) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}
