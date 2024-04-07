bool allTrue() {
    return true;
}

template<typename... Args>
bool allTrue(bool first, Args... args) {
    return first && allTrue(args...);
}
