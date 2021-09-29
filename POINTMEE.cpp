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
		int n;
		cin>>n;
		ll x[n],y[n];
		forn(n) {
			cin>>x[i];
		}
		forn(n) {
			cin>>y[i];
		}
		int minop=600;
		for(int j=0;j<n;j++) {
			int op=0;
			forn(n) {
				if(i==j) {
					continue;
				}
				if(x[i]==x[j] && y[i]!=y[j]) {
					op++;
				}
				else if(y[i]==y[j] && x[i]!=x[j]) {
					op++;
				}
				else if(x[i]-x[j]==y[i]-y[j]) {
					op++;
				}
				else if(x[i]-x[j]==-(y[i]-y[j])) {
					op++;
				}
				else {
					op+=2;
				}
			}
			minop=min(minop,op);
		}
		cout<<minop<<'\n';
	}
	return 0;
}

