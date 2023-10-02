#include <iostream>
#include <limits>
using namespace std;

int main() {
    // Maximum and minimum values for a short (16-bit signed integer)
    short maxShort = numeric_limits<short>::max();
    short minShort = numeric_limits<short>::min();

    cout << "Maximum value for a short: " << maxShort << endl;
    cout << "Minimum value for a short: " << minShort << endl;

    return 0;
}
