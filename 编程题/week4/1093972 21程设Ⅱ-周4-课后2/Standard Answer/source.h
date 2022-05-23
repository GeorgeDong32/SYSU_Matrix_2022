#include <stdlib.h>
int get_size(int data[], int len) {
	for (int i = 0; i < len; ++ i)
		if (data[i] == 0) return i;
	return len;
}
double ** make_list(double data[], int sizes[]) {
	int len = get_size(sizes, 20);
	double ** lists = (double **)malloc((len + 1) * sizeof(double *));
	double * p = data;
	for (int i = 0; i < len; ++ i) {
		lists[i] = (double *)malloc(sizes[i] * sizeof(double));
		for (int j = 0; j < sizes[i]; ++ j)
			lists[i][j] = *p++;
	}
	lists[len] = NULL;
	return lists;
}

void free_lists(double * lists[]) {
	for (int i = 0; ; ++ i) {
		if (lists[i] == NULL) break;
		free(lists[i]);
	}
	free(lists);
}