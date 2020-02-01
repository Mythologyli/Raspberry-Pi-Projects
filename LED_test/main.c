#include <stdio.h>
#include <wiringPi.h>

#define	LED	0

int main(void)
{
	wiringPiSetup(); //使用wiringPi引脚编号表

	pinMode(LED, OUTPUT); //设置引脚为输出模式

	for (int light_time = 1; light_time <= 10; light_time++)
	{
		digitalWrite(LED, HIGH);  //开
		delay(500); // 毫秒

		printf("%d..", light_time); fflush(stdout);

		digitalWrite(LED, LOW);	  //关
		delay(500);
	}

	printf("LED has been lighted for 10 times.\n");

	return 0;
}