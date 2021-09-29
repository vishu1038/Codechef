#include<bits/stdc++.h>
#define ll unsigned long long int
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
		ll n,s;
		cin>>n>>s;
		ll sum=(n*(n+1))/2;
		if(sum<=s) {
			cout<<"-1\n";
		}
		else if((sum-s)<=n){
			cout<<sum-s<<'\n';
		}
		else {
			cout<<"-1\n";
		}
	}
	return 0;
}

