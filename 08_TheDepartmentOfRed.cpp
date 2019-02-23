#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  unordered_map<int, int> list;
  vector<int> order;
  int a;
  while(cin >> a){
    if(list.find(a) != list.end()){
      list[a]++;
    }else{
      list[a] = 1;
      order.push_back(a);
    }
  }

  for(int a : order){
    cout << a << " " <<  list[a] << endl;
  }

  return 0;
}
