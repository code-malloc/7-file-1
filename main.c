#include <stdio.h>

int main()
{
	int otzhimaniya, podtyagivaniya, prised, press;

	printf("\tОтжимания в отказ, определение нагрузки.\n");

	printf("Макс. кол-во повторений в отжиманиях: ");
	scanf("%d", &otzhimaniya);

	podtyagivaniya = otzhimaniya/4;
	prised = otzhimaniya*2;
	skruchivaniya = prised;

	printf("Подтягивания = %d\n", podtyagivaniya);
	printf("Присед = %d\n", prised);
	printf("Скручивания = %d\n", press);

	return 0;
}
