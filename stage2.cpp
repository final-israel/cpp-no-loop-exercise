#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Print all of the words in the container, separated by comma
// (Python: ', '.join(words))
// Example:
//   Input: apple banana pineapple mango
//  Output: apple, banana, pineapple, mango


// NOTE: You can print to stderr (using `cerr`) for debug prints


int main()
{
    // Read input
    // maybe make 3rd exercise
    vector<string> words{istream_iterator<string>{cin}, istream_iterator<string>{}};

    // Your code goes here
    /* code */
    if (words.empty()) {
        return 0;
    }

    // maybe use next instead of ++
    // can also start with an empty list and remove the last ", ".
    string s = accumulate(++words.begin(), words.end(), words[0],
                     [](const string& a, const string& b){
                           return a + ", " + b;
                     });
    cout << s << endl;
    // Print your result instead of "answer"
    //cout << "answer" << endl;
}
