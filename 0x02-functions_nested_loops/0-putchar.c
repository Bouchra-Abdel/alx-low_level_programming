/**
* main - Entry point
 *
 * Description: prints _putchar using putchar prptptype
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i=0;

	for (i;i < str.stlen(); i++){
	    putchar(str[i]);
	}
	return (0);
}
