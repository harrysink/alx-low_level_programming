#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: name of the filr to be created
 * @text_content: string to write to the file
 *
 * Return: 1 if successful, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int t, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}
	close(fd);
	return (1);
}
