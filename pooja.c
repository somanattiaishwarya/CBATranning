#include <stdio.h>
#include <math.h>

int main()
{    
    float num , cubeRoot;
    printf("enter a number");
    scanf("%f",&num);
    

    cubeRoot =  cbrt(num);
    printf("Cube root of %f =  %f", num, cubeRoot);

    return 0;
}
