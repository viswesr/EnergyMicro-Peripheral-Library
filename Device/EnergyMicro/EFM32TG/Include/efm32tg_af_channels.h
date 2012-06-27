/**************************************************************************//**
 * @file
 * @brief efm32tg_af_annels.h Register and Bit Field definitions
 * @author Energy Micro AS
 * @version 3.0.0
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2012 Energy Micro AS, http://www.energymicro.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Energy Micro AS has no
 * obligation to support this Software. Energy Micro AS is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Energy Micro AS will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 *****************************************************************************/
/**************************************************************************//**
 * @defgroup EFM32TG_AF_Channels
 * @{
 *****************************************************************************/

/** AF channels connect the different on-chip peripherals with the af-mux */
#define AFCHAN_MAX           63
#define AFCHANLOC_MAX        7
/** Analog AF channels */
#define AFACHAN_MAX          47

/** Peripheral Alternate Function (AF) channels */
#define AF_CMU_CLK0          0
#define AF_CMU_CLK1          1
#define AF_LESENSE_CH0       2
#define AF_LESENSE_CH1       3
#define AF_LESENSE_CH2       4
#define AF_LESENSE_CH3       5
#define AF_LESENSE_CH4       6
#define AF_LESENSE_CH5       7
#define AF_LESENSE_CH6       8
#define AF_LESENSE_CH7       9
#define AF_LESENSE_CH8       10
#define AF_LESENSE_CH9       11
#define AF_LESENSE_CH10      12
#define AF_LESENSE_CH11      13
#define AF_LESENSE_CH12      14
#define AF_LESENSE_CH13      15
#define AF_LESENSE_CH14      16
#define AF_LESENSE_CH15      17
#define AF_LESENSE_ALTEX0    18
#define AF_LESENSE_ALTEX1    19
#define AF_LESENSE_ALTEX2    20
#define AF_LESENSE_ALTEX3    21
#define AF_LESENSE_ALTEX4    22
#define AF_LESENSE_ALTEX5    23
#define AF_LESENSE_ALTEX6    24
#define AF_LESENSE_ALTEX7    25
#define AF_PRS_CH0           26
#define AF_PRS_CH1           27
#define AF_PRS_CH2           28
#define AF_PRS_CH3           29
#define AF_TIMER0_CC0        30
#define AF_TIMER0_CC1        31
#define AF_TIMER0_CC2        32
#define AF_TIMER0_CDTI0      33
#define AF_TIMER0_CDTI1      34
#define AF_TIMER0_CDTI2      35
#define AF_TIMER1_CC0        36
#define AF_TIMER1_CC1        37
#define AF_TIMER1_CC2        38
#define AF_TIMER1_CDTI0      39
#define AF_TIMER1_CDTI1      40
#define AF_TIMER1_CDTI2      41
#define AF_USART0_TX         42
#define AF_USART0_RX         43
#define AF_USART0_CLK        44
#define AF_USART0_CS         45
#define AF_USART1_TX         46
#define AF_USART1_RX         47
#define AF_USART1_CLK        48
#define AF_USART1_CS         49
#define AF_LEUART0_TX        50
#define AF_LEUART0_RX        51
#define AF_LETIMER0_OUT0     52
#define AF_LETIMER0_OUT1     53
#define AF_PCNT0_S0IN        54
#define AF_PCNT0_S1IN        55
#define AF_I2C0_SDA          56
#define AF_I2C0_SCL          57
#define AF_ACMP0_OUT         58
#define AF_ACMP1_OUT         59
#define AF_DBG_SWO           60
#define AF_DBG_SWDIO         61
#define AF_DBG_SWCLK         62

