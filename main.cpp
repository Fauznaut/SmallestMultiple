#include <iostream>
using namespace std;

int divisorLimit();
int smallestMultiple(int limit);

int main() {
    cout << smallestMultiple(divisorLimit());
    return 0;
}

int divisorLimit() {
    static int limit;
    cin >> limit;
    return limit;
}

int smallestMultiple(int limit) {
    static int smallestMultiple = 1;
    bool found = false;
    while (!found) {
        for (int divisor = 1; divisor <= limit; divisor++) {
            if (smallestMultiple % divisor == 0)
                found = true;
            else {
                found = false;
                break;
            }
        }
        if (!found)
            smallestMultiple++;
    }
    return smallestMultiple;
}