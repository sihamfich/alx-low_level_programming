#include "main.h"

/**
 * read_textfile - Read text file print to
 * the POSIX standard output.
 * @filename: text file to be read
 * @letters: number of letters to be read
 *
 * Return: The actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *File_Contents;
	int file;
	ssize_t first, second;

	if (!filename)
		return (0);

	/* Open the file for reading */
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	/* Allocate memory for the file content */
	File_Contents = malloc(sizeof(char) * letters);
	if (!file)
		return (0);

	first = read(file, File_Contents, letters);
	second = write(STDOUT_FILENO, File_Contents, first);
	close(file);
	free(File_Contents);
	return (second);
}