/** Analog Alternate Function (AF) channels */
#define AFA_MSC_TM0          0
#define AFA_MSC_TM1          1
#define AFA_MSC_TM2          2
#define AFA_ADC0_CH0         3
#define AFA_ADC0_CH1         4
#define AFA_ADC0_CH2         5
#define AFA_ADC0_CH3         6
#define AFA_ADC0_CH4         7
#define AFA_ADC0_CH5         8
#define AFA_ADC0_CH6         9
#define AFA_ADC0_CH7         10
#define AFA_ADC0_VCM         11
#define AFA_DAC0_OUT0        12
#define AFA_DAC0_OUT1        13
#define AFA_DAC0_P0          14
#define AFA_DAC0_N0          15
#define AFA_DAC0_OUT0ALT     16
#define AFA_DAC0_P1          17
#define AFA_DAC0_N1          18
#define AFA_DAC0_OUT1ALT     19
#define AFA_DAC0_P2          20
#define AFA_DAC0_N2          21
#define AFA_DAC0_OUT2        22
#define AFA_DAC0_OUT2ALT     23
#define AFA_ACMP0_CH0        24
#define AFA_ACMP0_CH1        25
#define AFA_ACMP0_CH2        26
#define AFA_ACMP0_CH3        27
#define AFA_ACMP0_CH4        28
#define AFA_ACMP0_CH5        29
#define AFA_ACMP0_CH6        30
#define AFA_ACMP0_CH7        31
#define AFA_ACMP1_CH0        32
#define AFA_ACMP1_CH1        33
#define AFA_ACMP1_CH2        34
#define AFA_ACMP1_CH3        35
#define AFA_ACMP1_CH4        36
#define AFA_ACMP1_CH5        37
#define AFA_ACMP1_CH6        38
#define AFA_ACMP1_CH7        39
#define AFA_LCD_BCAP_P       40
#define AFA_LCD_BCAP_N       41
#define AFA_LCD_BEXT         42
#define AFA_HFXTAL_P         43
#define AFA_HFXTAL_N         44
#define AFA_LFXTAL_P         45
#define AFA_LFXTAL_N         46

