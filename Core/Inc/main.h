/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f7xx_hal.h"

#include "custom.h"
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
#define EN_SNS_BATT_Pin GPIO_PIN_2
#define EN_SNS_BATT_GPIO_Port GPIOC
#define CHG_STAT_Pin GPIO_PIN_3
#define CHG_STAT_GPIO_Port GPIOC
#define SNS_BATT_Pin GPIO_PIN_0
#define SNS_BATT_GPIO_Port GPIOA
#define SENSE_VIN_Pin GPIO_PIN_1
#define SENSE_VIN_GPIO_Port GPIOA
#define HALL_SENS_Pin GPIO_PIN_7
#define HALL_SENS_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_1
#define LED2_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_2
#define LED3_GPIO_Port GPIOB
#define CHARGE_EN_Pin GPIO_PIN_10
#define CHARGE_EN_GPIO_Port GPIOB
#define AIRBAG1_Pin GPIO_PIN_12
#define AIRBAG1_GPIO_Port GPIOB
#define AIRBAG2_Pin GPIO_PIN_13
#define AIRBAG2_GPIO_Port GPIOB
#define VALVE1_Pin GPIO_PIN_14
#define VALVE1_GPIO_Port GPIOB
#define VALVE2_Pin GPIO_PIN_15
#define VALVE2_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_8
#define BUZZER_GPIO_Port GPIOA
#define BT_RST_Pin GPIO_PIN_11
#define BT_RST_GPIO_Port GPIOA
#define BT_EN_Pin GPIO_PIN_12
#define BT_EN_GPIO_Port GPIOA
#define LSM6_INT1_Pin GPIO_PIN_8
#define LSM6_INT1_GPIO_Port GPIOB
#define LSM6_INT2_Pin GPIO_PIN_9
#define LSM6_INT2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
