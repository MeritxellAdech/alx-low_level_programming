/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 8351;
	while ((c = *str++))
	{
		hash = ((hash << 3) + hash) + c;
	}
	return (hash);
}
