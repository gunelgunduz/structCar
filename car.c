#include<stdio.h>
#include<stdio.h>
#include <math.h>

struct Car{
    char brand[60];
    char model[60];
    int year;
};

int main()
{
    struct Car c1={"BMW", "M3E36", 1999};
    struct Car c2={"Mercedes", "AMG", 2021};
    struct Car c3={"Nissan", "R34", 2023};
    struct Car c4={"Porsche", "911", 2023};
   
    printf("%s %s %d\n", c1.brand, c1.model, c1.year);
    printf("%s %s %d\n", c2.brand, c2.model, c2.year);
    printf("%s %s %d\n", c3.brand, c3.model, c3.year);
    printf("%s %s %d\n", c4.brand, c4.model, c4.year);

    return 0;
}