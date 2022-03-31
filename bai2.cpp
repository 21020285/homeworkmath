#include <iostream>
#include <string>
using namespace std;
int ones(string s);
int main() {
    string s;
    cin >> s;
    cout << ones(s);
}
int ones(string s){
    int num = s.size(); //the length of string s
    int counts = 0;  //so bit 1 trong xau
    for(int i = 0; i < num; i++){
      if(s[i] == '1') counts++; //kiem tra va dem so bit 1 trong xau
    }
    return counts;
}
