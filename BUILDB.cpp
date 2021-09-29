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
	ll t;
	cin>>t;
	while(t--) {
		ll n,r;
		cin>>n>>r;
		ll b[n];
		ll a[n];
		forn(n) {
			cin>>a[i];
		}
		ll x=0;
		ll maxt=-1;
		forn(n-1) {
			cin>>b[i];
			x+=b[i];
			maxt=max(maxt,x);
			ll cool=a[i+1]-a[i];
			x-=(r*cool);
			if(x<0) {
				x=0;
			}
		}
		cin>>b[n-1];
		x+=b[n-1];
		maxt=max(x,maxt);
		cout<<maxt<<'\n';
	}
	return 0;
}

