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
		string s;
		cin>>s;
		forn(s.length()-4) {
			if(s[i]=='p') {
				if(s[i+1]=='a') {
					if(s[i+2]=='r') { 
						if(s[i+3]=='t') {
							if(s[i+4]=='y') {
								s[i+2]='w';
								s[i+3]='r';
								s[i+4]='i';
								i+=4;
							}
						}
					}
				}
			}
		}
		cout<<s<<'\n';
	}
	return 0;
}

