#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    int decimal[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int binary[16] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    int input;
    int choice;
    srand(time(0));

    cout << "1. Enter the binary representation of a number in the decimal number system.";
    cout << "\n2. Enter the decimal representation of a number represented in the \nbinary number system." << endl;
    cin >> choice;


    cout << "Enter -1 if you would like to quit" << endl;
    if (choice == 1)
    {
        while(true)
        {
            int randomNumber = rand() % 15;

            cout << "Enter the binary representation of " << randomNumber << ": ";
            cin >> input;

            if(input == binary[randomNumber])
            {
                cout << "Correct!" << endl << endl;
            }
            else if (input == -1)
            {
                break;
            }
            else
            {
                cout << "Wrong! It's "<< binary[randomNumber] << " Try again" << endl << endl;
            }
        }
    }
    else if (choice == 2)
    {
        while (true)
        {
            int randomNumber = rand() % 15;

            cout << "Enter the decimal representation of " << binary[randomNumber] << ": ";
            cin >> input;

            if(input == decimal[randomNumber])
            {
                cout << "Correct!" << endl << endl;
            }
            else if (input == -1)
            {
                break;
            }
            else
            {
                cout << "Wrong! It's "<< decimal[randomNumber] << " Try again" << endl << endl;
            }
        }
    }
    else
    {
        // Do nothing
    }
    return 0;
}
