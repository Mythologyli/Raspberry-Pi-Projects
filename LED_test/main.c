#include <stdio.h>
#include <wiringPi.h>

#define	LED	0

int main(void)
{
	wiringPiSetup(); //ʹ��wiringPi���ű�ű�

	pinMode(LED, OUTPUT); //��������Ϊ���ģʽ

	for (int light_time = 1; light_time <= 10; light_time++)
	{
		digitalWrite(LED, HIGH);  //��
		delay(500); // ����

		printf("%d..", light_time); fflush(stdout);

		digitalWrite(LED, LOW);	  //��
		delay(500);
	}

	printf("LED has been lighted for 10 times.\n");

	return 0;
}