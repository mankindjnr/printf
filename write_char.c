/**
 *write_char - writes the character c to stdout
 *@c: the character to print
 *Return: on success 1
 */
int write_char(char c)
{
	return (write(1, &c, 1));
}
