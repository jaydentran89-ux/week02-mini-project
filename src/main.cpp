#include <iostream>
#include <string>
using namespace std;

int main()
{
    string direction;
    double temp;

    if (!(cin >> direction))
    {
        cout << "Error: invalid temperature\n";
        return 0;
    }
    if (direction != "C2F" && direction != "F2C")
    {
        cout << "Error: unsupported direction\n";
        return 0;
    }
    if (!(cin >> temp))
    {
        cout << "Error: invalid temperature\n";
        return 0;
    }

    if (direction == "C2F")
        cout << temp << " C = " << temp * 9.0 / 5.0 + 32 << " F\n";
    else
        cout << temp << " F = " << (temp - 32) * 5.0 / 9.0 << " C\n";
}