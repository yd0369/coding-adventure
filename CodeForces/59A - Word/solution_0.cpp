#include<iostream>
using namespace std;

bool isUpper(const char &ch) {
    if(ch >= 65 and ch <= 90) return true;
    return false;
}
bool isLower(const char &ch) {
    if(ch >= 97 and ch <= 122) return true;
    return false;
}

int main() {
    string s; cin >> s;
    int n(s.length());
    int ups(0), lows(0);
    for(char &ch: s) {
        if(isUpper(ch)) ups++;
        else lows++;
    }
    if(ups > lows) {
        for(char &ch: s) {
            if(isUpper(ch)) continue;
            ch-=32;
        }
    }
    else {
        for(char &ch: s) {
            if(isLower(ch)) continue;
            ch+=32;
        }
    }
    cout << s;
}