#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define tie cin.tie(NULL)
#define MOD 1000000007
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define forn(n) for(ll i=0;i<n;i++)
#define forin(n1,n2) for(ll i=n1;i<n2;i++)
using namespace std;

int main() {
	fastio;tie;
	int r;
	cin>>r;
	while(r--) {
		int l;
		cin>>l;
		string s;
		cin>>s;
		int flag=1;
		forn(s.length()) {
			if(flag==1 && s[i]=='H') {
				flag=0;
			}
			else if(flag==1 && s[i]=='T') {
				flag=0;
				break;
			}
			else if(flag==0 && s[i]=='T') {
				flag=1;
			}
			else if(flag==0 && s[i]=='H') {
				flag=0;
				break;
			}
		}
		if(flag) {
			cout<<"Valid\n";
		}
		else {
			cout<<"Invalid\n";
		}
	}
}
