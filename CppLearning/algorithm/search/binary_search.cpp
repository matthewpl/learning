#include "binary_search.h"

int binary_search(std::vector<int> arr, int value) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int i = left + ((right - left) / 2);

        if (value == arr[i]) {
            return i;
        } else if (value > arr[i]) {
            left = i + 1;
        } else if (value < arr[i]) {
            right = i - 1;
        }

    }

    return arr.size();
}

