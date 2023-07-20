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

vector<int> roundingprocess(vector<int>grades){
	vector<int>ans;
	int nextmul;
	for(int i=0;i<grades.size();i++){
		if(grades[i]>=38){
				nextmul=floor(grades[i]/5);
				// cout << nextmul << " ";
				if(abs(((nextmul)*5)-grades[i])>=3){
					ans.push_back((nextmul*5)+5);
				}
				else ans.push_back(grades[i]);
			
		}
		else ans.push_back(grades[i]);
	}
	return ans;
}


int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>b;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	b=roundingprocess(a);
	for(auto it:b){
		cout << it << " ";
	}

 }
 //Alhamdulillah