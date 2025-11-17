// threaded_primes.cpp
#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long x) {
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2;
    for (long long d = 3; d*d <= x; d += 2)
        if (x % d == 0) return false;
    return true;
}

int main() {
    vector<long long> queries = {1000003LL, 1000033LL, 1000037LL, 1000193LL, 1000433LL};
    vector<thread> threads;
    mutex out;

    for (auto q : queries) {
        threads.emplace_back([q, &out]() {
            bool p = is_prime(q);
            lock_guard<mutex> lg(out);
            cout << q << (p ? " is prime\n" : " is composite\n");
        });
    }

    for (auto &t : threads) if (t.joinable()) t.join();
}
