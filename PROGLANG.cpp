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
		int a,b,a1,b1,a2,b2;
		cin>>a>>b>>a1>>b1>>a2>>b2;
		if((a==a1 && b==b1)||(a==b1 && b==a1)) {
			cout<<"1\n";
		}
		else if((a==a2 && b==b2)||(a==b2 && b==a2)) {
			cout<<"2\n";
		}
		else {
			cout<<"0\n";
		}
	}
	return 0;
}
