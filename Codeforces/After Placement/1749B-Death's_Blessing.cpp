/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/* ascii value
A=65,Z=90,a=97,z=122
*/

// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph


int solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i].second;
        ans+=v[i].second;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        ans+=v[i].first;
    }
    sort(v.begin(),v.end());
    ans-=v[n-1].first;
    cout<<ans<<endl;
    return 0;
}
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/