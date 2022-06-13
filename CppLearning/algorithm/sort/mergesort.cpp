#include "mergesort.h"

#include <iterator>
#include <vector>

#include <iostream>

void mergeSortIterative(std::vector<int>& arr) {
    long long int arr_size = std::distance(std::begin(arr), std::end(arr));

    for (long long int window_size = 1; window_size < arr_size; window_size *= 2) { // setup window size for sub-arrays
        for (long long int left = 0; left < arr_size; left += window_size*2) { // iterate over sub-arrays
            long long int middle = std::min(left + window_size, arr_size - 1);
            long long int right = std::min(left + window_size*2, arr_size);

            // merge sub-arrays
            {
                std::vector<int> tmp_arr(std::min(right-left, right));
                long long int l_i = left;
                long long int r_i = middle;

                long long int i = 0;

                while (l_i < middle && r_i < right) {
                    if (arr[l_i] < arr[r_i]) {
                        tmp_arr[i] = arr[l_i];
                        l_i++;
                    } else {
                        tmp_arr[i] = arr[r_i];
                        r_i++;
                    }

                    i++;
                }

                while (l_i < middle) {
                    tmp_arr[i] = arr[l_i];
                    l_i++;
                    i++;
                }

                while (r_i < right) {
                    tmp_arr[i] = arr[r_i];
                    r_i++;
                    i++;
                }

                i = 0;
                for (int j = left; i < tmp_arr.size(); j++, i++) {
                    arr[j] = tmp_arr[i];
                }
            }
        }
    }
}
