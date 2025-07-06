#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    float area, radius, length, width, base, height, sideA, sideB;

    cout << "1- Area of Circle" << endl;
    cout << "2- Area of Rectangle" << endl;
    cout << "3- Area of Square" << endl;
    cout << "4- Area of Triangle" << endl;
    cout << "5- Area of Parallelogram" << endl;
    cout << "6- Area of Trapezium" << endl;
    cout << "Enter your choice :: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the radius of the Circle :: ";
        cin >> radius;
        area = 3.14 * pow(radius, 2);
        break;
    case 2:
        cout << "Enter the length of the Rectangle :: ";
        cin >> length;
        cout << "Enter the width of the Rectangle :: ";
        cin >> width;
        area = length * width;
        break;
    case 3:
        cout << "Enter the length of the side of the Square :: ";
        cin >> length;
        area = pow(length, 2);
        break;
    case 4:
        cout << "Enter the base of the Triangle :: ";
        cin >> base;
        cout << "Enter the height of the Triangle :: ";
        cin >> height;
        area = 0.5 * base * height;
        break;
    case 5:
        cout << "Enter the base of the Parallelogram :: ";
        cin >> base;
        cout << "Enter the height of the Parallelogram :: ";
        cin >> height;
        area = base * height;
        break;
    case 6:
        cout << "Enter side A of the Trapezium :: ";
        cin >> sideA;
        cout << "Enter side B of the Trapezium :: ";
        cin >> sideB;
        cout << "Enter the height of the Trapezium :: ";
        cin >> height;
        area = 0.5 * (sideA + sideB) * height;
        break;
    default:
        cout << "Invalid choice...!" << endl;
        return 0;
    }

    cout << "\nArea :: " << area << endl;
    return 0;
}
