#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[9];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < 9; i++){
        cin >> a[i]; 
    }
    sort(a, a + 9);
    do{
        int sum = 0; 
        for(int i = 0; i < 7; i++) sum += a[i]; 
        if(sum == 100)break;
    }while(next_permutation(a, a + 9)); 
    for(int i = 0; i < 7; i++) cout << a[i] << "\n"; 

    // vector<int> v;
    // int num = 0;
    // int sum = 0;
    // for(int i=0 ; i<9 ; i++){
    //     cin >> num;
    //     sum += num;
    //     v.push_back(num);
    // }
    // for(int i=0; i<9; i++) {
    //     for(int j=i+1; j<9; j++) {
    //         if(v[i] + v[j] == sum - 100) {
    //             v.erase(v.begin() + j); 
    //             v.erase(v.begin() + i); 
    //             break;  
    //         }
    //     }
    //     if(v.size() == 7) {
    //         break;
    //     }
    // }
    // sort(v.begin(), v.end());
    // for(int i=0; i<v.size(); i++) {
    //     cout << v[i] << '\n';
    // }

    return 0;
}