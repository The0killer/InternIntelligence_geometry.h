# Geometry Library for 2D, 3D, and 4D Shapes

## Overview

The **Geometry Library** is a C++ library designed to simplify geometric calculations for various shapes in 2D, 3D, and even 4D space. It includes functions to compute properties such as area, perimeter, surface area, and volume for shapes like cubes, spheres, cylinders, pyramids, and more. This library can be easily integrated into any C++ project requiring geometric calculations.

## Features

### 1. **2D Geometry Functions**
   - **Square**: Perimeter and area calculations.
   - **Rectangle**: Perimeter and area calculations.
   - **Circle**: Perimeter (circumference) and area calculations.
   - **Triangle**: Perimeter and area calculations for various triangle types.
   - **Parallelogram**: Perimeter and area calculations.
   - **Trapezoid**: Perimeter and area calculations.
   - **Rhombus**: Perimeter and area calculations.

### 2. **3D Geometry Functions**
   - **Cube**: Surface area and volume calculations.
   - **Cuboid**: Surface area and volume calculations.
   - **Sphere**: Surface area and volume calculations.
   - **Cylinder**: Surface area and volume calculations.
   - **Cone**: Surface area and volume calculations.
   - **Pyramid**: Surface area and volume calculations.

### 3. **4D Geometry Functions**
   - **Hypercube (Tesseract)**: Surface area and volume calculations.
   - **Hypersphere**: Surface area and volume calculations.
   - **4D Simplex**: Volume calculations for a 4D simplex (tetrahedron).

## Constants

To improve performance and code readability, the library includes several constants:
- **PI**: Value of π for geometric calculations.
- **HYPER_SUR_CON**: Constant used to calculate the surface area of a 4D hypersphere.
- **HYPER_VOLU_CON**: Constant used to calculate the volume of a 4D hypersphere.
- **SIMPLEX_CON**: Constant used to calculate the volume of a 4D simplex.

## Installation

### Step 1: Clone or Download the Repository
Clone the repository or download the ZIP file containing the C++ source files.

### Step 2: Include Files in Your Project
Add the following files to your project:
- **geometry.h**: The header file that contains function declarations.
- **geometry.cpp**: The implementation file that contains function definitions.
- **main.cpp**: The example code to test the library functions.

You can either place these files in your project folder or configure your project to reference these files.

### Step 3: Compile and Build

To compile the code, use the following command:

```bash
g++ main.cpp geometry.cpp -o geometry_program
```






## Function Documentation

The library includes the following main functions:

### 2D Functions:

- **`SquarePer(float x)`**:  
  Returns the perimeter of a square with side length `x`.

- **`SquareAre(float x)`**:  
  Returns the area of a square with side length `x`.

- **`RectanglePer(float x, float y)`**:  
  Returns the perimeter of a rectangle with sides `x` and `y`.

- **`RectangleAre(float x, float y)`**:  
  Returns the area of a rectangle with sides `x` and `y`.

- **`CirclePer(float r)`**:  
  Returns the perimeter (circumference) of a circle with radius `r`.

- **`CircleAre(float r)`**:  
  Returns the area of a circle with radius `r`.

- **`TrianglePer(float x, float y, float z)`**:  
  Returns the perimeter of a triangle with sides `x`, `y`, and `z`.

- **`TriangleAre(float b, float h)`**:  
  Returns the area of a triangle with base `b` and height `h`.

### 3D Functions:

- **`SphereAre(float r)`**:  
  Returns the surface area of a sphere with radius `r`.

- **`SphereVol(float r)`**:  
  Returns the volume of a sphere with radius `r`.

- **`CubeAre(float x)`**:  
  Returns the surface area of a cube with side length `x`.

- **`CubeVol(float x)`**:  
  Returns the volume of a cube with side length `x`.

- **`CylinderAre(float h, float r)`**:  
  Returns the surface area of a cylinder with height `h` and radius `r`.

- **`CylinderVol(float h, float r)`**:  
  Returns the volume of a cylinder with height `h` and radius `r`.

- **`ConeAre(float r, float l)`**:  
  Returns the surface area of a cone with radius `r` and slant height `l`.

- **`ConeVol(float r, float h)`**:  
  Returns the volume of a cone with radius `r` and height `h`.

### 4D Functions:

- **`cubeSurVol(float x)`**:  
  Returns the surface area of a 4D hypercube (Tesseract) with side length `x`.

- **`cubeVol(float x)`**:  
  Returns the volume of a 4D hypercube (Tesseract) with side length `x`.

- **`sphereSurVol(float r)`**:  
  Returns the surface area of a 4D hypersphere with radius `r`.

- **`sphereVol(float r)`**:  
  Returns the volume of a 4D hypersphere with radius `r`.

- **`Simplex(float t)`**:  
  Returns the volume of a 4D simplex with side length `t`.

---

## License

This library is licensed under the MIT License. You are free to use, modify, and distribute the code in your projects, both for personal and commercial purposes. If you modify the library or use it in a project, please give credit to the original author.

