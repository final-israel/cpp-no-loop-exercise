#include <cstdint>
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;


// Check if every value in the vector is at least twice as big as the
// previous value (ints[i] * 2 <= ints[i + 1]).
// If they are, print "OK". If not print "BAD".
// Example:
//   Input: 1 2 5 10
//  Output: OK
// Example:
//   Input: 1 2 3 4
//  Output: BAD


// NOTE: You can print to stderr (using `cerr`) for debug prints


int main()
{
    // Read input
    // maybe second 
    vector<uint64_t> ints{istream_iterator<uint64_t>{cin}, istream_iterator<uint64_t>{}};

    // Your code goes here
    /* code */
    bool ok = adjacent_find(ints.begin(), ints.end(), [](int a, int b) { return b < a * 2;}) == ints.end();
    if (ok) {
        cout << "OK" << endl;
    } else {
        cout << "BAD" << endl;
    }

    // Print your result instead of "answer"

}
