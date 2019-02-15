#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  int N; cin >> N;
  while(N--){
    multiset<int> L1, L2;
    int a,b,c; cin >> a >> b >> c;

    while(b--){
        int t; cin >> t;
        L1.insert(t);
    }

    while(c--){
        int t; cin >> t;
        L2.insert(t);
    }
    while(L1.size() != 0 and L2.size() != 0){
        if(*L1.rbegin() > *L2.rbegin()){
          int t = *L1.rbegin() - *L2.rbegin();
          L1.erase(prev(L1.end()));
          L2.erase(prev(L2.end()));
          L1.insert(t);
        }else if(*L1.rbegin() < *L2.rbegin()){
          int t = *L2.rbegin() - *L1.rbegin();
          L1.erase(prev(L1.end()));
          L2.erase(prev(L2.end()));
          L2.insert(t);
        }else{
          L1.erase(prev(L1.end()));
          L2.erase(prev(L2.end()));
        }
    }

    if(L1.size()==L2.size()){
      cout << "green and blue died" << endl;
    }else if(L1.size()>L2.size()){
      cout << "green wins" << endl;
    }else{
      cout << "blue wins" << endl;
    }

    for(auto s = L1.begin(); s != L1.end(); s++){
      cout << *s << endl;
    }

    for(auto s = L2.begin(); s != L2.end(); s++){
      cout << *s << endl;
    }
    if(N!=0)
      cout << endl;
  }
  return 0;
}
