#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float tall,weight,h,BMI; //tall���� weight�魫 h�������س�� 
	printf("�п�J����:");
	scanf("%f",&tall);
	printf("�п�J�魫:");
	scanf("%f",&weight);
	h=(tall/100);
	BMI=(weight/(h*h));
	printf("�A��BMI�O:%f\n",BMI);
	system("pause");
	return 0;
}
