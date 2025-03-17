#include <bits/stdc++.h>
using namespace std;
int cnt[26];
// int cnt[123];
string str;
int main(void){
	
	//counting star는 맵 또는 배열 !!!(무조건)

	// 배열과 맵을 언제 쓰느냐!
	// 1) MAP-> string 기반
	// 2) ARRAY -> Integer 기반 
	//    (10만, 100만, 1000만 이런식으로 포인터 방식으로 들어오면 맵을 써야한다)  
	
	// 아스키 코드 'A' 65 / 'a' 97 
	
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	
	cin >> str;
	
	for(char a : str){
		cnt[a - 'a']++;  //좌표 이동
		// cnt[a]++;  //97개의 공간 낭비로 인해 위처럼 구현한다.
	}
	
	for(int i=0; i<26; i++) cout << cnt[i] << " ";


	// 시간복잡도 낭비..아래 처럼 구현하지 말것 ! 
	// string str;
    // cin >> str;
    // int cnt = int('z') - int('a') + 1;
    // int a[cnt] = {0,};
    // for(int i = 0; i < str.size(); i++) {
    //     for(int j=0; j<cnt; j++) {
    //         if((int)str[i] == int('a') + j) {
    //             a[j]++;
    //             break;
    //         }
    //     }
    // }

	return 0;
}