#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  int n;
  while(cin >> n and n != 0){
    map<vector<int>, int> m;
    int max_val = 0, c = 0;
    while(n--){
      std::vector<int> v(5);
      cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
      sort(v.begin(), v.end());
      m[v]++;
    }

    for(auto it : m){
      max_val = max(max_val, it.second);
    }


    for(auto it : m){
      if(it.second == max_val) c++;
    }

    cout << max_val * c << endl;
  }
  return 0;
}
