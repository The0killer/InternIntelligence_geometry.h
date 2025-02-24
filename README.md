Geometry Library
This is a C++ Geometry Library that provides functions to calculate the surface area, volume, perimeter, and area of various 2D, 3D, and 4D shapes. The library includes functions for calculating the geometric properties of spheres, cylinders, cones, cubes, rectangles, triangles, and many other shapes, as well as constants for 4D geometry.

Features
2D Geometry: Calculations for square, rectangle, triangle, circle, parallelogram, trapezoid, and rhombus.
3D Geometry: Calculations for cube, cuboid, sphere, cylinder, cone, pyramid, and more.
4D Geometry: Calculations for 4D hypercube (tesseract), 4D hypersphere, and 4D simplex.
Includes pre-defined constants for 4D calculations to improve readability and performance.
Prerequisites
C++11 or later
A C++ compiler (GCC, Clang, Visual Studio, etc.)
Usage
1. Include the library header
To use the library, include the geometry.h header in your C++ project:

cpp
Copy
Edit
#include "geometry.h"
2. Call the appropriate function
You can now call any of the available functions in your code. Here are some examples:

2D Geometry Examples:
Square Perimeter:

cpp
Copy
Edit
float squarePerimeter = SquarePer(4);
Rectangle Area:

cpp
Copy
Edit
float rectangleArea = RectangleAre(4, 5);
Circle Area:

cpp
Copy
Edit
float circleArea = CircleAre(5);
3D Geometry Examples:
Cube Volume:

cpp
Copy
Edit
float cubeVolume = cubeVol(5);
Sphere Surface Area:

cpp
Copy
Edit
float sphereSurfaceArea = SphereAre(5);
Cylinder Volume:

cpp
Copy
Edit
float cylinderVolume = CylinderVol(7, 3);
4D Geometry Examples:
4D Hypercube Volume:

cpp
Copy
Edit
float tesseractVolume = cubeVol(5);  // Tesseract (4D hypercube)
4D Hypersphere Volume:

cpp
Copy
Edit
float hypersphereVolume = sphereVol(3);  // Hypersphere (4D)
Available Functions
The library provides the following functions:

Constants for 4D Geometry
constexpr float PI: The mathematical constant Pi.
constexpr float HYPER_SUR_CON: Constant for surface area of 4D hypersphere.
constexpr float HYPER_VOLU_CON: Constant for volume of 4D hypersphere.
constexpr float SIMPLEX_CON: Constant for volume of 4D simplex.
4D Geometry Functions
float cubeSurVol(float x): Surface area of a 4D hypercube (Tesseract).
float cubeVol(float x): Volume of a 4D hypercube (Tesseract).
float sphereSurVol(float r): Surface area of a 4D hypersphere.
float sphereVol(float r): Volume of a 4D hypersphere.
float Simplex(float t): Volume of a 4D simplex (Tetrahedron).
3D Geometry Functions
float cubeAre(float x): Surface area of a cube.
float cubeVol(float x): Volume of a cube.
float CuboidAre(float l, float w, float h): Surface area of a cuboid.
float CuboidVol(float l, float w, float h): Volume of a cuboid.
float SphereAre(float r): Surface area of a sphere.
float SphereVol(float r): Volume of a sphere.
float CylinderAre(float h, float r): Surface area of a cylinder.
float CylinderVol(float h, float r): Volume of a cylinder.
float ConeAre(float r, float l): Surface area of a cone.
float ConeVol(float r, float h): Volume of a cone.
2D Geometry Functions
float SquarePer(float x): Perimeter of a square.
float SquareAre(float x): Area of a square.
float RectanglePer(float x, float y): Perimeter of a rectangle.
float RectangleAre(float x, float y): Area of a rectangle.
float TrianglePer(float x, float y, float z): Perimeter of a triangle.
float TriangleAre(float b, float h): Area of a triangle.
float CirclePer(float r): Circumference of a circle.
float CircleAre(float r): Area of a circle.
float ParallPer(float x, float y): Perimeter of a parallelogram.
float ParallAre(float x, float y): Area of a parallelogram.
float TrapezPer(float x, float y, float z, float w): Perimeter of a trapezoid.
float TrapezAre(float x, float y, float h): Area of a trapezoid.
float RhombusPer(float x): Perimeter of a rhombus.
float RhombusAre(float x, float y): Area of a rhombus.
Example Code
cpp
Copy
Edit
#include "geometry.h"
#include <iostream>

int main() {
    // Example: Calculate the volume of a sphere
    float radius = 5.0;
    float volume = SphereVol(radius);
    
    std::cout << "The volume of the sphere with radius " << radius << " is: " << volume << std::endl;

    // Example: Calculate the surface area of a cube
    float sideLength = 4.0;
    float surfaceArea = cubeAre(sideLength);
    
    std::cout << "The surface area of the cube with side length " << sideLength << " is: " << surfaceArea << std::endl;

    return 0;
}
License
This library is licensed under the MIT License. You can freely use, modify, and distribute the library in your projects. However, there is no warranty for any issues arising from its use.
