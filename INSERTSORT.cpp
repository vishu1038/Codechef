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

void inssort(int arr[],int n) {
	forin(1,5) {
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key) {
			arr[j+1] =arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

int main() {
	fastio;tie;
	int arr[]={13,4,11,1,23};
	inssort(arr,5);
	forn(5) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
