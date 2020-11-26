#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double dd;
#define tst int tttt;cin>>tttt;for(int TTTT=1;TTTT<=tttt;TTTT++)
#define nl cout<<"\n";
#define forn(a,b) for(int ii=a;ii<b;ii++)
const ll MOD1=1e9+7;
const ll MOD2=998244353;
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define pii pair<int,int>
#define vi vector<int>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define hhh cout<<"here"<<endl;

bool check(int i,int j,int k){
	string a=to_string(i),b=to_string(j),c=to_string(k);
	if(a.size()+b.size()+c.size()!=9)return false;
	map<char,int>m;
	forn(0,a.size()){
		if(m[a[ii]]==1)return false;
		m[a[ii]]=1;
	}forn(0,b.size()){
		if(m[b[ii]]==1)return false;
		m[b[ii]]=1;
	}forn(0,c.size()){
		if(m[c[ii]]==1)return false;
		m[c[ii]]=1;
	}return (m['0']==0);
}
void solve(){
	set<int>s;
	for(int i=1;i<10;i++){
		for(int j=1000;j<10000;j++){
			int k=i*j;
			if(check(i,j,k))s.insert(k);
		}
	}for(int i=10;i<100;i++){
		for(int j=100;j<1000;j++){
			int k=i*j;
			if(check(i,j,k))s.insert(k);

		}
	}
	auto it=s.begin();
	ll ans=0;
	while(it!=s.end()){
		ans+=*it;it++;
	}cout<<"Result: "<<ans<<endl;
}
int main(){

    // fastio
    // ++*(int*)0;// crash
    // freopen("out.txt","r",stdin);freopen("outt.txt","w",stdout);
    // tst
    {
        solve();
    }
}
/*

1 4
2 3

*/
