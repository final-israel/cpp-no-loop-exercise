#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>

using namespace std;

// Print all elements in the container, each in a new line
// Example:
//   Input: 10 20 30 40
//  Output:
//          10
//          20
//          30
//          40


// NOTE: You can print to stderr (using `cerr`) for debug prints


int main()
{
    // Read input
    // maybe make 4th exercise
    // show an example where we never use the vector "ints"
    list<int> ints{istream_iterator<int>{cin}, istream_iterator<int>{}};

    // Your code goes here
    /* code */
    
    // can use begin(ints) instead
    copy(ints.begin(), ints.end(), ostream_iterator<int>(cout, "\n"));

    // Print your result instead of "answer"
    // cout << "answer" << endl;
}
