#include <stdio.h>
int main(){
	int in1 ;
	int in2 ;
	int in3 ;

		scanf("%d %d %d", &in1, &in2, &in3 ) ;
	if(in1>in2&&in2>in3){

		printf("Max : %d \nMin : %d ",in1,in3) ;
    }
	else if(in1>in3&&in3>in2){

		printf("Max : %d \nMin : %d ",in1,in2) ;
	}
	else if(in2>in1&&in1>in3){

		printf("Max : %d \nMin : %d ",in2,in3) ;
	}
	else if(in2>in3&&in3>in1){

		printf("Max : %d \nMin : %d ",in2,in1) ;
	}
	else if(in3>in1&&in1>in2){

		printf("Max : %d \nMin : %d ",in3,in2) ;
	}
	else if(in3>in2&&in2>in1){

		printf("Max : %d \nMin : %d ",in3,in1) ;
	}



	
	return 0 ;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
