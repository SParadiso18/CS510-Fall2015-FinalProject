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
