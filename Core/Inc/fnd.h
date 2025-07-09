/*
 * fnd.h
 *
 *  Created on: Jun 19, 2025
 *      Author: wonhyeok
 */

#ifndef INC_FND_H_
#define INC_FND_H_

#include "main.h"

#define RCLK_HIGH() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET)
#define RCLK_LOW() HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_RESET)

void SEG_OUT(uint8_t data);



#endif /* INC_FND_H_ */
