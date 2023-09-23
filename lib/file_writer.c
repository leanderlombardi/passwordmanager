#include "file_writer.h"
#include <stdio.h>

int write_file(char *path, char *content) {
	FILE *file;
	file = fopen(path, "w");
	if (file == NULL) {
		printf("Error\n");
		return 1;
	}
	fprintf(file, "%s\n", content);
	fclose(file);

	return 0;
}

