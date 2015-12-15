#include <iostream>
#include <complex>
#include <cstdio>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

#include "julia.h"

// Function cd handles the juliamap calculation
cd juliamap(cd z, cd c)
{
    cd cj;

    cj = (z * z) + c;

    return cj;
}
