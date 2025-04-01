#include <stdio.h>

int main (void)
{
int sphere_radius = 0;
float volume_sphere, pi;


//sphere_radius = 10; --- if the radius is known
pi = 3.145f;

// the one below is the "wrong" version that takes just the integer part in consideration
// the two option yierld a different result
// volume_sphere = 4/3 * pi * (sphere_radius * sphere_radius * sphere_radius);

//if the radius is not known we introduce scanflike down the next 2 lines before Volume

printf("Introduce radius of the sphere: ");
scanf("%d", &sphere_radius);

//correct version is to explcit correct float need
volume_sphere = 4.0f/3.0f * pi * (sphere_radius * sphere_radius * sphere_radius);

printf("Volume of the sphere: %f\n", volume_sphere);
return 0;
}