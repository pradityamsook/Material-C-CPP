#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int unsorted[10] = {3, 3, 2, 1, 5, 5, 4, 3, 7, 8};
    vector<int> v(unsorted, unsorted + 10);
    sort(v.begin(), v.end(), greater<int>());
    vector<int>::iterator low, up;
    low = lower_bound(v.begin(), v.end(), 3, greater<int>());
    up = upper_bound(v.begin(), v.end(), 5, greater<int>());

    cout << "lower_bound at position " << (low - v.begin()) << endl;
    cout << "upper_bounf at position " << (up - v.begin()) << endl;

    return 0;
}




//  https://www.geeksforgeeks.org/upper_bound-and-lower_bound-for-non-increasing-vector-in-c/
