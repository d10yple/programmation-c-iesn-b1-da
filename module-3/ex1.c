#include <stdio.h>

int main() {
	int tableDe;

	printf("Quelle table dois-je afficher pour toi?: ");
	scanf("%d", &tableDe);

	for(int i = 1; i <= tableDe; i++)
		printf("%dx%d=%d\n", i, tableDe, i * tableDe);

	return 0;
}
