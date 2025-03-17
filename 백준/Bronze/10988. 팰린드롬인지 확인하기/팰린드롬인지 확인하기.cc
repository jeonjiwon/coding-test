#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	/*
	reverse 했을때 동일한지 비교
	*/
	string s, temp;
    cin >> s;
    temp = s;
    reverse(temp.begin(), temp.end());
    if(temp == s) cout << 1 << endl;
    else cout << 0 << endl;

    // string s;
    // cin >> s;
    // for(int i=0; i<s.size() / 2; i++) {
    //     if(s[i]  != s[s.size() - 1 - i]) {
    //         cout << 0 << endl;
    //         return 0;
    //     }
    // }
    // cout << 1 << endl;

}