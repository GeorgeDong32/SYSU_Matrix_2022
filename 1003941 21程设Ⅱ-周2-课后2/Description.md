# 21程设Ⅱ-周2-课后2

# Description

Design a class named `Rectangle` to represent a rectangle. The class contains:

- Two `double` data field named `width` and `height` that specify the width and height of the rectangle. The default values are `1` for both `width` and `height`.
- A no-arg constructor that creates a default `Rectangle`, `width` and `height` are both `1`.
- A constructor that creates a `Rectangle` with the specified width and height.
- The accessor and mutator functions for all the data fields. (`getWidth()`, `getHeight()`, `setWidth()`, `setHeight()`)
- A function named `getArea()` that returns the area of this `Rectangle`.
- A function named `getPerimeter()` that returns the perimeter.

```cpp
class Rectangle
{
  private:
    double width, height;
  public:
    Rectangle() ;
    Rectangle(double w, double h);
    double getWidth() const;
    double getHeight() const;
    void setWidth(double width) ;
    void setHeight(double height) ;
    double getArea() const;
    double getPerimeter() const;  
};
```



