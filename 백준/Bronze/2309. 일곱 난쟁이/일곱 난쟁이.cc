#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> a;

// 9, 7, 0
void makePermutation(int n, int r, int depth) {
    int sum = 0;
    if(depth == r) {
        for(int i = 0 ; i < r; i ++) {
            // cout << a[i] << ' ';
            sum += a[i];
        }
        // cout << '\n';

        if(sum == 100) {
            for(int i = 0 ; i < r; i ++) {
                cout << a[i] << ' ';

            }
            exit(0);
        }
        return;
    }

    for(int i=depth; i<n; i++) {
        swap(a[depth], a[i]);
        makePermutation(n, r, depth + 1);
        swap(a[depth], a[i]);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    // case 1 : Permutation 직접 구현

    int num;
    for(int i = 0 ; i < 9; i ++) {
        cin >> num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());
    int sum = 0 ;
    makePermutation(9, 7, 0);

    // case 2: next Permutaion 사용하기 
    // do {
    //     sum = 0 ;
    //     for(int i = 0 ; i < 7; i ++) {
    //         sum += a[i];
    //     }

    //     if(sum == 100) {
    //         for(int i = 0 ; i < 7; i ++) {
    //             cout << a[i] << ' ';
    //         }
    //         break;
    //     };
    // } while (next_permutation(a.begin(), a.end()));
    
}