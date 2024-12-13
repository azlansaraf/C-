#include <iostream>
using namespace std;

int main() {
    float radius, area, circumference;

    cout << "Enter the radius of Circle: ";
    cin >> radius;

    area = 3.142 * radius * radius;
    circumference = 2 * 3.142 * radius;

    cout << "Area of Circle: " << area << endl;
    cout << "Circumference of Circle: " << circumference << endl;

    return 0;
}
