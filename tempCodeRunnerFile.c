/*
Royce Roxas
06/07/2026
Unit circle code
apply the degree, and code will give the radian 
as well as x and y coordinates
*/
#include <stdio.h>

int main() {
    int degree; 

    //user input of degrees
    printf("Enter a standard unit circle degree(0-360): ");
    scanf("%d", &degree); 

    //use switch statements with cases to output the correct components
    switch (degree) {
        case 0:
        case 360:
            printf("Degree: %d°\n", degree);
            printf("Radians: 0 or 2 pi\n");
            printf("Coordinates: (1, 0)\n");
            printf("Quadrant: Axis\n");
            break;
        case 30:
            printf("Degree: %d°\n", degree);
            printf("Radians: pi over 6\n");
            printf("Coordinates: (√3/2, 1/2)\n");
            printf("Quadrant: I\n");
            break;
        case 45:
            printf("Degree: %d°\n", degree);
            printf("Radians: pi over 4\n");
            printf("Coordinates: (root 2/2, root 2/2)\n");
            printf("Quadrant: I\n");
            break;
        case 60:
            printf("Degree: %d°\n", degree);
            printf("Radians: pi over 3\n");
            printf("Coordinates: (1/2, root 3/2)\n");
            printf("Quadrant: I\n");
            break;
        case 90:
            printf("Degree: %d°\n", degree);
            printf("Radians: pi over 2\n");
            printf("Coordinates: (0, 1)\n");
            printf("Quadrant: Axis\n");
            break;
        case 120:
            printf("Degree: %d°\n", degree);
            printf("Radians: 2 pi over 3\n");
            printf("Coordinates: (-1/2, root 3/2)\n");
            printf("Quadrant: II\n");
            break;
        case 135:
            printf("Degree: %d°\n", degree);
            printf("Radians: 3 pi over 4\n");
            printf("Coordinates: (- root 2/2, root 2/2)\n");
            printf("Quadrant: II\n");
            break;
        case 150:
            printf("Degree: %d°\n", degree);
            printf("Radians: 5 pi over 6\n");
            printf("Coordinates: (-1/2, root 3/2)\n");
            printf("Quadrant: Axis\n");
            break;
        case 180:
            printf("Degree: %d°\n", degree);
            printf("Radians: pi \n");
            printf("Coordinates: (-1,0)\n");
            printf("Quadrant: axis\n");
            break;
        case 210:
            printf("Degree: %d°\n", degree);
            printf("Radians: 7 pi over 6\n");
            printf("Coordinates: (-root 3/2, -1/2)\n");
            printf("Quadrant: II\n");
            break;
        case 225:
            printf("Degree: %d°\n", degree);
            printf("Radians: 5 pi over 4\n");
            printf("Coordinates: (- root 2/2, - root 2/2)\n");
            printf("Quadrant: III\n");
            break;
        case 240:
            printf("Degree: %d°\n", degree);
            printf("Radians: 4 pi over 3\n");
            printf("Coordinates: (-1/2, - root 3/2)\n");
            printf("Quadrant: III\n");
            break;
        case 270:
            printf("Degree: %d°\n", degree);
            printf("Radians: 3 pi over 2\n");
            printf("Coordinates: (0,-1)\n");
            printf("Quadrant: III\n");
            break;
        case 300:
            printf("Degree: %d°\n", degree);
            printf("Radians: 5 pi over 3\n");
            printf("Coordinates: (1/2, - root 3/2)\n");
            printf("Quadrant: III\n");
            break;
        case 315:
            printf("Degree: %d°\n", degree);
            printf("Radians: 7 pi over 4\n");
            printf("Coordinates: ( root 2/2, - root 2/2)\n");
            printf("Quadrant: II\n");
            break;
        case 330:
            printf("Degree: %d°\n", degree);
            printf("Radians: 2 pi over 3\n");
            printf("Coordinates: (root 3/2, -1/2)\n");
            printf("Quadrant: III\n");
            break;
        

        default:
            printf("Degree: %d°\n", degree);
            printf("Error: This degree is not a standard unit circle angle.\n");
            break;
    }

    return 0;
}