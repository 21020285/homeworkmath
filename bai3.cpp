#include <iostream>
#include <string>
using namespace std;
int m(string s);
int main() {
    string s;
    cin >> s;
    cout << m(s);
}
int m(string s){
    int num = s.size(); //the length of string s
    int minstrings = s[0] - '0';  //bien luu chu so nho nhat trong day
    for(int i = 1; i < num; i++){
      if(s[i] - '0' < minstrings) minstrings = s[i] - '0';
    }
    return minstrings;
}