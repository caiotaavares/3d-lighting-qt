# 3D Lighting with Z-Buffer

An interactive 3D visualization system built with C++ and Qt. This project renders geometric objects (sphere and plane) using ambient, diffuse, and specular lighting, utilizing the Z-Buffer algorithm for depth control. The graphical interface allows users to adjust lighting parameters and see real-time effects.

## Features

- **Lighting Models**: Supports ambient, diffuse, and specular lighting.
- **Real-Time Adjustment**: Modify lighting parameters such as intensity, coefficients, and constants via the GUI.
- **Z-Buffer Algorithm**: Ensures proper depth control for rendering.
- **Objects Rendered**: Sphere and plane with adjustable visual properties.

## Requirements

- **Qt Framework** (version 5.15 or higher recommended)
- C++ Compiler with C++11 or higher support
- CMake (optional, for build management)

## Usage

Adjust lighting parameters using the provided GUI:
- **Ambient Light**: Control intensity and material coefficients.
- **Diffuse Light**: Adjust diffuse reflection properties for the sphere and plane.
- **Specular Light**: Fine-tune specular highlights with coefficients and constants.

Select lighting models:
- **Ambient + Diffuse**: Renders objects with ambient and diffuse lighting.
- **Ambient + Diffuse + Specular**: Adds specular highlights for more realistic effects.
Click the Illuminate button to apply changes and update the scene.