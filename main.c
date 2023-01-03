#include<stdio.h>

int main(void) {

    char floor;

    printf("The Elevator travels between five floors.\n");
    printf("\n");
    printf("To go the Ground floor press G. \nTo go to the 1st floor press 1. \nTo go to the 2nd floor press 2. \nTo go to the 3rd floor press 3. \nTo go to the 4th floor press 4. \nTo go to the 5th floor press 5. \nTo get off the lift press 6. \n");
    printf("\n");
    printf("You're now on the Ground floor. What floor do you want to go to? \n");

    while (1) {
        scanf("%s", &floor);
            switch(floor) {
                case 'G':
                printf("You're now on the Ground floor. What floor do you want to go next? \n");
                break;

                case '1':
                printf("You're now on the 1st floor. What floor do you want to go next? \n");
                break;

                case '2':
                printf("You're now on the 2nd floor. What floor do you want to go next? \n");
                break;

                case '3':
                printf("You're now on the 3d floor. What floor do you want to go next? \n");
                break;

                case '4':
                printf("You're now on the 4th floor. What floor do you want to go next? \n");
                break;

                case '5':
                printf("You're now on the 5th floor. What floor do you want to go next? \n");
                break;

                case '6':
                printf("Getting off the lift...\n");
                return 0;
                break;

                default:
                printf("Please, enter a vaild value: \n");
                break;
                
            }
    
    }
    


}