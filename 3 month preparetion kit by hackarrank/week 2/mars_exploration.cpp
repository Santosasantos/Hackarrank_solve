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

int getchangednumber(string s){
	string sample="SOS";
	int cnt=0;
	for(int i=0;i<s.length();i+=3){
		if(s[i]!='S')cnt++;
		if(s[i+1]!='O')cnt++;
		if(s[i+2]!='S')cnt++;
	}
	return cnt;
}


int main(){
string s;
getline(cin,s);
cout << getchangednumber(s);
 }
 //Alhamdulillah