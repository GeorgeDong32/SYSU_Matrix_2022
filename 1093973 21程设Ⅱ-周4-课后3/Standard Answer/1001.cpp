// Problem#: 17754
// Submission#: 4643990
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
int * doubleCapacity(int *list, int size) {
 int  *list1 = new int[size * 2];
 for(int i = 0; i < 2 * size; i++) {
  if(i < size)
   *(list1+i) = *(list + i);
  else
   *(list1+i) = 0;
 }
 return list1;
}
