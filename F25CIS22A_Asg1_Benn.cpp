// This program will output the perimeter and area
// of the rectangle with a given width and length
// Name: Benn Nguyen
// Date of project: 01/10/2025
#include <iostream>
using namespace std;

int main()
{
    // Identify variables
    int length = 8; // Define length measurement
    int width = 3; // Define width measurement
    int area; // Define the area of rectangle
    int perimeter; // Define the perimeter of rectangle

    // Calculate the area and perimeter of the rectangle
    area = length * width; // computes area
    perimeter = 2 * (length + width); // computes perimeter

    // Display the area of rectangle
    cout << "The area of the rectangle is: ";
    cout << area << endl;

    // Display the perimeter of rectangle
    cout << "The perimeter of the rectangle is: ";
    cout << perimeter;
    return 0;
}

/* The Run
The area of the rectangle is: 24
The perimeter of the rectangle is: 22
Process finished with exit code 0
*/

