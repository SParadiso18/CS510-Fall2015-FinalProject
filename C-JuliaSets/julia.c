// File inclusions
#include <stdlib.h>
#include <stdio.h>

#include "cplane.h"

// Defining global variable MAXITER
int MAXITER = 256;

int main(int argc, char *argv[])
{
    // Variable declarations
    COMPLEX c;
    COMPLEX z;

    CPLANE cp;

    int out;
        int x;
    int y;

        long double xmin;
        long double xmax;
        long double ymin;
        long double ymax;
    long double r;

        unsigned long int xpoints;
        unsigned long int ypoints;

    // Allocating values to create a complex plane
    cp = constructor(xmin, xmax, ymin, ymax, xpoints, ypoints);

   
        if(argc < 9 || argc > 9)
    {
            return;
        }

    // Acquiring and storing user input

    // The minimum and maximums of x and y
    // are stored as the first four arguments
        sscanf(argv[1], "%Lf", &xmin);
        sscanf(argv[2], "%Lf", &xmax);
        sscanf(argv[3], "%Lf", &ymin);
        sscanf(argv[4], "%Lf", &ymax);

    // Next we have the number of x and y points
        sscanf(argv[5], "%ld", &xpoints);
        sscanf(argv[6], "%ld", &ypoints);

    // And lastly we have the real and imaginary parts of our complex variable
        sscanf(argv[7], "%Lf", &c.x_real);
        sscanf(argv[8], "%Lf", &c.y_imag);


    // These first two for loops allow us to traverse our plane point-by-point
    for(y = 0; y < cp.ypoints; y++)
    {
        for(x = 0; x < cp.xpoints; x++)
        {
                    z = cp.mat[y][x];

            // The third loop is where we calculate the julia set
                    for(out = 0; out < 1000; out++)
            {
                            z = juliamap(&z, &c);
                            r = z.x_real * z.x_real + z.y_imag * z.y_imag;

                // This is a precautionary if statement to
                // make sure we stay in bounds
                            if(r > 4)
                {
                    break;
                }

                // This was the initial attempt to calculate the julia set
                // using the global variable MAXITER as a boundary limit,
                // however, multiple complications arose leading to the
                // above nested loops.
                /*for(int i = 0; -2 <= -i || i <= 2 || i <= MAXITER; i++)
                    {
                          juliamap(z,c);
  
                          if(i < MAXITER)
                        {
                              out = i;
                        }
                          else if(i = MAXITER)
                        {
                              out = 0;
                        }

                          return out;
                }*/
                    }
                   
            printf("\n%Lf %Lf %d\n", cp.mat[y][x].x_real, cp.mat[y][x].y_imag, f);
                }
        }

        return 0;
}


// Alternative attempts

/*
#include <stdio.h>

#define MAXITER 256;

int main (int argc, char *argv[])
{*/
  /*struct CPLANE xmin;
  struct CPLANE xmax;
  struct CPLANE ymin;
  struct CPLANE ymax;

  struct CPLANE xpoints;
  struct CPLANE ypoints;*/
/*
  struct CPLANE r;

  struct COMPLEX creal;
  struct COMPLEX cimag;
  struct COMPLEX c;
  struct COMPLEX z;

  unsigned int out;


  c = creal + cimag*i;

  CPLANE r(xmin, xmax, ymin, ymax, xpoints, ypoints);

  for(int i = 0; i < r; i ++)
    {
      z = xpoints + ypoints * i;
    }

  for(int i = 0; -2 <= -i || i <= 2 || i <= MAXITER; i++)
    {
      if(i <= MAXITER)
	{
	  juliamap(z,c);
    
	  out = i;
	}
      else
	{
	  out = 0;
	}

      return out;
      }*/
