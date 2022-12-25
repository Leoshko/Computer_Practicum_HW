#include<stdio.h>

void main() {

    int G = 0;  // G - ground floor
    int floor;

    printf("You're now on the Ground floor. What floor do you want to go to? \n");
    scanf("%i", &floor);

    
    if (floor == G) {
        printf("Lift is now on the Ground floor");
    }
    else if (G < floor && floor <= 5) {
        switch(floor) {

        case 1:
        printf("Lift is now on the 1st floor");
        break;

        case 2:
        printf("Lift is now on the 2nd floor");
        break;

        case 3:
        printf("Lift is now on the 3d floor");
        break;

        case 4:
        printf("Lift is now on the 4th floor");
        break;

        case 5:
        printf("Lift is now on the 5th floor");
        break;
        }
    } 
    else {
        printf("Please, enter a vaild value");
    }
    


}