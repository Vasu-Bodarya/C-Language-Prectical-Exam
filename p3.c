
// 10 9 8 7 6
//     9 8 7 6
//       8 7 6
//         7 6
//           6

#include<stdio.h>

main(){

int i,j=10,space;

	for(i=10;i>=j;i--){
		for(space=10;space>=i;space--){
			printf("  ",space);
		}

		for(j=i;j>=6;j--){
			printf("% d" ,j);
		}

		printf("\n");
		}

}
