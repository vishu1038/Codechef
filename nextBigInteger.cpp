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
	int n;
	cin>>n;
	int arr[n]; 
	forn(n) {
		cin>>arr[i];
	}
	int nbig[n];
	vector<int> s;
	for(int i=n-1;i>=0;i--) {
		while(!s.empty() && *(s.end()-1)<=arr[i]) {
			s.pop_back();
		}
		if(s.empty()) {
			nbig[i]=-1;
		}
		else {
			nbig[i]=*(s.end()-1);
		}
		s.push_back(arr[i]);
	}
	forn(4) {
		cout<<nbig[i]<<' ';
	}
	return 0;
}

