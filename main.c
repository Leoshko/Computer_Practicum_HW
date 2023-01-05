#include <stdio.h>
#include <string.h>

int travel_between_floors(void) {
  char floor[10];
  while(1) {
    scanf("%s", &floor);
    if (strcmp(floor, "B1") == 0 || strcmp(floor, "B2") == 0 || strcmp(floor, "B3") == 0 || strcmp(floor, "1")  == 0 
     || strcmp(floor, "2")  == 0 || strcmp(floor, "3")  == 0 || strcmp(floor, "4")  == 0 || strcmp(floor, "5") == 0) { 
       printf("You're now on the floor %s. What floor do you want to go next? \n", floor);
    } else if (strcmp(floor, "G") == 0) {
      printf("You're now on the Ground floor. What floor do you want to go next? \n");
    } else if (strcmp(floor, "Q")  == 0) {
      printf("Getting off the lift... \n");
      return 0;
    }
    else {
        printf("Please, enter a vaild value: \n");
    }
    }
}


int main(void) {

  printf("The Elevator travels between floors from B1 to B3 and from Ground to 5th.\n");
  printf("\n");
  printf("To travel between basement floors press B1, B2 or B3. \nTo travel between regular floors press G, 1, 2, 3, 4 or 5. \nTo get off the lift press Q. \n");
  printf("\n");
  printf("You're now on the Ground floor. What floor do you want to go to? \n");

  travel_between_floors();  
}