#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function declaration
double calculateDistance(void);
double calculatePerimeter(void);
double calculateArea(void);
double calculateWidth(void);
double calculateHeight(void);

void getInput(double *x1, double *y1, double *x2, double *y2);

int main(int argc, char **argv) {
    // Calling the functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0; 
}

// User input
void getInput(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", x1, y1);
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", x2, y2);
}
double calculateDistance(void) {
    double x1, y1, x2, y2;
    getInput(&x1, &y1, &x2, &y2);
    
    // through trial and error and help of chat GPT came up with this code to calculate the distance between two points. 
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);
    
    return distance;
}

double calculatePerimeter(void) {
    double distance = calculateDistance();
    double perimeter = PI * 2 * (distance / 2); // Assume distance = diameter
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    
    return 5; 
}

double calculateArea(void) {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area =  radius * radius * PI; // Area of circle
    
    printf("The area of the city encompassed by your request is %lf\n", area);
    
    return 5; 
}
double calculateWidth(void){
    double distance = calculateDistance();
    double width = distance; // Assume width = distance
    
    printf("The width of the city encompassed by your request is %lf\n", width);
    
    return 3; 
}

double calculateHeight(void) {
    double distance = calculateDistance();
    double height = distance; 
    
    printf("The height of the city encompassed by your request is %lf\n", height);
    return 4;
}
