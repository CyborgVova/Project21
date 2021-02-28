#include <stdio.h>
#include WORKPATH
#include WORKPATH

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;
    set_point(&point);

    printf("Expected output:\n42 21\n\n");
    printf("Your output:\n%d %d\n", point.x, point.y);
    return (0);
}