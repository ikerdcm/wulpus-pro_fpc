/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f3xx_hal.h"

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
#define HV_MUX_CLR_Pin GPIO_PIN_13
#define HV_MUX_CLR_GPIO_Port GPIOC
#define LP_FILT_EN_Pin GPIO_PIN_14
#define LP_FILT_EN_GPIO_Port GPIOC
#define PREAMP_PWR_EN_Pin GPIO_PIN_15
#define PREAMP_PWR_EN_GPIO_Port GPIOC
#define VGA_PWR_EN_Pin GPIO_PIN_0
#define VGA_PWR_EN_GPIO_Port GPIOA
#define PREAMP_EN_Pin GPIO_PIN_2
#define PREAMP_EN_GPIO_Port GPIOA
#define HV_PWR_EN_Pin GPIO_PIN_3
#define HV_PWR_EN_GPIO_Port GPIOA
#define UUPS_TRIG_IN_Pin GPIO_PIN_4
#define UUPS_TRIG_IN_GPIO_Port GPIOA
#define PULS_SPI_SCK_Pin GPIO_PIN_5
#define PULS_SPI_SCK_GPIO_Port GPIOA
#define PULS_SPI_MOSI_Pin GPIO_PIN_7
#define PULS_SPI_MOSI_GPIO_Port GPIOA
#define VGA_GAIN_SPI_CS_Pin GPIO_PIN_2
#define VGA_GAIN_SPI_CS_GPIO_Port GPIOB
#define VGA_GAIN_RC_EN_Pin GPIO_PIN_10
#define VGA_GAIN_RC_EN_GPIO_Port GPIOB
#define VGA_GAIN_RC_SINK_Pin GPIO_PIN_11
#define VGA_GAIN_RC_SINK_GPIO_Port GPIOB
#define CTRL_SPI_SCK_Pin GPIO_PIN_13
#define CTRL_SPI_SCK_GPIO_Port GPIOB
#define CTRL_SPI_MISO_Pin GPIO_PIN_14
#define CTRL_SPI_MISO_GPIO_Port GPIOB
#define CTRL_SPI_MOSI_Pin GPIO_PIN_15
#define CTRL_SPI_MOSI_GPIO_Port GPIOB
#define PULS_HIZ_EN_Pin GPIO_PIN_8
#define PULS_HIZ_EN_GPIO_Port GPIOA
#define HV_MUX_SPI_CS_Pin GPIO_PIN_9
#define HV_MUX_SPI_CS_GPIO_Port GPIOA
#define TRIG_OUT_Pin GPIO_PIN_10
#define TRIG_OUT_GPIO_Port GPIOA
#define HV_MUX_PWR_EN_Pin GPIO_PIN_11
#define HV_MUX_PWR_EN_GPIO_Port GPIOA
#define HOST_SPARE_PIN_Pin GPIO_PIN_12
#define HOST_SPARE_PIN_GPIO_Port GPIOA
#define HOST_SPI_CS_Pin GPIO_PIN_15
#define HOST_SPI_CS_GPIO_Port GPIOA
#define HOST_SPI_SCK_Pin GPIO_PIN_3
#define HOST_SPI_SCK_GPIO_Port GPIOB
#define HOST_SPI_MISO_Pin GPIO_PIN_4
#define HOST_SPI_MISO_GPIO_Port GPIOB
#define HOST_SPI_MOSI_Pin GPIO_PIN_5
#define HOST_SPI_MOSI_GPIO_Port GPIOB
#define HOST_DATA_READY_Pin GPIO_PIN_6
#define HOST_DATA_READY_GPIO_Port GPIOB
#define HOST_LINK_READY_Pin GPIO_PIN_7
#define HOST_LINK_READY_GPIO_Port GPIOB
#define HV_POS_EN_Pin GPIO_PIN_8
#define HV_POS_EN_GPIO_Port GPIOB
#define HV_NEG_EN_Pin GPIO_PIN_9
#define HV_NEG_EN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
