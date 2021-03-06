#include <stdlib.h>
#include <stdio.h>

#include "cplane.h"

// Cplane constructor
CPLANE constructor(long double xmin, long double xmax, long double ymin, long double ymax, unsigned long int xpoints, unsigned long int ypoints)
{
    // Variable declaration
    CPLANE acp1;

    int i;
    int x;
    int y;

    long double sx;
    long double sy;

    acp1.xmin = xmin;
    acp1.xmax = xmax;
    acp1.ymin = ymin;
    acp1.ymax = ymax;

    acp1.xpoints = xpoints;
    acp1.ypoints = ypoints;


    sx = (xmax-xmin) / (long double) xpoints;
    sy = (ymax-ymin) / (long double) ypoints;


    // Rudamentary error handling

    // Cheks and prints an error message if no points,
    // or negative points, are given
    if(xpoints < 1 || ypoints < 1)
    {
            printf("\nError! Improper number of points!\n");
        }

    // Checks and prints an error message regarding the
    // size of the given minimum and maximum values
        if(xmin >= xmax || ymin >= ymax)
    {
            printf("\nError! Improper bounds!\n");
        }
       

    // Allocating size bytes to return a pointer to allocated memory
        if (acp1.mat = (COMPLEX **)malloc(sizeof(COMPLEX *) * ypoints))
    {
            for(i = 0; i < xpoints; i++)
        {
                    acp1.mat[i] = (COMPLEX *)malloc(sizeof(COMPLEX) * xpoints);
            }
        }

    // First attempts at calculating mesh size
    /*for(i = 0; i < xpoints; i++)
    {
        for(y = 0; y < ypoints; y++)
        {
                for(x = 0; x < xpoints; x++)
            {
                    acp1.mat[y][x].x_real = xmin + x * sx;
                    acp1.mat[y][x].y_imag = ymin + y * sy;
                }
        }        
        }*/

       
    /*if (acp1.mat = (COMPLEX **)malloc(sizeof(COMPLEX *) * ypoints))
    {
            for(i = 0; i < xpoints; i++)
        {
            for(y = 0; y < ypoints; y++)
            {
                    for(x = 0; x < xpoints; x++)
                {
                            acp1.mat[y][x].x_real = xmin + x * sx;
                            acp1.mat[y][x].y_imag = ymin + y * sy;
                    }
            }
                        acp1.mat[i] = (COMPLEX *)malloc(sizeof(COMPLEX) * xpoints);
            }
        }*/

    // Most reliable effort at calculating mesh size
        for(y = 0; y < ypoints; y++)
    {
            for(x = 0; x < xpoints; x++)
        {
                    acp1.mat[y][x].x_real = xmin + x * sx;
                    acp1.mat[y][x].y_imag = ymin + y * sy;
            }
    }


        return acp1;
}

// Prints the complex plane
void print(CPLANE acp)
{
        int x;
        int y;

        for(y = 0; y < (acp.ypoints); y++)
    {
            for(x = 0; x < (acp.xpoints); x++)
        {
                    printf("\n%Lf %Lf\n", acp.mat[y][x].x_real, acp.mat[y][x].y_imag);
            }
        }
}

// Gives up the space that was used from memory
void gu(CPLANE acp)
{
    free(acp.mat);
}



// Alternative attempts

/*#include <stdio.h>
#include <stdlib.h>

//#ifndef __CPLANE_C
//#define __CPLANE_C

#include "complex.h"
#include "cplane.h"

CPLANE new_cplane(const VALS xmin, const VALS xmax, const VALS ymin, const VALS ymax, const POINTS xpoints, const POINTS ypoints) 
{
  CPLANE cp;
  cp.xmin = xmin;
  cp.xmax = xmax;
  cp.ymin = ymin;
  cp.ymax = ymax;
  cp.xpoints = xpoints;
  cp.ypoints = ypoints;

  COMPLEX mat[COMPLEX a][COMPLEX b];

  //CPLANE CPlane;

  for (cp.xpoints; cp.xmin <= cp.xpoints <= cp.xmax; cp.xpoints++)
    {
      for (cp.ypoints; cp.ymin <= cp.ypoints <= cp.ymax; cp.ypoints++)
	{
	  cp = mat[cp.xpoints][cp.ypoints];
	}
    }

  return cp;
}

CPLANE make_complex(COMPLEX *cp, int r, int c)
{

}

void set_ac(CPLANE *cplane, int r, int c)
{

}

COMPLEX get_ap(CPLANE *cplane, int r, int c)
{

}

void print(const COMLPEX v)
{

}

void print_cp(const CPLANE *acp)
{

}

void cs(CPLANE cp)
{

}*/



/*
template<typename T> 
CPLANE<T>::CPLANE(long double xmin, long double xmax, long double ymin, long double ymax, unsigned long int xpoints, unsigned long int ypoints) {

  for (xpoints; xmin <= xpoints <= xmax; i++)
    {
      for (ypoints; ymin <= ypoints <= ymax; j++)
	{
	  struct COMPLEX mat[xpoints][ypoints];
	}
    }
	  
}

template<typename T> 
Cplane<T>::Cplane() {

}

template<typename T> Cplane<T>::Cplane() {

}

template<typename T> Cplane<T>::~Cplane() {}

template<typename T>
T& Cplane<T>::operator() () {

}

template<typename T>
const T& Cplane<T>::operator() (l) 
const {

}

template<typename T>
unsigned int Cplane<T>::() const {

}


template<typename T>
unsigned int Cplane<T>::() const {

}

template<typename T>
Cplane<T>& Cplane<T>::() {

}


template<typename T>
Cplane<T> Cplane<T>::() {

}

#endif
*/
