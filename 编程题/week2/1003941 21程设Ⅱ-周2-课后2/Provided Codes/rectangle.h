#pragma once

class Rectangle
{
  private:
    double width, height;
  public:
    Rectangle(double w = 1, double h = 1) : width(w), height(h) {}
    double getWidth() const;
    double getHeight() const;
    void setWidth(double width);
    void setHeight(double height);
    double getArea() const;
    double getPerimeter() const;  
};