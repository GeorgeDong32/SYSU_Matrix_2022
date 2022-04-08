inline int inline_MAX(int a, int b) {
  return (a > b) ? a : b;
}

inline void inline_SWAP(int &a, int &b) {
  a ^= b ^= a ^= b;
}