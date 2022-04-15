/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define R0_Pin GPIO_PIN_13
#define R0_GPIO_Port GPIOC
#define R1_Pin GPIO_PIN_14
#define R1_GPIO_Port GPIOC
#define R2_Pin GPIO_PIN_15
#define R2_GPIO_Port GPIOC
#define R3_Pin GPIO_PIN_0
#define R3_GPIO_Port GPIOA
#define R4_Pin GPIO_PIN_1
#define R4_GPIO_Port GPIOA
#define R5_Pin GPIO_PIN_2
#define R5_GPIO_Port GPIOA
#define C0_Pin GPIO_PIN_3
#define C0_GPIO_Port GPIOA
#define C1_Pin GPIO_PIN_4
#define C1_GPIO_Port GPIOA
#define C2_Pin GPIO_PIN_5
#define C2_GPIO_Port GPIOA
#define C3_Pin GPIO_PIN_6
#define C3_GPIO_Port GPIOA
#define C4_Pin GPIO_PIN_7
#define C4_GPIO_Port GPIOA
#define C5_Pin GPIO_PIN_0
#define C5_GPIO_Port GPIOB
#define C6_Pin GPIO_PIN_1
#define C6_GPIO_Port GPIOB
#define C7_Pin GPIO_PIN_10
#define C7_GPIO_Port GPIOB
#define R6_Pin GPIO_PIN_12
#define R6_GPIO_Port GPIOB
#define R7_Pin GPIO_PIN_13
#define R7_GPIO_Port GPIOB
#define R8_Pin GPIO_PIN_14
#define R8_GPIO_Port GPIOB
#define R9_Pin GPIO_PIN_15
#define R9_GPIO_Port GPIOB
#define R10_Pin GPIO_PIN_8
#define R10_GPIO_Port GPIOA
#define R11_Pin GPIO_PIN_9
#define R11_GPIO_Port GPIOA
#define C8_Pin GPIO_PIN_10
#define C8_GPIO_Port GPIOA
#define C11_Pin GPIO_PIN_15
#define C11_GPIO_Port GPIOA
#define C12_Pin GPIO_PIN_3
#define C12_GPIO_Port GPIOB
#define C13_Pin GPIO_PIN_4
#define C13_GPIO_Port GPIOB
#define C14_Pin GPIO_PIN_5
#define C14_GPIO_Port GPIOB
#define C15_Pin GPIO_PIN_6
#define C15_GPIO_Port GPIOB
#define C16_Pin GPIO_PIN_7
#define C16_GPIO_Port GPIOB
#define C17_Pin GPIO_PIN_8
#define C17_GPIO_Port GPIOB
#define C18_Pin GPIO_PIN_9
#define C18_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
