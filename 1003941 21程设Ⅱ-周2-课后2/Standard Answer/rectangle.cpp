#include "rectangle.h"

double Rectangle::getWidth() const{
    return width;
}
double Rectangle::getHeight() const{
    return height;
}
void Rectangle::setWidth(double Width){
    width = Width;
}
void Rectangle::setHeight(double Height){
    height = Height;
}
double Rectangle::getArea() const{
    return width * height;
}
double Rectangle::getPerimeter() const{
    return 2 * (width + height);
}