#include<stdio.h>
int main(void)
{
	int x = 10;
	int* p = &x;// p�� a �� �ּҷ� �ʱ�ȭ �Ѵ�

	printf("x=%d\n", x);
	printf("&x=%p\n", &x);// &x�� �ּ� ���̹Ƿ� %p�� ���

	printf(" p=%d\n", p);
	printf("*p = %d\n", *p); //*p�� int �� ���� �̹Ƿ� %d �� ���
	printf("&p=%d\n", &p); //�����͵� ���� �̹Ƿ� �ּҰ� �ִ�

	*p = 20;
	printf("p=%d\n", *p);//printf("*p=%d\n",x)�� �����

	return 0;


}