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
		int n,a,b,one=0,zero=0;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		forn(s.length()) {
			if(s[i]=='0') {
				zero++;
			}
			else {
				one++;
			}
		}
		cout<<one*b + zero*a<<'\n';
	}
	return 0;
}
