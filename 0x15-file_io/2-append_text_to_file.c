#include "main.h"
/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: name of the file
* @text_content: string to add at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_h;
int i;
int s;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
file_h = open(filename, O_APPEND | O_WRONLY);
if (file_h == -1)
return (-1);
for (i = 0; text_content[i] != '\0'; i++)
;
s = write(file_h, text_content, i);
if (s == -1)
return (-1);
close(file_h);
return (1);
}
