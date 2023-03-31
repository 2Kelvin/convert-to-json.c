#include <stdio.h>
/**
 * main - converts location data into json data
 * Return: 0
 */

int main(void)
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data = [");

    /*
     * while the user has entered 3 pieces of data {latitude, longitude & info}
     * scanf takes in pointers(memory addresses to store the values input by user),
     * hence the use of &latitude and &longitude
     * %79[^\n]: means give all the characters up to the end of the line
     */
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (latitude < -90 || latitude > 90 || longitude < -180 || longitude > 180)
        {
            puts("Error! Invalid latitude or longitude");
            return (2);
        }
        else
        {
            if (started)
                printf(", \n");
            else
                started = 1;
            /*printf doesn't need pointers since it only needs the values for display only*/
            printf("{latitude: %f, longitude: %f, info: '%s'} ", latitude, longitude, info);
        }
    }
    puts("\n]");

    return (0);
}