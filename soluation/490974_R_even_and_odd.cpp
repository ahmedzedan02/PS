#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<long long> arr(n);


    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }


    vector<long long> even, odd;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            even.push_back(arr[i]);
        } else {
            odd.push_back(arr[i]);
        }
    }

    
    sort(even.rbegin(), even.rend());
    sort(odd.rbegin(), odd.rend());

    
    vector<long long> result(even.begin(), even.end());
    result.insert(result.end(), odd.begin(), odd.end());

    
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}