/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<ll> vl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// template
template <typename T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0)
    {
        if(y%2==1)
        {
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s)
{
    return stoi(s);
}

string num_to_str(ll num)
{
    return to_string(num);
}
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
class Point
{
    public:
        ll x;
        ll y;
        ll z;
        ll getsum()
        {
            return x+y+z;
        }
};
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=LONG_MAX;

// partially AC
// get wa on negative cost;

ll calculate(string s,ll x,ll y){
    ll ans=0;
    for(ll i=0;i+1<sz(s);i++){
        if(s[i]=='C'&&s[i+1]=='J')
            ans+=x;
        else if(s[i]=='J'&&s[i+1]=='C')
            ans+=y;
    }
    return ans;
}

ll solve()
{
    ll cj,jc;
    cin>>cj>>jc;
    // cj=x,jc=y
    string s;
    cin>>s;
    ll n=sz(s);
    if((cj>0&&jc>0)){
        for(ll i=0;i<n;i++){
            if(s[i]=='C'||s[i]=='J'){
                if(i+1<n&&s[i+1]=='?'){
                    ll pos=i+1;
                    while(pos<n&&s[pos]=='?'){
                        s[pos]=s[i];
                        pos++;
                    }
                    i=pos-1;
                }
            }
        }
        if(s[n-1]=='?'){
            s[n-1]='C';
        }
        for(ll i=n-1;i>=0;i--){
            if(s[i]=='C'||s[i]=='J'){
                if(i-1>=0&&s[i-1]=='?'){
                    ll pos=i-1;
                    while(pos>=0&&s[pos]=='?'){
                        s[pos]=s[i];
                        pos--;
                    }
                }
            }
        }
        // cout<<s<<endl;
        cout<<ll(calculate(s,cj,jc))<<endl;
        return 0;
    }
    
    return 0;
}

int main()
{
    speed;
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif */
    ll test;
    cin>>test;
    for(ll i=1;i<=test;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/