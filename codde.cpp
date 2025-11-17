// buffer_owner.cpp
#include <iostream>
#include <cstring>

class Buffer {
    size_t n;
    char *data;
public:
    Buffer(size_t n=0): n(n), data(n ? new char[n] : nullptr) {
        std::cout << "Constructed size=" << n << '\n';
    }
    ~Buffer() { delete[] data; std::cout << "Destroyed\n"; }

    // move constructor
    Buffer(Buffer&& other) noexcept : n(other.n), data(other.data) {
        other.n = 0; other.data = nullptr;
        std::cout << "Moved\n";
    }
    // delete copy
    Buffer(const Buffer&) = delete;
    Buffer& operator=(const Buffer&) = delete;

    void write(const char* s) {
        if(!data) return;
        std::strncpy(data, s, n-1);
        data[n-1] = '\0';
    }
    void show() const { if(data) std::cout << data << '\n'; }
};

int main() {
    Buffer b1(16);
    b1.write("hello world");
    Buffer b2 = std::move(b1); // demonstrates move
    b2.show();
}
