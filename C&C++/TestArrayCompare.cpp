#include <iostream>
#include <array>
#include <iterator>
#include <bits/stdc++.h>

template <
    class T,
    std::size_t N
> struct array;

/*void sort_arr(int arr[]) {
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i <= size; i++) {
        if (arr[i] > arr[i+1]) {
            int t = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = t;
        }    
    }
}*/

int main () {
    std::array<int, 5> iar  = {1, 2, 3, 4, 5};
    std::array<int, 5> iar01  = {1, 2, 3, 5, 4};
    //sort_arr(iar01);
    
    int size = sizeof(iar) / sizeof(iar[0]);

    if (iar == iar01) {
        printf("yes %d\n", size);
    } else {
        printf("No %d\n", size);
    }
}
