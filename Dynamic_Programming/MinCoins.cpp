#include <iostream>
#include <bits/stdc++.h>
#define vc vector<int>
#define um unordered_map<int,int>
#define rep(i,a,b) for(__typeof(a) i=a; i<b; i++)
#define ll long long
#define pb push_back
#define ff(a) a.first
#define ss(a) a.second
#define si(a) a.size()
#define all(a) a.begin(),a.end()
#define M 10000000
using namespace std;
int n;
int dp[101][100001];
int solve(vc &coin, int sum, int i){
    if(sum==0) return 0;
    if(sum<0) return M;
    if(i==n) return M;
    if(dp[i][sum]==-1){
        dp[i][sum]=min(solve(coin,sum-coin[i],i)+1,solve(coin,sum,i+1));
    }
    return dp[i][sum];
}
int main() {
	int t; cin>>t;
	while(t--){
	    int s; cin>>n>>s;vc arr(n);
	    rep(i,0,n) cin>>arr[i];
	    memset(dp,-1,sizeof(dp));
	    int ans=solve(arr,s,0);
	    if(ans==M) cout<<-1<<endl;
	    else cout<<ans<<endl;
	}
	return 0;
}