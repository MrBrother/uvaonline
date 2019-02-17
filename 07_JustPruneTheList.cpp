#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  unordered_map<int, int> list;

  int N; cin >> N;
  while(N--){
    unordered_map<int, int> list;
    int a,b, c = 0; cin >> a >> b;

    int t;
    while(a--){
      cin >> t;
      list[t]++;
    }

    while(b--){
      cin >> t;
      list[t]--;
    }
    for(auto it = list.begin(); it!=list.end(); it++){
      c += abs(it->second);
    }

    cout << c << endl;


  }

  return 0;
}
