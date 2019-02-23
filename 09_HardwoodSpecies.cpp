#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  int N; cin >> N;
  cin.ignore();

  cout << fixed << setprecision(4);
  string azz;
  getline(cin, azz);

  while(N--){
    map<string, int> a;
    int counter;
    string z;
    while(getline(cin, z)){
      if(z=="") break;
      a[z]++;
      counter++;
    }
    cout << counter << endl;
    for(auto it = a.begin(); it != a.end(); it++){
      cout << it->first << " " << it->second*100.0/counter << endl;
    }
    if(N) cout << endl;
  }


  return 0;
}
