#include <iostream>
#include <string>
using namespace std;
int ones(string s,int counts,int place);
int main() {
    string s;
    cin >> s;
    cout << ones(s,0,s.size() - 1);
}
int ones(string s,int counts,int place){
    if(s[place] == '1') counts++;
    if(place == 0) return counts;
    return ones(s,counts,place - 1);
}
