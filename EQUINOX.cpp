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
		int n;ll a,b;
		cin>>n>>a>>b;
		ll sar=0,anu=0;
		forn(n) {
			string s;
			cin>>s;
			switch(s[0]) {
				case 'E':sar+=a;break;
				case 'Q':sar+=a;break;
				case 'U':sar+=a;break;
				case 'I':sar+=a;break;
				case 'N':sar+=a;break;
				case 'O':sar+=a;break;
				case 'X':sar+=a;break;
				default : anu+=b;
			}
		}
		if(sar>anu) {
			cout<<"SARTHAK\n";
		}
		else if(anu>sar) {
			cout<<"ANURADHA\n";
		}
		else {
			cout<<"DRAW\n";
		}
	}
	return 0;
}

