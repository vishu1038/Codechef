#include<bits/stdc++.h>
#include<unordered_map>
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
	//fastio;tie;
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		unordered_map<string, int> fb;
		vector<string> team(2);
		int j=0;
		forn(n) {
			string s;
			cin>>s;
			if(fb.find(s)==fb.end()) {
				fb[s]=1;
				team[j++]=s;
			}
			else {
				fb[s]++;
			}
		}
		if(fb[team[0]]>fb[team[1]]) {
			cout<<team[0]<<'\n';
		}
		else if(fb[team[0]]<fb[team[1]]) {
			cout<<team[1]<<'\n';
		}
		else {
			cout<<"Draw\n";
		}
	}
	return 0;
}
