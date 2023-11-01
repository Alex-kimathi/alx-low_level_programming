#include "main.h"
#include <string.h>
/**
  * append_text_to_file - appends text to file
  * @filename: the file name
  * @text_content: the content of the file
  * Return: 1 success or -1 fails
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	bytes_written = write(fd, text_content, strlen(text_content));
	close(fd);

	if (bytes_written == -1)
	{
		return (-1);
	}

	return (1);
}
