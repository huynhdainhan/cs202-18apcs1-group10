#ifndef SHAPEARRAY_H
#define SHAPEARRAY_H

#include <iostream>
#include <vector>

#include "Shape.h"

class ShapeArray
{
private:
    std::vector<Shape*> shape;
public:    
    void input();
    void outputArea();
};

#endif /* SHAPEARRAY_H */
