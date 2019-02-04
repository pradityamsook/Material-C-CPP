#include <bits/stdc++.h>

using namespace std;

int findMinimunElement(int heap[], int n) {
    int minimumElement = heap[0];

    for (int i = 1; i < n; ++i)
            minimumElement = min(minimumElement, heap[i]);

    return minimumElement;
}

int main() {
    int n = 10;
    int heap[] = { 20, 30, 4, 60, 6, 7, 8, 4, 1, 6 };

    printf("%d\n", findMinimunElement(heap, n));

    return 0;
}
