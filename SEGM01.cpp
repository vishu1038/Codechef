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

int check(string s) {
	int start=0;
	int end=0;
	forn(s.length()) {
		if(s[i]=='1' && start==0) {
			start=1;
		}
		if(s[i]=='0' && start==1) {
			end=1;
		}
		if(s[i]=='1' && end==1) {
			return 0;
		}
	}
	if(!start) {
		return 0;
	}
	return 1;

}

int main() {
	fastio;tie;
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		if(check(s)) {
			cout<<"YES\n";
		}
		else {
			cout<<"NO\n";
		}
	}
	return 0;
}
