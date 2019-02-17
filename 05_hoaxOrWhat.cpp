#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);

  int N;

  while(cin >> N and N != 0){
    multiset<int> wam;
    long long cost = 0;
    while(N--){
        int z; cin >> z;
        while(z--){
          int t; cin >> t;
          wam.insert(t);
        }
        cost += *wam.rbegin() - *wam.begin();
        wam.erase(wam.begin());
        wam.erase(prev(wam.end()));
    }
    cout << cost << endl;
  }
  return 0;
}
