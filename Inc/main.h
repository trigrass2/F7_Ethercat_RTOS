/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */
#include "stm32f7xx_hal.h"
#include "stm32f7xx_nucleo_144.h"
#include "stdio.h"
/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define ANGLE_SCK_Pin GPIO_PIN_2
#define ANGLE_SCK_GPIO_Port GPIOE
#define DA_CS_Pin GPIO_PIN_3
#define DA_CS_GPIO_Port GPIOE
#define ANGLE_0_CS_Pin GPIO_PIN_4
#define ANGLE_0_CS_GPIO_Port GPIOE
#define ANGLE_MISO_Pin GPIO_PIN_5
#define ANGLE_MISO_GPIO_Port GPIOE
#define ANGLE_MOSI_Pin GPIO_PIN_6
#define ANGLE_MOSI_GPIO_Port GPIOE
#define BUTTON_Pin GPIO_PIN_13
#define BUTTON_GPIO_Port GPIOC
#define BUTTON_EXTI_IRQn EXTI15_10_IRQn
#define DA_SCK_Pin GPIO_PIN_7
#define DA_SCK_GPIO_Port GPIOF
#define DA_MISO_Pin GPIO_PIN_8
#define DA_MISO_GPIO_Port GPIOF
#define DA_MOSI_Pin GPIO_PIN_9
#define DA_MOSI_GPIO_Port GPIOF
#define IMU_MISO_Pin GPIO_PIN_2
#define IMU_MISO_GPIO_Port GPIOC
#define IMU_MOSI_Pin GPIO_PIN_3
#define IMU_MOSI_GPIO_Port GPIOC
#define ANGLE_3_A_Pin GPIO_PIN_0
#define ANGLE_3_A_GPIO_Port GPIOA
#define ANGLE_3_B_Pin GPIO_PIN_1
#define ANGLE_3_B_GPIO_Port GPIOA
#define SPM_SCK_Pin GPIO_PIN_5
#define SPM_SCK_GPIO_Port GPIOA
#define SPM_MISO_Pin GPIO_PIN_6
#define SPM_MISO_GPIO_Port GPIOA
#define SPM_MOSI_Pin GPIO_PIN_7
#define SPM_MOSI_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_0
#define LED1_GPIO_Port GPIOB
#define ANGLE_3_Z_Pin GPIO_PIN_11
#define ANGLE_3_Z_GPIO_Port GPIOF
#define ANGLE_3_Z_EXTI_IRQn EXTI15_10_IRQn
#define ANGLE_2_Z_Pin GPIO_PIN_12
#define ANGLE_2_Z_GPIO_Port GPIOF
#define ANGLE_2_Z_EXTI_IRQn EXTI15_10_IRQn
#define ANGLE_0_Z_Pin GPIO_PIN_14
#define ANGLE_0_Z_GPIO_Port GPIOF
#define ANGLE_0_Z_EXTI_IRQn EXTI15_10_IRQn
#define ANGLE_1_Z_Pin GPIO_PIN_15
#define ANGLE_1_Z_GPIO_Port GPIOF
#define ANGLE_1_Z_EXTI_IRQn EXTI15_10_IRQn
#define ANGLE_0_A_Pin GPIO_PIN_9
#define ANGLE_0_A_GPIO_Port GPIOE
#define ANGLE_0_B_Pin GPIO_PIN_11
#define ANGLE_0_B_GPIO_Port GPIOE
#define LED3_Pin GPIO_PIN_14
#define LED3_GPIO_Port GPIOB
#define ANGLE_2_A_Pin GPIO_PIN_12
#define ANGLE_2_A_GPIO_Port GPIOD
#define ANGLE_2_B_Pin GPIO_PIN_13
#define ANGLE_2_B_GPIO_Port GPIOD
#define SPM_CS_Pin GPIO_PIN_14
#define SPM_CS_GPIO_Port GPIOD
#define AD_CONV_Pin GPIO_PIN_2
#define AD_CONV_GPIO_Port GPIOG
#define AD_RESET_Pin GPIO_PIN_3
#define AD_RESET_GPIO_Port GPIOG
#define PRESSURE_31_CS_Pin GPIO_PIN_4
#define PRESSURE_31_CS_GPIO_Port GPIOG
#define PRESSURE_30_CS_Pin GPIO_PIN_5
#define PRESSURE_30_CS_GPIO_Port GPIOG
#define PRESSURE_21_CS_Pin GPIO_PIN_6
#define PRESSURE_21_CS_GPIO_Port GPIOG
#define PRESSURE_20_CS_Pin GPIO_PIN_7
#define PRESSURE_20_CS_GPIO_Port GPIOG
#define PRESSURE_11_CS_Pin GPIO_PIN_8
#define PRESSURE_11_CS_GPIO_Port GPIOG
#define ANGLE_1_A_Pin GPIO_PIN_6
#define ANGLE_1_A_GPIO_Port GPIOC
#define ANGLE_1_B_Pin GPIO_PIN_7
#define ANGLE_1_B_GPIO_Port GPIOC
#define AD_CS_Pin GPIO_PIN_9
#define AD_CS_GPIO_Port GPIOC
#define PRESSURE_CS_Pin GPIO_PIN_10
#define PRESSURE_CS_GPIO_Port GPIOA
#define AD_SCK_Pin GPIO_PIN_10
#define AD_SCK_GPIO_Port GPIOC
#define AD_MISO_Pin GPIO_PIN_11
#define AD_MISO_GPIO_Port GPIOC
#define AD_MOSI_Pin GPIO_PIN_12
#define AD_MOSI_GPIO_Port GPIOC
#define IMU_3_CS_Pin GPIO_PIN_0
#define IMU_3_CS_GPIO_Port GPIOD
#define IMU_2_CS_Pin GPIO_PIN_1
#define IMU_2_CS_GPIO_Port GPIOD
#define AD_BUSY_Pin GPIO_PIN_2
#define AD_BUSY_GPIO_Port GPIOD
#define AD_BUSY_EXTI_IRQn EXTI2_IRQn
#define IMU_SCK_Pin GPIO_PIN_3
#define IMU_SCK_GPIO_Port GPIOD
#define IMU_0_CS_Pin GPIO_PIN_4
#define IMU_0_CS_GPIO_Port GPIOD
#define IMU_1_CS_Pin GPIO_PIN_5
#define IMU_1_CS_GPIO_Port GPIOD
#define PRESSURE_01_CS_Pin GPIO_PIN_10
#define PRESSURE_01_CS_GPIO_Port GPIOG
#define PRESSURE_00_CS_Pin GPIO_PIN_11
#define PRESSURE_00_CS_GPIO_Port GPIOG
#define PRESSURE_MISO_Pin GPIO_PIN_12
#define PRESSURE_MISO_GPIO_Port GPIOG
#define PRESSURE_SCK_Pin GPIO_PIN_13
#define PRESSURE_SCK_GPIO_Port GPIOG
#define PRESSURE_MOSI_Pin GPIO_PIN_14
#define PRESSURE_MOSI_GPIO_Port GPIOG
#define PRESSURE_10_CS_Pin GPIO_PIN_15
#define PRESSURE_10_CS_GPIO_Port GPIOG
#define LED2_Pin GPIO_PIN_7
#define LED2_GPIO_Port GPIOB
#define ANGLE_3_CS_Pin GPIO_PIN_9
#define ANGLE_3_CS_GPIO_Port GPIOB
#define ANGLE_2_CS_Pin GPIO_PIN_0
#define ANGLE_2_CS_GPIO_Port GPIOE
#define ANGLE_1_CS_Pin GPIO_PIN_1
#define ANGLE_1_CS_GPIO_Port GPIOE

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

#define JOINT_NUM_MAX 4

#define hspi_Ethercat	hspi1
#define hspi_IMU		hspi2
#define hspi_AD 		hspi3
#define hspi_ANGLE 		hspi4
#define hspi_DA			hspi5
#define hspi_PRESSURE	hspi6

#define htim_ANGLE_0 		htim1
#define htim_ANGLE_1		htim3
#define htim_ANGLE_2		htim4
#define htim_ANGLE_3		htim5

#define TTTimer 			htim2




#define COUNTOF(__BUFFER__)   (sizeof(__BUFFER__) / sizeof(*(__BUFFER__)))
void delay_us(uint32_t t);
void delay_ns(uint32_t t);

/*Clear timer CNT=0 for simplicity*/
int32_t TIC(void);
/*get lapsed time form last TIC()*/
int32_t TOC(void);

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
