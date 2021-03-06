// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[50];
	char author[50];
	int year;
} Book;

void printBook(Book b) {
	printf("%s-%s(%d)\n", b.name, b.author, b.year);
}
Book createBookFromString(char*string) {
	Book b;
	int i;
	char *t = string;
	while (*t = ';') {
		b.name[i] = *t;
		t++; i++;
	}
	b.name[i] = '\0';
	t++; i = 0;
	char year[5];
	while (*t != ';') {
		b.author[i] = *t;
		t++; i++;
	}
	b.author[i] = '\0';
	t++; i = 0;
	char year[5];
	while (*t != '\0') {
		year[i] = *t;
		i++; t++;
	}

	year[i] = '\0';
	b.year = atoi(year);
	return b;
}


int main() {
	FILE*f = fopen("d:\\Viktor\\book.txt", "rt");
	if (f == NULL) {
		printf("");
		return 0;
	}
	int n;

	fscanf(f, "%d", &n);
	fgetc(f);
	char string[100];
	Book*books = (Book*)malloc(sizeof(Book)*n);

	for (int i = 0; i<n; i++) {
		fgets(string, 100, f);
		Book book = createBookFromString(string);
		books[i] = book;
	}
	fclose(f);
	int minYear = books[0].year;
	for (int i = 1; i<n; i++) {
		if (books[i].year<minYear) {
			minYear = books[i].year;
		}
	}
	for (int i = 0; i<n; i++) {
		if (books[i].year == minYear) {
			printf("!");
		}
		printBook(books[i]);
	}
	free(books);
	return 0;
}
