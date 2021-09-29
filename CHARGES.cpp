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

int distance(string s) {
	int dist=0;
	forin(1,s.length()) {
		if(s[i]==s[i-1]) {
			dist+=2;
		}
		else {
			dist++;
		}
	}
	return dist;
}

int main() {
	fastio;tie;
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int dist=distance(s);
		forn(k) {
			int q;
			cin>>q;
			if(s[q-1]=='1') {
				s[q-1]='0';
			}
			else {
				s[q-1]='1';
			}
			if(q!=1) {
				if(s[q-1]==s[q-2]) {
					dist++;
				}
				else {
					dist--;
				}
			}
			if(q!=n) {
				if(s[q-1]==s[q]) {
					dist++;
				}
				else {
					dist--;
				}
			}
			cout<<dist<<'\n';
		}
	}
	return 0;
}

