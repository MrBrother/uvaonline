#include <bits/stdc++.h>

using namespace std;
bool check(char c){
  return c <= 'z' and c >= 'a';
}

int main(){
  iostream::sync_with_stdio(false);

  set<string> out;
  string s;
  while(cin >> s){
    string cur = "";
    for(char a : s){
      a = tolower(a);
      if(check(a)){
        cur += a;
      }else if(cur != ""){
        out.insert(cur);
        cur = "";
      }
    }

    if(cur != "")
     out.insert(cur);
  }

  for(string z : out){
    cout << z << endl;
  }

  return 0;
}
