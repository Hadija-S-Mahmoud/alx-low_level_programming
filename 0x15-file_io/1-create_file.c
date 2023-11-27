#include "main.h"
/**
* create_file - function that creates a file.
* @filename: name of the file
* @text_content: string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int file_h;
int n;
int rwr;
if (!filename)
return (-1);
file_h = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file_h == -1)
return (-1);
if (!text_content)
text_content = " ";
for (n = 0; text_content[n]; n++)
;
rwr = write(file_h, text_content, n);
if (rwr == -1)
return (-1);
close(file_h);
return (1);
}
