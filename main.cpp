#define ll long long int
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int count;
    cin >> count;
    int inp;
    ll a = 0;
    ll b = 0;
    vector<int> vec;
    for (int i = 0; i < count; i++) {
        cin >> inp;
        vec.push_back(inp);
    }
    sort(vec.begin(), vec.end());

    for (int i = count - 1; i >= 0; i--) {
        if (a > b) b += vec[i];
            else a += vec[i];
    }

    cout << abs(a - b) + 1;
    return 0;
}
