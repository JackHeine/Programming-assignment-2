#ifndef INPUTTABLE_HPP
#define INPUTTABLE_HPP

#include <iostream>

using namespace std;

    int pros = 5;
    int types = 3;
    
    //the table
    int alloc[5][3] = { { 0, 1, 0 }, // P0 // Allocation Matrix
                     { 2, 0, 0 }, // P1
                     { 3, 0, 2 }, // P2
                     { 2, 1, 1 }, // P3
                     { 0, 0, 2 } }; // P4
    int maxi[5][3] = { { 7, 5, 3 }, // P0 // MAX Matrix
                   { 3, 2, 2 }, // P1
                   { 9, 0, 2 }, // P2
                   { 2, 2, 2 }, // P3
                   { 4, 3, 3 } }; // P4
    int available[3] = {3, 3, 2};
    
#endif