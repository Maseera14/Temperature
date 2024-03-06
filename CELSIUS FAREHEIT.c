#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
double fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    // Input Celsius temperature from the user
    double inputCelsius;
    printf("Enter Celsius temperature: ");
    scanf("%lf", &inputCelsius);

    // Convert and print Celsius to Fahrenheit
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", inputCelsius, fahrenheit(inputCelsius));

    // Input Fahrenheit temperature from the user
    double inputFahrenheit;
    printf("Enter Fahrenheit temperature: ");
    scanf("%lf", &inputFahrenheit);

    // Convert and print Fahrenheit to Celsius
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", inputFahrenheit, celsius(inputFahrenheit));

    return 0;
}
