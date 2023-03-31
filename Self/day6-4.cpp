#include <iostream>
#include <string>
using namespace std;
string result(string x, string y){
    int c = 0;
    string s;
    for (int i = 0; i < x.length(); i++){
        for (int j = y.length() - 1 - c; j >= 0; j--){
                if (x[x.length() - 1 - i] == y[j]){
                    s.push_back(x[x.length() - 1 - i]);
                        c++;
                        break;
                }
                    c++;
        }
    }
    string str;
    for (int i = 0; i < s.length(); i++){
        str.push_back(s[s.length() - 1 - i]);
    }
    return str;
}

int main(){
    string s1;
    string s2;
    cout<<"Enter first string :";
    cin >> s1;
    cout<<"Enter second string: ";
    cin>>s2;
    s1 = result(s1, s2);
    s2 = result(s2, s1);
    if (s1.length() > s2.length())
    cout << "Longest common subsequence is: "<<s1<<endl;
    else
    cout << "Longest common subsequence is: "<<s2<<endl;
 return 0;
}

