#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[101] = {0,};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum_a =0, sum_b = 0, sum_c = 0;
    int p_a = 0, p_b = 0, p_c = 0;
    cin >> p_a;
    cin >> p_b;
    cin >> p_c;

    int n1, n2 = 0;
    for(int i = 0; i < 3; i++){
        cin >> n1 >> n2;        
        for(int j=n1; j<n2; j++){
            a[j]++;
        }
    }

    for(int i=1; i<101; i++){
        if(a[i] == 1){
            sum_a++;
        }
        if(a[i] == 2){
            sum_b++;
        }
        if(a[i] == 3){
            sum_c++;
        }
    }
    cout << (sum_a * p_a) + (sum_b * 2 *p_b) + (sum_c *3* p_c) << endl;
    return 0;
}