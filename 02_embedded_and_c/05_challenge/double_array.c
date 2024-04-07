#include "double_array.h"

void double_array(int *arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}