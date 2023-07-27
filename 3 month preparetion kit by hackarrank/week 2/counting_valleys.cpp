//Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector <int>
#define vll vector<ll>
#define si set<int>
#define sll set<ll>


#define lop(n) for(int i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define case(x) cout << "Case " << x++ << ": "
#define mp make_pair
#define pb push_back
#define ff first
#define ss second




int main(){
vector<int>cnt;
int n,cnt_val=0;
cin>>n;
string s;
cin>>s;
if(s[0]=='D')cnt.pb(-1);
else cnt.pb(1);
for(int i=1;i<n;i++){
	if(s[i]=='D')cnt.pb(cnt[i-1]-1);
	if(s[i]=='U')cnt.pb(cnt[i-1]+1);
}

for(int i=1;i<n;i++){
	if(cnt[i]==0&&cnt[i-1]<0)cnt_val++;
}
cout << cnt_val;
 }
 //Alhamdulillah