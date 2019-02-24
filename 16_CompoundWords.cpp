#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  set<string> words;
  string z;
  while(cin >> z)
    words.insert(z);


  for(auto it = words.begin(); it != words.end(); it++){
    string z = *it;
    for(int i = 1; i < z.size(); i++){
      string t = z.substr(0,i);
      if(words.find(t) != words.end()){
        if(words.find( z.substr(i, z.size()) ) != words.end()){
          cout << z << endl;
          break;
        }
      }
    }
  }

  return 0;
}
