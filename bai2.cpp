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
    if(s.size() == 0) return 0;
    char x = s[0];
    s.erase(s.begin());
    return (x - '0') + ones(s);
}
