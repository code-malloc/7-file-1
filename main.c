#include <stdio.h>

int main()
{
	int otzhimaniya, podtyagivaniya, prised, press;

	printf("\tОтжимания в отказ, определения нагрузки.\n");

	printf("Макс. кол-во повторений в отжиманиях: ");
	scanf("%d", &otzhimaniya);

	podtyagivaniya = otzhimaniya/4;
	prised = otzhimaniya*2;
	press = prised;

	printf("Подтягивания = %d\n", podtyagivaniya);
	printf("Присед = %d\n", prised);
	printf("Пресс = %d\n", press);

	return 0;
}
