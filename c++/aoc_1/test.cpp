#include <iostream>
#include <string>

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

    std::string test_1 = "onetwothree";
    int start = 0;
    int end = 2;

    // for(int i = start; i < test_1.size(); ++i, ++start)
    // {
    //     for(int j = end; j < test_1.size(); ++j)
    //     {

    //     }
    // }

    std::cout << test_1.substr(0, end - start + 1) << std::endl;
}