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
