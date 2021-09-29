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
		int g,p,x[10];
		cin>>g>>p;
		g--;
		int total=0;
		forn(10) {
			cin>>x[i];
			if(i>g) {
				total+=x[i];
			}
		}
		int dmin=(total+1)/p + ((total+1)%p !=0);
		int dmax=(total+x[g])/p + ((total+x[g])%p !=0);
		cout<<dmin<<" "<<dmax<<'\n';
	}
	return 0;
}

