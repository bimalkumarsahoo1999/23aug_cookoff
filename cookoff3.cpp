#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

const int mod = 1000000007;

void solve() {
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  string ans="";
  int n0=0,n1=0;
  int i=0;
  fo(i,n){
    if(s[i]=='0'){
        n0++;
    }
    else{
        n1++;
    }
  }
  int t=n/k;
  //cout<<t<<endl;
  int x1,x0;
  if(n1%t==0){
    x1=n1/t;
    x0=n0/t;
    string p="";
    while(x0>0){
        p+='0';
        x0--;
    }
    while(x1>0){
        p+='1';
        x1--;
    }
    //cout<<p<<endl;
    for(i=0;i<n/k;i++){
        if(i%2==0){
            ans+=p;
        }
        else{
            string rp=p;
            reverse(rp.begin(),rp.end());
            ans+=rp;
        }
    }
  }
  else{
    ans="IMPOSSIBLE";

  }
  cout<<ans<<endl;


}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

