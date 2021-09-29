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

ll power(ll x,ll y,ll p) {
	ll res=1;
	x%=p;
	while(y>0) {
		if(y & 1) {
			res = (res*x)%p;
		}
		y=y>>1;
		x=(x*x)%p;
	}
	return res;
}

int main() {
	fastio;tie;
	ll t;
	cin>>t;
	while(t--) {
		ll n;
		cin>>n;
		cout<<power(2,n-1,mod)<<'\n';
	}
	return 0;
}

