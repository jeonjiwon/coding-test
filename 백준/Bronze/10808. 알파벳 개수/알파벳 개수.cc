#include <bits/stdc++.h>
using namespace std;
int cnt[26];
string str;
int main(void){
	
	//counting star는 맵 또는 배열 !!!(무조건)
	// MAP-> string 기반 
	// ARRAY -> Int  
	// 아스키 코드 'A' 65 / 'a' 97 
	
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	
	cin >> str;
	
	for(char a : str){
		cnt[a - 'a']++;
	}
	
	for(int i=0; i<26; i++) cout << cnt[i] << " ";
	return 0;
}