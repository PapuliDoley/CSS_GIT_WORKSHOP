
#include <stdio.h>

// TODO: Implement the conversion functions
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);




int main() {
    int choice;
    float temp, convertedTemp;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (choice == 1) {
        // TODO: Call celsiusToFahrenheit and display result
        printf("Fahrenheit : %f\n",celsiusToFahrenheit(temp));
    } else if (choice == 2) {
        // TODO: Call fahrenheitToCelsius and display result
        printf("Celsius: %f\n",fahrenheitToCelsius(temp));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// TODO: Implement the celsiusToFahrenheit function
float celsiusToFahrenheit(float celsius) {
     float convertedTemp= (9/5.0)*celsius+32;
    return convertedTemp;
    
}

// TODO: Implement the fahrenheitToCelsius function
float fahrenheitToCelsius(float fahrenheit) {
    float convertedTemp= (fahrenheit- 32 )*(9.0/5);
    return convertedTemp;
} 
    

