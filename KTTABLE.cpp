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
		ll a[n],b[n];
		forn(n) {
			cin>>a[i];
		}
		int stu=0;
		forn(n) {
			cin>>b[i]; 
			if(i==0 && a[i]>=b[i]) {
				stu++;
			}
			else if(a[i]-a[i-1]>=b[i]) {
				stu++;
			}
		}
		cout<<stu<<'\n';
	}
}
