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

void SieveOfEratosthenes(ll n) {            //Complexity n*log(log(n))
    
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for(int p=2;p*p<=n;p++) {
        if(prime[p]==true) {
            for(int i=p*p;i<=n;i+=p) {
                prime[i]=false;
            }
        }
    }

    for(int p=2;p<=n;p++) {
        
    }
}

int main() {
    fastio;tie;
        
    return 0;
}
