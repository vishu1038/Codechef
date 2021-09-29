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
				int kx=x[i]-x[j];
				int ky=y[i]-y[j];
				if(kx==ky && kx==0);
				else if(kx==0 && ky!=0) {
					op++;
				}
				else if(ky==0 && kx!=0) {
					op++;
				}
				else if(kx==ky) {
					op++;
				}
				else if(kx==-ky) {
					op++;
				}
				else if(kx!=ky) {
					op+=2;
				}
			}
			minop=min(minop,op);
		}
		cout<<minop<<'\n';
	}
	return 0;
}

