#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function name
 * @filename: parameter one
 * @letters:parameter two
 * Return: 0 on success
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ok, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	ok = open(filename, O_RDONLY);
	rd = read(ok, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (ok == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(ok);

	return (wr);

}
