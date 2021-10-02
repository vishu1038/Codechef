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
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>0 && b>0) 
        {
            cout<<"Solution\n";
        }
        else if(b==0) {
            cout<<"Solid\n";
        }
        else if(a==0) {
            cout<<"Liquid\n";
        }
    }    
    return 0; 
}
