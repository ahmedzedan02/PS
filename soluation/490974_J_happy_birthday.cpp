#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    int max_height = 0;
    int count = 0;

    for (int i = 0; i < t; ++i) {
        int h;
        cin >> h;

    
        if (h >= max_height) {
        
            if (h > max_height) {
                max_height = h;
                count = 1;
            } else {
    
                count++;
            }
        }
    }


    cout << count << endl;

    return 0;
}