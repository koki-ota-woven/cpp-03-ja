#pragma once

class unique_int_ptr {
public:
    unique_int_ptr(int number);
    ~unique_int_ptr();
    int* get() const;
    int* release();
    int& operator*() const;
private:
    int* number_ptr;
};

template<typename T>
class unique_ptr {
public:
    unique_ptr(T input) : input_ptr(new T(input)) {}

    ~unique_ptr() {
        delete input_ptr;
    }

    T* get() const {
        return input_ptr;
    }

    T* release() {
        T* ret = input_ptr;
        input_ptr = nullptr;
        return ret;
    }

    T& operator*() const {
        return *input_ptr;
    }

private:
    T* input_ptr;
};
