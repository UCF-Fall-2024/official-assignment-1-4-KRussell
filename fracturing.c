#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.14159

/*
For the print_distance function, I used my prior knowledge of the Java programming language when using the static keyword.
Furthermore, I'm using booleans and the stdbool.h library, which I learned about while doing some research on the different variable types in C.
I used https://www.w3schools.com/c/c_booleans.php while learning about the boolean variable.
*/

void printDistance(double distance) {
    static bool shouldPrint = true;

    if(shouldPrint) {
        printf("The distance between the two points is %f\n", distance);
        shouldPrint = false;
    }
}

double calculateDistance() {
    int x1 = 0;
    int y1 = 0;

    int x2 = 0;
    int y2 = 0;

    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Point #1 Entered: x1 = %d; y1 = %d\n", x1, y1);

    scanf("%d", &x2);
    scanf("%d", &y2);
    printf("Point #2 Entered: x2 = %d; y2 = %d\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printDistance(distance);

    return distance;

}

double calculatePerimeter()
{
    double distance = calculateDistance();
    double radius = distance / 2;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 3;
}

double calculateArea()
{
    double distance = calculateDistance();
    double radius = distance / 2;

    double area = PI * pow(radius, 2);

    printf("The area of the ciy encompassed by your request is %f\n", area);

    return 1;
}

double calculateWidth()
{
    double width = calculateDistance();

    printf("The width of the city encompassed by your request is %f\n", width);

    return 1;
}

double calculateHeight()
{
    double height = calculateDistance();

    printf("The height of the city encompassed by your request is %f\n", height);

    return 1;
}

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 1;
}