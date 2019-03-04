#include <bits/stdc++.h>

using namespace std;

int main(){
  iostream::sync_with_stdio(false);
  int N; cin >> N;
  while(N--){
    multiset<int> L1, L2;
    vector<int> sA, sB;
    int a,b,c; cin >> a >> b >> c;

    while(b--){
        int t; cin >> t;
        L1.insert(t);
    }

    while(c--){
        int t; cin >> t;
        L2.insert(t);
    }
    while(L1.size() > 0 and L2.size() > 0){
      sA.clear(); sB.clear();
       for(int i = 0; i < a; i++){

          if(*L1.rbegin() > *L2.rbegin()){
              int t = *L1.rbegin() - *L2.rbegin();
              sA.push_back(t);
          }else if(*L1.rbegin() < *L2.rbegin()){
              int t = *L2.rbegin() - *L1.rbegin();
              sB.push_back(t);
          }

        L1.erase(prev(L1.end()));
        L2.erase(prev(L2.end()));
        if(L1.size() == 0 || L2.size() == 0)
          break;


      }

      for(int i = 0; i < sA.size(); i++){
        L1.insert(sA[i]);
      }


      for(int i = 0; i < sB.size(); i++){
        L2.insert(sB[i]);
      }
    }

    if(L1.size()==L2.size()){

      cout << "green and blue died" << endl;

    }else if(L1.size()>L2.size()){
      cout << "green wins" << endl;

      auto it = L1.end();
      do{
        it--;
        cout << *it << endl;
      }while (it != L1.begin());

    }else{
      cout << "blue wins" << endl;

      auto it = L2.end();
      do{
        it--;
        cout << *it << endl;
      }while (it != L2.begin());

    }


    if(N)
      cout << endl;
  }
  return 0;
}
