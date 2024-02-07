
int main(){
	
// for bintang sisi kiri
//	int i,j;
//	for (i = 1 ; i <= 5 ; i++){
//		for (j = 1; j <= i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}


// while
//	int i = 1;
//	int j = 1;
//	while(i <= 5){
//		while(j <= i){
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//		j = 0;
//	}	


//for bintang sisi kanan
//	int i,j,k;
//	for (i = 1 ; i <= 5 ; i++){
//		for (k = 5; k >= i; k--){
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}

//while bintang sisi kanan
//	int i = 0;
//	int j = 0;
//	int k = 5;
//	while(i < 5){
//		while(k > i ){
//			printf(" ");
//			k--;
//		}
//		k = 5;
//		while(j <= i){
//			printf("*");
//			j++;
//		}
//		j = 0;
//		printf("\n");
//		i++;
//	}

//for bintang piramid
	int i,j,k;
	for (i = 1 ; i <= 5 ; i++){
		for (k = 5; k >= i-1; k++){
			printf(" ");
		}
		for (j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
}
 
 //geraldin

