// Negative 16-bit signed example

#include <iostream>
#include <climits>

int main()
{
    short num1 = 32768; // Minimum negative value for a short (16-bit signed integer)
    short num2 = -1;    // Any negative value less than zero will cause overflow when added to SHRT_MIN

    short sum = num1 + num2;

    // Check for overflow
    if (sum > num1 && sum > num2)
    {
        std::cout << "Overflow occurred: " << static_cast<int>(sum) << std::endl;
    }
    else
    {
        std::cout << "No overflow occurred: " << static_cast<int>(sum) << std::endl;
    }

    return 0;
}


\
// POstivie 16-bit signed example

#include <iostream>
#include <climits>

int main()
{
    short num1 = 32767; // Maximum positive value for a short (16-bit signed integer)
    short num2 = 0;     // Maximum positive value for a short (16-bit signed integer)

    short sum = num1 + num2;

    // Check for overflow
    if (sum < num1 || sum < num2)
    {
        std::cout << "Overflow occurred: " << static_cast<int>(sum) << std::endl;
    }
    else
    {
        std::cout << "No overflow occurred: " << static_cast<int>(sum) << std::endl;
    }

    return 0;
}
