#include <stdio.h>
#include "source.h"

void print_list(double list[], int size) {
	for (int i = 0; i < size; ++ i) printf("%.3lf ", list[i]);
	putchar('\n');
}

void print_lists(double * lists[], int sizes[]) {
	for (int i = 0; ; ++ i) {
		if (lists[i] == NULL) break;
		print_list(lists[i], sizes[i]);
	}
}

// read a number of double data in a signle line, returns the number of data red
int read_data_line(double data[]) {
	char line[1000];
	if (fgets(line, 1000, stdin) == NULL) return 0;
	return sscanf(line, "%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf", 
		data, data+1, data+2, data+3, data+4, data+5, data+6, data+7, data+8, data+9);
}

int main() {
	double data[1000];
	int num_data_per_line[20] = {0};
	int total = 0;
	for (int i = 0; i < 20; ++ i) {
		int num_data = read_data_line(data + total);
		if (num_data <= 0) num_data = 0;
		total += num_data;
		num_data_per_line[i] = num_data;
		if (num_data == 0) break;
	}
	// TODO: allocate a list of pointers to allocated lists of doubles
	double ** lists = make_list(data, num_data_per_line); 
	print_lists(lists, num_data_per_line);
	free_lists(lists);
}