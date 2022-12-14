#include <iostream>
using namespace std;
int main()
{
    int  up = 0, lower = 0, digit = 0, other = 0;//Definition of variables to count the amount of letters, digits and other characters in the string.
    char buffer[256];//Definition of the array and its length.
    char* ptrbuffer;
    cout << "Please enter a string" << endl;
    std::cin.getline(buffer, 256);//The user writes the input from the keyboard and only the first 255 characters are saved in the array (the character 256 is null).
    cout << buffer << endl;//The input array is printed on the screen.
    ptrbuffer = &buffer[0]; //The pointer points in the first element of the array.
    while (*ptrbuffer !='\0') {//The loop continuse until the element of the array is the null character which defines the end of the string.
        if (*ptrbuffer >= 'A' && *ptrbuffer <= 'Z') {
            up = up + 1;//The character is an uppercase letter.
        }
        else if (*ptrbuffer >= 'a' && *ptrbuffer <= 'z') {
            lower = lower + 1;//The character is a lowercase letter.
        }
        else if (*ptrbuffer >= '0' && *ptrbuffer <= '9') {
            digit = digit + 1;//The character is a digit.
        }
        else {
            other = other + 1;//The character is 'other' character.
        }
        ptrbuffer = ptrbuffer + 1;//The pointer now points in the next element of the array.
    }
    cout << "The string contains" << endl;
    cout << up << " Upper letters" << endl;
    cout << lower << " Lower letters" << endl;
    cout << digit << " Digits" << endl;
    cout << other << " Other characters" << endl;
    return 0;
}
