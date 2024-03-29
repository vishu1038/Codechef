//SieveOfEratosthenes

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
bool prime[mod];

void SoE1(ll n) {            //Time Complexity n*log(log(n))
    memset(prime, true, sizeof(prime));
    prime[0]=prime[1]=false;
    for(int p=2;p*p<=n;p++) {
        if(prime[p]==true) {
            for(int i=p*p;i<=n;i+=p) {
                prime[i]=false;
            }
        }
    }
}

void SoE2(ll n) {              //Complexity n

}


int main() {
    fastio;tie;
    
    return 0;
}
