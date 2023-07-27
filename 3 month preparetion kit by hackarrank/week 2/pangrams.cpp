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

string pangrams(string s){
	transform(s.begin(),s.end(),s.begin(), ::tolower);
	vector<bool>vis(26,false);
	for(int i=0;i<s.length();i++){
		if(vis[s[i]]==false){
			if('a'<=s[i]&&s[i]<='z'){
			vis[s[i]-'a']=true;
		}
		}
		else continue;
		
	}
	bool ok=true;
	for(int i=0;i<26;++i){
		if(!vis[i]){
			ok=false;
			break;
		}
	}
	if(ok) return"pangram";
	else return "not pangram";
}


int main(){
string s;
getline(cin,s);
cout << pangrams(s);
 }
 //Alhamdulillah