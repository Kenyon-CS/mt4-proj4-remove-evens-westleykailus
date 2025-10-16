#include "LinkedList.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

static bool all_passed = true;

void check(bool cond, const std::string& msg) {
    if (!cond) {
        all_passed = false;
        std::cout << "FAIL: " << msg << "\n";
    } else {
        std::cout << "PASS: " << msg << "\n";
    }
}

int main() {
    LinkedList L;
    for (int v : {8,7,6,5,4,3,2,1}) L.push_front(v);
    L.remove_evens();
    check(L.to_string()=="[1, 3, 5, 7]", "removed evens correctly");
    if (all_passed) std::cout << "ALL TESTS PASSED\n"; else std::cout << "SOME TESTS FAILED\n";
    return all_passed ? 0 : 1;
}
