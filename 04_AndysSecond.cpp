#include <bits/stdc++.h>

using namespace std;
int main(){
  iostream::sync_with_stdio(false);

  set<string> out;
  string cur = "";
  char s;

  while(scanf("%c", &s) == 1){
      if(s >= 'a' && s <= 'z' || s >= 'A' && s <= 'Z'){
        cur += tolower(s);
      }else if(s == '-'){
        char ch = getchar();
        if(ch == '\n') continue;
        cur += '-';
        cur += tolower(ch);
      }else{
        if(cur!="") out.insert(cur);
        cur = "";
      }
  }

  for(string z : out){
    cout << z << endl;
  }

  return 0;
}
