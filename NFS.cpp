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
		ll u,a,s;
		ll v;
		cin>>u;
		cin>>v;
		cin>>a>>s;
		if(u==v) {
			cout<<"Yes\n";
			continue;
		}
		ll v2= (u*u) - (2*a*s);
		if(v2<=v*v) {
			cout<<"Yes\n";
		}
		else {
			cout<<"No\n";
		}
	}
	return 0;
}
