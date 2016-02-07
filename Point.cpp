//Todd Labo
//point.cpp
//CSCI 2312
//Program Assignment #1

#include "Point.h"

#include <cmath>  //For square root function
#include "point.h"

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point(){
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ){
    x = initX;
    y = initY;
    z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point(){
    }

// Mutator methods

// setX function
// sets the value of x coordinate
// post-condition: value of the x coordinate is set
    void Point::setX(double newX){
          x = newX;
    }

// setY function
// sets the value of the y coordinate
// post-condition: value of the y coordinate is set
    void Point::setY(double newY){
          y = newY;
}

// setZ function
// sets the value of the z coordinate
// post-condition: value of the z coordinate is set
    void Point::setZ(double newZ){
         z = newZ;
    }


// Accessors

// getX function
// returns the value of the x coordinate
// post-condition:  the value of the x coordinate is returned
    double Point::getX() const {
     return x;
    }

// getY function
// returns the value of the y coordinate
// post-condition:  the value of the y coordinate is returned
    double Point::getY() const {
        return y;
    }

// getZ function
// returns the value of the z coordinate
// post-condition:  the value of the z coordinate is returned
    double Point::getZ() const {
     return z;
    }

// distanceTo function
// returns the distance between two, 3-dimensional points
// pre-condition: the distance between two, 3-dimensional points is needed
// post-condition: the distance between two, 3-dimensional points is returned
    double Point::distanceTo(const Point a) const {
             double xDistance = x - a.x;
             double yDistance = y - a.y;
             double zDistance = z - a.z;
        return sqrt(xDistance * xDistance + yDistance * yDistance + zDistance * zDistance);
    }
