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

bool prime[mod];

void SieveOfEratosthenes(ll n) {     
    
    memset(prime, true, sizeof(prime));
    for(int p=2;p*p<=n;p++) {
        if(prime[p]==true) {
            for(int i=p*p;i<=n;i+=p) {
                prime[i]=false;
            }
        }
    }
}

int main() {
    fastio;tie;
    SieveOfEratosthenes(10000001);
    int t;
    cin>>t;
    while(t--) {
        ll x,y;
        cin>>x>>y;
        int step=0;
        for(int i=x;i<=y;i++) {
            //cout<<i<<" ";
            if(prime[i+2] && (i+2)<=y) {
                step++;
                i++;
            }
            else {
                step++;
            }
        }
        cout<<step-1<<'\n';
    }
    return 0;
}