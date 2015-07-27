#include<stdio.h>

int main(void) {
	int tst, candy, elephant, ele_pref, i, count;


	scanf("%d", &tst);


	while(tst--) {
		count = 0;

		scanf("%d ", &elephant);
		scanf("%d", &candy);

		for(i = 0; i < elephant; i++) {

			scanf("%d", &ele_pref);
			count += ele_pref;
		}

		if(candy >= count)
			printf("Yes\n");

		else
			printf("No\n");
	}

return 0;
}