#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with the given filename
 *
 * @filename: the name of the file to be created
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_chars;

	/*checking if any given data is NULL and open the file*/
	if (!filename)
		return (-1);
	/* Opening the file and give the permissions*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	/*write in the file*/
	n_chars = write(fd, text_content, strlen(text_content));
	if (n_chars == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
