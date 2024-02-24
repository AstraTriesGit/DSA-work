//
// Created by Nero Sparda on 23/12/23.
//

// datatype arrayName[size];

// static array initialisation on stack memory
int dots[3] = {1, 2, 3};
int dots2[] = {1, 2, 3}; // without specifying array size, done by cmp
int dots3[5] = {1, 2}; // incomplete init, saved as {1, 2, 0, 0, 0}

// dynamic array init on heap memory
// datatype* arrayName = new datatype[size]
// also you need to delete this afterward

// multidimensional array
// datatype arr[x][y]
// dynamic
int colsize = 2;
int rowsize = 3;
int** arr = new int*[rowsize];
//for (int i= 0; i < rowsize; i++) {
//    arr[i] = new int[colsize]
//}

// free in loop



