#include <unistd.h>

int	charlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

void	print(char *str)
{
	write(1, str, charlen(str));
}

void	print_char(char ch)
{
	write(1, &ch, 1);
}

char* scan(char *scanned)
{
	read(0, scanned, charlen(scanned));

	return scanned;
}

int	main(void)
{	
	char	*title_message = "세 정수의 최댓값을 구합니다.\n";
	char	*input_message = "의 값 : ";
	char	names[4] = {'a', 'b', 'c', '\0'};
	int	i = 0;
	char*	datas[4];

	print(title_message);
	while (i < 3)
	{
		print_char(names[i]);
		print(input_message); scan(datas[i]);
		print_char('\n');
		i++;
	}
}
