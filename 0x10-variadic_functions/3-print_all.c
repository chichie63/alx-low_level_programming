#include "variadic_functions.h"
/**
 * print_all - print arguments provided
 * @format: argument specifier
 * Return: given argument
 */
void print_all(const char * const format, ...)
{
	int i;

	char *str, *sep = "";
	va_list spec;

	va_start(spec, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", sep, va_arg(spec, int));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(spec, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(spec, double));
				break;
			case 's':
				str = va_arg(spec, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(spec);
}
