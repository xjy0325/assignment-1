#include <stdio.h>

int main() {

  int motors = 0;
  printf("%s", "How many motors are carrying the packages?");
  scanf("%d", &motors);

  int weight = 0;
  printf("%s", "What is the total weight of the packages in kg?");
  scanf("%d", &weight);

  if (motors * 5.6 >= weight)
    printf("%s", "Yes! The conveyor belt can carry the packages.\n");
  else
    printf("%s", "No! The conveyor belt cannot carry the packages.\n");

  return 0;
}