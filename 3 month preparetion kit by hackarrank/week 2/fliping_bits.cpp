#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'flippingBits' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */
string getthebinarybits(long n){
    long rem;
    string s="";
    vector<long>v(32,0);
    long i=0;
    while(n>0){
        rem=n%2;
        // v.push_back(rem);
        v[i]=rem;
        n/=2;
        i++;
    }
    for(long i=v.size()-1;i>=0;i--){
        if(v[i]==0){
            // cout<<"1" << " ";
            // s.insert(i,"0");
            s+="0";
        }
        if(v[i]==1) {
        // s.insert(i,"1");
            s+="1";
    }
    

}
return s;
}
long flippingBits(long n) {
    string s=getthebinarybits(n);
    long ans=0;
    string t="";
    for(long i=0;i<s.length();i++){
        if(s[i]=='0')t+="1";
        else t+="0";
    }
long j=0;
for(long i=t.length()-1;i>=0;i--){
    long bits=t[i]-'0';
    ans+=bits*(pow(2,j++));
}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string n_temp;
        getline(cin, n_temp);

        long n = stol(ltrim(rtrim(n_temp)));

        long result = flippingBits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
