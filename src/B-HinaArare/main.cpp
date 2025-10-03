#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  bool solved = false;
  int loop = 0;
  string answer;
  
  while(!solved){
    string color;
    cin >> color;
    if(color == "Y"){
      answer = "Four";
      solved = true;
    }
    if(loop==N){
      answer = "Three";
      solved = true;
    }
    loop++;
  }
  
  cout << answer << endl;
}
