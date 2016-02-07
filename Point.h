//Todd Labo
//CSCI 2321
//Program Assign #1

// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {

private:
    double x, y, z;

public:
    //Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);  //Added for 3 dimensional point

    // Accessor methods
        double getX() const;
    double getY() const;
    double getZ() const;  //Added for 3 dimensional point

    //new Member functions added
    double distanceTo (const Point a) const;

};

#endif // __POINT_H
