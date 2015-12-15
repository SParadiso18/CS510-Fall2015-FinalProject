# CS510-Fall2015-FinalProject

# Sean Paradiso
# Professor Justin Dressel
# CS 510
# Fall Semester
# Final Project

    -------------------
### PROJECT DESCRIPTION ###
    -------------------

   This final project is an accumulation of the work we have done all semester ranging in difficulty and style. It is written in C, C++, and python. It utilizes many, if not all, the concepts we've covered including pandas, graph plotting, class creation and use, and mathematical tools such as complex numbers and Julia Sets just to name a few. There were a number of libraries used and a very good amount of code interaction between code written from new and old.
   I think my favorite portion of this project was seeing how what we did from class to class built up in one big project. It was satisfying to see older code be reused in a helpful way instead of just being forgotten once submitted. The structure of this project was dense and complicated with simplicity.
   There were two main portions of this project, C-JuliaSets and Cpp-Mandelbrot, that tie together everything from complex numbers and planes to Julia and Mandelbrot Sets. These sets, and the code written to describe them, are sets of complex numbers for specific sequences that do not approach infinity. This project illustrates the mathematics behind the complex dynamic as well as plots their fractal outcomes for visual inspection and exploration.


    -----------------
### FILE DESCRIPTIONS ###
    -----------------

   complex.c and complex.h

      - These files were previously written this semester to work with complex n	umbers. The first file, complex.c, handles such work as creating a compl        ex number and mathematically tinker with with said creation. It has the         code to square, add, multiply, print complex numbers and more. Secondly,         we have complex.h. This is simply contains the declarations of the clas        s.

   cplane.c and cplane.h

      - Here we have very similar files as the ones above, functionality wise. I	n cplane.c and cplane.h we have the newly created structure type CPLANE         which stores a complex plane, cplane.c, and the corresponding header fil        e cplane.h. Within cplane.c we have the ability to actually create the c        omplex plane, print it, and, subsequently, free up any memory allocation         used in doing so.

   julia.c

      - This is where we work with the complex and cplane code. We will create a	function that takes eight (8) command line arguments and appropriately p        arsees them into CPLANE and COMPLEX structures. Using these inputs, a co        mplex plane will be created using the CPLANE type. Whenever there is a c        omplex point in this creation, the juliamap function will iterate until         it has reached a magnitude larger than two or until the upper limit of 2        56 is reached. The number of iterations will then be printed to the scre        en as well as a CSV line regarding the calculated values.

   cplane.cpp and cplane.hpp

      - Very similar to cplane.c and cplane.h above, we have cplane.cpp and cpla	ne.hpp which are a C++ library with a cplane class. This class differs,         however, in that it does not store COMPLEX types but rather std::complex         <long double> types. The other glaring difference is that instead of mu        ltidimensional C arrays it utilizes boost::numeric::ublas::matrix<std::c        omplex<long double> > type. All that along with the obvious change form         C to C++ for both cplane.cpp and the corresponding cplane.hpp header fil        e.

   julia.c and julia.h

      - Here we have the simple implementation of the previously defined juliama	p function using std::complex<long double> instead of COMPLEX type like         that of the C portion.

   mandelbrot.cpp

      - This is the main functionality of the mandelbrot portion of the project.	 Here we take six (6) command line arguments properly parsed to be used         in the cplane constructor. We will again iterate over a complex plane cr        eated from the given arguments and and iterate the function juliamap. Ag        ain we will finish by outputting a single CSV line.

   generate_csv.sh

      - Here we have a bash script that executes make properly to build and exec	ute our julia and madelbrot programs using the given lines of:
      	   C-JuliaSet/julia -2 2 -2 2 1000 1000 -1.037 0.17 > juliaset.csv
           Cpp-Mandelbrot/mandelbrot -2 2 -2 2 1000 1000 > mandelbrot.csv
	This will generate the default CSV datafiles.

   plot_data.py

      - Finally, there is the python script. Here we take in and parse a single		command line argument of the name of a CSV file. We then proceed to load         the given file into a pandas dataframe. Continuing, we use the tools fr        om matplotlib to create a 2D heatmapped plot and save it as a JPEG file.


  Finally, I would be remiss to not mention how much I appreciate the help of my fellow classmates and the understanding of my professor. Due to unforeseen issues I was unable to work as much as I would have liked on this project and my classmates really helped me along. I would feel like I was lying if I didn't mention that when we worked together, I used the some of the minor details of my classmates' code in order to facilitate my situation. I would like to declare, however, that there was no copying. The code I submit will be completely written by me albeit with influence from others willing enough to help me when my abilities were not what they could have been. I extremely grateful and appreciative of the help I received and the understanding of my professor and this is why I feel the need to explain what is written above. The code is mine but not without help from my friends.