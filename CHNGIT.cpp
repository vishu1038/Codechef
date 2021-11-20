#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define tie cin.tie(NULL)
#define mod 1000000007
#define X first
#define Y second
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
        int a[n];
        unordered_map<int, int> seq;
        forn(n) {
            cin>>a[i];
            if(seq.find(a[i])==seq.end()) {
                seq[a[i]]=1;
            }
            else {
                seq[a[i]]++;
            }
        }
        if(seq.size()==1) {
            cout<<0<<'\n';
            continue;
        }
        int maxi=-1;
        for(auto i:seq) {
            maxi=max(maxi,i.second);
        }
        cout<<n-maxi<<'\n';
    }
    return 0;
}