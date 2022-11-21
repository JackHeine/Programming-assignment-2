Jack Heineking 811178900
Operating Systems Fall 2022

important notes on how to use:
the input file was stated to be any format, so here it is inputfile.hpp. all it contains are the arrays, 
which can be manipulated, of the given problem.

compiling: 
I used:

clang++ bankers.main.cpp -o bankers.main
./bankers.main

although other compilers work, this is the one that i prefer and i have not tested others, 
though I doubt there would be any difference.
program runs with no issue and properly computes the problem at hand.
if you wanted to change the input to this, simply change what is inside inputTable.hpp.

Documentation.

the table, as described in the home page and in banker.main.cpp in the initial notes i took, is stored in inputTable.hpp
  i made it like this because it only said we needed an input file, and I think this works fine.
the number of processes is stored in pros.
  in this case, 5.
the number of resource types is stored in types.
  in this case, 3.
The program first initiates a placeholder array, f, then finds what is needed from the table, needs. 
using these, we can find if at any point our needs are too much for the resources we have.
if we have enough, we then set a path that would be safe and report that path to the user. 
if no safe path was found, it will print "Not safe!" and exit.

for any questions about this project, please contact me at jheineki@kent.edu

