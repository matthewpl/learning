//
// Created by matth on 11.06.2022.
//

#include "checksort.h"

bool check_sort(std::vector<int> original, std::vector<int> sorted) {
    if (original.size() != sorted.size()) {
        return false;
    }

    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] > sorted[i+1]) {
            return false;
        }
    }

    for (int i_s = 0; i_s < sorted.size(); i_s++) {
        bool found = false;
        for (int i_o = 0; i_o < original.size(); i_o++) {
            if (sorted[i_s] == original[i_o]) {
                found = true;
                break;
            }
        }

        if (!found) {
            return false;
        }
    }

    return true;
}
