#include "./unique_ptr.hpp"

unique_int_ptr::unique_int_ptr(int number) : number_ptr(new int(number)) {}

unique_int_ptr::~unique_int_ptr() {
    delete this->number_ptr;
}

int* unique_int_ptr::get() const{
    return number_ptr;
}

int* unique_int_ptr::release() {
    int* ret = number_ptr;
    number_ptr = nullptr;
    return ret;
}

int& unique_int_ptr::operator*() const {
    return *number_ptr;
}
