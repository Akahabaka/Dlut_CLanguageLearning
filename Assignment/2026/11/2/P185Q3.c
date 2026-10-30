#include<stdio.h>
#include<math.h>

float distance(float, float, float, float);

int main(void)
{
    float x1, x2, y1, y2;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    printf("%f\n", distance(x1, y1, x2, y2));
    return 0;
}

float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
}