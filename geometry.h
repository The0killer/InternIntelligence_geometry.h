#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <cmath>
//made by hassan qafishah
// ID:Tebc5HK7rwsGHmbksQbO
// Constants for 4D geometric calculations
constexpr float PI = 3.14159265359;
constexpr float HYPER_SUR_CON = 2 * PI * PI; // Surface volume constant for hypersphere
constexpr float HYPER_VOLU_CON = 0.5 * PI * PI; // Volume constant for hypersphere
constexpr float SIMPLEX_CON = 0.2329237477; // Volume constant for 4D simplex

// 4D Shapes
inline float cubeSurVol(float x) { return 8 * x * x * x; }
inline float cubeVol(float x) { return x * x * x * x; }
inline float sphereSurVol(float r) { return HYPER_SUR_CON * r * r * r; }
inline float sphereVol(float r) { return HYPER_VOLU_CON * r * r * r * r; }
inline float Simplex(float t) { return SIMPLEX_CON * t * t * t * t; }

// 3D Shapes
inline float cubeAre(float x) { return 6 * x * x; }
inline float cubeVol(float x) { return x * x * x; }
inline float CuboidAre(float l, float w, float h) { return 2 * (l * w + l * h + w * h); }
inline float CuboidVol(float l, float w, float h) { return l * w * h; }
inline float SphereAre(float r) { return 4 * PI * r * r; }
inline float SphereVol(float r) { return (4.0 / 3.0) * PI * r * r * r; }
inline float CylinderAre(float h, float r) { return 2 * PI * r * (h + r); }
inline float CylinderVol(float h, float r) { return PI * r * r * h; }
inline float ConeAre(float r, float l) { return PI * r * (r + l); }
inline float ConeVol(float r, float h) { return (1.0 / 3.0) * PI * r * r * h; }
inline float PyramidAre(float b, float p, float l) { return b + 0.5 * p * l; }
inline float PyramidVol(float b, float h) { return (1.0 / 3.0) * b * h; }

// 2D Shapes
inline float SquarePer(float x) { return 4 * x; }
inline float SquareAre(float x) { return x * x; }
inline float RectanglePer(float x, float y) { return 2 * (x + y); }
inline float RectangleAre(float x, float y) { return x * y; }
inline float TrianglePer(float x, float y, float z) { return x + y + z; }
inline float TriangleAre(float b, float h) { return 0.5 * b * h; }
inline float CirclePer(float r) { return 2 * PI * r; }
inline float CircleAre(float r) { return PI * r * r; }
inline float ParallPer(float x, float y) { return 2 * (x + y); }
inline float ParallAre(float x, float y) { return x * y; }
inline float TrapezPer(float x, float y, float z, float w) { return x + y + z + w; }
inline float TrapezAre(float x, float y, float h) { return 0.5 * (x + y) * h; }
inline float RhombusPer(float x) { return 4 * x; }
inline float RhombusAre(float x, float y) { return 0.5 * x * y; }

#endif // GEOMETRY_H
