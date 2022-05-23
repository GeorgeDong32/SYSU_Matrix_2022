# 21程设Ⅱ-周11-课后1

# Description

The ```MyPoint``` class below is created to model a point in a two-dimensional space.

Create a class named ```ThreeDPoint``` to model a point in a three-dimensional space. Let ```ThreeDPoint``` be derived from ```MyPoint```.

```x```, ```y```, ```z``` represent x-, y- and z-coordinates.

The definition of `MyPoint` and `ThreeDPoint` are shown below. You should submit the definition and implemention of these two classes only.

```cpp
class MyPoint
{
  private:
    double x, y;
  public:
    // The no-arg constructor that constructs a point with coordinates(0,0)
    MyPoint();

    MyPoint(double x, double y);
    double getX() const;
    double getY() const;

    //display the distance between two points in two-dimensional space.
    double distance(const MyPoint &point);
};

class ThreeDPoint : public MyPoint
{
private:
  double z;
public:
  // The no-arg constructor that constructs a point with coordinates(0,0,0)  
  ThreeDPoint();

  ThreeDPoint(double x, double y, double z);
  double getZ() const;

  //display the distance between two points in Three-dimensional space.
  double distance(const ThreeDPoint &point);  
};
```



