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
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		float sum=0;
		unordered_map<string, int> word;
		while(n--) {
			string s;
			cin>>s;
			float isum=0;
			char prev=' ';
			forn(s.length()) {
				if((s[i]=='d' || s[i]=='f')&&(prev=='d' || prev=='f') ) {
					isum+=0.4;
					prev=s[i];
				}
				else if((s[i]=='j' || s[i]=='k')&&(prev=='j' || prev=='k') ) {
					isum+=0.4;
					prev=s[i];
				}
				else {
					isum+=0.2;
					prev=s[i];
				}
			}
			if(word.find(s)==word.end()) {
				word[s]=1;
			}
			else {
				isum/=2;
			}
			sum+=(isum*10);
		}
		cout<<sum<<'\n';
	}
}
