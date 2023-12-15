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

bool is_number(const char& c)
{
    int v = static_cast<int>(c);
    return (v > 47 && v < 58);
}

int main()
{
    std::ifstream infile("input.txt");
    uint32_t sum = 0;
    std::string line;


    while(infile >> line)
    {
        size_t start, end;
        start = 0;
        end = line.size() - 1;

        while(start != end)
        {
            if(!is_number(line[start]))
                start++;
            if(!is_number(line[end]))
                end--;

            if((is_number(line[start])) && (is_number(line[end])))
            {
                std::string val = std::string() + line[start] + line[end];
                sum += std::stoi(val);
                break;
            }
        }
    }

    std::cout << "Sum of Calibration Value: " << sum << std::endl;
}