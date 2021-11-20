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
        int n;
        cin>>n;
        vector<vector<int>> tri(n);
        forn(n) {
            tri[i]=vector<int>(i+1);
            for(int j=0;j<=i;j++) {
                cin>>tri[i][j];
            }
        }

        for(int i=n-2;i>=0;i--) {
            for(int j=0;j< tri[i].size();j++) {
                tri[i][j]=max(tri[i][j]+tri[i+1][j],tri[i][j]+tri[i+1][j+1]);
            }
        }
        cout<<tri[0][0]<<'\n';
    }
    return 0;
}