/** Digital Alternate Function (AF) */
#define AF_TIMER_CC0(i)       ((i) == 0 ? AF_TIMER0_CC0 : (i) == 1 ? AF_TIMER1_CC0 :  -1)
#define AF_I2C_SDA(i)         ((i) == 0 ? AF_I2C0_SDA :  -1)
#define AF_TIMER_CC1(i)       ((i) == 0 ? AF_TIMER0_CC1 : (i) == 1 ? AF_TIMER1_CC1 :  -1)
#define AF_USART_CS(i)        ((i) == 0 ? AF_USART0_CS : (i) == 1 ? AF_USART1_CS :  -1)
#define AF_I2C_SCL(i)         ((i) == 0 ? AF_I2C0_SCL :  -1)
#define AF_TIMER_CC2(i)       ((i) == 0 ? AF_TIMER0_CC2 : (i) == 1 ? AF_TIMER1_CC2 :  -1)
#define AF_TIMER_CDTI1(i)     ((i) == 0 ? AF_TIMER0_CDTI1 : (i) == 1 ? AF_TIMER1_CDTI1 :  -1)
#define AF_TIMER_CDTI0(i)     ((i) == 0 ? AF_TIMER0_CDTI0 : (i) == 1 ? AF_TIMER1_CDTI0 :  -1)
#define AF_USART_CLK(i)       ((i) == 0 ? AF_USART0_CLK : (i) == 1 ? AF_USART1_CLK :  -1)
#define AF_LETIMER_OUT1(i)    ((i) == 0 ? AF_LETIMER0_OUT1 :  -1)
#define AF_LEUART_RX(i)       ((i) == 0 ? AF_LEUART0_RX :  -1)
#define AF_PCNT_S1IN(i)       ((i) == 0 ? AF_PCNT0_S1IN :  -1)
#define AF_TIMER_CDTI2(i)     ((i) == 0 ? AF_TIMER0_CDTI2 : (i) == 1 ? AF_TIMER1_CDTI2 :  -1)
#define AF_LEUART_TX(i)       ((i) == 0 ? AF_LEUART0_TX :  -1)
#define AF_USART_TX(i)        ((i) == 0 ? AF_USART0_TX : (i) == 1 ? AF_USART1_TX :  -1)
#define AF_LETIMER_OUT0(i)    ((i) == 0 ? AF_LETIMER0_OUT0 :  -1)
#define AF_ACMP_OUT(i)        ((i) == 0 ? AF_ACMP0_OUT : (i) == 1 ? AF_ACMP1_OUT :  -1)
#define AF_USART_RX(i)        ((i) == 0 ? AF_USART0_RX : (i) == 1 ? AF_USART1_RX :  -1)
#define AF_PCNT_S0IN(i)       ((i) == 0 ? AF_PCNT0_S0IN :  -1)
#define AFA_DAC_OUT1ALT(i)    ((i) == 0 ? AFA_DAC0_OUT1ALT :  -1)
#define AFA_ADC_CH7(i)        ((i) == 0 ? AFA_ADC0_CH7 :  -1)
#define AFA_DAC_N2(i)         ((i) == 0 ? AFA_DAC0_N2 :  -1)
#define AFA_DAC_N0(i)         ((i) == 0 ? AFA_DAC0_N0 :  -1)
#define AFA_ADC_VCM(i)        ((i) == 0 ? AFA_ADC0_VCM :  -1)
#define AFA_DAC_OUT2ALT(i)    ((i) == 0 ? AFA_DAC0_OUT2ALT :  -1)
#define AFA_DAC_N1(i)         ((i) == 0 ? AFA_DAC0_N1 :  -1)
#define AFA_ACMP_CH1(i)       ((i) == 0 ? AFA_ACMP0_CH1 : (i) == 1 ? AFA_ACMP1_CH1 :  -1)
#define AFA_ADC_CH0(i)        ((i) == 0 ? AFA_ADC0_CH0 :  -1)
#define AFA_ACMP_CH0(i)       ((i) == 0 ? AFA_ACMP0_CH0 : (i) == 1 ? AFA_ACMP1_CH0 :  -1)
#define AFA_ADC_CH1(i)        ((i) == 0 ? AFA_ADC0_CH1 :  -1)
#define AFA_ACMP_CH3(i)       ((i) == 0 ? AFA_ACMP0_CH3 : (i) == 1 ? AFA_ACMP1_CH3 :  -1)
#define AFA_ADC_CH2(i)        ((i) == 0 ? AFA_ADC0_CH2 :  -1)
#define AFA_ACMP_CH2(i)       ((i) == 0 ? AFA_ACMP0_CH2 : (i) == 1 ? AFA_ACMP1_CH2 :  -1)
#define AFA_ADC_CH3(i)        ((i) == 0 ? AFA_ADC0_CH3 :  -1)
#define AFA_ADC_CH4(i)        ((i) == 0 ? AFA_ADC0_CH4 :  -1)
#define AFA_ADC_CH5(i)        ((i) == 0 ? AFA_ADC0_CH5 :  -1)
#define AFA_DAC_OUT0ALT(i)    ((i) == 0 ? AFA_DAC0_OUT0ALT :  -1)
#define AFA_ADC_CH6(i)        ((i) == 0 ? AFA_ADC0_CH6 :  -1)
#define AFA_DAC_OUT2(i)       ((i) == 0 ? AFA_DAC0_OUT2 :  -1)
#define AFA_ACMP_CH5(i)       ((i) == 0 ? AFA_ACMP0_CH5 : (i) == 1 ? AFA_ACMP1_CH5 :  -1)
#define AFA_ACMP_CH4(i)       ((i) == 0 ? AFA_ACMP0_CH4 : (i) == 1 ? AFA_ACMP1_CH4 :  -1)
#define AFA_ACMP_CH7(i)       ((i) == 0 ? AFA_ACMP0_CH7 : (i) == 1 ? AFA_ACMP1_CH7 :  -1)
#define AFA_ACMP_CH6(i)       ((i) == 0 ? AFA_ACMP0_CH6 : (i) == 1 ? AFA_ACMP1_CH6 :  -1)
#define AFA_DAC_OUT1(i)       ((i) == 0 ? AFA_DAC0_OUT1 :  -1)
#define AFA_DAC_OUT0(i)       ((i) == 0 ? AFA_DAC0_OUT0 :  -1)
#define AFA_DAC_P1(i)         ((i) == 0 ? AFA_DAC0_P1 :  -1)
#define AFA_DAC_P0(i)         ((i) == 0 ? AFA_DAC0_P0 :  -1)
#define AFA_DAC_P2(i)         ((i) == 0 ? AFA_DAC0_P2 :  -1)

/** @} End of group EFM32TG_AF_Channels  */


