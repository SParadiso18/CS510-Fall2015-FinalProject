#include <stdlib.h>
#include <stdio.h>

#include "complex.h"

// Defining a useful matrix structure
struct MATRIX
{
    unsigned int r;
    unsigned int c;

    long double *mat;

}MATRIX;

// Initial Cplane definition
/*typedef struct Cplane
{
    unsigned int rows;
    unsigned int cols;

    long double xmin;
    long double xmax;
    long double ymin;
    long double ymax;
    long double xpoints;
    long double ypoints;

complex *MAT;
}CPLANE;*/

// Final Cplane structure definition
struct cplane
{
    long double xmin;
    long double xmax;
    long double ymin;
    long double ymax;

    unsigned long int xpoints;
    unsigned long int ypoints;

    COMPLEX **mat;

}CPLANE;

typedef struct cplane CPLANE;

// Cplane constructor
CPLANE constructor(long double xmin, long double xmax, long double ymin, long double ymax, unsigned long int xpoints, unsigned long int ypoints);

// Function to print the Cplane we created
void print(CPLANE acp);

// Frees up memory when computation is complete
void gu(CPLANE acp);

// Other function declarations thought to be useful
// during initial attempts
/*CPLANE makeCP(COMPLEX *cp, int r, int c);
void setAC(CPLANE *cplane, int r, int c);
COMPLEX getAP(CPLANE *cplane, int r, int c;
void printG(COMLPEX v);
void printCP(CPLANE *acp);
void cs(CPLANE *cp);*/

// Alternative attempts
/*
// Define types as abstraction layer to protect against implementation chan
typedef long double VALS;
typedef unsigned long int POINTS;

// Use abstract types inside matrix definition for robustness
typedef struct cplane {
  VALS xmin;
  VALS xmax;
  VALS ymin;
  VALS ymax;

  POINTS xpoints;
  POINTS ypoints;

  complex *mat;
} CPLANE;

// Constructor that initializes type in sensible way
CPLANE new_cplane(const VALS, const VALS, const VALS, const VALS, const POINTS, const POINTS);
//CPLANE constructor(const long double xmin, const long double xmax, const long double ymin, const long double ymax, const long double xpoints, const long double ypoints);
//
CPLANE make_complex(COMPLEX *cp, int r, int c);
//
void set_ac(CPLANE *cplane, int r, int c);
//
COMPLEX get_ap(CPLANE *cplane, int r, int c);
//
void print(const COMLPEX v);
//
void print_cp(const CPLANE *acp);
//
void cs(CPLANE cp);*/
