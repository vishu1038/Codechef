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

ll gcd(ll x, ll y) {
    if(y==0) {
        return x;
    }
    return gcd(y,x%y);
}

ll lcm(ll x,ll y) {
    return (x/gcd(x,y))*y;
}

int main() {
    fastio;tie;
    int t;
    cin>>t;
    while(t--) {
        ll x,k;
        cin>>x>>k;
        cout<<x+x<<" "<<lcm(x*k-1,x*k)<<'\n';
    }
    return 0;
}