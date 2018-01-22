#include <iostream>

using namespace std;

int promptForNumber() throw (int)
{
    int number;
    cout << "Enter a number: ";
    cin  >> number;
    if (number < 0)
    {
        throw -1;
    }
    else if (number > 100)
    {
        throw 101;
    }
    else if (number % 2)
    {
        throw 1;
    }
    return number;
}

void displayNumber(int number)
{
    cout << "The number is "
         << number
         << ".\n";
}

int main()
{
    try
    {
        displayNumber(promptForNumber());
    }
    catch (int error)
    {
        switch (error)
        {
            case -1:
                cout << "Error: The number cannot be negative.\n";
                break;
            case 1:
                cout << "Error: The number cannot be odd.\n";
                break;
            case 101:
                cout << "Error: The number cannot be greater than 100.\n";
                break;
            default:
                cout << "Error: Unknown.\n";
        }
    }
    return 0;
}
