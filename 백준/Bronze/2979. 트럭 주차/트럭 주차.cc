#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int p[100]  = {0, };
    int cost[3] = {0, };
    int sum[3]  = {0, };

    cin >> cost[0] >> cost[1] >> cost[2];

    int maxLen = 0;
    int start = 0, end = 0;

    // 1 - 내가 푼 풀이
    // for(int i=0; i<3; i++) {
    //     cin >> start >> end;
    //     if(maxLen < end) {
    //         maxLen = end;
    //     }
    //     for(int j=start; j<end; j++) { // 이상 ~ 미만
    //         p[j]++;
    //     }
    // }

    // 2 - 개선 풀이  "누적합"을 좀더 활용하여 이중for 문 사용x 
    for(int i=0; i<3; i++) {
        cin >> start >> end;
        if(maxLen < end) {
            maxLen = end;
        }
        p[start]++;  // 시작 지점 증가
        p[end]--;  // 끝 다음 지점 감소 
    }
    
    for(int i=1; i<=maxLen; i++) {
        p[i] += p[i-1];
    }

    for(int i=0; i<maxLen; i++) {
        if(p[i] == 1) {
            sum[0]++;
        }
        if(p[i] == 2) {
            sum[1]++;
        }
        if(p[i] == 3) {
            sum[2]++;
        }
    }
     
    cout << (sum[0] * cost[0]) + (sum[1] * cost[1] * 2) + (sum[2] * cost[2] * 3) << endl;
}