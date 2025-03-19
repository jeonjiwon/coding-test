#include <iostream>
#include <algorithm>
#include <vector>
// #include <sstream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str); // 공백까지 입력받기 위해 getline 사용

    int n = 0;
    for(char c : str) {
        n = (int)c + 13;
        if(c >= 'A' && c <= 'Z') {
            if(n > (int)'Z'){
                n = n - 26;
            }
            cout << (char)n;
        } else if(c >= 'a' && c <= 'z') {
            if(n > (int)'z'){
                n = n - 26;
            }
            cout << (char)n;
        } else {
            cout << c;
        }
    }
}