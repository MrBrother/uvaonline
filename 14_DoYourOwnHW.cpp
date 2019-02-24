#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  unordered_map<string, int> hw;
  int n;
  cin >> n;
  int c = 1;
  while(n--){
    int z; cin >> z;
    string name; int hrs;
    while (z--) {
      cin >> name >> hrs;
      hw[name] = hrs;
    }
    int dead;
    string crs;
    cin >> dead >> crs;
    cout << "Case " << c << ": ";
    if(hw.find(crs) != hw.end()){
      int r = dead  - hw[crs];
      if(r>=0){
        cout << "Yesss" << endl;
      }else if(r < 0 and r >= -5){
        cout << "Late" << endl;
      }else{
        cout << "Do your own homework!" << endl;
      }
    }else{
        cout << "Do your own homework!" << endl;
    }
    c++;
    hw.clear();
  }
  return 0;
}
