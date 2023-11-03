#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If a filename == NULL return -1.
 * text_content == NULL return create empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file, writeToFile, lenght = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = " ";
	for (lenght = 0; text_content[lenght]; lenght++)
		;

	writeToFile = write(file, text_content, lenght);
	if (writeToFile == -1)
		return (-1);
close(file);
}
