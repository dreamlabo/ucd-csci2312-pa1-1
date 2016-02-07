//Todd Labo
//CSCI 2312
//Program assign #1

#include <cmath>
#include <iostream>

#include "Area.h"

// computeArea function
// returns the area of the triangle created by the points
// pre-condition: the area of a triangle created by three, 3-d points is needed
// post-condition: the area of of the triangle is returned
    double computeArea(const Point &a, const Point &b, const Point &c){
        double perimeter;
        double s;
        double area;
        double distance_One,distance_Two,distance_Three;

        //Get distance of each side of the triangle
        distance_One = a.distanceTo(b);
        distance_Two = b.distanceTo(c);
        distance_Three = c.distanceTo(a);

        perimeter = distance_One + distance_Two + distance_Three;
        s = perimeter/2;

        //using Heron's Formula for area of a triangle
        return area= sqrt(s*(s - distance_One)*(s - distance_Two)*(s - distance_Three));
    }

