// This is a converter program that converts measurement units, temperature units, currency and also performs binary conversion.
#include<stdio.h>
#include<stdlib.h>

void measurement() {
    printf("Measurement unit conversion selected.\n");
    // Add your measurement conversion logic here
}

void temp() {
    printf("Temperature units conversion selected.\n");
    // Add your temperature conversion logic here
}

void currency() {
    printf("Currency conversion selected.\n");
    // Add your currency conversion logic here
}

void binary() {
    printf("Binary conversion selected.\n");
    // Add your binary conversion logic here
}

void main() {
    int i, op;
    start:
    printf("Choose your operation:\n1.For measurement unit conversion\n2.For Temperature units conversion\n3.For Currency conversion\n4.For Binary Conversion\nYour choice:");
    scanf("%d", &op);
    switch(op) {
        case 1:
            measurement();
            break;
        case 2:
            temp();
            break;
        case 3:
            currency();
            break;
        case 4:
            binary();
            break;
        default:
            printf("Invalid choice!\n");
            goto start;
            
    }
}