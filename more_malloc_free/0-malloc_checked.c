/**
 *malloc_checked - function
 * @b: variable
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
