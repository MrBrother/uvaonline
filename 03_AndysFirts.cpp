#include <bits/stdc++.h>

using namespace std;
void parse(string& s){

}

int main(){
  iostream::sync_with_stdio(false);

  set<string> out;
  string s;
  while(cin >> s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    out.insert(s);
  }

  for(string z : out){
    cout << z << endl;
  }

  return 0;
}
