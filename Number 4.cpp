/*
 * Name: Ahmed Haytham Mahgoub Awooda
 * Year: 2nd Year
 * Department: Computer Engineer
 */

#include <iostream>
// including input/output library for user input and preview
#include <cmath>
// including math library before heading towards the program
// perciesly we're using it here just for the square root function
#include <cstring>
// including cstring library so we're able to perform common string functions
using namespace std;
// this line litreally sets us free from writing std:: each time
// for input/output operations
char shape[50];
// giving a variable the definition of a charachter, along with it's
// maximum lenght allowed
float area, rib, circumference, rib1, apothem, rib2, rib3, height, width, length, base, radius, diameter, angle;
// definition of float so we can deal with fractions
double const pi = 3.14159;
int main()
//it means our function needs to return some integer
// at the end of the execution, which we do it by return 0
{
	loop:
// loop statement to allow multiple (infinite) execution of a block code
// until a particular condition is satisfied, then it breaks
	cout << "Supported Shapes: \nTriangle, Rectangle, Square, Circle, Polygon, Ellipse" << endl;
	cout << "\nChoose your geometric shape: ";
	cin >> shape;
	if (strcmp(shape, "Triangle") == 0){
// using if condition along with strcmp to compare strings of a given
// and inserted one's, strcmp is summoned via cstring library
		cout << "Enter Triangle's base length: ";
		cin >> base;
		cout << "Enter Triangle's height length: ";
		cin >> height;
		cout << "Enter the first side Triangle's length: ";
		cin >> rib1;
		cout << "Enter the sencond side Triangle's length: ";
		cin >> rib2;
		cout << "Enter the third side Triangle's length: ";
		cin >> rib3;
		area = 0.5 * base * height;
		circumference = rib1 + rib2 + rib3;
	}
	else if (strcmp(shape, "Rectangle") == 0){
		cout << "Enter Rectangle's width value: ";
		cin >> width;
		cout << "Enter Rectangle's height value: ";
		cin >> height;
		area = width * height;
		circumference = 2 * (height + width);
	}
	else if (strcmp(shape, "Squire") == 0){
		cout << "Enter side Square's length value: ";
		cin >> length;
		area = length * length;
		circumference = 4 * length;
	}
	else if (strcmp(shape, "Circle") == 0){
		cout << "\nYou have choosed Circle!\n\n";
		cout << "Enter Circle's radius value: ";
		cin >> radius;
		area = pi * radius * radius;
		circumference = 2 * pi * radius;
	}
	else if (strcmp(shape, "Polygon") == 0){
		cout << "Enter Polygon's apothem value: ";
		cin >> apothem;
		cout << "Enter Polygon's side length value: ";
		cin >> length;
		area = 0.5 * apothem * 5 * length;
		circumference = length * 5;
	}
	else if (strcmp(shape, "Ellipse") == 0){
		double maj,min;
// double has been defined as a supporter for fraction inputs and outputs
// and appearently it can't be universally defined
		cout << "Enter Ellipse's Major Axis value: ";
		cin >> maj;
		cout << "Enter Ellipse's Minor Axis value: ";
		cin >> min;
		area = pi * maj * min;
		circumference = 2 * pi * sqrt(((maj * maj)+ (min * min)) * 0.5);
	}
	else {
		cout << "\nWrong\n";
		goto loop;
// repeat the iterative loop after failure to satisfy the condition
	}
	cout << "\n" << shape << "Area is: " << area << endl;
	cout << shape << "Circumference is: " << circumference << endl;
// this part has been specificlly placed here for viewing the result
	return 0;
// returning to the main() a success sign, getting it ready to terminate
}
