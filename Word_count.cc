/**
 *  @file: Test.cc
 *  @author: Mathew Goh
 *  @date: 9/18/2024
 *  @brief: C++ second program on word count
 *  GitHub Username: MatGoh265
 *  GitHub Email: mg639224@ohio.edu
 * 
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string paragraph;
double total_word_count = 0;
double word_count;
double sentence = 0;
double avg = 0;
double letter_count;
char last;

int main()
{

    // paragraph input
    cout << "Enter a paragraph..." << endl;
    cin >> paragraph;

    // calculations for word count and sentences
    while (paragraph != "@@@")
    {
        // find letter count
        letter_count = paragraph.length();

        // find total word count
        word_count = letter_count / letter_count;
        total_word_count = total_word_count + word_count;

        // find total sentences
        last = paragraph.at(letter_count - 1);
        if (last == '?' || last == '.' || last == '!')
        {
            sentence = sentence + 1;
        }
        // reinput
        cin >> paragraph;
    }

    // output words and sentences count
    cout << "Word count: " << total_word_count << endl;
    cout << "Sentence count: " << sentence << endl;

    // determin if the user input anything
    // determin if user had any sentences in there paragraph
    // output average words per sentence
    if (total_word_count == 0 && sentence == 0)
    {
        cout << "You did not enter any text!" << endl;
    }
    else if (sentence == 0)
    {
        cout << "You did not enter any sentences!" << endl;
    }
    else
    {
        // Round to the tenths place
        cout << fixed << setprecision(1);

        // calculation for average words per sentence
        avg = total_word_count / sentence;

        // output for average words per sentence
        cout << "Average words per sentence: " << avg << endl;
    }

    return 0;
}
