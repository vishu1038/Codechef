//Given array of 0 and n quesries with L and R, for wach query incremement by 1 from index L to R

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
	vector<int> arr(n,0);
	int q;
	cin>>q;
	forn(q) {
		int l,r;
		cin>>l>>r;
		arr[l]++;
		//if(r+1<n)
		arr[r+1]--;
	}
	forin(1,n) {
		arr[i]=arr[i]+arr[i-1];
	}
	forn(n) {
		cout<<arr[i]<<' ';
	}
	return 0;
}
