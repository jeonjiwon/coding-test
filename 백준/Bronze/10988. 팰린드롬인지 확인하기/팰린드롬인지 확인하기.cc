#include <bits/stdc++.h>
using namespace std;
string str;
int res[100];
int main(void){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> str;
	int mid_length = str.length() / 2;
	int res = 1;
	for(int i=0; i<mid_length; i++){
		if(str[i] != str[str.length() - i - 1]){
			res = 0;
			break;
		}
	}
	
	cout << res;
	
	return 0;
}