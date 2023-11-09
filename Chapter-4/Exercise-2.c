// Author: Anshu Kumar Singh
// Date: 16/10/2023
// Let Us C 18th Edition Chapter 4 Exercise 2

/*
In digital world, colors are specified in Red-Green-Blue(RGb) format, 
with values of R, G, B varying on an integer scale from 0 to 255. In print 
publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) 
format, with values of C, M, Y, and K varying ona real scale from 0.0 to
1.0. Write a program that converts RGB color to  CMYK color as per the 
following formulae:

White = Max(Red/255, Green/255, Blue/255)
Cyan = ( ( White-Red / 255 ) / White )
Magenta = ( ( White-green / 255 ) / white )
Yellow = ( ( White-Blue / 255) / White )
Black = 1 - White

Note that if the RGB values are all 0, then CMY values are all 0  and the
K value is 1.
*/

#include <stdio.h>
#include <limits.h>

int main() {

    float r, g, b;
    printf("Enter the RGB values separated by spaces: ");
    scanf("%f %f %f", &r, &g, &b);

    if ( r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
    {
        printf("RGB values can only be from 0 to 255!\n");
        return 0; // To end the program right here.
    }

    float c, m, y, k; // k is for black since b is taken by blue.

    if (r == 0 && g == 0 && b == 0) 
    {
        c = m = y = 0;
        k = 1;
    }
    else 
    {
        float w;
        if (r > g)
        {
            if (r > b)
                w = r/255;
            else 
                w = b/255;
        }
        else
        {
            if (g > b)
                w = g/255;
            else 
                w = b/255;
        }

        c = (w - r / 255)/w;
        m = (w - g / 255)/w;
        y = (w - b / 255)/w;
        k = 1 - w;
    }

    printf("Cyan: %.2f\nMagenta: %.2f\nYello: %.2f\nBlack: %.2f\n", c, m, y, k);

    return 0;

    /*
    I created the rgb variables as floats even though all their values will
    be ints because after the calculations, the values in the cmyk variables were
    getting rounded. I turned rgb from ints to floats and it was solved. 

    And I searched and added the .2 in front of f in the printf function to make it more 
    beautiful. Lots of trailing numbers don't look good.

    */
}