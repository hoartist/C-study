#include<stdio.h>
int main(void)
{
	int x = 10;
	int* p = &x;// p는 a 의 주소로 초기화 한다

	printf("x=%d\n", x);
	printf("&x=%p\n", &x);// &x는 주소 값이므로 %p로 출력

	printf(" p=%d\n", p);
	printf("*p = %d\n", *p); //*p는 int 형 변수 이므로 %d 로 출력
	printf("&p=%d\n", &p); //포인터도 변수 이므로 주소가 있다

	*p = 20;
	printf("p=%d\n", *p);//printf("*p=%d\n",x)로 수행됨

	return 0;


}