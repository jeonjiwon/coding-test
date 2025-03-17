#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, temp;
    cin >> s;
    temp = s;
    reverse(temp.begin(), temp.end());
    if(temp == s) cout << 1 << endl;
    else cout << 0 << endl;

}