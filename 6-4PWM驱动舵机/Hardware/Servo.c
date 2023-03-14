#include "stm32f10x.h"                  // Device header
#include "PWM.h"

void Servo_Init(void)
{
	PWM_Init();
}

void Servo_SetAngle(float Angle)
{
	TIM_SetCompare2(TIM2, Angle / 180 * 2000 + 500);	//线性变换，compare = k * angle + b
}

