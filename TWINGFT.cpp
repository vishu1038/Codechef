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
		int n,k;
		cin>>n>>k;
		ll a[n];
		forn(n) {
			cin>>a[i];
		}
		sort(a,a+n,greater<int>());
		ll twin1=0,twin2=0;
		int i=0;
		while(k) {
			if(k==1) {
				twin1+=a[i++];
				twin2+=a[i]+a[i+1];
			}
			else {
				twin1+=a[i++];
				twin2+=a[i++];
			}
			--k;
		}
		cout<<max(twin1,twin2)<<'\n';
	}
	return 0;
}

