#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  unordered_map<string, string> dic;
  string z;
  while(getline(cin, z)){
    if(z=="") break;
    int ind = z.find(" ");
    dic[z.substr(ind+1, z.size())] = z.substr(0, ind);
  }
  string tr;
  while(cin >> tr){
    if(dic.find(tr) != dic.end()){
      cout << dic[tr] << endl;
    }else{
      cout << "eh" << endl;
    }
  }

  return 0;
}
