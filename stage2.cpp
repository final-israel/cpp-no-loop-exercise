#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

// Calculate the average of the values in the vector
// Example:
//   Input: 10 20 30 40
//  Output: 25


// NOTE: You can print to stderr (using `cerr`) for debug prints


int main()
{
    // Read input
    // maybe make 1st exercise
    vector<int> ints{istream_iterator<int>{cin}, istream_iterator<int>{}};

    // Your code goes here
    /* code */
    int sum = accumulate(ints.begin(), ints.end(), 0);
    int res = sum / (int)ints.size();

    // Print your result instead of "answer"
    cout << res << endl;
}
