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
		ll D,d,p,q;
		cin>>D>>d>>p>>q;
		ll total=0;
		ll inc=D/d;
		total-=(p+(inc)*q)*(d-D%d);
		total+=(((inc+1)*(2*p + inc*q))/2)*d;
		cout<<total<<'\n';
	}
	return 0;
}

