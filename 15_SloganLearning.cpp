#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  unordered_map <string, string> slogan;
  int N; cin >> N;
  cin.ignore();
  while(N--){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    slogan[a] = b;
  }
  int z; cin >> z;
  cin.ignore();
  while(z--){
    string t; getline(cin, t);
    cout << slogan[t] << endl;
  }

  return 0;
}
