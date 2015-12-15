#!/bin/bash

cd C-JuliaSets
make
make clean
make
make run
C-JuliaSet/julia -2 2 -2 2 1000 1000 -1.037 0.17 > juliaset.csv
cd -
cd Cpp-Mandelbrot
make
make clean
make
make run
Cpp-Mandelbrot/mandelbrot -2 2 -2 2 1000 1000 > mandelbrot.csv