#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  unordered_set<int> a;

  int N; cin >> N;
  for(int i = 1; i <= N; i++){
    a.clear();
    int n, m;
    bool happy = false;
    cin >> n;
    m = n;

    while(!a.count(n)){
      if(n==1){
        happy = true;
        break;
      }
      a.insert(n);
      int sum = 0;
      while(n){
        int t = n % 10;
        sum += t*t;
        n /= 10;
      }
      n = sum;

    }
    cout << "Case #" << i << ": " << m << " is";
    cout << (happy?" a Happy number.":" an Unhappy number.") << endl;
  }

  return 0;
}
