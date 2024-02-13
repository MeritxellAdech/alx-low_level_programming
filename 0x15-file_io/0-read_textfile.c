#include "main.h"

/**
 * read_textfile - reads the data from a file and prints it to
 * the stdout
 *
 * @filename: the name of the file to be read
 * @letters: the number of characters to be printed
 *
 * Return: the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c_read;
	ssize_t n_read, n_written;

	/*Check if the filename is NULL*/
	if (filename == NULL || letters < 1)
		return (0);
	/* Opening the file descriptor */
	fd = open(filename, O_RDONLY);
	c_read = malloc(sizeof(char *) * (letters + 1));
	if (fd == -1 || c_read == NULL)
	{
		close(fd);
		return (0);
	}
	n_read = read(fd, c_read, letters);
	if (n_read == -1)
		return (0);
	n_written = write(STDOUT_FILENO, c_read, n_read);
	if (n_written != n_read)
		return (0);
	/*Close files and claim memory*/
	close(fd);
	free(c_read);
	/*return the number of characters printed*/
	return (n_read);
}
