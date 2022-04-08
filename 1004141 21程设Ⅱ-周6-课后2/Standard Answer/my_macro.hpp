#define MACRO_MAX(x, y) ((x) > (y) ? (x) : (y))
#define MACRO_SWAP(x, y) ((a) ^= (b) ^= (a) ^= (b))

// No, you won't pass this in this way
/* int MACRO_MAX(int x, int y) {
  return x > y ? x : y;
} */