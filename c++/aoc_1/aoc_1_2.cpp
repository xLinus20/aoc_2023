#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

/*
    The newly-improved calibration document consists of lines of text; 
    each line originally contained a specific calibration value that the Elves now need to recover. 
    On each line, the calibration value can be found by combining the first digit and the last digit (in that order) 
    to form a single two-digit number.
*/

/*
    Your calculation isn't quite right. It looks like some of the digits are actually spelled out with 
    letters: one, two, three, four, five, six, seven, eight, and nine also count as valid "digits".
    Equipped with this new information, you now need to find the real first and last digit on each line.
*/

bool is_number(const char& c)
{
    int v = static_cast<int>(c);
    return (v > 47 && v < 58);
}

int main()
{
    const std::string numbers[9] = 
    {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };

    std::ifstream infile("input.txt");
    uint32_t sum = 0;
    std::string line;

    while(infile >> line)
    {
        
    }

    std::cout << "Calibration Value: " << sum << std::endl;
}