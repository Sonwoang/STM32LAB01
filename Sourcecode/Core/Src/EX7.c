/*
 * EX7.c
 *
 *  Created on: Dec 17, 2024
 *      Author: LENOVO
 */
#include "Ex7.h"
void clearAllClock(void){
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);

	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);

	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);

	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
}


