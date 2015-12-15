#include <iostream>
#include <complex>
#include <cstdio>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

typedef std::complex<long double> cd;

// Define class cplane
class cplane
{
  // Access Modifiers
  //
  // Any class in the project can refer to this field or call this method
     public:
            long double xmin;
            long double xmax;
            long double ymin;
            long double ymax;
   
            unsigned long int xpoints;
            unsigned long int ypoints;
   
            boost::numeric::ublas::matrix<cd> mat;
   
            void set(long double, long double, long double, long double, unsigned long int, unsigned long int);

  // Only this class can access these fields and/or methods
    //private:

};

void print(cplane &cp);
void gu(cplane &cp);

