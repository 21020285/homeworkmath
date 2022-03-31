#include<bits/stdc++.h>
using namespace std;
int m(string s,int i, int j);
int main()
{
    string s;
    getline(cin,s);
    cout << m(s,0,s.length()-1);
}
int m(string s,int i, int j){
    if(i == j)
    {
        return s[j]-'0';
    }
    else
    {
        return min(s[j]-'0',m(a,i,j-1));
    }
}
