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
int lonelyinteger(vector<int> a){
	int ans=0;
	for(int i=0;i<a.size();i++){
  if(count(a.begin(),a.end(),a[i])<2){
    ans=a[i];
  	break;
  }

  }
  return ans;
}



int main(){
 // int t,test=1;
 // cin>>t;
 // while(t--){
 	int n;
 	cin>>n;
  vector<int>a;
  vector<int>::iterator it;
  for(int i=0;i<n;i++){
  	int x;
  	cin>>x;
  	a.pb(x);
  }
  cout << lonelyinteger(a);
  // if(!var)cout<< "found the unique element";
  // else cout << "not found";
 }
 
 //Alhamdulillah