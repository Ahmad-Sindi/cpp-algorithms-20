// Algorithm Challenge
// 20 – Circle Area Inscribed in a Square

#include <iostream>
#include <cmath> // for mathematical operations like pow()
using namespace std;

int main()
{
    float side, area;
    const float PI = 3.14159; // constant for π

    // Ask the user to enter the side length of the square
    cout << "Enter the side length of the square: ";
    cin >> side;

    // Calculate the area of the inscribed circle
    // Formula: area = (π * side²) / 4
    area = (PI * pow(side, 2)) / 4;

    // Display the result
    cout << "The area of the circle inscribed in the square is: " << area << endl;

    return 0;
}
