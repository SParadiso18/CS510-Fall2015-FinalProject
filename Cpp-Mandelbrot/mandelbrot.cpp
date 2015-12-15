// File inclusions
#include <iostream>
#include <complex>
#include <cstdio>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

#include "julia.h"
#include "cplane.hpp"

int main(int argc,char *argv[])
{
    // Creating a variable of type CPLANE
    CPLANE cp;

    // Generic variable declarations
        int f;

        long double xmin;
        long double xmax;
        long double ymin;
        long double ymax;

        unsigned long int xpoints;
        unsigned long int ypoints;

    // Proper value allocation to create an instance of CPlane
    cp.set(xmin, xmax, ymin, ymax, xpoints, ypoints);

    // Returns 0 if there are an imroper number of variables passed
        if(argc != 7)
    {
            return 0;
        }

        boost::numeric::ublas::matrix< std::complex<long double> > test;

    // Assigning command line arguments to variables
        std::stringstream(argv[1]) >> xmin;
        std::stringstream(argv[2]) >> xmax;
        std::stringstream(argv[3]) >> ymin;
        std::stringstream(argv[4]) >> ymax;
        std::stringstream(argv[5]) >> xpoints;
        std::stringstream(argv[6]) >> ypoints;


        cd c (0,0);

    // Series of nested loops to work with and utilize juliamap function
        for(int y = 0; y < cp.ypoints; y++)
    {
            for(int x = 0; x < cp.xpoints; x++)
        {
            cd d = cp.mat(x,y);

            for(f = 0; f < 1000; f++)
            {
                        if(std::abs(d) > 2.0)
                {
                    break;
                }

                        d = juliamap(d, cp.mat(x,y));
                    }

                std::cout << cp.mat(x,y).real() << " " << cp.mat(x,y).imag() << " " << f << std::endl;

        }
        //std::cout << std::endl;

    }

    // Alternate attempts to utilize juliamap

    /*for(int y = 0; y < cp.ypoints; y++)
    {
            for(int x = 0; x < cp.xpoints; x++)
        {
            cd d = cp.mat(x,y);

                    if(std::abs(d) > 2.0)
            {
                break;
            }

                    d = juliamap(d, cp.mat(x,y));

                std::cout << cp.mat(x,y).real() << " " << cp.mat(x,y).imag() << " " << f << std::endl;

        }

    }*/

    /*for(int x = 0; x < cp.xpoints; x++)
    {
            for(int y = 0; y < cp.ypoints; y++)
        {
            d = juliamap(d, cp.mat(x,y));
        }
    }*/

}



// Initial attempt at creating Mandelbrot
//
// The inability to get proper file functions to work
// along with the code becoming too convoluted an messy
// is what lead to the scrapping and start over of this
// portion of the project

/*#include <stdio.h>
#include <math.h>
int main()
{
    int ix;
    int iy;   
    int itr;
    int xmax = 1000;
    int ymax = 1000;
    int itrmax = 200;
    int cv = 255;

    unsigned long int xpoints;
    unsigned long int ypoints;

    double cx;
    double cy;
    double zx;
    double zy;
    double zx2;
    double zy2;
    double r = 2;
    double r2 = pow(r, 2);
    double xMin = -2.5;
    double xMax = 1.5;
    double yMin = -2.0;
    double yMax = 2.0;
    double w = (xMax - xMin) / xmax;
    double h = (yMax - yMin) / ymax;

    long double xmin;
    long double xmax;
    long double ymin;
    long double ymax;

    char *filename = "file1.csv";
    char *com = "# ";

    static unsigned char color[3];

    //fo = fopen(filename,"...");
    //fprintf(fo,"P6\n %s\n %d\n %d\n %d\n",com, xmax, ymax, cv);

    std::stringstream(argv[1]) >> xmin;
    std::stringstream(argv[2]) >> xmax;
    std::stringstream(argv[3]) >> ymin;
    std::stringstream(argv[4]) >> ymax;
    std::stringstream(argv[5]) >> xpoints;
    std::stringstream(argv[6]) >> ypoints;

        for(iy = 0; iy < ymax; iy++)
        {
                 cy = yMin + iy * h;

        if (fabs(cy) < (h / 2))
        {
             cy=0.0;
        }

                 for(iX=0;iX<iXmax;iX++)
                 {        
                        cx = xMin + ix * w;
                        zx=0.0;
                        zy=0.0;
                        zx2 = zx * zx;
                        zy2 = zy * zy;

                        for (itr = 0; itr < itrmax && ((zx2 + zy2) < er2); itr++)
                        {
                            zy = 2 * zx * zy + cy;
                            zx = zx2 - zy2 + cx;
                            zx2 = zx * zx;
                            zy2 = zy * zy;
                        };

                        if (itr == itrmax)
                        {
                           color[0] = 0;
                           color[1] = 0;
                           color[2] = 0;                          
                        }
                         else
                        {
                             color[0] = 255;
                             color[1] = 255;
                             color[2] = 255;
                        };

                        //fwrite(color,1,3,fo);
                }
        }

        //fclose(fo);

        return 0;
}*/
