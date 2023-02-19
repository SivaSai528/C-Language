#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char wrd[256], buffer[256],path[256];
	int n, m, i, j, line;
	
	FILE* fp;
	printf("Enter source file path: ");
    gets(path);
	fp = fopen(path, "r");

	printf("Enter the word you want to search in the file: ");
	gets(wrd);

	m = strlen(wrd);

	printf("All positions of word \"%s\" in the file\n", wrd);

	line = 0;
	while (fgets(buffer, 256, fp) != NULL) {

		i = 0;
		n = strlen(buffer);
		
		while (i < n) {

			j = 0;
			while (i < n && j < m && buffer[i] == wrd[j]) {
				++i, ++j;
			}
			if ((i == n || buffer[i] == ' ' || buffer[i] == '\n') && j == m) {
				printf("Line: %d ", line);
				printf("Column: %d\n", i - m);
			}
			while (i < n && buffer[i] != ' ') {
				++i;
			}
			++i;

		}

		++line;

	}

	fclose(fp);

}
