#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);

  string line;

  while(getline(cin, line)){
    list<char> results;
    auto cursor = results.begin();
    for(char z: line){
      if(z == '['){
        cursor = results.begin();
      }else if(z == ']'){
        cursor = results.end();
      }else{
        results.insert(cursor, z);
      }
    }
    cout << string(results.begin(), results.end()) << endl;
  }
  return 0;
}
