#include <string.h>
#include "main.h"

/**
 * create_file - creates file pointer
 * @filename: pointer file
 * @text_content: number od letters
 * Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wt;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wt = write(fd, text_content, strlen(text_content));
		if (wt == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
