template <typename T>

T sum(T n) {
    return n;
}

template<typename T, typename... Args>
T sum(T first, Args... args) {
    return first + sum(args...);
}