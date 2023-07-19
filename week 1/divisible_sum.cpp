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

int divsum(int n,int k,vector<int>v){
	int cnt=0;
for(int i=0;i<v.size()-1;i++){
    for(int j=i+1;j<v.size();j++){
       
        if((v[i]+v[j])%k==0){
            
             cout << v[i]+v[j] << " ";
             cout << "It's worked bro for"<<i<<" "<<j<<"\n";
            cnt++;
        }
    }
}
return cnt;
}


int main(){
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++){
	cin>>a[i];
}
cout << divsum(n,k,a);
 }
 //Alhamdulillah