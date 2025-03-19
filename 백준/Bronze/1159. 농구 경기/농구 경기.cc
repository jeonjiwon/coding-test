#include <bits/stdc++.h>
using namespace std;

int N; //선수의 수 
int cnt[26] = {};
string a = "";
string res ="";
//'a' 97'
int main(void){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a;
		cnt[a[0] - 'a']++;
	}
	
	for(int i=0; i<26; i++){
		if(cnt[i] >= 5){
			res += (char)i+97;
		}	
	}

	if(res == "") res = "PREDAJA";
	cout << res << '\n';
	
	return 0;
}