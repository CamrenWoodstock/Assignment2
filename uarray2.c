#include <stdio.h>
#include <stdlib.h>
#include "uarray2.h"
#include "assert.h"
#include "mem.h"
#Define T UArray2_T

extern T UArray2_new(int height, int width, int size) {
  UArray2_T grid;
  NEW(grid);
  //Initialize the Grid
  grid->height = height;
  grid->width = width;
  grid->size = size;
  assert(size > 0);
  if ((height < 1) || (length < 1)) grid->rows = NULL;
  else {
    grid->rows = Array_T_new(height, sizeof(Array_T));
    for (int i = 0; i < height; i++)
      Array_put(grid->rows, i, Array_new(width, sizeof(Array_T)); 
  }
  return grid;
}
                
extern void UArray2_free(UArray2_T *grid) {
  assert(*grid);
  for (int i = 0; i < height; i++) Array_free(Array_get(grid->rows, i)); 
  Array_free(grid->rows);
}

extern void* UArray2_at(UArray2_T grid, int width, int height) {
  assert(grid);
  assert(height >= 0 && height < grid->height);
  assert(width >= 0 && width < grid->width);
  Array_T row = Array_get(grid->rows, height);
  return Array_get(row, width);
}

extern int UArray2_height(UArray2_T grid) {
  assert(grid);
  return grid->height;
}

extern int UArray2_width(UArray2_T grid) {
  assert(grid);
  return grid->width;
}

extern int UArray2_size(UArray2_T grid) {
  assert(grid);
  return grid->size;
}
                
extern void UArray2_map_col_major(UArray2_T grid,
apply(int xIndex, int yIndex, UArray2_T grid, void *indexPtr, void *cl), void *cl); {
  for(int y = 0; y < grid->width; y++) {
    for(int x = 0; x < grid->height; x++) {
      apply(UArray2_at(grid, x, y), cl, x, y, grid);
    }
  }
}
                            
extern void UArray2_map_row_major(UArray2_T grid, 
apply(int xIndex, int yIndex, Uarray2_T grid, void *indexPtr, void *cl), void *cl); {
  for(int y = 0; y < grid->width; y++) {
    for(int x = 0; x < grid->height; x++) {
      apply((UArray2_at(grid, x, y), cl, x, y, grid);
    }
  }
}

