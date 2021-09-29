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
		int D,d,a,b,c;
		cin>>D>>d>>a>>b>>c;
		int total=D*d;
		if(total<10) {
			cout<<0<<'\n';
		}
		else if(total>=10 && total<21) {
			cout<<a<<'\n';
		}
		else if(total>=21 && total<42) {
			cout<<b<<'\n';
		}
		else if(total>=42) {
			cout<<c<<'\n';
		}
	}
	return 0;
}

