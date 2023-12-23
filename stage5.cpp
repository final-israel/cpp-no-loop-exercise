#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Print the word that contains the highest amount of vowels
// ("aeiou").
// Example:
//   Input: hello world
//  Output: hello
// Example:
//   Input: HELLO WORLD
//  Output: HELLO


// NOTE: You can print to stderr (using `cerr`) for debug prints


int main()
{
    // Read input
    vector<string> words{istream_iterator<string>{cin}, istream_iterator<string>{}};

    // could be string view or const expr
    string vowels {"aeiouAEIOU"};
    // Your code goes here
    /* code */
    if (words.empty()) {
        return 0;
    }
    // check if != words.end() instead of deref
    string most_vowels = *(max_element(words.begin(), words.end(), [&vowels](const string& a, const string& b) {
                // can define this outside the predicate
                auto is_vowel = [&vowels] (char c) {return vowels.find(c) != string::npos;};
                // first count, then find max, in separate iterations
                int a_vowels = count_if(a.begin(), a.end(), is_vowel);
                int b_vowels = count_if(b.begin(), b.end(), is_vowel);
                // cerr << "a: " << a << " b: " << b << " a count: " << a_vowels << " b count: " << b_vowels << endl;
                return a_vowels < b_vowels;
                }));

    // Print your result instead of "answer"
    cout << most_vowels << endl;
}
