#include <iostream>

using namespace std;

int promptForNumber() throw (const char *)
{
    int number;
    cout << "Enter a number: ";
    cin  >> number;
    if (cin.fail())
    {
        cin.clear();
        cin.sync();
        throw "Invalid input.\n";
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
    bool prompting = true;
    while(prompting)
    {
        try
        {
            displayNumber(promptForNumber());
            prompting = false;
        }
        catch (const char *error)
        {
            cout << error;
        }
    }

    return 0;
}

