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
        int x,y;
        cin>>x>>y;
        if(x<=y) {
            if((y-x)%2==0) {
                cout<<(y-x)/2<<'\n';
                continue;
            }
            else {
                cout<<(y-x)/2 +2<<'\n';
                continue;
            }
        }
        else {
            cout<<(x-y)<<'\n';
            continue;
        }
    }
    return 0;
}