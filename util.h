#ifndef VISUALIZE_UTIL_HPP
#define VISUALIZE_UTIL_HPP

#include "main.hpp"

// lols
void arrayCopy(int length, float* a, float* b);
float smoothstep(float edge0, float edge1, float x);
float normalize(float a, float b);

// FMOD
void FMODErrorCheck(FMOD_RESULT result);

// OpenGL
void printShaderInfoLog(GLuint obj);
void printProgramInfoLog(GLuint obj);

#endif
