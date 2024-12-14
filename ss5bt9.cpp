#include<stdio.h>
int main(){
	double num1,num2,num3,total,temp,count=0;
	int choose;
	
	
	do{
		printf("  MENU\n");
		    printf("1.Nhap 3 so\n");
			printf("2.tong ba so\n");
			printf("3.trung binh cong ba so\n");
			printf("4.so nho nhat\n");
			printf("5.so lon nhat\n");
		    printf("6.thoat\n");
		    printf("Lua chon cua ban: ");
		    scanf("%d",&choose);
		    if(choose>6){
		    	printf("so khong hop le");
		    	return 0;
			}
		    switch(choose){
		    	case 1:
		    		printf("moi ban nhap so thu nhat: ");
                  	scanf("%lf",&num1);
                 	printf("moi ban nhap so thu hai: ");
                    scanf("%lf",&num2);
                 	printf("moi ban nhap so thu ba: ");
	                scanf("%lf",&num3);
	                count=1;
		    		break;
		    	case 2:
		    		if(count){
		    		total = num1 + num2 + num3;
		    		printf("%.1lf + %.1lf + &.1lf = %.1lf\n",num1,num2,num3,total);
		    	}else{
		    		printf("moi ban nhap 3 so truoc khi tinh.\n");
				}
		    		break;
		    	case 3:
		    		if(count){
				    total = (num1 + num2 + num3)/3;
		    		printf("(%.1lf + %.1lf + %.1ld)/3 = %.1lf\n",num1,num2,num3,total);
		    		}else{
		    				printf("moi ban nhap 3 so truoc khi tinh.\n");
				}
		    		break;	
		    	case 4:
		    		if(count){
		    		if(num2>num3){
		    			num2=temp;
		    			num2=num3;
		    			num3=temp;
					}
						if(num1>num2){
		    			num1=temp;
		    			num1=num2;
		    			num2=temp;
					}
						}else{
		    				printf("moi ban nhap 3 so truoc khi tinh.\n");
				}
					printf("so nho nhat la: %.1lf\n",num1);
					break;
				case 5:
						if(count){
					if(num2<num3){
		    			num2=temp;
		    			num2=num3;
		    			num3=temp;
					}
						if(num1<num2){
		    			num1=temp;
		    			num1=num2;
		    			num2=temp;
					}
					printf("so nho nhat la: %.1lf\n",num1);
						}else{
		    				printf("moi ban nhap 3 so truoc khi tinh.\n");
				}
					break;
					
				case 6:
					printf("tam biet ban nheee hen gap lai see you again!<3");
					break;
					 
			}
	}while(choose != 6);
	return 0;
}
