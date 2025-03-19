#include <bits/stdc++.h>
using namespace std;
string str ; 
int main(void){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	
	getline(cin, str);

	for(int i=0; i<str.size(); i++){
		if (str[i] >= 65 && str[i] <= 90){ //upper 
			if((int)str[i] + 13 > 90) str[i] = (int)str[i] - 13;
			else str[i] = (int)str[i] + 13;
		}
        else if (str[i] >= 97 && str[i] <= 122){ // lower
			if((int)str[i] + 13 > 122) str[i] = (int)str[i] - 13;
			else str[i] = (int)str[i] + 13;
		}
		cout << str[i];
	}
	
	return 0;
}