#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  while(N != 0 and M != 0){
    unordered_set<int> cd;
    int cntr = 0;
    while(N--){
      int t; cin >> t;
      cd.insert(t);
    }

    while(M--){
      int t; cin >> t;
      if(cd.find(t) != cd.end())
        cntr++;
      else
        continue;
    }

    cout << cntr  << endl;

    cin >> N >> M;
  }



  return 0;
}
