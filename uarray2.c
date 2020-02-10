

UArray2_T UArray2_new(int height, int width, int size) {
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

void UArray2_free(UArray2_T *grid) {
  assert(*grid);
  for (int i = 0; i < height; i++) Array_free(Array_get(grid->rows, i)); 
  Array_free(grid->rows);
}

void* UArray2_at(UArray2_T grid, int height, int width) {
  assert(grid);
  assert(height >= 0 && height < grid->height);
  assert(width >= 0 && width < grid->width);
  Array_T row = Array_get(grid->rows, height);
  return Array_get(row, width);
}

int UArray2_height(UArray2_T grid) {
  assert(grid);
  return grid->height;
}

int UArray2_width(UArray2_T grid) {
  assert(grid);
  return grid->width;
}

int UArray2_size(UArray2_T grid) {
  assert(grid);
  return grid->size;
