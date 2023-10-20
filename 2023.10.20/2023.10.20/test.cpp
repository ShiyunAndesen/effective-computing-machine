#include <stdio.h>
#include <stdlib.h>
int main()
{
	float x, y, a;
	for (y = 1.5f;y > -1.5f;y -= 0.1f)
	{
		for (x = -1.5;x < 1.5f;x += 0.05f)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');

		}
		system("color 04");
		putchar('\n');
	}
	printf("                     希望团结楼703西宿舍的各位:\n");
	printf("                天天开心\n");
	printf("                岁岁平安\n");
	return 0;
}