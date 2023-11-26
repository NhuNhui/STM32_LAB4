/*
 * Task.c
 *
 *  Created on: Nov 23, 2023
 *      Author: QUI
 */

#include "Task.h"


void led_red() {
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void led_green() {
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
}

void led_orange() {
	HAL_GPIO_TogglePin(LED_ORANGE_GPIO_Port, LED_ORANGE_Pin);
}

void led_aqua() {
	HAL_GPIO_TogglePin(LED_AQUA_GPIO_Port, LED_AQUA_Pin);
}

void led_pink() {
	HAL_GPIO_TogglePin(LED_PINK_GPIO_Port, LED_PINK_Pin);
}
