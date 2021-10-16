#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define tie cin.tie(NULL)
#define mod 1000000007
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define forn(n) for(ll i=0;i<n;i++)
#define forin(n1,n2) for(ll i=n1;i<n2;i++)
using namespace std;

int main() {
    fastio;tie;
    string s;
    cin>>s;
    int sum=0;
    int i=0;
    for(;i<s.length()-4;i++) {
        if(s[i]=='C') {
            if(s[i+1]=='H' && s[i+2]=='E' && s[i+3]=='F') {
                sum++;
            }
        }
    }    
    cout<<i<<" "<<sum;
    return 0;
}
