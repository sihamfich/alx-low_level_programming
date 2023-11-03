#include "main.h"
#include <stdlib.h>  /* for the EXIT_* macros */

/**
 * read_textfile- Read text file print to the POSIX
 * standard output.
 * @filename: text file to be read
 * @letters: number of letters to be read
 *
 * Return: The actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *File_Contents;
	ssize_t file;
	ssize_t w;
	ssize_t t;

	/* Open the file for reading */
	file = open(filename, O_RDONLY);
	if (file == NULL)
	{
		printf("There has been an error");
		exit(1);
	}
	/* Allocate memory for the file content */
	File_Contents = malloc(sizeof(char) * letters);
	t = read(file, File_Contents, letters);
	w = write(STDOUT_FILENO, File_Contents, t);

	free(File_Contents);
	close(file);
	return (w);
}
