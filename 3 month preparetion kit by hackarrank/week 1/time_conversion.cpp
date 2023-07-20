#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
int indict=s.length()-2;
string t;
bool condused=false;

string conv;
conv+=s[0];
conv+=s[1];

// cout << s << "\n";
int time=stoi(conv);
if(s[indict]=='P'&&time<12){
  
  
    time+=12;
    s.erase(0,1);
    s.erase(0,1);
    s.insert(0,to_string(time));
        s.erase(s.length()-1);
    s.erase(s.length()-1);
    condused=true;
    t=s;
}

// else if(s[indict]=='P'&&time==12)
if(s[indict]=='A'&&time==12){
 
    s.erase(0,1);
s.erase(0,1);
    s.insert(0,"00");
      s.erase(s.length()-1);
    s.erase(s.length()-1);
    t=s;
    condused=true;

}
if(condused){
    return t;
}
else{
    s.erase(s.length()-1);
    s.erase(s.length()-1);
    return s; 
}


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
