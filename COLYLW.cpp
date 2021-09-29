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

bool good(ll mid, ll r,ll g,ll b) {
	return (r-mid)+(b-mid)+g>=mid;
}

ll colour(ll n,ll r,ll g,ll b) {
	int ans;
	ll left=0;
	ll right= min3(n,r,b);
	while(left<=right) {
		ll mid= (left+right)/2;
		if(good(mid,r,g,b)) {
			ans = mid;
			left=mid+1;
		}
		else {
			right = mid-1;
		}
	}
	return ans;
}

int main() {
	fastio;tie;
	int t;
	cin>>t;
	while(t--) {
		ll n,r,g,b;
		cin>>n>>r>>g>>b;
		cout<<colour(n,r,g,b)<<'\n';
	}
	return 0;
}
