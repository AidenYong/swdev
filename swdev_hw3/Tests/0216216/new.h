#include <stdint.h>
#define     __IO    volatile             /*!< Defines 'read / write' permissions */
typedef struct
{
  __IO uint32_t ACR;              /*!< FLASH access control register,            Address offset: 0x00 */
  __IO uint32_t PDKEYR;           /*!< FLASH power down key register,            Address offset: 0x04 */
  __IO uint32_t KEYR;             /*!< FLASH key register,                       Address offset: 0x08 */
  __IO uint32_t OPTKEYR;          /*!< FLASH option key register,                Address offset: 0x0C */
  __IO uint32_t SR;               /*!< FLASH status register,                    Address offset: 0x10 */
  __IO uint32_t CR;               /*!< FLASH control register,                   Address offset: 0x14 */
  __IO uint32_t ECCR;             /*!< FLASH ECC register,                       Address offset: 0x18 */
  __IO uint32_t RESERVED1;        /*!< Reserved1,                                Address offset: 0x1C */
  __IO uint32_t OPTR;             /*!< FLASH option register,                    Address offset: 0x20 */
  __IO uint32_t PCROP1SR;         /*!< FLASH bank1 PCROP start address register, Address offset: 0x24 */
  __IO uint32_t PCROP1ER;         /*!< FLASH bank1 PCROP end address register,   Address offset: 0x28 */
  __IO uint32_t WRP1AR;           /*!< FLASH bank1 WRP area A address register,  Address offset: 0x2C */
  __IO uint32_t WRP1BR;           /*!< FLASH bank1 WRP area B address register,  Address offset: 0x30 */
       uint32_t RESERVED2[4];     /*!< Reserved2,                                Address offset: 0x34 */
  __IO uint32_t PCROP2SR;         /*!< FLASH bank2 PCROP start address register, Address offset: 0x44 */
  __IO uint32_t PCROP2ER;         /*!< FLASH bank2 PCROP end address register,   Address offset: 0x48 */
  __IO uint32_t WRP2AR;           /*!< FLASH bank2 WRP area A address register,  Address offset: 0x4C */
  __IO uint32_t WRP2BR;           /*!< FLASH bank2 WRP area B address register,  Address offset: 0x50 */
} FLASH_TypeDef;

typedef struct
{
  __IO uint32_t MODER;       /*!< GPIO port mode register,               Address offset: 0x00      */
  __IO uint32_t OTYPER;      /*!< GPIO port output type register,        Address offset: 0x04      */
  __IO uint32_t OSPEEDR;     /*!< GPIO port output speed register,       Address offset: 0x08      */
  __IO uint32_t PUPDR;       /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
  __IO uint32_t IDR;         /*!< GPIO port input data register,         Address offset: 0x10      */
  __IO uint32_t ODR;         /*!< GPIO port output data register,        Address offset: 0x14      */
  __IO uint32_t BSRR;        /*!< GPIO port bit set/reset  register,     Address offset: 0x18      */
  __IO uint32_t LCKR;        /*!< GPIO port configuration lock register, Address offset: 0x1C      */
  __IO uint32_t AFR[2];      /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
  __IO uint32_t BRR;         /*!< GPIO Bit Reset register,               Address offset: 0x28      */
  __IO uint32_t ASCR;        /*!< GPIO analog switch control register,   Address offset: 0x2C     */
} GPIO_TypeDef;
/*--------------------------------------------------------------------------.
;   GPIO pins define                                                        ;
'--------------------------------------------------------------------------*/
#define GPIO_Pin_0                 ((u16)0x0001)  /* Pin 0 selected */
#define GPIO_Pin_1                 ((u16)0x0002)  /* Pin 1 selected */
#define GPIO_Pin_2                 ((u16)0x0004)  /* Pin 2 selected */
#define GPIO_Pin_3                 ((u16)0x0008)  /* Pin 3 selected */
#define GPIO_Pin_4                 ((u16)0x0010)  /* Pin 4 selected */
#define GPIO_Pin_5                 ((u16)0x0020)  /* Pin 5 selected */
#define GPIO_Pin_6                 ((u16)0x0040)  /* Pin 6 selected */
#define GPIO_Pin_7                 ((u16)0x0080)  /* Pin 7 selected */
#define GPIO_Pin_8                 ((u16)0x0100)  /* Pin 8 selected */
#define GPIO_Pin_9                 ((u16)0x0200)  /* Pin 9 selected */
#define GPIO_Pin_10                ((u16)0x0400)  /* Pin 10 selected */
#define GPIO_Pin_11                ((u16)0x0800)  /* Pin 11 selected */
#define GPIO_Pin_12                ((u16)0x1000)  /* Pin 12 selected */
#define GPIO_Pin_13                ((u16)0x2000)  /* Pin 13 selected */
#define GPIO_Pin_14                ((u16)0x4000)  /* Pin 14 selected */
#define GPIO_Pin_15                ((u16)0x8000)  /* Pin 15 selected */
#define GPIO_Pin_All               ((u16)0xFFFF)  /* All pins selected */

typedef struct
{
  __IO uint32_t CR;          /*!< RCC clock control register,                                              Address offset: 0x00 */
  __IO uint32_t ICSCR;       /*!< RCC internal clock sources calibration register,                         Address offset: 0x04 */
  __IO uint32_t CFGR;        /*!< RCC clock configuration register,                                        Address offset: 0x08 */
  __IO uint32_t PLLCFGR;     /*!< RCC system PLL configuration register,                                   Address offset: 0x0C */
  __IO uint32_t PLLSAI1CFGR; /*!< RCC PLL SAI1 configuration register,                                     Address offset: 0x10 */
  __IO uint32_t PLLSAI2CFGR; /*!< RCC PLL SAI2 configuration register,                                     Address offset: 0x14 */
  __IO uint32_t CIER;        /*!< RCC clock interrupt enable register,                                     Address offset: 0x18 */
  __IO uint32_t CIFR;        /*!< RCC clock interrupt flag register,                                       Address offset: 0x1C */
  __IO uint32_t CICR;        /*!< RCC clock interrupt clear register,                                      Address offset: 0x20 */
  uint32_t      RESERVED0;   /*!< Reserved,                                                                Address offset: 0x24 */
  __IO uint32_t AHB1RSTR;    /*!< RCC AHB1 peripheral reset register,                                      Address offset: 0x28 */
  __IO uint32_t AHB2RSTR;    /*!< RCC AHB2 peripheral reset register,                                      Address offset: 0x2C */
  __IO uint32_t AHB3RSTR;    /*!< RCC AHB3 peripheral reset register,                                      Address offset: 0x30 */
  uint32_t      RESERVED1;   /*!< Reserved,                                                                Address offset: 0x34 */
  __IO uint32_t APB1RSTR1;   /*!< RCC APB1 peripheral reset register 1,                                    Address offset: 0x38 */
  __IO uint32_t APB1RSTR2;   /*!< RCC APB1 peripheral reset register 2,                                    Address offset: 0x3C */
  __IO uint32_t APB2RSTR;    /*!< RCC APB2 peripheral reset register,                                      Address offset: 0x40 */
  uint32_t      RESERVED2;   /*!< Reserved,                                                                Address offset: 0x44 */
  __IO uint32_t AHB1ENR;     /*!< RCC AHB1 peripheral clocks enable register,                              Address offset: 0x48 */
  __IO uint32_t AHB2ENR;     /*!< RCC AHB2 peripheral clocks enable register,                              Address offset: 0x4C */
  __IO uint32_t AHB3ENR;     /*!< RCC AHB3 peripheral clocks enable register,                              Address offset: 0x50 */
  uint32_t      RESERVED3;   /*!< Reserved,                                                                Address offset: 0x54 */
  __IO uint32_t APB1ENR1;    /*!< RCC APB1 peripheral clocks enable register 1,                            Address offset: 0x58 */
  __IO uint32_t APB1ENR2;    /*!< RCC APB1 peripheral clocks enable register 2,                            Address offset: 0x5C */
  __IO uint32_t APB2ENR;     /*!< RCC APB2 peripheral clocks enable register,                              Address offset: 0x60 */
  uint32_t      RESERVED4;   /*!< Reserved,                                                                Address offset: 0x64 */
  __IO uint32_t AHB1SMENR;   /*!< RCC AHB1 peripheral clocks enable in sleep and stop modes register,      Address offset: 0x68 */
  __IO uint32_t AHB2SMENR;   /*!< RCC AHB2 peripheral clocks enable in sleep and stop modes register,      Address offset: 0x6C */
  __IO uint32_t AHB3SMENR;   /*!< RCC AHB3 peripheral clocks enable in sleep and stop modes register,      Address offset: 0x70 */
  uint32_t      RESERVED5;   /*!< Reserved,                                                                Address offset: 0x74 */
  __IO uint32_t APB1SMENR1;  /*!< RCC APB1 peripheral clocks enable in sleep mode and stop modes register 1, Address offset: 0x78 */
  __IO uint32_t APB1SMENR2;  /*!< RCC APB1 peripheral clocks enable in sleep mode and stop modes register 2, Address offset: 0x7C */
  __IO uint32_t APB2SMENR;   /*!< RCC APB2 peripheral clocks enable in sleep mode and stop modes register, Address offset: 0x80 */
  uint32_t      RESERVED6;   /*!< Reserved,                                                                Address offset: 0x84 */
  __IO uint32_t CCIPR;       /*!< RCC peripherals independent clock configuration register,                Address offset: 0x88 */
  __IO uint32_t RESERVED7;   /*!< Reserved,                                                                Address offset: 0x8C */
  __IO uint32_t BDCR;        /*!< RCC backup domain control register,                                      Address offset: 0x90 */
  __IO uint32_t CSR;         /*!< RCC clock control & status register,                                     Address offset: 0x94 */
} RCC_TypeDef;
typedef struct
{
  __IO uint32_t CR1;         /*!< TIM control register 1,                   Address offset: 0x00 */
  __IO uint32_t CR2;         /*!< TIM control register 2,                   Address offset: 0x04 */
  __IO uint32_t SMCR;        /*!< TIM slave mode control register,          Address offset: 0x08 */
  __IO uint32_t DIER;        /*!< TIM DMA/interrupt enable register,        Address offset: 0x0C */
  __IO uint32_t SR;          /*!< TIM status register,                      Address offset: 0x10 */
  __IO uint32_t EGR;         /*!< TIM event generation register,            Address offset: 0x14 */
  __IO uint32_t CCMR1;       /*!< TIM capture/compare mode register 1,      Address offset: 0x18 */
  __IO uint32_t CCMR2;       /*!< TIM capture/compare mode register 2,      Address offset: 0x1C */
  __IO uint32_t CCER;        /*!< TIM capture/compare enable register,      Address offset: 0x20 */
  __IO uint32_t CNT;         /*!< TIM counter register,                     Address offset: 0x24 */
  __IO uint32_t PSC;         /*!< TIM prescaler,                            Address offset: 0x28 */
  __IO uint32_t ARR;         /*!< TIM auto-reload register,                 Address offset: 0x2C */
  __IO uint32_t RCR;         /*!< TIM repetition counter register,          Address offset: 0x30 */
  __IO uint32_t CCR1;        /*!< TIM capture/compare register 1,           Address offset: 0x34 */
  __IO uint32_t CCR2;        /*!< TIM capture/compare register 2,           Address offset: 0x38 */
  __IO uint32_t CCR3;        /*!< TIM capture/compare register 3,           Address offset: 0x3C */
  __IO uint32_t CCR4;        /*!< TIM capture/compare register 4,           Address offset: 0x40 */
  __IO uint32_t BDTR;        /*!< TIM break and dead-time register,         Address offset: 0x44 */
  __IO uint32_t DCR;         /*!< TIM DMA control register,                 Address offset: 0x48 */
  __IO uint32_t DMAR;        /*!< TIM DMA address for full transfer,        Address offset: 0x4C */
  __IO uint32_t OR1;         /*!< TIM option register 1,                    Address offset: 0x50 */
  __IO uint32_t CCMR3;       /*!< TIM capture/compare mode register 3,      Address offset: 0x54 */
  __IO uint32_t CCR5;        /*!< TIM capture/compare register5,            Address offset: 0x58 */
  __IO uint32_t CCR6;        /*!< TIM capture/compare register6,            Address offset: 0x5C */
  __IO uint32_t OR2;         /*!< TIM option register 2,                    Address offset: 0x60 */
  __IO uint32_t OR3;         /*!< TIM option register 3,                    Address offset: 0x64 */
} TIM_TypeDef;
#define FLASH_BASE            ((uint32_t)0x08000000U) /*!< FLASH(up to 1 MB) base address */
#define SRAM1_BASE            ((uint32_t)0x20000000U) /*!< SRAM1(up to 96 KB) base address */
#define PERIPH_BASE           ((uint32_t)0x40000000U) /*!< Peripheral base address */
#define FMC_BASE              ((uint32_t)0x60000000U) /*!< FMC base address */
#define SRAM2_BASE            ((uint32_t)0x10000000U) /*!< SRAM2(32 KB) base address */
#define QSPI_BASE             ((uint32_t)0x90000000U) /*!< QSPI memories accessible over AHB base address */
#define FMC_R_BASE            ((uint32_t)0xA0000000U) /*!< FMC  control registers base address */
#define QSPI_R_BASE           ((uint32_t)0xA0001000U) /*!< QUADSPI control registers base address */
#define SRAM1_BB_BASE         ((uint32_t)0x22000000U) /*!< SRAM1(96 KB) base address in the bit-band region */
#define PERIPH_BB_BASE        ((uint32_t)0x42000000U) /*!< Peripheral base address in the bit-band region */
#define SRAM2_BB_BASE         ((uint32_t)0x12000000U) /*!< SRAM2(32 KB) base address in the bit-band region */
#define 	RCC_PLLSource_HSI_Div2   ((uint32_t)0x00000000)
#define 	RCC_PLLSource_HSE_Div1   ((uint32_t)0x00010000)
#define 	RCC_PLLSource_HSE_Div2   ((uint32_t)0x00030000)
#define 	IS_RCC_PLL_SOURCE(SOURCE)
#define 	RCC_PLLMul_2   ((uint32_t)0x00000000)
#define 	RCC_PLLMul_3   ((uint32_t)0x00040000)
#define 	RCC_PLLMul_4   ((uint32_t)0x00080000)
#define 	RCC_PLLMul_5   ((uint32_t)0x000C0000)
#define 	RCC_PLLMul_6   ((uint32_t)0x00100000)
#define 	RCC_PLLMul_7   ((uint32_t)0x00140000)
#define 	RCC_PLLMul_8   ((uint32_t)0x00180000)
#define 	RCC_PLLMul_9   ((uint32_t)0x001C0000)
#define 	RCC_PLLMul_10   ((uint32_t)0x00200000)
#define 	RCC_PLLMul_11   ((uint32_t)0x00240000)
#define 	RCC_PLLMul_12   ((uint32_t)0x00280000)
#define 	RCC_PLLMul_13   ((uint32_t)0x002C0000)
#define 	RCC_PLLMul_14   ((uint32_t)0x00300000)
#define 	RCC_PLLMul_15   ((uint32_t)0x00340000)
#define 	RCC_PLLMul_16   ((uint32_t)0x00380000)
#define 	IS_RCC_PLL_MUL(MUL)
#define 	FLASH_Latency_0   ((uint32_t)0x00000000)
#define 	FLASH_Latency_1   ((uint32_t)0x00000001)
#define 	FLASH_Latency_2   ((uint32_t)0x00000002)
#define 	IS_FLASH_LATENCY(LATENCY)
enum  	FlagStatus { RESET = 0, SET = !RESET };
enum  	FunctionalState { DISABLE = 0, ENABLE = !DISABLE };
enum  	ErrorStatus { ERROR = 0, SUCCESS = !ERROR };
#define 	RCC_OFFSET   (RCC_BASE - PERIPH_BASE)
#define 	CR_OFFSET   (RCC_OFFSET + 0x00)
#define 	HSION_BitNumber   0x00
#define 	CR_HSION_BB   (PERIPH_BB_BASE + (CR_OFFSET * 32) + (HSION_BitNumber * 4))
#define 	PLLON_BitNumber   0x18
#define 	CR_PLLON_BB   (PERIPH_BB_BASE + (CR_OFFSET * 32) + (PLLON_BitNumber * 4))
#define 	CSSON_BitNumber   0x13
#define 	CR_CSSON_BB   (PERIPH_BB_BASE + (CR_OFFSET * 32) + (CSSON_BitNumber * 4))
#define 	CFGR_OFFSET   (RCC_OFFSET + 0x04)
#define 	USBPRE_BitNumber   0x16
#define 	CFGR_USBPRE_BB   (PERIPH_BB_BASE + (CFGR_OFFSET * 32) + (USBPRE_BitNumber * 4))
#define 	BDCR_OFFSET   (RCC_OFFSET + 0x20)
#define 	RTCEN_BitNumber   0x0F
#define 	BDCR_RTCEN_BB   (PERIPH_BB_BASE + (BDCR_OFFSET * 32) + (RTCEN_BitNumber * 4))
#define 	BDRST_BitNumber   0x10
#define 	BDCR_BDRST_BB   (PERIPH_BB_BASE + (BDCR_OFFSET * 32) + (BDRST_BitNumber * 4))
#define 	CSR_OFFSET   (RCC_OFFSET + 0x24)
#define 	LSION_BitNumber   0x00
#define 	CSR_LSION_BB   (PERIPH_BB_BASE + (CSR_OFFSET * 32) + (LSION_BitNumber * 4))
#define 	CR_HSEBYP_Reset   ((uint32_t)0xFFFBFFFF)
#define 	CR_HSEBYP_Set   ((uint32_t)0x00040000)
#define 	CR_HSEON_Reset   ((uint32_t)0xFFFEFFFF)
#define 	CR_HSEON_Set   ((uint32_t)0x00010000)
#define 	CR_HSITRIM_Mask   ((uint32_t)0xFFFFFF07)
#define 	CFGR_PLL_Mask   ((uint32_t)0xFFC0FFFF)
#define 	CFGR_PLLMull_Mask   ((uint32_t)0x003C0000)
#define 	CFGR_PLLSRC_Mask   ((uint32_t)0x00010000)
#define 	CFGR_PLLXTPRE_Mask   ((uint32_t)0x00020000)
#define 	CFGR_SWS_Mask   ((uint32_t)0x0000000C)
#define 	CFGR_SW_Mask   ((uint32_t)0xFFFFFFFC)
#define 	CFGR_HPRE_Reset_Mask   ((uint32_t)0xFFFFFF0F)
#define 	CFGR_HPRE_Set_Mask   ((uint32_t)0x000000F0)
#define 	CFGR_PPRE1_Reset_Mask   ((uint32_t)0xFFFFF8FF)
#define 	CFGR_PPRE1_Set_Mask   ((uint32_t)0x00000700)
#define 	CFGR_PPRE2_Reset_Mask   ((uint32_t)0xFFFFC7FF)
#define 	CFGR_PPRE2_Set_Mask   ((uint32_t)0x00003800)
#define 	CFGR_ADCPRE_Reset_Mask   ((uint32_t)0xFFFF3FFF)
#define 	CFGR_ADCPRE_Set_Mask   ((uint32_t)0x0000C000)
#define 	CSR_RMVF_Set   ((uint32_t)0x01000000)
#define 	FLAG_Mask   ((uint8_t)0x1F)
#define 	CIR_BYTE2_ADDRESS   ((uint32_t)0x40021009)
#define 	CIR_BYTE3_ADDRESS   ((uint32_t)0x4002100A)
#define 	CFGR_BYTE4_ADDRESS   ((uint32_t)0x40021007)
#define 	BDCR_ADDRESS   (PERIPH_BASE + BDCR_OFFSET)
#define 	RCC_SYSCLKSource_HSI   ((uint32_t)0x00000000)
#define 	RCC_SYSCLKSource_HSE   ((uint32_t)0x00000001)
#define 	RCC_SYSCLKSource_PLLCLK   ((uint32_t)0x00000002)
#define 	IS_RCC_SYSCLK_SOURCE(SOURCE)
#define 	RCC_SYSCLK_Div1   ((uint32_t)0x00000000)
#define 	RCC_SYSCLK_Div2   ((uint32_t)0x00000080)
#define 	RCC_SYSCLK_Div4   ((uint32_t)0x00000090)
#define 	RCC_SYSCLK_Div8   ((uint32_t)0x000000A0)
#define 	RCC_SYSCLK_Div16   ((uint32_t)0x000000B0)
#define 	RCC_SYSCLK_Div64   ((uint32_t)0x000000C0)
#define 	RCC_SYSCLK_Div128   ((uint32_t)0x000000D0)
#define 	RCC_SYSCLK_Div256   ((uint32_t)0x000000E0)
#define 	RCC_SYSCLK_Div512   ((uint32_t)0x000000F0)
#define 	IS_RCC_HCLK(HCLK)
#define 	RCC_HCLK_Div1   ((uint32_t)0x00000000)
#define 	RCC_HCLK_Div2   ((uint32_t)0x00000400)
#define 	RCC_HCLK_Div4   ((uint32_t)0x00000500)
#define 	RCC_HCLK_Div8   ((uint32_t)0x00000600)
#define 	RCC_HCLK_Div16   ((uint32_t)0x00000700)
#define 	IS_RCC_PCLK(PCLK)

#define 	RCC_PCLK2_Div2   ((uint32_t)0x00000000)
#define 	RCC_PCLK2_Div4   ((uint32_t)0x00004000)
#define 	RCC_PCLK2_Div6   ((uint32_t)0x00008000)
#define 	RCC_PCLK2_Div8   ((uint32_t)0x0000C000)
#define 	IS_RCC_ADCCLK(ADCCLK)

#define 	RCC_AHBPeriph_DMA1   ((uint32_t)0x00000001)
#define 	RCC_AHBPeriph_DMA2   ((uint32_t)0x00000002)
#define 	RCC_AHBPeriph_SRAM   ((uint32_t)0x00000004)
#define 	RCC_AHBPeriph_FLITF   ((uint32_t)0x00000010)
#define 	RCC_AHBPeriph_CRC   ((uint32_t)0x00000040)
#define 	RCC_AHBPeriph_FSMC   ((uint32_t)0x00000100)
#define 	RCC_AHBPeriph_SDIO   ((uint32_t)0x00000400)
#define 	IS_RCC_AHB_PERIPH(PERIPH)   ((((PERIPH) & 0xFFFFFAA8) == 0x00) && ((PERIPH) != 0x00))
#define     RCC_APB2Periph_ALL               ((uint32_t)0x00005E7D)
#define    RCC_APB1Periph_ALL               ((uint32_t)0x1AE64807)

#define 	RCC_FLAG_HSIRDY   ((uint8_t)0x21)
#define 	RCC_FLAG_HSERDY   ((uint8_t)0x31)
#define 	RCC_FLAG_PLLRDY   ((uint8_t)0x39)
#define 	RCC_FLAG_LSERDY   ((uint8_t)0x41)
#define 	RCC_FLAG_LSIRDY   ((uint8_t)0x61)
#define 	RCC_FLAG_PINRST   ((uint8_t)0x7A)
#define 	RCC_FLAG_PORRST   ((uint8_t)0x7B)
#define 	RCC_FLAG_SFTRST   ((uint8_t)0x7C)
#define 	RCC_FLAG_IWDGRST   ((uint8_t)0x7D)
#define 	RCC_FLAG_WWDGRST   ((uint8_t)0x7E)
#define 	RCC_FLAG_LPWRRST   ((uint8_t)0x7F)
#define 	IS_RCC_FLAG(FLAG)
#define 	IS_RCC_CALIBRATION_VALUE(VALUE)   ((VALUE) <= 0x1F)
/* Legacy defines */
#define SRAM_BASE             SRAM1_BASE
#define SRAM_BB_BASE          SRAM1_BB_BASE

#define SRAM1_SIZE_MAX        ((uint32_t)0x00018000U) /*!< maximum SRAM1 size (up to 96 KBytes) */
#define SRAM2_SIZE            ((uint32_t)0x00008000U) /*!< SRAM2 size (32 KBytes) */

/*!< Peripheral memory map */
#define APB1PERIPH_BASE        PERIPH_BASE
#define APB2PERIPH_BASE       (PERIPH_BASE + 0x00010000U)
#define AHB1PERIPH_BASE       (PERIPH_BASE + 0x00020000U)
#define AHB2PERIPH_BASE       (PERIPH_BASE + 0x08000000U)

#define FMC_BANK1             FMC_BASE
#define FMC_BANK1_1           FMC_BANK1
#define FMC_BANK1_2           (FMC_BANK1 + 0x04000000U)
#define FMC_BANK1_3           (FMC_BANK1 + 0x08000000U)
#define FMC_BANK1_4           (FMC_BANK1 + 0x0C000000U)
#define FMC_BANK3             (FMC_BASE  + 0x20000000U)

/*!< APB1 peripherals */
#define TIM2_BASE             (APB1PERIPH_BASE + 0x0000U)
#define TIM3_BASE             (APB1PERIPH_BASE + 0x0400U)
#define TIM4_BASE             (APB1PERIPH_BASE + 0x0800U)
#define TIM5_BASE             (APB1PERIPH_BASE + 0x0C00U)
#define TIM6_BASE             (APB1PERIPH_BASE + 0x1000U)
#define TIM7_BASE             (APB1PERIPH_BASE + 0x1400U)
#define LCD_BASE              (APB1PERIPH_BASE + 0x2400U)
#define RTC_BASE              (APB1PERIPH_BASE + 0x2800U)
#define WWDG_BASE             (APB1PERIPH_BASE + 0x2C00U)
#define IWDG_BASE             (APB1PERIPH_BASE + 0x3000U)
#define SPI2_BASE             (APB1PERIPH_BASE + 0x3800U)
#define SPI3_BASE             (APB1PERIPH_BASE + 0x3C00U)
#define USART2_BASE           (APB1PERIPH_BASE + 0x4400U)
#define USART3_BASE           (APB1PERIPH_BASE + 0x4800U)
#define UART4_BASE            (APB1PERIPH_BASE + 0x4C00U)
#define UART5_BASE            (APB1PERIPH_BASE + 0x5000U)
#define I2C1_BASE             (APB1PERIPH_BASE + 0x5400U)
#define I2C2_BASE             (APB1PERIPH_BASE + 0x5800U)
#define I2C3_BASE             (APB1PERIPH_BASE + 0x5C00U)
#define CAN1_BASE             (APB1PERIPH_BASE + 0x6400U)
#define PWR_BASE              (APB1PERIPH_BASE + 0x7000U)
#define DAC_BASE              (APB1PERIPH_BASE + 0x7400U)
#define DAC1_BASE             (APB1PERIPH_BASE + 0x7400U)
#define OPAMP_BASE            (APB1PERIPH_BASE + 0x7800U)
#define OPAMP1_BASE           (APB1PERIPH_BASE + 0x7800U)
#define OPAMP2_BASE           (APB1PERIPH_BASE + 0x7810U)
#define LPTIM1_BASE           (APB1PERIPH_BASE + 0x7C00U)
#define LPUART1_BASE          (APB1PERIPH_BASE + 0x8000U)
#define SWPMI1_BASE           (APB1PERIPH_BASE + 0x8800U)
#define LPTIM2_BASE           (APB1PERIPH_BASE + 0x9400U)


/*!< APB2 peripherals */
#define SYSCFG_BASE           (APB2PERIPH_BASE + 0x0000U)
#define VREFBUF_BASE          (APB2PERIPH_BASE + 0x0030U)
#define COMP1_BASE            (APB2PERIPH_BASE + 0x0200U)
#define COMP2_BASE            (APB2PERIPH_BASE + 0x0204U)
#define EXTI_BASE             (APB2PERIPH_BASE + 0x0400U)
#define FIREWALL_BASE         (APB2PERIPH_BASE + 0x1C00U)
#define SDMMC1_BASE           (APB2PERIPH_BASE + 0x2800U)
#define TIM1_BASE             (APB2PERIPH_BASE + 0x2C00U)
#define SPI1_BASE             (APB2PERIPH_BASE + 0x3000U)
#define TIM8_BASE             (APB2PERIPH_BASE + 0x3400U)
#define USART1_BASE           (APB2PERIPH_BASE + 0x3800U)
#define TIM15_BASE            (APB2PERIPH_BASE + 0x4000U)
#define TIM16_BASE            (APB2PERIPH_BASE + 0x4400U)
#define TIM17_BASE            (APB2PERIPH_BASE + 0x4800U)
#define SAI1_BASE             (APB2PERIPH_BASE + 0x5400U)
#define SAI1_Block_A_BASE     (SAI1_BASE + 0x004)
#define SAI1_Block_B_BASE     (SAI1_BASE + 0x024)
#define SAI2_BASE             (APB2PERIPH_BASE + 0x5800U)
#define SAI2_Block_A_BASE     (SAI2_BASE + 0x004)
#define SAI2_Block_B_BASE     (SAI2_BASE + 0x024)
#define DFSDM1_BASE           (APB2PERIPH_BASE + 0x6000U)
#define DFSDM1_Channel0_BASE  (DFSDM1_BASE + 0x00)
#define DFSDM1_Channel1_BASE  (DFSDM1_BASE + 0x20)
#define DFSDM1_Channel2_BASE  (DFSDM1_BASE + 0x40)
#define DFSDM1_Channel3_BASE  (DFSDM1_BASE + 0x60)
#define DFSDM1_Channel4_BASE  (DFSDM1_BASE + 0x80)
#define DFSDM1_Channel5_BASE  (DFSDM1_BASE + 0xA0)
#define DFSDM1_Channel6_BASE  (DFSDM1_BASE + 0xC0)
#define DFSDM1_Channel7_BASE  (DFSDM1_BASE + 0xE0)
#define DFSDM1_Filter0_BASE   (DFSDM1_BASE + 0x100)
#define DFSDM1_Filter1_BASE   (DFSDM1_BASE + 0x180)
#define DFSDM1_Filter2_BASE   (DFSDM1_BASE + 0x200)
#define DFSDM1_Filter3_BASE   (DFSDM1_BASE + 0x280)

/*!< AHB1 peripherals */
#define DMA1_BASE             (AHB1PERIPH_BASE)
#define DMA2_BASE             (AHB1PERIPH_BASE + 0x0400U)
#define RCC_BASE              (AHB1PERIPH_BASE + 0x1000U)
#define FLASH_R_BASE          (AHB1PERIPH_BASE + 0x2000U)
#define CRC_BASE              (AHB1PERIPH_BASE + 0x3000U)
#define TSC_BASE              (AHB1PERIPH_BASE + 0x4000U)


#define DMA1_Channel1_BASE    (DMA1_BASE + 0x0008U)
#define DMA1_Channel2_BASE    (DMA1_BASE + 0x001CU)
#define DMA1_Channel3_BASE    (DMA1_BASE + 0x0030U)
#define DMA1_Channel4_BASE    (DMA1_BASE + 0x0044U)
#define DMA1_Channel5_BASE    (DMA1_BASE + 0x0058U)
#define DMA1_Channel6_BASE    (DMA1_BASE + 0x006CU)
#define DMA1_Channel7_BASE    (DMA1_BASE + 0x0080U)
#define DMA1_CSELR_BASE       (DMA1_BASE + 0x00A8U)


#define DMA2_Channel1_BASE    (DMA2_BASE + 0x0008U)
#define DMA2_Channel2_BASE    (DMA2_BASE + 0x001CU)
#define DMA2_Channel3_BASE    (DMA2_BASE + 0x0030U)
#define DMA2_Channel4_BASE    (DMA2_BASE + 0x0044U)
#define DMA2_Channel5_BASE    (DMA2_BASE + 0x0058U)
#define DMA2_Channel6_BASE    (DMA2_BASE + 0x006CU)
#define DMA2_Channel7_BASE    (DMA2_BASE + 0x0080U)
#define DMA2_CSELR_BASE       (DMA2_BASE + 0x00A8U)


/*!< AHB2 peripherals */
#define GPIOA_BASE            (AHB2PERIPH_BASE + 0x0000U)
#define GPIOB_BASE            (AHB2PERIPH_BASE + 0x0400U)
#define GPIOC_BASE            (AHB2PERIPH_BASE + 0x0800U)
#define GPIOD_BASE            (AHB2PERIPH_BASE + 0x0C00U)
#define GPIOE_BASE            (AHB2PERIPH_BASE + 0x1000U)
#define GPIOF_BASE            (AHB2PERIPH_BASE + 0x1400U)
#define GPIOG_BASE            (AHB2PERIPH_BASE + 0x1800U)
#define GPIOH_BASE            (AHB2PERIPH_BASE + 0x1C00U)

#define USBOTG_BASE           (AHB2PERIPH_BASE + 0x08000000U)

#define ADC1_BASE             (AHB2PERIPH_BASE + 0x08040000U)
#define ADC2_BASE             (AHB2PERIPH_BASE + 0x08040100U)
#define ADC3_BASE             (AHB2PERIPH_BASE + 0x08040200U)
#define ADC123_COMMON_BASE    (AHB2PERIPH_BASE + 0x08040300U)


#define RNG_BASE              (AHB2PERIPH_BASE + 0x08060800U)


/*!< FMC Banks registers base  address */
#define FMC_Bank1_R_BASE      (FMC_R_BASE + 0x0000U)
#define FMC_Bank1E_R_BASE     (FMC_R_BASE + 0x0104U)
#define FMC_Bank3_R_BASE      (FMC_R_BASE + 0x0080U)

/* Debug MCU registers base address */
#define DBGMCU_BASE           ((uint32_t)0xE0042000U)

/*!< USB registers base address */
#define USB_OTG_FS_PERIPH_BASE               ((uint32_t)0x50000000U)

#define USB_OTG_GLOBAL_BASE                  ((uint32_t)0x00000000U)
#define USB_OTG_DEVICE_BASE                  ((uint32_t)0x00000800U)
#define USB_OTG_IN_ENDPOINT_BASE             ((uint32_t)0x00000900U)
#define USB_OTG_OUT_ENDPOINT_BASE            ((uint32_t)0x00000B00U)
#define USB_OTG_EP_REG_SIZE                  ((uint32_t)0x00000020U)
#define USB_OTG_HOST_BASE                    ((uint32_t)0x00000400U)
#define USB_OTG_HOST_PORT_BASE               ((uint32_t)0x00000440U)
#define USB_OTG_HOST_CHANNEL_BASE            ((uint32_t)0x00000500U)
#define USB_OTG_HOST_CHANNEL_SIZE            ((uint32_t)0x00000020U)
#define USB_OTG_PCGCCTL_BASE                 ((uint32_t)0x00000E00U)
#define USB_OTG_FIFO_BASE                    ((uint32_t)0x00001000U)
#define USB_OTG_FIFO_SIZE                    ((uint32_t)0x00001000U)


#define PACKAGE_BASE          ((uint32_t)0x1FFF7500U)        /*!< Package data register base address     */
#define UID_BASE              ((uint32_t)0x1FFF7590U)        /*!< Unique device ID register base address */
#define FLASHSIZE_BASE        ((uint32_t)0x1FFF75E0U)        /*!< Flash size data register base address  */
/**
  * @}
  */

/** @addtogroup Peripheral_declaration
  * @{
  */
#define TIM2                ((TIM_TypeDef *) TIM2_BASE)
#define TIM3                ((TIM_TypeDef *) TIM3_BASE)
#define TIM4                ((TIM_TypeDef *) TIM4_BASE)
#define TIM5                ((TIM_TypeDef *) TIM5_BASE)
#define TIM6                ((TIM_TypeDef *) TIM6_BASE)
#define TIM7                ((TIM_TypeDef *) TIM7_BASE)
#define LCD                 ((LCD_TypeDef *) LCD_BASE)
#define RTC                 ((RTC_TypeDef *) RTC_BASE)
#define WWDG                ((WWDG_TypeDef *) WWDG_BASE)
#define IWDG                ((IWDG_TypeDef *) IWDG_BASE)
#define SPI2                ((SPI_TypeDef *) SPI2_BASE)
#define SPI3                ((SPI_TypeDef *) SPI3_BASE)
#define USART2              ((USART_TypeDef *) USART2_BASE)
#define USART3              ((USART_TypeDef *) USART3_BASE)
#define UART4               ((USART_TypeDef *) UART4_BASE)
#define UART5               ((USART_TypeDef *) UART5_BASE)
#define I2C1                ((I2C_TypeDef *) I2C1_BASE)
#define I2C2                ((I2C_TypeDef *) I2C2_BASE)
#define I2C3                ((I2C_TypeDef *) I2C3_BASE)
#define CAN                 ((CAN_TypeDef *) CAN1_BASE)
#define CAN1                ((CAN_TypeDef *) CAN1_BASE)
#define PWR                 ((PWR_TypeDef *) PWR_BASE)
#define DAC                 ((DAC_TypeDef *) DAC1_BASE)
#define DAC1                ((DAC_TypeDef *) DAC1_BASE)
#define OPAMP               ((OPAMP_TypeDef *) OPAMP_BASE)
#define OPAMP1              ((OPAMP_TypeDef *) OPAMP1_BASE)
#define OPAMP2              ((OPAMP_TypeDef *) OPAMP2_BASE)
#define OPAMP12_COMMON      ((OPAMP_Common_TypeDef *) OPAMP1_BASE)
#define LPTIM1              ((LPTIM_TypeDef *) LPTIM1_BASE)
#define LPUART1             ((USART_TypeDef *) LPUART1_BASE)
#define SWPMI1              ((SWPMI_TypeDef *) SWPMI1_BASE)
#define LPTIM2              ((LPTIM_TypeDef *) LPTIM2_BASE)

#define SYSCFG              ((SYSCFG_TypeDef *) SYSCFG_BASE)
#define VREFBUF             ((VREFBUF_TypeDef *) VREFBUF_BASE)
#define COMP1               ((COMP_TypeDef *) COMP1_BASE)
#define COMP2               ((COMP_TypeDef *) COMP2_BASE)
#define COMP12_COMMON       ((COMP_Common_TypeDef *) COMP2_BASE)
#define EXTI                ((EXTI_TypeDef *) EXTI_BASE)
#define FIREWALL            ((FIREWALL_TypeDef *) FIREWALL_BASE)
#define SDMMC1              ((SDMMC_TypeDef *) SDMMC1_BASE)
#define TIM1                ((TIM_TypeDef *) TIM1_BASE)
#define SPI1                ((SPI_TypeDef *) SPI1_BASE)
#define TIM8                ((TIM_TypeDef *) TIM8_BASE)
#define USART1              ((USART_TypeDef *) USART1_BASE)
#define TIM15               ((TIM_TypeDef *) TIM15_BASE)
#define TIM16               ((TIM_TypeDef *) TIM16_BASE)
#define TIM17               ((TIM_TypeDef *) TIM17_BASE)
#define SAI1                ((SAI_TypeDef *) SAI1_BASE)
#define SAI1_Block_A        ((SAI_Block_TypeDef *)SAI1_Block_A_BASE)
#define SAI1_Block_B        ((SAI_Block_TypeDef *)SAI1_Block_B_BASE)
#define SAI2                ((SAI_TypeDef *) SAI2_BASE)
#define SAI2_Block_A        ((SAI_Block_TypeDef *)SAI2_Block_A_BASE)
#define SAI2_Block_B        ((SAI_Block_TypeDef *)SAI2_Block_B_BASE)
#define DFSDM1_Channel0     ((DFSDM_Channel_TypeDef *) DFSDM1_Channel0_BASE)
#define DFSDM1_Channel1     ((DFSDM_Channel_TypeDef *) DFSDM1_Channel1_BASE)
#define DFSDM1_Channel2     ((DFSDM_Channel_TypeDef *) DFSDM1_Channel2_BASE)
#define DFSDM1_Channel3     ((DFSDM_Channel_TypeDef *) DFSDM1_Channel3_BASE)
#define DFSDM1_Channel4     ((DFSDM_Channel_TypeDef *) DFSDM1_Channel4_BASE)
#define DFSDM1_Channel5     ((DFSDM_Channel_TypeDef *) DFSDM1_Channel5_BASE)
#define DFSDM1_Channel6     ((DFSDM_Channel_TypeDef *) DFSDM1_Channel6_BASE)
#define DFSDM1_Channel7     ((DFSDM_Channel_TypeDef *) DFSDM1_Channel7_BASE)
#define DFSDM1_Filter0      ((DFSDM_Filter_TypeDef *) DFSDM1_Filter0_BASE)
#define DFSDM1_Filter1      ((DFSDM_Filter_TypeDef *) DFSDM1_Filter1_BASE)
#define DFSDM1_Filter2      ((DFSDM_Filter_TypeDef *) DFSDM1_Filter2_BASE)
#define DFSDM1_Filter3      ((DFSDM_Filter_TypeDef *) DFSDM1_Filter3_BASE)
/* Aliases to keep compatibility after DFSDM renaming */
#define DFSDM_Channel0      DFSDM1_Channel0
#define DFSDM_Channel1      DFSDM1_Channel1
#define DFSDM_Channel2      DFSDM1_Channel2
#define DFSDM_Channel3      DFSDM1_Channel3
#define DFSDM_Channel4      DFSDM1_Channel4
#define DFSDM_Channel5      DFSDM1_Channel5
#define DFSDM_Channel6      DFSDM1_Channel6
#define DFSDM_Channel7      DFSDM1_Channel7
#define DFSDM_Filter0       DFSDM1_Filter0
#define DFSDM_Filter1       DFSDM1_Filter1
#define DFSDM_Filter2       DFSDM1_Filter2
#define DFSDM_Filter3       DFSDM1_Filter3
#define DMA1                ((DMA_TypeDef *) DMA1_BASE)
#define DMA2                ((DMA_TypeDef *) DMA2_BASE)
#define RCC                 ((RCC_TypeDef *) RCC_BASE)
#define FLASH               ((FLASH_TypeDef *) FLASH_R_BASE)
#define CRC                 ((CRC_TypeDef *) CRC_BASE)
#define TSC                 ((TSC_TypeDef *) TSC_BASE)

#define GPIOA               ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB               ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC               ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD               ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE               ((GPIO_TypeDef *) GPIOE_BASE)
#define GPIOF               ((GPIO_TypeDef *) GPIOF_BASE)
#define GPIOG               ((GPIO_TypeDef *) GPIOG_BASE)
#define GPIOH               ((GPIO_TypeDef *) GPIOH_BASE)
#define ADC1                ((ADC_TypeDef *) ADC1_BASE)
#define ADC2                ((ADC_TypeDef *) ADC2_BASE)
#define ADC3                ((ADC_TypeDef *) ADC3_BASE)
#define ADC123_COMMON       ((ADC_Common_TypeDef *) ADC123_COMMON_BASE)
#define RNG                 ((RNG_TypeDef *) RNG_BASE)


#define DMA1_Channel1       ((DMA_Channel_TypeDef *) DMA1_Channel1_BASE)
#define DMA1_Channel2       ((DMA_Channel_TypeDef *) DMA1_Channel2_BASE)
#define DMA1_Channel3       ((DMA_Channel_TypeDef *) DMA1_Channel3_BASE)
#define DMA1_Channel4       ((DMA_Channel_TypeDef *) DMA1_Channel4_BASE)
#define DMA1_Channel5       ((DMA_Channel_TypeDef *) DMA1_Channel5_BASE)
#define DMA1_Channel6       ((DMA_Channel_TypeDef *) DMA1_Channel6_BASE)
#define DMA1_Channel7       ((DMA_Channel_TypeDef *) DMA1_Channel7_BASE)
#define DMA1_CSELR          ((DMA_request_TypeDef *) DMA1_CSELR_BASE)


#define DMA2_Channel1       ((DMA_Channel_TypeDef *) DMA2_Channel1_BASE)
#define DMA2_Channel2       ((DMA_Channel_TypeDef *) DMA2_Channel2_BASE)
#define DMA2_Channel3       ((DMA_Channel_TypeDef *) DMA2_Channel3_BASE)
#define DMA2_Channel4       ((DMA_Channel_TypeDef *) DMA2_Channel4_BASE)
#define DMA2_Channel5       ((DMA_Channel_TypeDef *) DMA2_Channel5_BASE)
#define DMA2_Channel6       ((DMA_Channel_TypeDef *) DMA2_Channel6_BASE)
#define DMA2_Channel7       ((DMA_Channel_TypeDef *) DMA2_Channel7_BASE)
#define DMA2_CSELR          ((DMA_request_TypeDef *) DMA2_CSELR_BASE)


#define FMC_Bank1_R         ((FMC_Bank1_TypeDef *) FMC_Bank1_R_BASE)
#define FMC_Bank1E_R        ((FMC_Bank1E_TypeDef *) FMC_Bank1E_R_BASE)
#define FMC_Bank3_R         ((FMC_Bank3_TypeDef *) FMC_Bank3_R_BASE)

#define QUADSPI             ((QUADSPI_TypeDef *) QSPI_R_BASE)

#define DBGMCU              ((DBGMCU_TypeDef *) DBGMCU_BASE)

#define USB_OTG_FS          ((USB_OTG_GlobalTypeDef *) USB_OTG_FS_PERIPH_BASE)

#define RCC_PLLSAI2_SUPPORT

/********************  Bit definition for RCC_CR register  ********************/
#define RCC_CR_MSION_Pos                    (0U)
#define RCC_CR_MSION_Msk                    (0x1U << RCC_CR_MSION_Pos)         /*!< 0x00000001 */
#define RCC_CR_MSION                        RCC_CR_MSION_Msk                   /*!< Internal Multi Speed oscillator (MSI) clock enable */
#define RCC_CR_MSIRDY_Pos                   (1U)
#define RCC_CR_MSIRDY_Msk                   (0x1U << RCC_CR_MSIRDY_Pos)        /*!< 0x00000002 */
#define RCC_CR_MSIRDY                       RCC_CR_MSIRDY_Msk                  /*!< Internal Multi Speed oscillator (MSI) clock ready flag */
#define RCC_CR_MSIPLLEN_Pos                 (2U)
#define RCC_CR_MSIPLLEN_Msk                 (0x1U << RCC_CR_MSIPLLEN_Pos)      /*!< 0x00000004 */
#define RCC_CR_MSIPLLEN                     RCC_CR_MSIPLLEN_Msk                /*!< Internal Multi Speed oscillator (MSI) PLL enable */
#define RCC_CR_MSIRGSEL_Pos                 (3U)
#define RCC_CR_MSIRGSEL_Msk                 (0x1U << RCC_CR_MSIRGSEL_Pos)      /*!< 0x00000008 */
#define RCC_CR_MSIRGSEL                     RCC_CR_MSIRGSEL_Msk                /*!< Internal Multi Speed oscillator (MSI) range selection */

/*!< MSIRANGE configuration : 12 frequency ranges available */
#define RCC_CR_MSIRANGE_Pos                 (4U)
#define RCC_CR_MSIRANGE_Msk                 (0xFU << RCC_CR_MSIRANGE_Pos)      /*!< 0x000000F0 */
#define RCC_CR_MSIRANGE                     RCC_CR_MSIRANGE_Msk                /*!< Internal Multi Speed oscillator (MSI) clock Range */
#define RCC_CR_MSIRANGE_0                   (0x0U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000000 */
#define RCC_CR_MSIRANGE_1                   (0x1U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000010 */
#define RCC_CR_MSIRANGE_2                   (0x2U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000020 */
#define RCC_CR_MSIRANGE_3                   (0x3U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000030 */
#define RCC_CR_MSIRANGE_4                   (0x4U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000040 */
#define RCC_CR_MSIRANGE_5                   (0x5U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000050 */
#define RCC_CR_MSIRANGE_6                   (0x6U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000060 */
#define RCC_CR_MSIRANGE_7                   (0x7U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000070 */
#define RCC_CR_MSIRANGE_8                   (0x8U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000080 */
#define RCC_CR_MSIRANGE_9                   (0x9U << RCC_CR_MSIRANGE_Pos)      /*!< 0x00000090 */
#define RCC_CR_MSIRANGE_10                  (0xAU << RCC_CR_MSIRANGE_Pos)      /*!< 0x000000A0 */
#define RCC_CR_MSIRANGE_11                  (0xBU << RCC_CR_MSIRANGE_Pos)      /*!< 0x000000B0 */

#define RCC_CR_HSION_Pos                    (8U)
#define RCC_CR_HSION_Msk                    (0x1U << RCC_CR_HSION_Pos)         /*!< 0x00000100 */
#define RCC_CR_HSION                        RCC_CR_HSION_Msk                   /*!< Internal High Speed oscillator (HSI16) clock enable */
#define RCC_CR_HSIKERON_Pos                 (9U)
#define RCC_CR_HSIKERON_Msk                 (0x1U << RCC_CR_HSIKERON_Pos)      /*!< 0x00000200 */
#define RCC_CR_HSIKERON                     RCC_CR_HSIKERON_Msk                /*!< Internal High Speed oscillator (HSI16) clock enable for some IPs Kernel */
#define RCC_CR_HSIRDY_Pos                   (10U)
#define RCC_CR_HSIRDY_Msk                   (0x1U << RCC_CR_HSIRDY_Pos)        /*!< 0x00000400 */
#define RCC_CR_HSIRDY                       RCC_CR_HSIRDY_Msk                  /*!< Internal High Speed oscillator (HSI16) clock ready flag */
#define RCC_CR_HSIASFS_Pos                  (11U)
#define RCC_CR_HSIASFS_Msk                  (0x1U << RCC_CR_HSIASFS_Pos)       /*!< 0x00000800 */
#define RCC_CR_HSIASFS                      RCC_CR_HSIASFS_Msk                 /*!< HSI16 Automatic Start from Stop */

#define RCC_CR_HSEON_Pos                    (16U)
#define RCC_CR_HSEON_Msk                    (0x1U << RCC_CR_HSEON_Pos)         /*!< 0x00010000 */
#define RCC_CR_HSEON                        RCC_CR_HSEON_Msk                   /*!< External High Speed oscillator (HSE) clock enable */
#define RCC_CR_HSERDY_Pos                   (17U)
#define RCC_CR_HSERDY_Msk                   (0x1U << RCC_CR_HSERDY_Pos)        /*!< 0x00020000 */
#define RCC_CR_HSERDY                       RCC_CR_HSERDY_Msk                  /*!< External High Speed oscillator (HSE) clock ready */
#define RCC_CR_HSEBYP_Pos                   (18U)
#define RCC_CR_HSEBYP_Msk                   (0x1U << RCC_CR_HSEBYP_Pos)        /*!< 0x00040000 */
#define RCC_CR_HSEBYP                       RCC_CR_HSEBYP_Msk                  /*!< External High Speed oscillator (HSE) clock bypass */
#define RCC_CR_CSSON_Pos                    (19U)
#define RCC_CR_CSSON_Msk                    (0x1U << RCC_CR_CSSON_Pos)         /*!< 0x00080000 */
#define RCC_CR_CSSON                        RCC_CR_CSSON_Msk                   /*!< HSE Clock Security System enable */

#define RCC_CR_PLLON_Pos                    (24U)
#define RCC_CR_PLLON_Msk                    (0x1U << RCC_CR_PLLON_Pos)         /*!< 0x01000000 */
#define RCC_CR_PLLON                        RCC_CR_PLLON_Msk                   /*!< System PLL clock enable */
#define RCC_CR_PLLRDY_Pos                   (25U)
#define RCC_CR_PLLRDY_Msk                   (0x1U << RCC_CR_PLLRDY_Pos)        /*!< 0x02000000 */
#define RCC_CR_PLLRDY                       RCC_CR_PLLRDY_Msk                  /*!< System PLL clock ready */
#define RCC_CR_PLLSAI1ON_Pos                (26U)
#define RCC_CR_PLLSAI1ON_Msk                (0x1U << RCC_CR_PLLSAI1ON_Pos)     /*!< 0x04000000 */
#define RCC_CR_PLLSAI1ON                    RCC_CR_PLLSAI1ON_Msk               /*!< SAI1 PLL enable */
#define RCC_CR_PLLSAI1RDY_Pos               (27U)
#define RCC_CR_PLLSAI1RDY_Msk               (0x1U << RCC_CR_PLLSAI1RDY_Pos)    /*!< 0x08000000 */
#define RCC_CR_PLLSAI1RDY                   RCC_CR_PLLSAI1RDY_Msk              /*!< SAI1 PLL ready */
#define RCC_CR_PLLSAI2ON_Pos                (28U)
#define RCC_CR_PLLSAI2ON_Msk                (0x1U << RCC_CR_PLLSAI2ON_Pos)     /*!< 0x10000000 */
#define RCC_CR_PLLSAI2ON                    RCC_CR_PLLSAI2ON_Msk               /*!< SAI2 PLL enable */
#define RCC_CR_PLLSAI2RDY_Pos               (29U)
#define RCC_CR_PLLSAI2RDY_Msk               (0x1U << RCC_CR_PLLSAI2RDY_Pos)    /*!< 0x20000000 */
#define RCC_CR_PLLSAI2RDY                   RCC_CR_PLLSAI2RDY_Msk              /*!< SAI2 PLL ready */

/********************  Bit definition for RCC_ICSCR register  ***************/
/*!< MSICAL configuration */
#define RCC_ICSCR_MSICAL_Pos                (0U)
#define RCC_ICSCR_MSICAL_Msk                (0xFFU << RCC_ICSCR_MSICAL_Pos)    /*!< 0x000000FF */
#define RCC_ICSCR_MSICAL                    RCC_ICSCR_MSICAL_Msk               /*!< MSICAL[7:0] bits */
#define RCC_ICSCR_MSICAL_0                  (0x01U << RCC_ICSCR_MSICAL_Pos)    /*!< 0x00000001 */
#define RCC_ICSCR_MSICAL_1                  (0x02U << RCC_ICSCR_MSICAL_Pos)    /*!< 0x00000002 */
#define RCC_ICSCR_MSICAL_2                  (0x04U << RCC_ICSCR_MSICAL_Pos)    /*!< 0x00000004 */
#define RCC_ICSCR_MSICAL_3                  (0x08U << RCC_ICSCR_MSICAL_Pos)    /*!< 0x00000008 */
#define RCC_ICSCR_MSICAL_4                  (0x10U << RCC_ICSCR_MSICAL_Pos)    /*!< 0x00000010 */
#define RCC_ICSCR_MSICAL_5                  (0x20U << RCC_ICSCR_MSICAL_Pos)    /*!< 0x00000020 */
#define RCC_ICSCR_MSICAL_6                  (0x40U << RCC_ICSCR_MSICAL_Pos)    /*!< 0x00000040 */
#define RCC_ICSCR_MSICAL_7                  (0x80U << RCC_ICSCR_MSICAL_Pos)    /*!< 0x00000080 */

/*!< MSITRIM configuration */
#define RCC_ICSCR_MSITRIM_Pos               (8U)
#define RCC_ICSCR_MSITRIM_Msk               (0xFFU << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x0000FF00 */
#define RCC_ICSCR_MSITRIM                   RCC_ICSCR_MSITRIM_Msk              /*!< MSITRIM[7:0] bits */
#define RCC_ICSCR_MSITRIM_0                 (0x01U << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x00000100 */
#define RCC_ICSCR_MSITRIM_1                 (0x02U << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x00000200 */
#define RCC_ICSCR_MSITRIM_2                 (0x04U << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x00000400 */
#define RCC_ICSCR_MSITRIM_3                 (0x08U << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x00000800 */
#define RCC_ICSCR_MSITRIM_4                 (0x10U << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x00001000 */
#define RCC_ICSCR_MSITRIM_5                 (0x20U << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x00002000 */
#define RCC_ICSCR_MSITRIM_6                 (0x40U << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x00004000 */
#define RCC_ICSCR_MSITRIM_7                 (0x80U << RCC_ICSCR_MSITRIM_Pos)   /*!< 0x00008000 */

/*!< HSICAL configuration */
#define RCC_ICSCR_HSICAL_Pos                (16U)
#define RCC_ICSCR_HSICAL_Msk                (0xFFU << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00FF0000 */
#define RCC_ICSCR_HSICAL                    RCC_ICSCR_HSICAL_Msk               /*!< HSICAL[7:0] bits */
#define RCC_ICSCR_HSICAL_0                  (0x01U << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00010000 */
#define RCC_ICSCR_HSICAL_1                  (0x02U << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00020000 */
#define RCC_ICSCR_HSICAL_2                  (0x04U << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00040000 */
#define RCC_ICSCR_HSICAL_3                  (0x08U << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00080000 */
#define RCC_ICSCR_HSICAL_4                  (0x10U << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00100000 */
#define RCC_ICSCR_HSICAL_5                  (0x20U << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00200000 */
#define RCC_ICSCR_HSICAL_6                  (0x40U << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00400000 */
#define RCC_ICSCR_HSICAL_7                  (0x80U << RCC_ICSCR_HSICAL_Pos)    /*!< 0x00800000 */

/*!< HSITRIM configuration */
#define RCC_ICSCR_HSITRIM_Pos               (24U)
#define RCC_ICSCR_HSITRIM_Msk               (0x1FU << RCC_ICSCR_HSITRIM_Pos)   /*!< 0x1F000000 */
#define RCC_ICSCR_HSITRIM                   RCC_ICSCR_HSITRIM_Msk              /*!< HSITRIM[4:0] bits */
#define RCC_ICSCR_HSITRIM_0                 (0x01U << RCC_ICSCR_HSITRIM_Pos)   /*!< 0x01000000 */
#define RCC_ICSCR_HSITRIM_1                 (0x02U << RCC_ICSCR_HSITRIM_Pos)   /*!< 0x02000000 */
#define RCC_ICSCR_HSITRIM_2                 (0x04U << RCC_ICSCR_HSITRIM_Pos)   /*!< 0x04000000 */
#define RCC_ICSCR_HSITRIM_3                 (0x08U << RCC_ICSCR_HSITRIM_Pos)   /*!< 0x08000000 */
#define RCC_ICSCR_HSITRIM_4                 (0x10U << RCC_ICSCR_HSITRIM_Pos)   /*!< 0x10000000 */

/********************  Bit definition for RCC_CFGR register  ******************/
/*!< SW configuration */
#define RCC_CFGR_SW_Pos                     (0U)
#define RCC_CFGR_SW_Msk                     (0x3U << RCC_CFGR_SW_Pos)          /*!< 0x00000003 */
#define RCC_CFGR_SW                         RCC_CFGR_SW_Msk                    /*!< SW[1:0] bits (System clock Switch) */
#define RCC_CFGR_SW_0                       (0x1U << RCC_CFGR_SW_Pos)          /*!< 0x00000001 */
#define RCC_CFGR_SW_1                       (0x2U << RCC_CFGR_SW_Pos)          /*!< 0x00000002 */

#define RCC_CFGR_SW_MSI                     (0x00000000U)                      /*!< MSI oscillator selection as system clock */
#define RCC_CFGR_SW_HSI                     (0x00000001U)                      /*!< HSI16 oscillator selection as system clock */
#define RCC_CFGR_SW_HSE                     (0x00000002U)                      /*!< HSE oscillator selection as system clock */
#define RCC_CFGR_SW_PLL                     (0x00000003U)                      /*!< PLL selection as system clock */

/*!< SWS configuration */
#define RCC_CFGR_SWS_Pos                    (2U)
#define RCC_CFGR_SWS_Msk                    (0x3U << RCC_CFGR_SWS_Pos)         /*!< 0x0000000C */
#define RCC_CFGR_SWS                        RCC_CFGR_SWS_Msk                   /*!< SWS[1:0] bits (System Clock Switch Status) */
#define RCC_CFGR_SWS_0                      (0x1U << RCC_CFGR_SWS_Pos)         /*!< 0x00000004 */
#define RCC_CFGR_SWS_1                      (0x2U << RCC_CFGR_SWS_Pos)         /*!< 0x00000008 */

#define RCC_CFGR_SWS_MSI                    (0x00000000U)                      /*!< MSI oscillator used as system clock */
#define RCC_CFGR_SWS_HSI                    (0x00000004U)                      /*!< HSI16 oscillator used as system clock */
#define RCC_CFGR_SWS_HSE                    (0x00000008U)                      /*!< HSE oscillator used as system clock */
#define RCC_CFGR_SWS_PLL                    (0x0000000CU)                      /*!< PLL used as system clock */

/*!< HPRE configuration */
#define RCC_CFGR_HPRE_Pos                   (4U)
#define RCC_CFGR_HPRE_Msk                   (0xFU << RCC_CFGR_HPRE_Pos)        /*!< 0x000000F0 */
#define RCC_CFGR_HPRE                       RCC_CFGR_HPRE_Msk                  /*!< HPRE[3:0] bits (AHB prescaler) */
#define RCC_CFGR_HPRE_0                     (0x1U << RCC_CFGR_HPRE_Pos)        /*!< 0x00000010 */
#define RCC_CFGR_HPRE_1                     (0x2U << RCC_CFGR_HPRE_Pos)        /*!< 0x00000020 */
#define RCC_CFGR_HPRE_2                     (0x4U << RCC_CFGR_HPRE_Pos)        /*!< 0x00000040 */
#define RCC_CFGR_HPRE_3                     (0x8U << RCC_CFGR_HPRE_Pos)        /*!< 0x00000080 */

#define RCC_CFGR_HPRE_DIV1                  (0x00000000U)                      /*!< SYSCLK not divided */
#define RCC_CFGR_HPRE_DIV2                  (0x00000080U)                      /*!< SYSCLK divided by 2 */
#define RCC_CFGR_HPRE_DIV4                  (0x00000090U)                      /*!< SYSCLK divided by 4 */
#define RCC_CFGR_HPRE_DIV8                  (0x000000A0U)                      /*!< SYSCLK divided by 8 */
#define RCC_CFGR_HPRE_DIV16                 (0x000000B0U)                      /*!< SYSCLK divided by 16 */
#define RCC_CFGR_HPRE_DIV64                 (0x000000C0U)                      /*!< SYSCLK divided by 64 */
#define RCC_CFGR_HPRE_DIV128                (0x000000D0U)                      /*!< SYSCLK divided by 128 */
#define RCC_CFGR_HPRE_DIV256                (0x000000E0U)                      /*!< SYSCLK divided by 256 */
#define RCC_CFGR_HPRE_DIV512                (0x000000F0U)                      /*!< SYSCLK divided by 512 */

/*!< PPRE1 configuration */
#define RCC_CFGR_PPRE1_Pos                  (8U)
#define RCC_CFGR_PPRE1_Msk                  (0x7U << RCC_CFGR_PPRE1_Pos)       /*!< 0x00000700 */
#define RCC_CFGR_PPRE1                      RCC_CFGR_PPRE1_Msk                 /*!< PRE1[2:0] bits (APB2 prescaler) */
#define RCC_CFGR_PPRE1_0                    (0x1U << RCC_CFGR_PPRE1_Pos)       /*!< 0x00000100 */
#define RCC_CFGR_PPRE1_1                    (0x2U << RCC_CFGR_PPRE1_Pos)       /*!< 0x00000200 */
#define RCC_CFGR_PPRE1_2                    (0x4U << RCC_CFGR_PPRE1_Pos)       /*!< 0x00000400 */

#define RCC_CFGR_PPRE1_DIV1                 (0x00000000U)                      /*!< HCLK not divided */
#define RCC_CFGR_PPRE1_DIV2                 (0x00000400U)                      /*!< HCLK divided by 2 */
#define RCC_CFGR_PPRE1_DIV4                 (0x00000500U)                      /*!< HCLK divided by 4 */
#define RCC_CFGR_PPRE1_DIV8                 (0x00000600U)                      /*!< HCLK divided by 8 */
#define RCC_CFGR_PPRE1_DIV16                (0x00000700U)                      /*!< HCLK divided by 16 */

/*!< PPRE2 configuration */
#define RCC_CFGR_PPRE2_Pos                  (11U)
#define RCC_CFGR_PPRE2_Msk                  (0x7U << RCC_CFGR_PPRE2_Pos)       /*!< 0x00003800 */
#define RCC_CFGR_PPRE2                      RCC_CFGR_PPRE2_Msk                 /*!< PRE2[2:0] bits (APB2 prescaler) */
#define RCC_CFGR_PPRE2_0                    (0x1U << RCC_CFGR_PPRE2_Pos)       /*!< 0x00000800 */
#define RCC_CFGR_PPRE2_1                    (0x2U << RCC_CFGR_PPRE2_Pos)       /*!< 0x00001000 */
#define RCC_CFGR_PPRE2_2                    (0x4U << RCC_CFGR_PPRE2_Pos)       /*!< 0x00002000 */

#define RCC_CFGR_PPRE2_DIV1                 (0x00000000U)                      /*!< HCLK not divided */
#define RCC_CFGR_PPRE2_DIV2                 (0x00002000U)                      /*!< HCLK divided by 2 */
#define RCC_CFGR_PPRE2_DIV4                 (0x00002800U)                      /*!< HCLK divided by 4 */
#define RCC_CFGR_PPRE2_DIV8                 (0x00003000U)                      /*!< HCLK divided by 8 */
#define RCC_CFGR_PPRE2_DIV16                (0x00003800U)                      /*!< HCLK divided by 16 */

#define RCC_CFGR_STOPWUCK_Pos               (15U)
#define RCC_CFGR_STOPWUCK_Msk               (0x1U << RCC_CFGR_STOPWUCK_Pos)    /*!< 0x00008000 */
#define RCC_CFGR_STOPWUCK                   RCC_CFGR_STOPWUCK_Msk              /*!< Wake Up from stop and CSS backup clock selection */

/*!< MCOSEL configuration */
#define RCC_CFGR_MCOSEL_Pos                 (24U)
#define RCC_CFGR_MCOSEL_Msk                 (0x7U << RCC_CFGR_MCOSEL_Pos)      /*!< 0x07000000 */
#define RCC_CFGR_MCOSEL                     RCC_CFGR_MCOSEL_Msk                /*!< MCOSEL [2:0] bits (Clock output selection) */
#define RCC_CFGR_MCOSEL_0                   (0x1U << RCC_CFGR_MCOSEL_Pos)      /*!< 0x01000000 */
#define RCC_CFGR_MCOSEL_1                   (0x2U << RCC_CFGR_MCOSEL_Pos)      /*!< 0x02000000 */
#define RCC_CFGR_MCOSEL_2                   (0x4U << RCC_CFGR_MCOSEL_Pos)      /*!< 0x04000000 */

#define RCC_CFGR_MCOPRE_Pos                 (28U)
#define RCC_CFGR_MCOPRE_Msk                 (0x7U << RCC_CFGR_MCOPRE_Pos)      /*!< 0x70000000 */
#define RCC_CFGR_MCOPRE                     RCC_CFGR_MCOPRE_Msk                /*!< MCO prescaler */
#define RCC_CFGR_MCOPRE_0                   (0x1U << RCC_CFGR_MCOPRE_Pos)      /*!< 0x10000000 */
#define RCC_CFGR_MCOPRE_1                   (0x2U << RCC_CFGR_MCOPRE_Pos)      /*!< 0x20000000 */
#define RCC_CFGR_MCOPRE_2                   (0x4U << RCC_CFGR_MCOPRE_Pos)      /*!< 0x40000000 */

#define RCC_CFGR_MCOPRE_DIV1                (0x00000000U)                      /*!< MCO is divided by 1 */
#define RCC_CFGR_MCOPRE_DIV2                (0x10000000U)                      /*!< MCO is divided by 2 */
#define RCC_CFGR_MCOPRE_DIV4                (0x20000000U)                      /*!< MCO is divided by 4 */
#define RCC_CFGR_MCOPRE_DIV8                (0x30000000U)                      /*!< MCO is divided by 8 */
#define RCC_CFGR_MCOPRE_DIV16               (0x40000000U)                      /*!< MCO is divided by 16 */

/* Legacy aliases */
#define  RCC_CFGR_MCO_PRE                    RCC_CFGR_MCOPRE
#define  RCC_CFGR_MCO_PRE_1                  RCC_CFGR_MCOPRE_DIV1
#define  RCC_CFGR_MCO_PRE_2                  RCC_CFGR_MCOPRE_DIV2
#define  RCC_CFGR_MCO_PRE_4                  RCC_CFGR_MCOPRE_DIV4
#define  RCC_CFGR_MCO_PRE_8                  RCC_CFGR_MCOPRE_DIV8
#define  RCC_CFGR_MCO_PRE_16                 RCC_CFGR_MCOPRE_DIV16

/********************  Bit definition for RCC_PLLCFGR register  ***************/
#define RCC_PLLCFGR_PLLSRC_Pos              (0U)
#define RCC_PLLCFGR_PLLSRC_Msk              (0x3U << RCC_PLLCFGR_PLLSRC_Pos)   /*!< 0x00000003 */
#define RCC_PLLCFGR_PLLSRC                  RCC_PLLCFGR_PLLSRC_Msk

#define RCC_PLLCFGR_PLLSRC_MSI_Pos          (0U)
#define RCC_PLLCFGR_PLLSRC_MSI_Msk          (0x1U << RCC_PLLCFGR_PLLSRC_MSI_Pos) /*!< 0x00000001 */
#define RCC_PLLCFGR_PLLSRC_MSI              RCC_PLLCFGR_PLLSRC_MSI_Msk         /*!< MSI oscillator source clock selected */
#define RCC_PLLCFGR_PLLSRC_HSI_Pos          (1U)
#define RCC_PLLCFGR_PLLSRC_HSI_Msk          (0x1U << RCC_PLLCFGR_PLLSRC_HSI_Pos) /*!< 0x00000002 */
#define RCC_PLLCFGR_PLLSRC_HSI              RCC_PLLCFGR_PLLSRC_HSI_Msk         /*!< HSI16 oscillator source clock selected */
#define RCC_PLLCFGR_PLLSRC_HSE_Pos          (0U)
#define RCC_PLLCFGR_PLLSRC_HSE_Msk          (0x3U << RCC_PLLCFGR_PLLSRC_HSE_Pos) /*!< 0x00000003 */
#define RCC_PLLCFGR_PLLSRC_HSE              RCC_PLLCFGR_PLLSRC_HSE_Msk         /*!< HSE oscillator source clock selected */

#define RCC_PLLCFGR_PLLM_Pos                (4U)
#define RCC_PLLCFGR_PLLM_Msk                (0x7U << RCC_PLLCFGR_PLLM_Pos)     /*!< 0x00000070 */
#define RCC_PLLCFGR_PLLM                    RCC_PLLCFGR_PLLM_Msk
#define RCC_PLLCFGR_PLLM_0                  (0x1U << RCC_PLLCFGR_PLLM_Pos)     /*!< 0x00000010 */
#define RCC_PLLCFGR_PLLM_1                  (0x2U << RCC_PLLCFGR_PLLM_Pos)     /*!< 0x00000020 */
#define RCC_PLLCFGR_PLLM_2                  (0x4U << RCC_PLLCFGR_PLLM_Pos)     /*!< 0x00000040 */

#define RCC_PLLCFGR_PLLN_Pos                (8U)
#define RCC_PLLCFGR_PLLN_Msk                (0x7FU << RCC_PLLCFGR_PLLN_Pos)    /*!< 0x00007F00 */
#define RCC_PLLCFGR_PLLN                    RCC_PLLCFGR_PLLN_Msk
#define RCC_PLLCFGR_PLLN_0                  (0x01U << RCC_PLLCFGR_PLLN_Pos)    /*!< 0x00000100 */
#define RCC_PLLCFGR_PLLN_1                  (0x02U << RCC_PLLCFGR_PLLN_Pos)    /*!< 0x00000200 */
#define RCC_PLLCFGR_PLLN_2                  (0x04U << RCC_PLLCFGR_PLLN_Pos)    /*!< 0x00000400 */
#define RCC_PLLCFGR_PLLN_3                  (0x08U << RCC_PLLCFGR_PLLN_Pos)    /*!< 0x00000800 */
#define RCC_PLLCFGR_PLLN_4                  (0x10U << RCC_PLLCFGR_PLLN_Pos)    /*!< 0x00001000 */
#define RCC_PLLCFGR_PLLN_5                  (0x20U << RCC_PLLCFGR_PLLN_Pos)    /*!< 0x00002000 */
#define RCC_PLLCFGR_PLLN_6                  (0x40U << RCC_PLLCFGR_PLLN_Pos)    /*!< 0x00004000 */

#define RCC_PLLCFGR_PLLPEN_Pos              (16U)
#define RCC_PLLCFGR_PLLPEN_Msk              (0x1U << RCC_PLLCFGR_PLLPEN_Pos)   /*!< 0x00010000 */
#define RCC_PLLCFGR_PLLPEN                  RCC_PLLCFGR_PLLPEN_Msk
#define RCC_PLLCFGR_PLLP_Pos                (17U)
#define RCC_PLLCFGR_PLLP_Msk                (0x1U << RCC_PLLCFGR_PLLP_Pos)     /*!< 0x00020000 */
#define RCC_PLLCFGR_PLLP                    RCC_PLLCFGR_PLLP_Msk
#define RCC_PLLCFGR_PLLQEN_Pos              (20U)
#define RCC_PLLCFGR_PLLQEN_Msk              (0x1U << RCC_PLLCFGR_PLLQEN_Pos)   /*!< 0x00100000 */
#define RCC_PLLCFGR_PLLQEN                  RCC_PLLCFGR_PLLQEN_Msk

#define RCC_PLLCFGR_PLLQ_Pos                (21U)
#define RCC_PLLCFGR_PLLQ_Msk                (0x3U << RCC_PLLCFGR_PLLQ_Pos)     /*!< 0x00600000 */
#define RCC_PLLCFGR_PLLQ                    RCC_PLLCFGR_PLLQ_Msk
#define RCC_PLLCFGR_PLLQ_0                  (0x1U << RCC_PLLCFGR_PLLQ_Pos)     /*!< 0x00200000 */
#define RCC_PLLCFGR_PLLQ_1                  (0x2U << RCC_PLLCFGR_PLLQ_Pos)     /*!< 0x00400000 */

#define RCC_PLLCFGR_PLLREN_Pos              (24U)
#define RCC_PLLCFGR_PLLREN_Msk              (0x1U << RCC_PLLCFGR_PLLREN_Pos)   /*!< 0x01000000 */
#define RCC_PLLCFGR_PLLREN                  RCC_PLLCFGR_PLLREN_Msk
#define RCC_PLLCFGR_PLLR_Pos                (25U)
#define RCC_PLLCFGR_PLLR_Msk                (0x3U << RCC_PLLCFGR_PLLR_Pos)     /*!< 0x06000000 */
#define RCC_PLLCFGR_PLLR                    RCC_PLLCFGR_PLLR_Msk
#define RCC_PLLCFGR_PLLR_0                  (0x1U << RCC_PLLCFGR_PLLR_Pos)     /*!< 0x02000000 */
#define RCC_PLLCFGR_PLLR_1                  (0x2U << RCC_PLLCFGR_PLLR_Pos)     /*!< 0x04000000 */

/********************  Bit definition for RCC_PLLSAI1CFGR register  ************/
#define RCC_PLLSAI1CFGR_PLLSAI1N_Pos        (8U)
#define RCC_PLLSAI1CFGR_PLLSAI1N_Msk        (0x7FU << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) /*!< 0x00007F00 */
#define RCC_PLLSAI1CFGR_PLLSAI1N            RCC_PLLSAI1CFGR_PLLSAI1N_Msk
#define RCC_PLLSAI1CFGR_PLLSAI1N_0          (0x01U << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) /*!< 0x00000100 */
#define RCC_PLLSAI1CFGR_PLLSAI1N_1          (0x02U << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) /*!< 0x00000200 */
#define RCC_PLLSAI1CFGR_PLLSAI1N_2          (0x04U << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) /*!< 0x00000400 */
#define RCC_PLLSAI1CFGR_PLLSAI1N_3          (0x08U << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) /*!< 0x00000800 */
#define RCC_PLLSAI1CFGR_PLLSAI1N_4          (0x10U << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) /*!< 0x00001000 */
#define RCC_PLLSAI1CFGR_PLLSAI1N_5          (0x20U << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) /*!< 0x00002000 */
#define RCC_PLLSAI1CFGR_PLLSAI1N_6          (0x40U << RCC_PLLSAI1CFGR_PLLSAI1N_Pos) /*!< 0x00004000 */

#define RCC_PLLSAI1CFGR_PLLSAI1PEN_Pos      (16U)
#define RCC_PLLSAI1CFGR_PLLSAI1PEN_Msk      (0x1U << RCC_PLLSAI1CFGR_PLLSAI1PEN_Pos) /*!< 0x00010000 */
#define RCC_PLLSAI1CFGR_PLLSAI1PEN          RCC_PLLSAI1CFGR_PLLSAI1PEN_Msk
#define RCC_PLLSAI1CFGR_PLLSAI1P_Pos        (17U)
#define RCC_PLLSAI1CFGR_PLLSAI1P_Msk        (0x1U << RCC_PLLSAI1CFGR_PLLSAI1P_Pos) /*!< 0x00020000 */
#define RCC_PLLSAI1CFGR_PLLSAI1P            RCC_PLLSAI1CFGR_PLLSAI1P_Msk

#define RCC_PLLSAI1CFGR_PLLSAI1QEN_Pos      (20U)
#define RCC_PLLSAI1CFGR_PLLSAI1QEN_Msk      (0x1U << RCC_PLLSAI1CFGR_PLLSAI1QEN_Pos) /*!< 0x00100000 */
#define RCC_PLLSAI1CFGR_PLLSAI1QEN          RCC_PLLSAI1CFGR_PLLSAI1QEN_Msk
#define RCC_PLLSAI1CFGR_PLLSAI1Q_Pos        (21U)
#define RCC_PLLSAI1CFGR_PLLSAI1Q_Msk        (0x3U << RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) /*!< 0x00600000 */
#define RCC_PLLSAI1CFGR_PLLSAI1Q            RCC_PLLSAI1CFGR_PLLSAI1Q_Msk
#define RCC_PLLSAI1CFGR_PLLSAI1Q_0          (0x1U << RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) /*!< 0x00200000 */
#define RCC_PLLSAI1CFGR_PLLSAI1Q_1          (0x2U << RCC_PLLSAI1CFGR_PLLSAI1Q_Pos) /*!< 0x00400000 */

#define RCC_PLLSAI1CFGR_PLLSAI1REN_Pos      (24U)
#define RCC_PLLSAI1CFGR_PLLSAI1REN_Msk      (0x1U << RCC_PLLSAI1CFGR_PLLSAI1REN_Pos) /*!< 0x01000000 */
#define RCC_PLLSAI1CFGR_PLLSAI1REN          RCC_PLLSAI1CFGR_PLLSAI1REN_Msk
#define RCC_PLLSAI1CFGR_PLLSAI1R_Pos        (25U)
#define RCC_PLLSAI1CFGR_PLLSAI1R_Msk        (0x3U << RCC_PLLSAI1CFGR_PLLSAI1R_Pos) /*!< 0x06000000 */
#define RCC_PLLSAI1CFGR_PLLSAI1R            RCC_PLLSAI1CFGR_PLLSAI1R_Msk
#define RCC_PLLSAI1CFGR_PLLSAI1R_0          (0x1U << RCC_PLLSAI1CFGR_PLLSAI1R_Pos) /*!< 0x02000000 */
#define RCC_PLLSAI1CFGR_PLLSAI1R_1          (0x2U << RCC_PLLSAI1CFGR_PLLSAI1R_Pos) /*!< 0x04000000 */

/********************  Bit definition for RCC_PLLSAI2CFGR register  ************/
#define RCC_PLLSAI2CFGR_PLLSAI2N_Pos        (8U)
#define RCC_PLLSAI2CFGR_PLLSAI2N_Msk        (0x7FU << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) /*!< 0x00007F00 */
#define RCC_PLLSAI2CFGR_PLLSAI2N            RCC_PLLSAI2CFGR_PLLSAI2N_Msk
#define RCC_PLLSAI2CFGR_PLLSAI2N_0          (0x01U << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) /*!< 0x00000100 */
#define RCC_PLLSAI2CFGR_PLLSAI2N_1          (0x02U << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) /*!< 0x00000200 */
#define RCC_PLLSAI2CFGR_PLLSAI2N_2          (0x04U << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) /*!< 0x00000400 */
#define RCC_PLLSAI2CFGR_PLLSAI2N_3          (0x08U << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) /*!< 0x00000800 */
#define RCC_PLLSAI2CFGR_PLLSAI2N_4          (0x10U << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) /*!< 0x00001000 */
#define RCC_PLLSAI2CFGR_PLLSAI2N_5          (0x20U << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) /*!< 0x00002000 */
#define RCC_PLLSAI2CFGR_PLLSAI2N_6          (0x40U << RCC_PLLSAI2CFGR_PLLSAI2N_Pos) /*!< 0x00004000 */

#define RCC_PLLSAI2CFGR_PLLSAI2PEN_Pos      (16U)
#define RCC_PLLSAI2CFGR_PLLSAI2PEN_Msk      (0x1U << RCC_PLLSAI2CFGR_PLLSAI2PEN_Pos) /*!< 0x00010000 */
#define RCC_PLLSAI2CFGR_PLLSAI2PEN          RCC_PLLSAI2CFGR_PLLSAI2PEN_Msk
#define RCC_PLLSAI2CFGR_PLLSAI2P_Pos        (17U)
#define RCC_PLLSAI2CFGR_PLLSAI2P_Msk        (0x1U << RCC_PLLSAI2CFGR_PLLSAI2P_Pos) /*!< 0x00020000 */
#define RCC_PLLSAI2CFGR_PLLSAI2P            RCC_PLLSAI2CFGR_PLLSAI2P_Msk

#define RCC_PLLSAI2CFGR_PLLSAI2REN_Pos      (24U)
#define RCC_PLLSAI2CFGR_PLLSAI2REN_Msk      (0x1U << RCC_PLLSAI2CFGR_PLLSAI2REN_Pos) /*!< 0x01000000 */
#define RCC_PLLSAI2CFGR_PLLSAI2REN          RCC_PLLSAI2CFGR_PLLSAI2REN_Msk
#define RCC_PLLSAI2CFGR_PLLSAI2R_Pos        (25U)
#define RCC_PLLSAI2CFGR_PLLSAI2R_Msk        (0x3U << RCC_PLLSAI2CFGR_PLLSAI2R_Pos) /*!< 0x06000000 */
#define RCC_PLLSAI2CFGR_PLLSAI2R            RCC_PLLSAI2CFGR_PLLSAI2R_Msk
#define RCC_PLLSAI2CFGR_PLLSAI2R_0          (0x1U << RCC_PLLSAI2CFGR_PLLSAI2R_Pos) /*!< 0x02000000 */
#define RCC_PLLSAI2CFGR_PLLSAI2R_1          (0x2U << RCC_PLLSAI2CFGR_PLLSAI2R_Pos) /*!< 0x04000000 */

/********************  Bit definition for RCC_CIER register  ******************/
#define RCC_CIER_LSIRDYIE_Pos               (0U)
#define RCC_CIER_LSIRDYIE_Msk               (0x1U << RCC_CIER_LSIRDYIE_Pos)    /*!< 0x00000001 */
#define RCC_CIER_LSIRDYIE                   RCC_CIER_LSIRDYIE_Msk
#define RCC_CIER_LSERDYIE_Pos               (1U)
#define RCC_CIER_LSERDYIE_Msk               (0x1U << RCC_CIER_LSERDYIE_Pos)    /*!< 0x00000002 */
#define RCC_CIER_LSERDYIE                   RCC_CIER_LSERDYIE_Msk
#define RCC_CIER_MSIRDYIE_Pos               (2U)
#define RCC_CIER_MSIRDYIE_Msk               (0x1U << RCC_CIER_MSIRDYIE_Pos)    /*!< 0x00000004 */
#define RCC_CIER_MSIRDYIE                   RCC_CIER_MSIRDYIE_Msk
#define RCC_CIER_HSIRDYIE_Pos               (3U)
#define RCC_CIER_HSIRDYIE_Msk               (0x1U << RCC_CIER_HSIRDYIE_Pos)    /*!< 0x00000008 */
#define RCC_CIER_HSIRDYIE                   RCC_CIER_HSIRDYIE_Msk
#define RCC_CIER_HSERDYIE_Pos               (4U)
#define RCC_CIER_HSERDYIE_Msk               (0x1U << RCC_CIER_HSERDYIE_Pos)    /*!< 0x00000010 */
#define RCC_CIER_HSERDYIE                   RCC_CIER_HSERDYIE_Msk
#define RCC_CIER_PLLRDYIE_Pos               (5U)
#define RCC_CIER_PLLRDYIE_Msk               (0x1U << RCC_CIER_PLLRDYIE_Pos)    /*!< 0x00000020 */
#define RCC_CIER_PLLRDYIE                   RCC_CIER_PLLRDYIE_Msk
#define RCC_CIER_PLLSAI1RDYIE_Pos           (6U)
#define RCC_CIER_PLLSAI1RDYIE_Msk           (0x1U << RCC_CIER_PLLSAI1RDYIE_Pos) /*!< 0x00000040 */
#define RCC_CIER_PLLSAI1RDYIE               RCC_CIER_PLLSAI1RDYIE_Msk
#define RCC_CIER_PLLSAI2RDYIE_Pos           (7U)
#define RCC_CIER_PLLSAI2RDYIE_Msk           (0x1U << RCC_CIER_PLLSAI2RDYIE_Pos) /*!< 0x00000080 */
#define RCC_CIER_PLLSAI2RDYIE               RCC_CIER_PLLSAI2RDYIE_Msk
#define RCC_CIER_LSECSSIE_Pos               (9U)
#define RCC_CIER_LSECSSIE_Msk               (0x1U << RCC_CIER_LSECSSIE_Pos)    /*!< 0x00000200 */
#define RCC_CIER_LSECSSIE                   RCC_CIER_LSECSSIE_Msk

/********************  Bit definition for RCC_CIFR register  ******************/
#define RCC_CIFR_LSIRDYF_Pos                (0U)
#define RCC_CIFR_LSIRDYF_Msk                (0x1U << RCC_CIFR_LSIRDYF_Pos)     /*!< 0x00000001 */
#define RCC_CIFR_LSIRDYF                    RCC_CIFR_LSIRDYF_Msk
#define RCC_CIFR_LSERDYF_Pos                (1U)
#define RCC_CIFR_LSERDYF_Msk                (0x1U << RCC_CIFR_LSERDYF_Pos)     /*!< 0x00000002 */
#define RCC_CIFR_LSERDYF                    RCC_CIFR_LSERDYF_Msk
#define RCC_CIFR_MSIRDYF_Pos                (2U)
#define RCC_CIFR_MSIRDYF_Msk                (0x1U << RCC_CIFR_MSIRDYF_Pos)     /*!< 0x00000004 */
#define RCC_CIFR_MSIRDYF                    RCC_CIFR_MSIRDYF_Msk
#define RCC_CIFR_HSIRDYF_Pos                (3U)
#define RCC_CIFR_HSIRDYF_Msk                (0x1U << RCC_CIFR_HSIRDYF_Pos)     /*!< 0x00000008 */
#define RCC_CIFR_HSIRDYF                    RCC_CIFR_HSIRDYF_Msk
#define RCC_CIFR_HSERDYF_Pos                (4U)
#define RCC_CIFR_HSERDYF_Msk                (0x1U << RCC_CIFR_HSERDYF_Pos)     /*!< 0x00000010 */
#define RCC_CIFR_HSERDYF                    RCC_CIFR_HSERDYF_Msk
#define RCC_CIFR_PLLRDYF_Pos                (5U)
#define RCC_CIFR_PLLRDYF_Msk                (0x1U << RCC_CIFR_PLLRDYF_Pos)     /*!< 0x00000020 */
#define RCC_CIFR_PLLRDYF                    RCC_CIFR_PLLRDYF_Msk
#define RCC_CIFR_PLLSAI1RDYF_Pos            (6U)
#define RCC_CIFR_PLLSAI1RDYF_Msk            (0x1U << RCC_CIFR_PLLSAI1RDYF_Pos) /*!< 0x00000040 */
#define RCC_CIFR_PLLSAI1RDYF                RCC_CIFR_PLLSAI1RDYF_Msk
#define RCC_CIFR_PLLSAI2RDYF_Pos            (7U)
#define RCC_CIFR_PLLSAI2RDYF_Msk            (0x1U << RCC_CIFR_PLLSAI2RDYF_Pos) /*!< 0x00000080 */
#define RCC_CIFR_PLLSAI2RDYF                RCC_CIFR_PLLSAI2RDYF_Msk
#define RCC_CIFR_CSSF_Pos                   (8U)
#define RCC_CIFR_CSSF_Msk                   (0x1U << RCC_CIFR_CSSF_Pos)        /*!< 0x00000100 */
#define RCC_CIFR_CSSF                       RCC_CIFR_CSSF_Msk
#define RCC_CIFR_LSECSSF_Pos                (9U)
#define RCC_CIFR_LSECSSF_Msk                (0x1U << RCC_CIFR_LSECSSF_Pos)     /*!< 0x00000200 */
#define RCC_CIFR_LSECSSF                    RCC_CIFR_LSECSSF_Msk

/********************  Bit definition for RCC_CICR register  ******************/
#define RCC_CICR_LSIRDYC_Pos                (0U)
#define RCC_CICR_LSIRDYC_Msk                (0x1U << RCC_CICR_LSIRDYC_Pos)     /*!< 0x00000001 */
#define RCC_CICR_LSIRDYC                    RCC_CICR_LSIRDYC_Msk
#define RCC_CICR_LSERDYC_Pos                (1U)
#define RCC_CICR_LSERDYC_Msk                (0x1U << RCC_CICR_LSERDYC_Pos)     /*!< 0x00000002 */
#define RCC_CICR_LSERDYC                    RCC_CICR_LSERDYC_Msk
#define RCC_CICR_MSIRDYC_Pos                (2U)
#define RCC_CICR_MSIRDYC_Msk                (0x1U << RCC_CICR_MSIRDYC_Pos)     /*!< 0x00000004 */
#define RCC_CICR_MSIRDYC                    RCC_CICR_MSIRDYC_Msk
#define RCC_CICR_HSIRDYC_Pos                (3U)
#define RCC_CICR_HSIRDYC_Msk                (0x1U << RCC_CICR_HSIRDYC_Pos)     /*!< 0x00000008 */
#define RCC_CICR_HSIRDYC                    RCC_CICR_HSIRDYC_Msk
#define RCC_CICR_HSERDYC_Pos                (4U)
#define RCC_CICR_HSERDYC_Msk                (0x1U << RCC_CICR_HSERDYC_Pos)     /*!< 0x00000010 */
#define RCC_CICR_HSERDYC                    RCC_CICR_HSERDYC_Msk
#define RCC_CICR_PLLRDYC_Pos                (5U)
#define RCC_CICR_PLLRDYC_Msk                (0x1U << RCC_CICR_PLLRDYC_Pos)     /*!< 0x00000020 */
#define RCC_CICR_PLLRDYC                    RCC_CICR_PLLRDYC_Msk
#define RCC_CICR_PLLSAI1RDYC_Pos            (6U)
#define RCC_CICR_PLLSAI1RDYC_Msk            (0x1U << RCC_CICR_PLLSAI1RDYC_Pos) /*!< 0x00000040 */
#define RCC_CICR_PLLSAI1RDYC                RCC_CICR_PLLSAI1RDYC_Msk
#define RCC_CICR_PLLSAI2RDYC_Pos            (7U)
#define RCC_CICR_PLLSAI2RDYC_Msk            (0x1U << RCC_CICR_PLLSAI2RDYC_Pos) /*!< 0x00000080 */
#define RCC_CICR_PLLSAI2RDYC                RCC_CICR_PLLSAI2RDYC_Msk
#define RCC_CICR_CSSC_Pos                   (8U)
#define RCC_CICR_CSSC_Msk                   (0x1U << RCC_CICR_CSSC_Pos)        /*!< 0x00000100 */
#define RCC_CICR_CSSC                       RCC_CICR_CSSC_Msk
#define RCC_CICR_LSECSSC_Pos                (9U)
#define RCC_CICR_LSECSSC_Msk                (0x1U << RCC_CICR_LSECSSC_Pos)     /*!< 0x00000200 */
#define RCC_CICR_LSECSSC                    RCC_CICR_LSECSSC_Msk

/********************  Bit definition for RCC_AHB1RSTR register  **************/
#define RCC_AHB1RSTR_DMA1RST_Pos            (0U)
#define RCC_AHB1RSTR_DMA1RST_Msk            (0x1U << RCC_AHB1RSTR_DMA1RST_Pos) /*!< 0x00000001 */
#define RCC_AHB1RSTR_DMA1RST                RCC_AHB1RSTR_DMA1RST_Msk
#define RCC_AHB1RSTR_DMA2RST_Pos            (1U)
#define RCC_AHB1RSTR_DMA2RST_Msk            (0x1U << RCC_AHB1RSTR_DMA2RST_Pos) /*!< 0x00000002 */
#define RCC_AHB1RSTR_DMA2RST                RCC_AHB1RSTR_DMA2RST_Msk
#define RCC_AHB1RSTR_FLASHRST_Pos           (8U)
#define RCC_AHB1RSTR_FLASHRST_Msk           (0x1U << RCC_AHB1RSTR_FLASHRST_Pos) /*!< 0x00000100 */
#define RCC_AHB1RSTR_FLASHRST               RCC_AHB1RSTR_FLASHRST_Msk
#define RCC_AHB1RSTR_CRCRST_Pos             (12U)
#define RCC_AHB1RSTR_CRCRST_Msk             (0x1U << RCC_AHB1RSTR_CRCRST_Pos)  /*!< 0x00001000 */
#define RCC_AHB1RSTR_CRCRST                 RCC_AHB1RSTR_CRCRST_Msk
#define RCC_AHB1RSTR_TSCRST_Pos             (16U)
#define RCC_AHB1RSTR_TSCRST_Msk             (0x1U << RCC_AHB1RSTR_TSCRST_Pos)  /*!< 0x00010000 */
#define RCC_AHB1RSTR_TSCRST                 RCC_AHB1RSTR_TSCRST_Msk

/********************  Bit definition for RCC_AHB2RSTR register  **************/
#define RCC_AHB2RSTR_GPIOARST_Pos           (0U)
#define RCC_AHB2RSTR_GPIOARST_Msk           (0x1U << RCC_AHB2RSTR_GPIOARST_Pos) /*!< 0x00000001 */
#define RCC_AHB2RSTR_GPIOARST               RCC_AHB2RSTR_GPIOARST_Msk
#define RCC_AHB2RSTR_GPIOBRST_Pos           (1U)
#define RCC_AHB2RSTR_GPIOBRST_Msk           (0x1U << RCC_AHB2RSTR_GPIOBRST_Pos) /*!< 0x00000002 */
#define RCC_AHB2RSTR_GPIOBRST               RCC_AHB2RSTR_GPIOBRST_Msk
#define RCC_AHB2RSTR_GPIOCRST_Pos           (2U)
#define RCC_AHB2RSTR_GPIOCRST_Msk           (0x1U << RCC_AHB2RSTR_GPIOCRST_Pos) /*!< 0x00000004 */
#define RCC_AHB2RSTR_GPIOCRST               RCC_AHB2RSTR_GPIOCRST_Msk
#define RCC_AHB2RSTR_GPIODRST_Pos           (3U)
#define RCC_AHB2RSTR_GPIODRST_Msk           (0x1U << RCC_AHB2RSTR_GPIODRST_Pos) /*!< 0x00000008 */
#define RCC_AHB2RSTR_GPIODRST               RCC_AHB2RSTR_GPIODRST_Msk
#define RCC_AHB2RSTR_GPIOERST_Pos           (4U)
#define RCC_AHB2RSTR_GPIOERST_Msk           (0x1U << RCC_AHB2RSTR_GPIOERST_Pos) /*!< 0x00000010 */
#define RCC_AHB2RSTR_GPIOERST               RCC_AHB2RSTR_GPIOERST_Msk
#define RCC_AHB2RSTR_GPIOFRST_Pos           (5U)
#define RCC_AHB2RSTR_GPIOFRST_Msk           (0x1U << RCC_AHB2RSTR_GPIOFRST_Pos) /*!< 0x00000020 */
#define RCC_AHB2RSTR_GPIOFRST               RCC_AHB2RSTR_GPIOFRST_Msk
#define RCC_AHB2RSTR_GPIOGRST_Pos           (6U)
#define RCC_AHB2RSTR_GPIOGRST_Msk           (0x1U << RCC_AHB2RSTR_GPIOGRST_Pos) /*!< 0x00000040 */
#define RCC_AHB2RSTR_GPIOGRST               RCC_AHB2RSTR_GPIOGRST_Msk
#define RCC_AHB2RSTR_GPIOHRST_Pos           (7U)
#define RCC_AHB2RSTR_GPIOHRST_Msk           (0x1U << RCC_AHB2RSTR_GPIOHRST_Pos) /*!< 0x00000080 */
#define RCC_AHB2RSTR_GPIOHRST               RCC_AHB2RSTR_GPIOHRST_Msk
#define RCC_AHB2RSTR_OTGFSRST_Pos           (12U)
#define RCC_AHB2RSTR_OTGFSRST_Msk           (0x1U << RCC_AHB2RSTR_OTGFSRST_Pos) /*!< 0x00001000 */
#define RCC_AHB2RSTR_OTGFSRST               RCC_AHB2RSTR_OTGFSRST_Msk
#define RCC_AHB2RSTR_ADCRST_Pos             (13U)
#define RCC_AHB2RSTR_ADCRST_Msk             (0x1U << RCC_AHB2RSTR_ADCRST_Pos)  /*!< 0x00002000 */
#define RCC_AHB2RSTR_ADCRST                 RCC_AHB2RSTR_ADCRST_Msk
#define RCC_AHB2RSTR_RNGRST_Pos             (18U)
#define RCC_AHB2RSTR_RNGRST_Msk             (0x1U << RCC_AHB2RSTR_RNGRST_Pos)  /*!< 0x00040000 */
#define RCC_AHB2RSTR_RNGRST                 RCC_AHB2RSTR_RNGRST_Msk

/********************  Bit definition for RCC_AHB3RSTR register  **************/
#define RCC_AHB3RSTR_FMCRST_Pos             (0U)
#define RCC_AHB3RSTR_FMCRST_Msk             (0x1U << RCC_AHB3RSTR_FMCRST_Pos)  /*!< 0x00000001 */
#define RCC_AHB3RSTR_FMCRST                 RCC_AHB3RSTR_FMCRST_Msk
#define RCC_AHB3RSTR_QSPIRST_Pos            (8U)
#define RCC_AHB3RSTR_QSPIRST_Msk            (0x1U << RCC_AHB3RSTR_QSPIRST_Pos) /*!< 0x00000100 */
#define RCC_AHB3RSTR_QSPIRST                RCC_AHB3RSTR_QSPIRST_Msk

/********************  Bit definition for RCC_APB1RSTR1 register  **************/
#define RCC_APB1RSTR1_TIM2RST_Pos           (0U)
#define RCC_APB1RSTR1_TIM2RST_Msk           (0x1U << RCC_APB1RSTR1_TIM2RST_Pos) /*!< 0x00000001 */
#define RCC_APB1RSTR1_TIM2RST               RCC_APB1RSTR1_TIM2RST_Msk
#define RCC_APB1RSTR1_TIM3RST_Pos           (1U)
#define RCC_APB1RSTR1_TIM3RST_Msk           (0x1U << RCC_APB1RSTR1_TIM3RST_Pos) /*!< 0x00000002 */
#define RCC_APB1RSTR1_TIM3RST               RCC_APB1RSTR1_TIM3RST_Msk
#define RCC_APB1RSTR1_TIM4RST_Pos           (2U)
#define RCC_APB1RSTR1_TIM4RST_Msk           (0x1U << RCC_APB1RSTR1_TIM4RST_Pos) /*!< 0x00000004 */
#define RCC_APB1RSTR1_TIM4RST               RCC_APB1RSTR1_TIM4RST_Msk
#define RCC_APB1RSTR1_TIM5RST_Pos           (3U)
#define RCC_APB1RSTR1_TIM5RST_Msk           (0x1U << RCC_APB1RSTR1_TIM5RST_Pos) /*!< 0x00000008 */
#define RCC_APB1RSTR1_TIM5RST               RCC_APB1RSTR1_TIM5RST_Msk
#define RCC_APB1RSTR1_TIM6RST_Pos           (4U)
#define RCC_APB1RSTR1_TIM6RST_Msk           (0x1U << RCC_APB1RSTR1_TIM6RST_Pos) /*!< 0x00000010 */
#define RCC_APB1RSTR1_TIM6RST               RCC_APB1RSTR1_TIM6RST_Msk
#define RCC_APB1RSTR1_TIM7RST_Pos           (5U)
#define RCC_APB1RSTR1_TIM7RST_Msk           (0x1U << RCC_APB1RSTR1_TIM7RST_Pos) /*!< 0x00000020 */
#define RCC_APB1RSTR1_TIM7RST               RCC_APB1RSTR1_TIM7RST_Msk
#define RCC_APB1RSTR1_LCDRST_Pos            (9U)
#define RCC_APB1RSTR1_LCDRST_Msk            (0x1U << RCC_APB1RSTR1_LCDRST_Pos) /*!< 0x00000200 */
#define RCC_APB1RSTR1_LCDRST                RCC_APB1RSTR1_LCDRST_Msk
#define RCC_APB1RSTR1_SPI2RST_Pos           (14U)
#define RCC_APB1RSTR1_SPI2RST_Msk           (0x1U << RCC_APB1RSTR1_SPI2RST_Pos) /*!< 0x00004000 */
#define RCC_APB1RSTR1_SPI2RST               RCC_APB1RSTR1_SPI2RST_Msk
#define RCC_APB1RSTR1_SPI3RST_Pos           (15U)
#define RCC_APB1RSTR1_SPI3RST_Msk           (0x1U << RCC_APB1RSTR1_SPI3RST_Pos) /*!< 0x00008000 */
#define RCC_APB1RSTR1_SPI3RST               RCC_APB1RSTR1_SPI3RST_Msk
#define RCC_APB1RSTR1_USART2RST_Pos         (17U)
#define RCC_APB1RSTR1_USART2RST_Msk         (0x1U << RCC_APB1RSTR1_USART2RST_Pos) /*!< 0x00020000 */
#define RCC_APB1RSTR1_USART2RST             RCC_APB1RSTR1_USART2RST_Msk
#define RCC_APB1RSTR1_USART3RST_Pos         (18U)
#define RCC_APB1RSTR1_USART3RST_Msk         (0x1U << RCC_APB1RSTR1_USART3RST_Pos) /*!< 0x00040000 */
#define RCC_APB1RSTR1_USART3RST             RCC_APB1RSTR1_USART3RST_Msk
#define RCC_APB1RSTR1_UART4RST_Pos          (19U)
#define RCC_APB1RSTR1_UART4RST_Msk          (0x1U << RCC_APB1RSTR1_UART4RST_Pos) /*!< 0x00080000 */
#define RCC_APB1RSTR1_UART4RST              RCC_APB1RSTR1_UART4RST_Msk
#define RCC_APB1RSTR1_UART5RST_Pos          (20U)
#define RCC_APB1RSTR1_UART5RST_Msk          (0x1U << RCC_APB1RSTR1_UART5RST_Pos) /*!< 0x00100000 */
#define RCC_APB1RSTR1_UART5RST              RCC_APB1RSTR1_UART5RST_Msk
#define RCC_APB1RSTR1_I2C1RST_Pos           (21U)
#define RCC_APB1RSTR1_I2C1RST_Msk           (0x1U << RCC_APB1RSTR1_I2C1RST_Pos) /*!< 0x00200000 */
#define RCC_APB1RSTR1_I2C1RST               RCC_APB1RSTR1_I2C1RST_Msk
#define RCC_APB1RSTR1_I2C2RST_Pos           (22U)
#define RCC_APB1RSTR1_I2C2RST_Msk           (0x1U << RCC_APB1RSTR1_I2C2RST_Pos) /*!< 0x00400000 */
#define RCC_APB1RSTR1_I2C2RST               RCC_APB1RSTR1_I2C2RST_Msk
#define RCC_APB1RSTR1_I2C3RST_Pos           (23U)
#define RCC_APB1RSTR1_I2C3RST_Msk           (0x1U << RCC_APB1RSTR1_I2C3RST_Pos) /*!< 0x00800000 */
#define RCC_APB1RSTR1_I2C3RST               RCC_APB1RSTR1_I2C3RST_Msk
#define RCC_APB1RSTR1_CAN1RST_Pos           (25U)
#define RCC_APB1RSTR1_CAN1RST_Msk           (0x1U << RCC_APB1RSTR1_CAN1RST_Pos) /*!< 0x02000000 */
#define RCC_APB1RSTR1_CAN1RST               RCC_APB1RSTR1_CAN1RST_Msk
#define RCC_APB1RSTR1_PWRRST_Pos            (28U)
#define RCC_APB1RSTR1_PWRRST_Msk            (0x1U << RCC_APB1RSTR1_PWRRST_Pos) /*!< 0x10000000 */
#define RCC_APB1RSTR1_PWRRST                RCC_APB1RSTR1_PWRRST_Msk
#define RCC_APB1RSTR1_DAC1RST_Pos           (29U)
#define RCC_APB1RSTR1_DAC1RST_Msk           (0x1U << RCC_APB1RSTR1_DAC1RST_Pos) /*!< 0x20000000 */
#define RCC_APB1RSTR1_DAC1RST               RCC_APB1RSTR1_DAC1RST_Msk
#define RCC_APB1RSTR1_OPAMPRST_Pos          (30U)
#define RCC_APB1RSTR1_OPAMPRST_Msk          (0x1U << RCC_APB1RSTR1_OPAMPRST_Pos) /*!< 0x40000000 */
#define RCC_APB1RSTR1_OPAMPRST              RCC_APB1RSTR1_OPAMPRST_Msk
#define RCC_APB1RSTR1_LPTIM1RST_Pos         (31U)
#define RCC_APB1RSTR1_LPTIM1RST_Msk         (0x1U << RCC_APB1RSTR1_LPTIM1RST_Pos) /*!< 0x80000000 */
#define RCC_APB1RSTR1_LPTIM1RST             RCC_APB1RSTR1_LPTIM1RST_Msk

/********************  Bit definition for RCC_APB1RSTR2 register  **************/
#define RCC_APB1RSTR2_LPUART1RST_Pos        (0U)
#define RCC_APB1RSTR2_LPUART1RST_Msk        (0x1U << RCC_APB1RSTR2_LPUART1RST_Pos) /*!< 0x00000001 */
#define RCC_APB1RSTR2_LPUART1RST            RCC_APB1RSTR2_LPUART1RST_Msk
#define RCC_APB1RSTR2_SWPMI1RST_Pos         (2U)
#define RCC_APB1RSTR2_SWPMI1RST_Msk         (0x1U << RCC_APB1RSTR2_SWPMI1RST_Pos) /*!< 0x00000004 */
#define RCC_APB1RSTR2_SWPMI1RST             RCC_APB1RSTR2_SWPMI1RST_Msk
#define RCC_APB1RSTR2_LPTIM2RST_Pos         (5U)
#define RCC_APB1RSTR2_LPTIM2RST_Msk         (0x1U << RCC_APB1RSTR2_LPTIM2RST_Pos) /*!< 0x00000020 */
#define RCC_APB1RSTR2_LPTIM2RST             RCC_APB1RSTR2_LPTIM2RST_Msk

/********************  Bit definition for RCC_APB2RSTR register  **************/
#define RCC_APB2RSTR_SYSCFGRST_Pos          (0U)
#define RCC_APB2RSTR_SYSCFGRST_Msk          (0x1U << RCC_APB2RSTR_SYSCFGRST_Pos) /*!< 0x00000001 */
#define RCC_APB2RSTR_SYSCFGRST              RCC_APB2RSTR_SYSCFGRST_Msk
#define RCC_APB2RSTR_SDMMC1RST_Pos          (10U)
#define RCC_APB2RSTR_SDMMC1RST_Msk          (0x1U << RCC_APB2RSTR_SDMMC1RST_Pos) /*!< 0x00000400 */
#define RCC_APB2RSTR_SDMMC1RST              RCC_APB2RSTR_SDMMC1RST_Msk
#define RCC_APB2RSTR_TIM1RST_Pos            (11U)
#define RCC_APB2RSTR_TIM1RST_Msk            (0x1U << RCC_APB2RSTR_TIM1RST_Pos) /*!< 0x00000800 */
#define RCC_APB2RSTR_TIM1RST                RCC_APB2RSTR_TIM1RST_Msk
#define RCC_APB2RSTR_SPI1RST_Pos            (12U)
#define RCC_APB2RSTR_SPI1RST_Msk            (0x1U << RCC_APB2RSTR_SPI1RST_Pos) /*!< 0x00001000 */
#define RCC_APB2RSTR_SPI1RST                RCC_APB2RSTR_SPI1RST_Msk
#define RCC_APB2RSTR_TIM8RST_Pos            (13U)
#define RCC_APB2RSTR_TIM8RST_Msk            (0x1U << RCC_APB2RSTR_TIM8RST_Pos) /*!< 0x00002000 */
#define RCC_APB2RSTR_TIM8RST                RCC_APB2RSTR_TIM8RST_Msk
#define RCC_APB2RSTR_USART1RST_Pos          (14U)
#define RCC_APB2RSTR_USART1RST_Msk          (0x1U << RCC_APB2RSTR_USART1RST_Pos) /*!< 0x00004000 */
#define RCC_APB2RSTR_USART1RST              RCC_APB2RSTR_USART1RST_Msk
#define RCC_APB2RSTR_TIM15RST_Pos           (16U)
#define RCC_APB2RSTR_TIM15RST_Msk           (0x1U << RCC_APB2RSTR_TIM15RST_Pos) /*!< 0x00010000 */
#define RCC_APB2RSTR_TIM15RST               RCC_APB2RSTR_TIM15RST_Msk
#define RCC_APB2RSTR_TIM16RST_Pos           (17U)
#define RCC_APB2RSTR_TIM16RST_Msk           (0x1U << RCC_APB2RSTR_TIM16RST_Pos) /*!< 0x00020000 */
#define RCC_APB2RSTR_TIM16RST               RCC_APB2RSTR_TIM16RST_Msk
#define RCC_APB2RSTR_TIM17RST_Pos           (18U)
#define RCC_APB2RSTR_TIM17RST_Msk           (0x1U << RCC_APB2RSTR_TIM17RST_Pos) /*!< 0x00040000 */
#define RCC_APB2RSTR_TIM17RST               RCC_APB2RSTR_TIM17RST_Msk
#define RCC_APB2RSTR_SAI1RST_Pos            (21U)
#define RCC_APB2RSTR_SAI1RST_Msk            (0x1U << RCC_APB2RSTR_SAI1RST_Pos) /*!< 0x00200000 */
#define RCC_APB2RSTR_SAI1RST                RCC_APB2RSTR_SAI1RST_Msk
#define RCC_APB2RSTR_SAI2RST_Pos            (22U)
#define RCC_APB2RSTR_SAI2RST_Msk            (0x1U << RCC_APB2RSTR_SAI2RST_Pos) /*!< 0x00400000 */
#define RCC_APB2RSTR_SAI2RST                RCC_APB2RSTR_SAI2RST_Msk
#define RCC_APB2RSTR_DFSDM1RST_Pos          (24U)
#define RCC_APB2RSTR_DFSDM1RST_Msk          (0x1U << RCC_APB2RSTR_DFSDM1RST_Pos) /*!< 0x01000000 */
#define RCC_APB2RSTR_DFSDM1RST              RCC_APB2RSTR_DFSDM1RST_Msk

/********************  Bit definition for RCC_AHB1ENR register  ***************/
#define RCC_AHB1ENR_DMA1EN_Pos              (0U)
#define RCC_AHB1ENR_DMA1EN_Msk              (0x1U << RCC_AHB1ENR_DMA1EN_Pos)   /*!< 0x00000001 */
#define RCC_AHB1ENR_DMA1EN                  RCC_AHB1ENR_DMA1EN_Msk
#define RCC_AHB1ENR_DMA2EN_Pos              (1U)
#define RCC_AHB1ENR_DMA2EN_Msk              (0x1U << RCC_AHB1ENR_DMA2EN_Pos)   /*!< 0x00000002 */
#define RCC_AHB1ENR_DMA2EN                  RCC_AHB1ENR_DMA2EN_Msk
#define RCC_AHB1ENR_FLASHEN_Pos             (8U)
#define RCC_AHB1ENR_FLASHEN_Msk             (0x1U << RCC_AHB1ENR_FLASHEN_Pos)  /*!< 0x00000100 */
#define RCC_AHB1ENR_FLASHEN                 RCC_AHB1ENR_FLASHEN_Msk
#define RCC_AHB1ENR_CRCEN_Pos               (12U)
#define RCC_AHB1ENR_CRCEN_Msk               (0x1U << RCC_AHB1ENR_CRCEN_Pos)    /*!< 0x00001000 */
#define RCC_AHB1ENR_CRCEN                   RCC_AHB1ENR_CRCEN_Msk
#define RCC_AHB1ENR_TSCEN_Pos               (16U)
#define RCC_AHB1ENR_TSCEN_Msk               (0x1U << RCC_AHB1ENR_TSCEN_Pos)    /*!< 0x00010000 */
#define RCC_AHB1ENR_TSCEN                   RCC_AHB1ENR_TSCEN_Msk

/********************  Bit definition for RCC_AHB2ENR register  ***************/
#define RCC_AHB2ENR_GPIOAEN_Pos             (0U)
#define RCC_AHB2ENR_GPIOAEN_Msk             (0x1U << RCC_AHB2ENR_GPIOAEN_Pos)  /*!< 0x00000001 */
#define RCC_AHB2ENR_GPIOAEN                 RCC_AHB2ENR_GPIOAEN_Msk
#define RCC_AHB2ENR_GPIOBEN_Pos             (1U)
#define RCC_AHB2ENR_GPIOBEN_Msk             (0x1U << RCC_AHB2ENR_GPIOBEN_Pos)  /*!< 0x00000002 */
#define RCC_AHB2ENR_GPIOBEN                 RCC_AHB2ENR_GPIOBEN_Msk
#define RCC_AHB2ENR_GPIOCEN_Pos             (2U)
#define RCC_AHB2ENR_GPIOCEN_Msk             (0x1U << RCC_AHB2ENR_GPIOCEN_Pos)  /*!< 0x00000004 */
#define RCC_AHB2ENR_GPIOCEN                 RCC_AHB2ENR_GPIOCEN_Msk
#define RCC_AHB2ENR_GPIODEN_Pos             (3U)
#define RCC_AHB2ENR_GPIODEN_Msk             (0x1U << RCC_AHB2ENR_GPIODEN_Pos)  /*!< 0x00000008 */
#define RCC_AHB2ENR_GPIODEN                 RCC_AHB2ENR_GPIODEN_Msk
#define RCC_AHB2ENR_GPIOEEN_Pos             (4U)
#define RCC_AHB2ENR_GPIOEEN_Msk             (0x1U << RCC_AHB2ENR_GPIOEEN_Pos)  /*!< 0x00000010 */
#define RCC_AHB2ENR_GPIOEEN                 RCC_AHB2ENR_GPIOEEN_Msk
#define RCC_AHB2ENR_GPIOFEN_Pos             (5U)
#define RCC_AHB2ENR_GPIOFEN_Msk             (0x1U << RCC_AHB2ENR_GPIOFEN_Pos)  /*!< 0x00000020 */
#define RCC_AHB2ENR_GPIOFEN                 RCC_AHB2ENR_GPIOFEN_Msk
#define RCC_AHB2ENR_GPIOGEN_Pos             (6U)
#define RCC_AHB2ENR_GPIOGEN_Msk             (0x1U << RCC_AHB2ENR_GPIOGEN_Pos)  /*!< 0x00000040 */
#define RCC_AHB2ENR_GPIOGEN                 RCC_AHB2ENR_GPIOGEN_Msk
#define RCC_AHB2ENR_GPIOHEN_Pos             (7U)
#define RCC_AHB2ENR_GPIOHEN_Msk             (0x1U << RCC_AHB2ENR_GPIOHEN_Pos)  /*!< 0x00000080 */
#define RCC_AHB2ENR_GPIOHEN                 RCC_AHB2ENR_GPIOHEN_Msk
#define RCC_AHB2ENR_OTGFSEN_Pos             (12U)
#define RCC_AHB2ENR_OTGFSEN_Msk             (0x1U << RCC_AHB2ENR_OTGFSEN_Pos)  /*!< 0x00001000 */
#define RCC_AHB2ENR_OTGFSEN                 RCC_AHB2ENR_OTGFSEN_Msk
#define RCC_AHB2ENR_ADCEN_Pos               (13U)
#define RCC_AHB2ENR_ADCEN_Msk               (0x1U << RCC_AHB2ENR_ADCEN_Pos)    /*!< 0x00002000 */
#define RCC_AHB2ENR_ADCEN                   RCC_AHB2ENR_ADCEN_Msk
#define RCC_AHB2ENR_RNGEN_Pos               (18U)
#define RCC_AHB2ENR_RNGEN_Msk               (0x1U << RCC_AHB2ENR_RNGEN_Pos)    /*!< 0x00040000 */
#define RCC_AHB2ENR_RNGEN                   RCC_AHB2ENR_RNGEN_Msk

/********************  Bit definition for RCC_AHB3ENR register  ***************/
#define RCC_AHB3ENR_FMCEN_Pos               (0U)
#define RCC_AHB3ENR_FMCEN_Msk               (0x1U << RCC_AHB3ENR_FMCEN_Pos)    /*!< 0x00000001 */
#define RCC_AHB3ENR_FMCEN                   RCC_AHB3ENR_FMCEN_Msk
#define RCC_AHB3ENR_QSPIEN_Pos              (8U)
#define RCC_AHB3ENR_QSPIEN_Msk              (0x1U << RCC_AHB3ENR_QSPIEN_Pos)   /*!< 0x00000100 */
#define RCC_AHB3ENR_QSPIEN                  RCC_AHB3ENR_QSPIEN_Msk

/********************  Bit definition for RCC_APB1ENR1 register  ***************/
#define RCC_APB1ENR1_TIM2EN_Pos             (0U)
#define RCC_APB1ENR1_TIM2EN_Msk             (0x1U << RCC_APB1ENR1_TIM2EN_Pos)  /*!< 0x00000001 */
#define RCC_APB1ENR1_TIM2EN                 RCC_APB1ENR1_TIM2EN_Msk
#define RCC_APB1ENR1_TIM3EN_Pos             (1U)
#define RCC_APB1ENR1_TIM3EN_Msk             (0x1U << RCC_APB1ENR1_TIM3EN_Pos)  /*!< 0x00000002 */
#define RCC_APB1ENR1_TIM3EN                 RCC_APB1ENR1_TIM3EN_Msk
#define RCC_APB1ENR1_TIM4EN_Pos             (2U)
#define RCC_APB1ENR1_TIM4EN_Msk             (0x1U << RCC_APB1ENR1_TIM4EN_Pos)  /*!< 0x00000004 */
#define RCC_APB1ENR1_TIM4EN                 RCC_APB1ENR1_TIM4EN_Msk
#define RCC_APB1ENR1_TIM5EN_Pos             (3U)
#define RCC_APB1ENR1_TIM5EN_Msk             (0x1U << RCC_APB1ENR1_TIM5EN_Pos)  /*!< 0x00000008 */
#define RCC_APB1ENR1_TIM5EN                 RCC_APB1ENR1_TIM5EN_Msk
#define RCC_APB1ENR1_TIM6EN_Pos             (4U)
#define RCC_APB1ENR1_TIM6EN_Msk             (0x1U << RCC_APB1ENR1_TIM6EN_Pos)  /*!< 0x00000010 */
#define RCC_APB1ENR1_TIM6EN                 RCC_APB1ENR1_TIM6EN_Msk
#define RCC_APB1ENR1_TIM7EN_Pos             (5U)
#define RCC_APB1ENR1_TIM7EN_Msk             (0x1U << RCC_APB1ENR1_TIM7EN_Pos)  /*!< 0x00000020 */
#define RCC_APB1ENR1_TIM7EN                 RCC_APB1ENR1_TIM7EN_Msk
#define RCC_APB1ENR1_LCDEN_Pos              (9U)
#define RCC_APB1ENR1_LCDEN_Msk              (0x1U << RCC_APB1ENR1_LCDEN_Pos)   /*!< 0x00000200 */
#define RCC_APB1ENR1_LCDEN                  RCC_APB1ENR1_LCDEN_Msk
#define RCC_APB1ENR1_WWDGEN_Pos             (11U)
#define RCC_APB1ENR1_WWDGEN_Msk             (0x1U << RCC_APB1ENR1_WWDGEN_Pos)  /*!< 0x00000800 */
#define RCC_APB1ENR1_WWDGEN                 RCC_APB1ENR1_WWDGEN_Msk
#define RCC_APB1ENR1_SPI2EN_Pos             (14U)
#define RCC_APB1ENR1_SPI2EN_Msk             (0x1U << RCC_APB1ENR1_SPI2EN_Pos)  /*!< 0x00004000 */
#define RCC_APB1ENR1_SPI2EN                 RCC_APB1ENR1_SPI2EN_Msk
#define RCC_APB1ENR1_SPI3EN_Pos             (15U)
#define RCC_APB1ENR1_SPI3EN_Msk             (0x1U << RCC_APB1ENR1_SPI3EN_Pos)  /*!< 0x00008000 */
#define RCC_APB1ENR1_SPI3EN                 RCC_APB1ENR1_SPI3EN_Msk
#define RCC_APB1ENR1_USART2EN_Pos           (17U)
#define RCC_APB1ENR1_USART2EN_Msk           (0x1U << RCC_APB1ENR1_USART2EN_Pos) /*!< 0x00020000 */
#define RCC_APB1ENR1_USART2EN               RCC_APB1ENR1_USART2EN_Msk
#define RCC_APB1ENR1_USART3EN_Pos           (18U)
#define RCC_APB1ENR1_USART3EN_Msk           (0x1U << RCC_APB1ENR1_USART3EN_Pos) /*!< 0x00040000 */
#define RCC_APB1ENR1_USART3EN               RCC_APB1ENR1_USART3EN_Msk
#define RCC_APB1ENR1_UART4EN_Pos            (19U)
#define RCC_APB1ENR1_UART4EN_Msk            (0x1U << RCC_APB1ENR1_UART4EN_Pos) /*!< 0x00080000 */
#define RCC_APB1ENR1_UART4EN                RCC_APB1ENR1_UART4EN_Msk
#define RCC_APB1ENR1_UART5EN_Pos            (20U)
#define RCC_APB1ENR1_UART5EN_Msk            (0x1U << RCC_APB1ENR1_UART5EN_Pos) /*!< 0x00100000 */
#define RCC_APB1ENR1_UART5EN                RCC_APB1ENR1_UART5EN_Msk
#define RCC_APB1ENR1_I2C1EN_Pos             (21U)
#define RCC_APB1ENR1_I2C1EN_Msk             (0x1U << RCC_APB1ENR1_I2C1EN_Pos)  /*!< 0x00200000 */
#define RCC_APB1ENR1_I2C1EN                 RCC_APB1ENR1_I2C1EN_Msk
#define RCC_APB1ENR1_I2C2EN_Pos             (22U)
#define RCC_APB1ENR1_I2C2EN_Msk             (0x1U << RCC_APB1ENR1_I2C2EN_Pos)  /*!< 0x00400000 */
#define RCC_APB1ENR1_I2C2EN                 RCC_APB1ENR1_I2C2EN_Msk
#define RCC_APB1ENR1_I2C3EN_Pos             (23U)
#define RCC_APB1ENR1_I2C3EN_Msk             (0x1U << RCC_APB1ENR1_I2C3EN_Pos)  /*!< 0x00800000 */
#define RCC_APB1ENR1_I2C3EN                 RCC_APB1ENR1_I2C3EN_Msk
#define RCC_APB1ENR1_CAN1EN_Pos             (25U)
#define RCC_APB1ENR1_CAN1EN_Msk             (0x1U << RCC_APB1ENR1_CAN1EN_Pos)  /*!< 0x02000000 */
#define RCC_APB1ENR1_CAN1EN                 RCC_APB1ENR1_CAN1EN_Msk
#define RCC_APB1ENR1_PWREN_Pos              (28U)
#define RCC_APB1ENR1_PWREN_Msk              (0x1U << RCC_APB1ENR1_PWREN_Pos)   /*!< 0x10000000 */
#define RCC_APB1ENR1_PWREN                  RCC_APB1ENR1_PWREN_Msk
#define RCC_APB1ENR1_DAC1EN_Pos             (29U)
#define RCC_APB1ENR1_DAC1EN_Msk             (0x1U << RCC_APB1ENR1_DAC1EN_Pos)  /*!< 0x20000000 */
#define RCC_APB1ENR1_DAC1EN                 RCC_APB1ENR1_DAC1EN_Msk
#define RCC_APB1ENR1_OPAMPEN_Pos            (30U)
#define RCC_APB1ENR1_OPAMPEN_Msk            (0x1U << RCC_APB1ENR1_OPAMPEN_Pos) /*!< 0x40000000 */
#define RCC_APB1ENR1_OPAMPEN                RCC_APB1ENR1_OPAMPEN_Msk
#define RCC_APB1ENR1_LPTIM1EN_Pos           (31U)
#define RCC_APB1ENR1_LPTIM1EN_Msk           (0x1U << RCC_APB1ENR1_LPTIM1EN_Pos) /*!< 0x80000000 */
#define RCC_APB1ENR1_LPTIM1EN               RCC_APB1ENR1_LPTIM1EN_Msk

/********************  Bit definition for RCC_APB1RSTR2 register  **************/
#define RCC_APB1ENR2_LPUART1EN_Pos          (0U)
#define RCC_APB1ENR2_LPUART1EN_Msk          (0x1U << RCC_APB1ENR2_LPUART1EN_Pos) /*!< 0x00000001 */
#define RCC_APB1ENR2_LPUART1EN              RCC_APB1ENR2_LPUART1EN_Msk
#define RCC_APB1ENR2_SWPMI1EN_Pos           (2U)
#define RCC_APB1ENR2_SWPMI1EN_Msk           (0x1U << RCC_APB1ENR2_SWPMI1EN_Pos) /*!< 0x00000004 */
#define RCC_APB1ENR2_SWPMI1EN               RCC_APB1ENR2_SWPMI1EN_Msk
#define RCC_APB1ENR2_LPTIM2EN_Pos           (5U)
#define RCC_APB1ENR2_LPTIM2EN_Msk           (0x1U << RCC_APB1ENR2_LPTIM2EN_Pos) /*!< 0x00000020 */
#define RCC_APB1ENR2_LPTIM2EN               RCC_APB1ENR2_LPTIM2EN_Msk

/********************  Bit definition for RCC_APB2ENR register  ***************/
#define RCC_APB2ENR_SYSCFGEN_Pos            (0U)
#define RCC_APB2ENR_SYSCFGEN_Msk            (0x1U << RCC_APB2ENR_SYSCFGEN_Pos) /*!< 0x00000001 */
#define RCC_APB2ENR_SYSCFGEN                RCC_APB2ENR_SYSCFGEN_Msk
#define RCC_APB2ENR_FWEN_Pos                (7U)
#define RCC_APB2ENR_FWEN_Msk                (0x1U << RCC_APB2ENR_FWEN_Pos)     /*!< 0x00000080 */
#define RCC_APB2ENR_FWEN                    RCC_APB2ENR_FWEN_Msk
#define RCC_APB2ENR_SDMMC1EN_Pos            (10U)
#define RCC_APB2ENR_SDMMC1EN_Msk            (0x1U << RCC_APB2ENR_SDMMC1EN_Pos) /*!< 0x00000400 */
#define RCC_APB2ENR_SDMMC1EN                RCC_APB2ENR_SDMMC1EN_Msk
#define RCC_APB2ENR_TIM1EN_Pos              (11U)
#define RCC_APB2ENR_TIM1EN_Msk              (0x1U << RCC_APB2ENR_TIM1EN_Pos)   /*!< 0x00000800 */
#define RCC_APB2ENR_TIM1EN                  RCC_APB2ENR_TIM1EN_Msk
#define RCC_APB2ENR_SPI1EN_Pos              (12U)
#define RCC_APB2ENR_SPI1EN_Msk              (0x1U << RCC_APB2ENR_SPI1EN_Pos)   /*!< 0x00001000 */
#define RCC_APB2ENR_SPI1EN                  RCC_APB2ENR_SPI1EN_Msk
#define RCC_APB2ENR_TIM8EN_Pos              (13U)
#define RCC_APB2ENR_TIM8EN_Msk              (0x1U << RCC_APB2ENR_TIM8EN_Pos)   /*!< 0x00002000 */
#define RCC_APB2ENR_TIM8EN                  RCC_APB2ENR_TIM8EN_Msk
#define RCC_APB2ENR_USART1EN_Pos            (14U)
#define RCC_APB2ENR_USART1EN_Msk            (0x1U << RCC_APB2ENR_USART1EN_Pos) /*!< 0x00004000 */
#define RCC_APB2ENR_USART1EN                RCC_APB2ENR_USART1EN_Msk
#define RCC_APB2ENR_TIM15EN_Pos             (16U)
#define RCC_APB2ENR_TIM15EN_Msk             (0x1U << RCC_APB2ENR_TIM15EN_Pos)  /*!< 0x00010000 */
#define RCC_APB2ENR_TIM15EN                 RCC_APB2ENR_TIM15EN_Msk
#define RCC_APB2ENR_TIM16EN_Pos             (17U)
#define RCC_APB2ENR_TIM16EN_Msk             (0x1U << RCC_APB2ENR_TIM16EN_Pos)  /*!< 0x00020000 */
#define RCC_APB2ENR_TIM16EN                 RCC_APB2ENR_TIM16EN_Msk
#define RCC_APB2ENR_TIM17EN_Pos             (18U)
#define RCC_APB2ENR_TIM17EN_Msk             (0x1U << RCC_APB2ENR_TIM17EN_Pos)  /*!< 0x00040000 */
#define RCC_APB2ENR_TIM17EN                 RCC_APB2ENR_TIM17EN_Msk
#define RCC_APB2ENR_SAI1EN_Pos              (21U)
#define RCC_APB2ENR_SAI1EN_Msk              (0x1U << RCC_APB2ENR_SAI1EN_Pos)   /*!< 0x00200000 */
#define RCC_APB2ENR_SAI1EN                  RCC_APB2ENR_SAI1EN_Msk
#define RCC_APB2ENR_SAI2EN_Pos              (22U)
#define RCC_APB2ENR_SAI2EN_Msk              (0x1U << RCC_APB2ENR_SAI2EN_Pos)   /*!< 0x00400000 */
#define RCC_APB2ENR_SAI2EN                  RCC_APB2ENR_SAI2EN_Msk
#define RCC_APB2ENR_DFSDM1EN_Pos            (24U)
#define RCC_APB2ENR_DFSDM1EN_Msk            (0x1U << RCC_APB2ENR_DFSDM1EN_Pos) /*!< 0x01000000 */
#define RCC_APB2ENR_DFSDM1EN                RCC_APB2ENR_DFSDM1EN_Msk

/********************  Bit definition for RCC_AHB1SMENR register  ***************/
#define RCC_AHB1SMENR_DMA1SMEN_Pos          (0U)
#define RCC_AHB1SMENR_DMA1SMEN_Msk          (0x1U << RCC_AHB1SMENR_DMA1SMEN_Pos) /*!< 0x00000001 */
#define RCC_AHB1SMENR_DMA1SMEN              RCC_AHB1SMENR_DMA1SMEN_Msk
#define RCC_AHB1SMENR_DMA2SMEN_Pos          (1U)
#define RCC_AHB1SMENR_DMA2SMEN_Msk          (0x1U << RCC_AHB1SMENR_DMA2SMEN_Pos) /*!< 0x00000002 */
#define RCC_AHB1SMENR_DMA2SMEN              RCC_AHB1SMENR_DMA2SMEN_Msk
#define RCC_AHB1SMENR_FLASHSMEN_Pos         (8U)
#define RCC_AHB1SMENR_FLASHSMEN_Msk         (0x1U << RCC_AHB1SMENR_FLASHSMEN_Pos) /*!< 0x00000100 */
#define RCC_AHB1SMENR_FLASHSMEN             RCC_AHB1SMENR_FLASHSMEN_Msk
#define RCC_AHB1SMENR_SRAM1SMEN_Pos         (9U)
#define RCC_AHB1SMENR_SRAM1SMEN_Msk         (0x1U << RCC_AHB1SMENR_SRAM1SMEN_Pos) /*!< 0x00000200 */
#define RCC_AHB1SMENR_SRAM1SMEN             RCC_AHB1SMENR_SRAM1SMEN_Msk
#define RCC_AHB1SMENR_CRCSMEN_Pos           (12U)
#define RCC_AHB1SMENR_CRCSMEN_Msk           (0x1U << RCC_AHB1SMENR_CRCSMEN_Pos) /*!< 0x00001000 */
#define RCC_AHB1SMENR_CRCSMEN               RCC_AHB1SMENR_CRCSMEN_Msk
#define RCC_AHB1SMENR_TSCSMEN_Pos           (16U)
#define RCC_AHB1SMENR_TSCSMEN_Msk           (0x1U << RCC_AHB1SMENR_TSCSMEN_Pos) /*!< 0x00010000 */
#define RCC_AHB1SMENR_TSCSMEN               RCC_AHB1SMENR_TSCSMEN_Msk

/********************  Bit definition for RCC_AHB2SMENR register  *************/
#define RCC_AHB2SMENR_GPIOASMEN_Pos         (0U)
#define RCC_AHB2SMENR_GPIOASMEN_Msk         (0x1U << RCC_AHB2SMENR_GPIOASMEN_Pos) /*!< 0x00000001 */
#define RCC_AHB2SMENR_GPIOASMEN             RCC_AHB2SMENR_GPIOASMEN_Msk
#define RCC_AHB2SMENR_GPIOBSMEN_Pos         (1U)
#define RCC_AHB2SMENR_GPIOBSMEN_Msk         (0x1U << RCC_AHB2SMENR_GPIOBSMEN_Pos) /*!< 0x00000002 */
#define RCC_AHB2SMENR_GPIOBSMEN             RCC_AHB2SMENR_GPIOBSMEN_Msk
#define RCC_AHB2SMENR_GPIOCSMEN_Pos         (2U)
#define RCC_AHB2SMENR_GPIOCSMEN_Msk         (0x1U << RCC_AHB2SMENR_GPIOCSMEN_Pos) /*!< 0x00000004 */
#define RCC_AHB2SMENR_GPIOCSMEN             RCC_AHB2SMENR_GPIOCSMEN_Msk
#define RCC_AHB2SMENR_GPIODSMEN_Pos         (3U)
#define RCC_AHB2SMENR_GPIODSMEN_Msk         (0x1U << RCC_AHB2SMENR_GPIODSMEN_Pos) /*!< 0x00000008 */
#define RCC_AHB2SMENR_GPIODSMEN             RCC_AHB2SMENR_GPIODSMEN_Msk
#define RCC_AHB2SMENR_GPIOESMEN_Pos         (4U)
#define RCC_AHB2SMENR_GPIOESMEN_Msk         (0x1U << RCC_AHB2SMENR_GPIOESMEN_Pos) /*!< 0x00000010 */
#define RCC_AHB2SMENR_GPIOESMEN             RCC_AHB2SMENR_GPIOESMEN_Msk
#define RCC_AHB2SMENR_GPIOFSMEN_Pos         (5U)
#define RCC_AHB2SMENR_GPIOFSMEN_Msk         (0x1U << RCC_AHB2SMENR_GPIOFSMEN_Pos) /*!< 0x00000020 */
#define RCC_AHB2SMENR_GPIOFSMEN             RCC_AHB2SMENR_GPIOFSMEN_Msk
#define RCC_AHB2SMENR_GPIOGSMEN_Pos         (6U)
#define RCC_AHB2SMENR_GPIOGSMEN_Msk         (0x1U << RCC_AHB2SMENR_GPIOGSMEN_Pos) /*!< 0x00000040 */
#define RCC_AHB2SMENR_GPIOGSMEN             RCC_AHB2SMENR_GPIOGSMEN_Msk
#define RCC_AHB2SMENR_GPIOHSMEN_Pos         (7U)
#define RCC_AHB2SMENR_GPIOHSMEN_Msk         (0x1U << RCC_AHB2SMENR_GPIOHSMEN_Pos) /*!< 0x00000080 */
#define RCC_AHB2SMENR_GPIOHSMEN             RCC_AHB2SMENR_GPIOHSMEN_Msk
#define RCC_AHB2SMENR_SRAM2SMEN_Pos         (9U)
#define RCC_AHB2SMENR_SRAM2SMEN_Msk         (0x1U << RCC_AHB2SMENR_SRAM2SMEN_Pos) /*!< 0x00000200 */
#define RCC_AHB2SMENR_SRAM2SMEN             RCC_AHB2SMENR_SRAM2SMEN_Msk
#define RCC_AHB2SMENR_OTGFSSMEN_Pos         (12U)
#define RCC_AHB2SMENR_OTGFSSMEN_Msk         (0x1U << RCC_AHB2SMENR_OTGFSSMEN_Pos) /*!< 0x00001000 */
#define RCC_AHB2SMENR_OTGFSSMEN             RCC_AHB2SMENR_OTGFSSMEN_Msk
#define RCC_AHB2SMENR_ADCSMEN_Pos           (13U)
#define RCC_AHB2SMENR_ADCSMEN_Msk           (0x1U << RCC_AHB2SMENR_ADCSMEN_Pos) /*!< 0x00002000 */
#define RCC_AHB2SMENR_ADCSMEN               RCC_AHB2SMENR_ADCSMEN_Msk
#define RCC_AHB2SMENR_RNGSMEN_Pos           (18U)
#define RCC_AHB2SMENR_RNGSMEN_Msk           (0x1U << RCC_AHB2SMENR_RNGSMEN_Pos) /*!< 0x00040000 */
#define RCC_AHB2SMENR_RNGSMEN               RCC_AHB2SMENR_RNGSMEN_Msk

/********************  Bit definition for RCC_AHB3SMENR register  *************/
#define RCC_AHB3SMENR_FMCSMEN_Pos           (0U)
#define RCC_AHB3SMENR_FMCSMEN_Msk           (0x1U << RCC_AHB3SMENR_FMCSMEN_Pos) /*!< 0x00000001 */
#define RCC_AHB3SMENR_FMCSMEN               RCC_AHB3SMENR_FMCSMEN_Msk
#define RCC_AHB3SMENR_QSPISMEN_Pos          (8U)
#define RCC_AHB3SMENR_QSPISMEN_Msk          (0x1U << RCC_AHB3SMENR_QSPISMEN_Pos) /*!< 0x00000100 */
#define RCC_AHB3SMENR_QSPISMEN              RCC_AHB3SMENR_QSPISMEN_Msk

/********************  Bit definition for RCC_APB1SMENR1 register  *************/
#define RCC_APB1SMENR1_TIM2SMEN_Pos         (0U)
#define RCC_APB1SMENR1_TIM2SMEN_Msk         (0x1U << RCC_APB1SMENR1_TIM2SMEN_Pos) /*!< 0x00000001 */
#define RCC_APB1SMENR1_TIM2SMEN             RCC_APB1SMENR1_TIM2SMEN_Msk
#define RCC_APB1SMENR1_TIM3SMEN_Pos         (1U)
#define RCC_APB1SMENR1_TIM3SMEN_Msk         (0x1U << RCC_APB1SMENR1_TIM3SMEN_Pos) /*!< 0x00000002 */
#define RCC_APB1SMENR1_TIM3SMEN             RCC_APB1SMENR1_TIM3SMEN_Msk
#define RCC_APB1SMENR1_TIM4SMEN_Pos         (2U)
#define RCC_APB1SMENR1_TIM4SMEN_Msk         (0x1U << RCC_APB1SMENR1_TIM4SMEN_Pos) /*!< 0x00000004 */
#define RCC_APB1SMENR1_TIM4SMEN             RCC_APB1SMENR1_TIM4SMEN_Msk
#define RCC_APB1SMENR1_TIM5SMEN_Pos         (3U)
#define RCC_APB1SMENR1_TIM5SMEN_Msk         (0x1U << RCC_APB1SMENR1_TIM5SMEN_Pos) /*!< 0x00000008 */
#define RCC_APB1SMENR1_TIM5SMEN             RCC_APB1SMENR1_TIM5SMEN_Msk
#define RCC_APB1SMENR1_TIM6SMEN_Pos         (4U)
#define RCC_APB1SMENR1_TIM6SMEN_Msk         (0x1U << RCC_APB1SMENR1_TIM6SMEN_Pos) /*!< 0x00000010 */
#define RCC_APB1SMENR1_TIM6SMEN             RCC_APB1SMENR1_TIM6SMEN_Msk
#define RCC_APB1SMENR1_TIM7SMEN_Pos         (5U)
#define RCC_APB1SMENR1_TIM7SMEN_Msk         (0x1U << RCC_APB1SMENR1_TIM7SMEN_Pos) /*!< 0x00000020 */
#define RCC_APB1SMENR1_TIM7SMEN             RCC_APB1SMENR1_TIM7SMEN_Msk
#define RCC_APB1SMENR1_LCDSMEN_Pos          (9U)
#define RCC_APB1SMENR1_LCDSMEN_Msk          (0x1U << RCC_APB1SMENR1_LCDSMEN_Pos) /*!< 0x00000200 */
#define RCC_APB1SMENR1_LCDSMEN              RCC_APB1SMENR1_LCDSMEN_Msk
#define RCC_APB1SMENR1_WWDGSMEN_Pos         (11U)
#define RCC_APB1SMENR1_WWDGSMEN_Msk         (0x1U << RCC_APB1SMENR1_WWDGSMEN_Pos) /*!< 0x00000800 */
#define RCC_APB1SMENR1_WWDGSMEN             RCC_APB1SMENR1_WWDGSMEN_Msk
#define RCC_APB1SMENR1_SPI2SMEN_Pos         (14U)
#define RCC_APB1SMENR1_SPI2SMEN_Msk         (0x1U << RCC_APB1SMENR1_SPI2SMEN_Pos) /*!< 0x00004000 */
#define RCC_APB1SMENR1_SPI2SMEN             RCC_APB1SMENR1_SPI2SMEN_Msk
#define RCC_APB1SMENR1_SPI3SMEN_Pos         (15U)
#define RCC_APB1SMENR1_SPI3SMEN_Msk         (0x1U << RCC_APB1SMENR1_SPI3SMEN_Pos) /*!< 0x00008000 */
#define RCC_APB1SMENR1_SPI3SMEN             RCC_APB1SMENR1_SPI3SMEN_Msk
#define RCC_APB1SMENR1_USART2SMEN_Pos       (17U)
#define RCC_APB1SMENR1_USART2SMEN_Msk       (0x1U << RCC_APB1SMENR1_USART2SMEN_Pos) /*!< 0x00020000 */
#define RCC_APB1SMENR1_USART2SMEN           RCC_APB1SMENR1_USART2SMEN_Msk
#define RCC_APB1SMENR1_USART3SMEN_Pos       (18U)
#define RCC_APB1SMENR1_USART3SMEN_Msk       (0x1U << RCC_APB1SMENR1_USART3SMEN_Pos) /*!< 0x00040000 */
#define RCC_APB1SMENR1_USART3SMEN           RCC_APB1SMENR1_USART3SMEN_Msk
#define RCC_APB1SMENR1_UART4SMEN_Pos        (19U)
#define RCC_APB1SMENR1_UART4SMEN_Msk        (0x1U << RCC_APB1SMENR1_UART4SMEN_Pos) /*!< 0x00080000 */
#define RCC_APB1SMENR1_UART4SMEN            RCC_APB1SMENR1_UART4SMEN_Msk
#define RCC_APB1SMENR1_UART5SMEN_Pos        (20U)
#define RCC_APB1SMENR1_UART5SMEN_Msk        (0x1U << RCC_APB1SMENR1_UART5SMEN_Pos) /*!< 0x00100000 */
#define RCC_APB1SMENR1_UART5SMEN            RCC_APB1SMENR1_UART5SMEN_Msk
#define RCC_APB1SMENR1_I2C1SMEN_Pos         (21U)
#define RCC_APB1SMENR1_I2C1SMEN_Msk         (0x1U << RCC_APB1SMENR1_I2C1SMEN_Pos) /*!< 0x00200000 */
#define RCC_APB1SMENR1_I2C1SMEN             RCC_APB1SMENR1_I2C1SMEN_Msk
#define RCC_APB1SMENR1_I2C2SMEN_Pos         (22U)
#define RCC_APB1SMENR1_I2C2SMEN_Msk         (0x1U << RCC_APB1SMENR1_I2C2SMEN_Pos) /*!< 0x00400000 */
#define RCC_APB1SMENR1_I2C2SMEN             RCC_APB1SMENR1_I2C2SMEN_Msk
#define RCC_APB1SMENR1_I2C3SMEN_Pos         (23U)
#define RCC_APB1SMENR1_I2C3SMEN_Msk         (0x1U << RCC_APB1SMENR1_I2C3SMEN_Pos) /*!< 0x00800000 */
#define RCC_APB1SMENR1_I2C3SMEN             RCC_APB1SMENR1_I2C3SMEN_Msk
#define RCC_APB1SMENR1_CAN1SMEN_Pos         (25U)
#define RCC_APB1SMENR1_CAN1SMEN_Msk         (0x1U << RCC_APB1SMENR1_CAN1SMEN_Pos) /*!< 0x02000000 */
#define RCC_APB1SMENR1_CAN1SMEN             RCC_APB1SMENR1_CAN1SMEN_Msk
#define RCC_APB1SMENR1_PWRSMEN_Pos          (28U)
#define RCC_APB1SMENR1_PWRSMEN_Msk          (0x1U << RCC_APB1SMENR1_PWRSMEN_Pos) /*!< 0x10000000 */
#define RCC_APB1SMENR1_PWRSMEN              RCC_APB1SMENR1_PWRSMEN_Msk
#define RCC_APB1SMENR1_DAC1SMEN_Pos         (29U)
#define RCC_APB1SMENR1_DAC1SMEN_Msk         (0x1U << RCC_APB1SMENR1_DAC1SMEN_Pos) /*!< 0x20000000 */
#define RCC_APB1SMENR1_DAC1SMEN             RCC_APB1SMENR1_DAC1SMEN_Msk
#define RCC_APB1SMENR1_OPAMPSMEN_Pos        (30U)
#define RCC_APB1SMENR1_OPAMPSMEN_Msk        (0x1U << RCC_APB1SMENR1_OPAMPSMEN_Pos) /*!< 0x40000000 */
#define RCC_APB1SMENR1_OPAMPSMEN            RCC_APB1SMENR1_OPAMPSMEN_Msk
#define RCC_APB1SMENR1_LPTIM1SMEN_Pos       (31U)
#define RCC_APB1SMENR1_LPTIM1SMEN_Msk       (0x1U << RCC_APB1SMENR1_LPTIM1SMEN_Pos) /*!< 0x80000000 */
#define RCC_APB1SMENR1_LPTIM1SMEN           RCC_APB1SMENR1_LPTIM1SMEN_Msk

/********************  Bit definition for RCC_APB1SMENR2 register  *************/
#define RCC_APB1SMENR2_LPUART1SMEN_Pos      (0U)
#define RCC_APB1SMENR2_LPUART1SMEN_Msk      (0x1U << RCC_APB1SMENR2_LPUART1SMEN_Pos) /*!< 0x00000001 */
#define RCC_APB1SMENR2_LPUART1SMEN          RCC_APB1SMENR2_LPUART1SMEN_Msk
#define RCC_APB1SMENR2_SWPMI1SMEN_Pos       (2U)
#define RCC_APB1SMENR2_SWPMI1SMEN_Msk       (0x1U << RCC_APB1SMENR2_SWPMI1SMEN_Pos) /*!< 0x00000004 */
#define RCC_APB1SMENR2_SWPMI1SMEN           RCC_APB1SMENR2_SWPMI1SMEN_Msk
#define RCC_APB1SMENR2_LPTIM2SMEN_Pos       (5U)
#define RCC_APB1SMENR2_LPTIM2SMEN_Msk       (0x1U << RCC_APB1SMENR2_LPTIM2SMEN_Pos) /*!< 0x00000020 */
#define RCC_APB1SMENR2_LPTIM2SMEN           RCC_APB1SMENR2_LPTIM2SMEN_Msk

/********************  Bit definition for RCC_APB2SMENR register  *************/
#define RCC_APB2SMENR_SYSCFGSMEN_Pos        (0U)
#define RCC_APB2SMENR_SYSCFGSMEN_Msk        (0x1U << RCC_APB2SMENR_SYSCFGSMEN_Pos) /*!< 0x00000001 */
#define RCC_APB2SMENR_SYSCFGSMEN            RCC_APB2SMENR_SYSCFGSMEN_Msk
#define RCC_APB2SMENR_SDMMC1SMEN_Pos        (10U)
#define RCC_APB2SMENR_SDMMC1SMEN_Msk        (0x1U << RCC_APB2SMENR_SDMMC1SMEN_Pos) /*!< 0x00000400 */
#define RCC_APB2SMENR_SDMMC1SMEN            RCC_APB2SMENR_SDMMC1SMEN_Msk
#define RCC_APB2SMENR_TIM1SMEN_Pos          (11U)
#define RCC_APB2SMENR_TIM1SMEN_Msk          (0x1U << RCC_APB2SMENR_TIM1SMEN_Pos) /*!< 0x00000800 */
#define RCC_APB2SMENR_TIM1SMEN              RCC_APB2SMENR_TIM1SMEN_Msk
#define RCC_APB2SMENR_SPI1SMEN_Pos          (12U)
#define RCC_APB2SMENR_SPI1SMEN_Msk          (0x1U << RCC_APB2SMENR_SPI1SMEN_Pos) /*!< 0x00001000 */
#define RCC_APB2SMENR_SPI1SMEN              RCC_APB2SMENR_SPI1SMEN_Msk
#define RCC_APB2SMENR_TIM8SMEN_Pos          (13U)
#define RCC_APB2SMENR_TIM8SMEN_Msk          (0x1U << RCC_APB2SMENR_TIM8SMEN_Pos) /*!< 0x00002000 */
#define RCC_APB2SMENR_TIM8SMEN              RCC_APB2SMENR_TIM8SMEN_Msk
#define RCC_APB2SMENR_USART1SMEN_Pos        (14U)
#define RCC_APB2SMENR_USART1SMEN_Msk        (0x1U << RCC_APB2SMENR_USART1SMEN_Pos) /*!< 0x00004000 */
#define RCC_APB2SMENR_USART1SMEN            RCC_APB2SMENR_USART1SMEN_Msk
#define RCC_APB2SMENR_TIM15SMEN_Pos         (16U)
#define RCC_APB2SMENR_TIM15SMEN_Msk         (0x1U << RCC_APB2SMENR_TIM15SMEN_Pos) /*!< 0x00010000 */
#define RCC_APB2SMENR_TIM15SMEN             RCC_APB2SMENR_TIM15SMEN_Msk
#define RCC_APB2SMENR_TIM16SMEN_Pos         (17U)
#define RCC_APB2SMENR_TIM16SMEN_Msk         (0x1U << RCC_APB2SMENR_TIM16SMEN_Pos) /*!< 0x00020000 */
#define RCC_APB2SMENR_TIM16SMEN             RCC_APB2SMENR_TIM16SMEN_Msk
#define RCC_APB2SMENR_TIM17SMEN_Pos         (18U)
#define RCC_APB2SMENR_TIM17SMEN_Msk         (0x1U << RCC_APB2SMENR_TIM17SMEN_Pos) /*!< 0x00040000 */
#define RCC_APB2SMENR_TIM17SMEN             RCC_APB2SMENR_TIM17SMEN_Msk
#define RCC_APB2SMENR_SAI1SMEN_Pos          (21U)
#define RCC_APB2SMENR_SAI1SMEN_Msk          (0x1U << RCC_APB2SMENR_SAI1SMEN_Pos) /*!< 0x00200000 */
#define RCC_APB2SMENR_SAI1SMEN              RCC_APB2SMENR_SAI1SMEN_Msk
#define RCC_APB2SMENR_SAI2SMEN_Pos          (22U)
#define RCC_APB2SMENR_SAI2SMEN_Msk          (0x1U << RCC_APB2SMENR_SAI2SMEN_Pos) /*!< 0x00400000 */
#define RCC_APB2SMENR_SAI2SMEN              RCC_APB2SMENR_SAI2SMEN_Msk
#define RCC_APB2SMENR_DFSDM1SMEN_Pos        (24U)
#define RCC_APB2SMENR_DFSDM1SMEN_Msk        (0x1U << RCC_APB2SMENR_DFSDM1SMEN_Pos) /*!< 0x01000000 */
#define RCC_APB2SMENR_DFSDM1SMEN            RCC_APB2SMENR_DFSDM1SMEN_Msk

/********************  Bit definition for RCC_CCIPR register  ******************/
#define RCC_CCIPR_USART1SEL_Pos             (0U)
#define RCC_CCIPR_USART1SEL_Msk             (0x3U << RCC_CCIPR_USART1SEL_Pos)  /*!< 0x00000003 */
#define RCC_CCIPR_USART1SEL                 RCC_CCIPR_USART1SEL_Msk
#define RCC_CCIPR_USART1SEL_0               (0x1U << RCC_CCIPR_USART1SEL_Pos)  /*!< 0x00000001 */
#define RCC_CCIPR_USART1SEL_1               (0x2U << RCC_CCIPR_USART1SEL_Pos)  /*!< 0x00000002 */

#define RCC_CCIPR_USART2SEL_Pos             (2U)
#define RCC_CCIPR_USART2SEL_Msk             (0x3U << RCC_CCIPR_USART2SEL_Pos)  /*!< 0x0000000C */
#define RCC_CCIPR_USART2SEL                 RCC_CCIPR_USART2SEL_Msk
#define RCC_CCIPR_USART2SEL_0               (0x1U << RCC_CCIPR_USART2SEL_Pos)  /*!< 0x00000004 */
#define RCC_CCIPR_USART2SEL_1               (0x2U << RCC_CCIPR_USART2SEL_Pos)  /*!< 0x00000008 */

#define RCC_CCIPR_USART3SEL_Pos             (4U)
#define RCC_CCIPR_USART3SEL_Msk             (0x3U << RCC_CCIPR_USART3SEL_Pos)  /*!< 0x00000030 */
#define RCC_CCIPR_USART3SEL                 RCC_CCIPR_USART3SEL_Msk
#define RCC_CCIPR_USART3SEL_0               (0x1U << RCC_CCIPR_USART3SEL_Pos)  /*!< 0x00000010 */
#define RCC_CCIPR_USART3SEL_1               (0x2U << RCC_CCIPR_USART3SEL_Pos)  /*!< 0x00000020 */

#define RCC_CCIPR_UART4SEL_Pos              (6U)
#define RCC_CCIPR_UART4SEL_Msk              (0x3U << RCC_CCIPR_UART4SEL_Pos)   /*!< 0x000000C0 */
#define RCC_CCIPR_UART4SEL                  RCC_CCIPR_UART4SEL_Msk
#define RCC_CCIPR_UART4SEL_0                (0x1U << RCC_CCIPR_UART4SEL_Pos)   /*!< 0x00000040 */
#define RCC_CCIPR_UART4SEL_1                (0x2U << RCC_CCIPR_UART4SEL_Pos)   /*!< 0x00000080 */

#define RCC_CCIPR_UART5SEL_Pos              (8U)
#define RCC_CCIPR_UART5SEL_Msk              (0x3U << RCC_CCIPR_UART5SEL_Pos)   /*!< 0x00000300 */
#define RCC_CCIPR_UART5SEL                  RCC_CCIPR_UART5SEL_Msk
#define RCC_CCIPR_UART5SEL_0                (0x1U << RCC_CCIPR_UART5SEL_Pos)   /*!< 0x00000100 */
#define RCC_CCIPR_UART5SEL_1                (0x2U << RCC_CCIPR_UART5SEL_Pos)   /*!< 0x00000200 */

#define RCC_CCIPR_LPUART1SEL_Pos            (10U)
#define RCC_CCIPR_LPUART1SEL_Msk            (0x3U << RCC_CCIPR_LPUART1SEL_Pos) /*!< 0x00000C00 */
#define RCC_CCIPR_LPUART1SEL                RCC_CCIPR_LPUART1SEL_Msk
#define RCC_CCIPR_LPUART1SEL_0              (0x1U << RCC_CCIPR_LPUART1SEL_Pos) /*!< 0x00000400 */
#define RCC_CCIPR_LPUART1SEL_1              (0x2U << RCC_CCIPR_LPUART1SEL_Pos) /*!< 0x00000800 */

#define RCC_CCIPR_I2C1SEL_Pos               (12U)
#define RCC_CCIPR_I2C1SEL_Msk               (0x3U << RCC_CCIPR_I2C1SEL_Pos)    /*!< 0x00003000 */
#define RCC_CCIPR_I2C1SEL                   RCC_CCIPR_I2C1SEL_Msk
#define RCC_CCIPR_I2C1SEL_0                 (0x1U << RCC_CCIPR_I2C1SEL_Pos)    /*!< 0x00001000 */
#define RCC_CCIPR_I2C1SEL_1                 (0x2U << RCC_CCIPR_I2C1SEL_Pos)    /*!< 0x00002000 */

#define RCC_CCIPR_I2C2SEL_Pos               (14U)
#define RCC_CCIPR_I2C2SEL_Msk               (0x3U << RCC_CCIPR_I2C2SEL_Pos)    /*!< 0x0000C000 */
#define RCC_CCIPR_I2C2SEL                   RCC_CCIPR_I2C2SEL_Msk
#define RCC_CCIPR_I2C2SEL_0                 (0x1U << RCC_CCIPR_I2C2SEL_Pos)    /*!< 0x00004000 */
#define RCC_CCIPR_I2C2SEL_1                 (0x2U << RCC_CCIPR_I2C2SEL_Pos)    /*!< 0x00008000 */

#define RCC_CCIPR_I2C3SEL_Pos               (16U)
#define RCC_CCIPR_I2C3SEL_Msk               (0x3U << RCC_CCIPR_I2C3SEL_Pos)    /*!< 0x00030000 */
#define RCC_CCIPR_I2C3SEL                   RCC_CCIPR_I2C3SEL_Msk
#define RCC_CCIPR_I2C3SEL_0                 (0x1U << RCC_CCIPR_I2C3SEL_Pos)    /*!< 0x00010000 */
#define RCC_CCIPR_I2C3SEL_1                 (0x2U << RCC_CCIPR_I2C3SEL_Pos)    /*!< 0x00020000 */

#define RCC_CCIPR_LPTIM1SEL_Pos             (18U)
#define RCC_CCIPR_LPTIM1SEL_Msk             (0x3U << RCC_CCIPR_LPTIM1SEL_Pos)  /*!< 0x000C0000 */
#define RCC_CCIPR_LPTIM1SEL                 RCC_CCIPR_LPTIM1SEL_Msk
#define RCC_CCIPR_LPTIM1SEL_0               (0x1U << RCC_CCIPR_LPTIM1SEL_Pos)  /*!< 0x00040000 */
#define RCC_CCIPR_LPTIM1SEL_1               (0x2U << RCC_CCIPR_LPTIM1SEL_Pos)  /*!< 0x00080000 */

#define RCC_CCIPR_LPTIM2SEL_Pos             (20U)
#define RCC_CCIPR_LPTIM2SEL_Msk             (0x3U << RCC_CCIPR_LPTIM2SEL_Pos)  /*!< 0x00300000 */
#define RCC_CCIPR_LPTIM2SEL                 RCC_CCIPR_LPTIM2SEL_Msk
#define RCC_CCIPR_LPTIM2SEL_0               (0x1U << RCC_CCIPR_LPTIM2SEL_Pos)  /*!< 0x00100000 */
#define RCC_CCIPR_LPTIM2SEL_1               (0x2U << RCC_CCIPR_LPTIM2SEL_Pos)  /*!< 0x00200000 */

#define RCC_CCIPR_SAI1SEL_Pos               (22U)
#define RCC_CCIPR_SAI1SEL_Msk               (0x3U << RCC_CCIPR_SAI1SEL_Pos)    /*!< 0x00C00000 */
#define RCC_CCIPR_SAI1SEL                   RCC_CCIPR_SAI1SEL_Msk
#define RCC_CCIPR_SAI1SEL_0                 (0x1U << RCC_CCIPR_SAI1SEL_Pos)    /*!< 0x00400000 */
#define RCC_CCIPR_SAI1SEL_1                 (0x2U << RCC_CCIPR_SAI1SEL_Pos)    /*!< 0x00800000 */

#define RCC_CCIPR_SAI2SEL_Pos               (24U)
#define RCC_CCIPR_SAI2SEL_Msk               (0x3U << RCC_CCIPR_SAI2SEL_Pos)    /*!< 0x03000000 */
#define RCC_CCIPR_SAI2SEL                   RCC_CCIPR_SAI2SEL_Msk
#define RCC_CCIPR_SAI2SEL_0                 (0x1U << RCC_CCIPR_SAI2SEL_Pos)    /*!< 0x01000000 */
#define RCC_CCIPR_SAI2SEL_1                 (0x2U << RCC_CCIPR_SAI2SEL_Pos)    /*!< 0x02000000 */

#define RCC_CCIPR_CLK48SEL_Pos              (26U)
#define RCC_CCIPR_CLK48SEL_Msk              (0x3U << RCC_CCIPR_CLK48SEL_Pos)   /*!< 0x0C000000 */
#define RCC_CCIPR_CLK48SEL                  RCC_CCIPR_CLK48SEL_Msk
#define RCC_CCIPR_CLK48SEL_0                (0x1U << RCC_CCIPR_CLK48SEL_Pos)   /*!< 0x04000000 */
#define RCC_CCIPR_CLK48SEL_1                (0x2U << RCC_CCIPR_CLK48SEL_Pos)   /*!< 0x08000000 */

#define RCC_CCIPR_ADCSEL_Pos                (28U)
#define RCC_CCIPR_ADCSEL_Msk                (0x3U << RCC_CCIPR_ADCSEL_Pos)     /*!< 0x30000000 */
#define RCC_CCIPR_ADCSEL                    RCC_CCIPR_ADCSEL_Msk
#define RCC_CCIPR_ADCSEL_0                  (0x1U << RCC_CCIPR_ADCSEL_Pos)     /*!< 0x10000000 */
#define RCC_CCIPR_ADCSEL_1                  (0x2U << RCC_CCIPR_ADCSEL_Pos)     /*!< 0x20000000 */

#define RCC_CCIPR_SWPMI1SEL_Pos             (30U)
#define RCC_CCIPR_SWPMI1SEL_Msk             (0x1U << RCC_CCIPR_SWPMI1SEL_Pos)  /*!< 0x40000000 */
#define RCC_CCIPR_SWPMI1SEL                 RCC_CCIPR_SWPMI1SEL_Msk

#define RCC_CCIPR_DFSDM1SEL_Pos             (31U)
#define RCC_CCIPR_DFSDM1SEL_Msk             (0x1U << RCC_CCIPR_DFSDM1SEL_Pos)  /*!< 0x80000000 */
#define RCC_CCIPR_DFSDM1SEL                 RCC_CCIPR_DFSDM1SEL_Msk

/********************  Bit definition for RCC_BDCR register  ******************/
#define RCC_BDCR_LSEON_Pos                  (0U)
#define RCC_BDCR_LSEON_Msk                  (0x1U << RCC_BDCR_LSEON_Pos)       /*!< 0x00000001 */
#define RCC_BDCR_LSEON                      RCC_BDCR_LSEON_Msk
#define RCC_BDCR_LSERDY_Pos                 (1U)
#define RCC_BDCR_LSERDY_Msk                 (0x1U << RCC_BDCR_LSERDY_Pos)      /*!< 0x00000002 */
#define RCC_BDCR_LSERDY                     RCC_BDCR_LSERDY_Msk
#define RCC_BDCR_LSEBYP_Pos                 (2U)
#define RCC_BDCR_LSEBYP_Msk                 (0x1U << RCC_BDCR_LSEBYP_Pos)      /*!< 0x00000004 */
#define RCC_BDCR_LSEBYP                     RCC_BDCR_LSEBYP_Msk

#define RCC_BDCR_LSEDRV_Pos                 (3U)
#define RCC_BDCR_LSEDRV_Msk                 (0x3U << RCC_BDCR_LSEDRV_Pos)      /*!< 0x00000018 */
#define RCC_BDCR_LSEDRV                     RCC_BDCR_LSEDRV_Msk
#define RCC_BDCR_LSEDRV_0                   (0x1U << RCC_BDCR_LSEDRV_Pos)      /*!< 0x00000008 */
#define RCC_BDCR_LSEDRV_1                   (0x2U << RCC_BDCR_LSEDRV_Pos)      /*!< 0x00000010 */

#define RCC_BDCR_LSECSSON_Pos               (5U)
#define RCC_BDCR_LSECSSON_Msk               (0x1U << RCC_BDCR_LSECSSON_Pos)    /*!< 0x00000020 */
#define RCC_BDCR_LSECSSON                   RCC_BDCR_LSECSSON_Msk
#define RCC_BDCR_LSECSSD_Pos                (6U)
#define RCC_BDCR_LSECSSD_Msk                (0x1U << RCC_BDCR_LSECSSD_Pos)     /*!< 0x00000040 */
#define RCC_BDCR_LSECSSD                    RCC_BDCR_LSECSSD_Msk

#define RCC_BDCR_RTCSEL_Pos                 (8U)
#define RCC_BDCR_RTCSEL_Msk                 (0x3U << RCC_BDCR_RTCSEL_Pos)      /*!< 0x00000300 */
#define RCC_BDCR_RTCSEL                     RCC_BDCR_RTCSEL_Msk
#define RCC_BDCR_RTCSEL_0                   (0x1U << RCC_BDCR_RTCSEL_Pos)      /*!< 0x00000100 */
#define RCC_BDCR_RTCSEL_1                   (0x2U << RCC_BDCR_RTCSEL_Pos)      /*!< 0x00000200 */

#define RCC_BDCR_RTCEN_Pos                  (15U)
#define RCC_BDCR_RTCEN_Msk                  (0x1U << RCC_BDCR_RTCEN_Pos)       /*!< 0x00008000 */
#define RCC_BDCR_RTCEN                      RCC_BDCR_RTCEN_Msk
#define RCC_BDCR_BDRST_Pos                  (16U)
#define RCC_BDCR_BDRST_Msk                  (0x1U << RCC_BDCR_BDRST_Pos)       /*!< 0x00010000 */
#define RCC_BDCR_BDRST                      RCC_BDCR_BDRST_Msk
#define RCC_BDCR_LSCOEN_Pos                 (24U)
#define RCC_BDCR_LSCOEN_Msk                 (0x1U << RCC_BDCR_LSCOEN_Pos)      /*!< 0x01000000 */
#define RCC_BDCR_LSCOEN                     RCC_BDCR_LSCOEN_Msk
#define RCC_BDCR_LSCOSEL_Pos                (25U)
#define RCC_BDCR_LSCOSEL_Msk                (0x1U << RCC_BDCR_LSCOSEL_Pos)     /*!< 0x02000000 */
#define RCC_BDCR_LSCOSEL                    RCC_BDCR_LSCOSEL_Msk

/********************  Bit definition for RCC_CSR register  *******************/
#define RCC_CSR_LSION_Pos                   (0U)
#define RCC_CSR_LSION_Msk                   (0x1U << RCC_CSR_LSION_Pos)        /*!< 0x00000001 */
#define RCC_CSR_LSION                       RCC_CSR_LSION_Msk
#define RCC_CSR_LSIRDY_Pos                  (1U)
#define RCC_CSR_LSIRDY_Msk                  (0x1U << RCC_CSR_LSIRDY_Pos)       /*!< 0x00000002 */
#define RCC_CSR_LSIRDY                      RCC_CSR_LSIRDY_Msk

#define RCC_CSR_MSISRANGE_Pos               (8U)
#define RCC_CSR_MSISRANGE_Msk               (0xFU << RCC_CSR_MSISRANGE_Pos)    /*!< 0x00000F00 */
#define RCC_CSR_MSISRANGE                   RCC_CSR_MSISRANGE_Msk
#define RCC_CSR_MSISRANGE_1                 (0x4U << RCC_CSR_MSISRANGE_Pos)    /*!< 0x00000400 */
#define RCC_CSR_MSISRANGE_2                 (0x5U << RCC_CSR_MSISRANGE_Pos)    /*!< 0x00000500 */
#define RCC_CSR_MSISRANGE_4                 (0x6U << RCC_CSR_MSISRANGE_Pos)    /*!< 0x00000600 */
#define RCC_CSR_MSISRANGE_8                 (0x7U << RCC_CSR_MSISRANGE_Pos)    /*!< 0x00000700 */

#define RCC_CSR_RMVF_Pos                    (23U)
#define RCC_CSR_RMVF_Msk                    (0x1U << RCC_CSR_RMVF_Pos)         /*!< 0x00800000 */
#define RCC_CSR_RMVF                        RCC_CSR_RMVF_Msk
#define RCC_CSR_FWRSTF_Pos                  (24U)
#define RCC_CSR_FWRSTF_Msk                  (0x1U << RCC_CSR_FWRSTF_Pos)       /*!< 0x01000000 */
#define RCC_CSR_FWRSTF                      RCC_CSR_FWRSTF_Msk
#define RCC_CSR_OBLRSTF_Pos                 (25U)
#define RCC_CSR_OBLRSTF_Msk                 (0x1U << RCC_CSR_OBLRSTF_Pos)      /*!< 0x02000000 */
#define RCC_CSR_OBLRSTF                     RCC_CSR_OBLRSTF_Msk
#define RCC_CSR_PINRSTF_Pos                 (26U)
#define RCC_CSR_PINRSTF_Msk                 (0x1U << RCC_CSR_PINRSTF_Pos)      /*!< 0x04000000 */
#define RCC_CSR_PINRSTF                     RCC_CSR_PINRSTF_Msk
#define RCC_CSR_BORRSTF_Pos                 (27U)
#define RCC_CSR_BORRSTF_Msk                 (0x1U << RCC_CSR_BORRSTF_Pos)      /*!< 0x08000000 */
#define RCC_CSR_BORRSTF                     RCC_CSR_BORRSTF_Msk
#define RCC_CSR_SFTRSTF_Pos                 (28U)
#define RCC_CSR_SFTRSTF_Msk                 (0x1U << RCC_CSR_SFTRSTF_Pos)      /*!< 0x10000000 */
#define RCC_CSR_SFTRSTF                     RCC_CSR_SFTRSTF_Msk
#define RCC_CSR_IWDGRSTF_Pos                (29U)
#define RCC_CSR_IWDGRSTF_Msk                (0x1U << RCC_CSR_IWDGRSTF_Pos)     /*!< 0x20000000 */
#define RCC_CSR_IWDGRSTF                    RCC_CSR_IWDGRSTF_Msk
#define RCC_CSR_WWDGRSTF_Pos                (30U)
#define RCC_CSR_WWDGRSTF_Msk                (0x1U << RCC_CSR_WWDGRSTF_Pos)     /*!< 0x40000000 */
#define RCC_CSR_WWDGRSTF                    RCC_CSR_WWDGRSTF_Msk
#define RCC_CSR_LPWRRSTF_Pos                (31U)
#define RCC_CSR_LPWRRSTF_Msk                (0x1U << RCC_CSR_LPWRRSTF_Pos)     /*!< 0x80000000 */
#define RCC_CSR_LPWRRSTF                    RCC_CSR_LPWRRSTF_Msk
/******************************************************************************/
/*                                                                            */
/*                                    TIM                                     */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for TIM_CR1 register  ********************/
#define TIM_CR1_CEN_Pos           (0U)                                         
#define TIM_CR1_CEN_Msk           (0x1U << TIM_CR1_CEN_Pos)                    /*!< 0x00000001 */
#define TIM_CR1_CEN               TIM_CR1_CEN_Msk                              /*!<Counter enable */
#define TIM_CR1_UDIS_Pos          (1U)                                         
#define TIM_CR1_UDIS_Msk          (0x1U << TIM_CR1_UDIS_Pos)                   /*!< 0x00000002 */
#define TIM_CR1_UDIS              TIM_CR1_UDIS_Msk                             /*!<Update disable */
#define TIM_CR1_URS_Pos           (2U)                                         
#define TIM_CR1_URS_Msk           (0x1U << TIM_CR1_URS_Pos)                    /*!< 0x00000004 */
#define TIM_CR1_URS               TIM_CR1_URS_Msk                              /*!<Update request source */
#define TIM_CR1_OPM_Pos           (3U)                                         
#define TIM_CR1_OPM_Msk           (0x1U << TIM_CR1_OPM_Pos)                    /*!< 0x00000008 */
#define TIM_CR1_OPM               TIM_CR1_OPM_Msk                              /*!<One pulse mode */
#define TIM_CR1_DIR_Pos           (4U)                                         
#define TIM_CR1_DIR_Msk           (0x1U << TIM_CR1_DIR_Pos)                    /*!< 0x00000010 */
#define TIM_CR1_DIR               TIM_CR1_DIR_Msk                              /*!<Direction */

#define TIM_CR1_CMS_Pos           (5U)                                         
#define TIM_CR1_CMS_Msk           (0x3U << TIM_CR1_CMS_Pos)                    /*!< 0x00000060 */
#define TIM_CR1_CMS               TIM_CR1_CMS_Msk                              /*!<CMS[1:0] bits (Center-aligned mode selection) */
#define TIM_CR1_CMS_0             (0x1U << TIM_CR1_CMS_Pos)                    /*!< 0x00000020 */
#define TIM_CR1_CMS_1             (0x2U << TIM_CR1_CMS_Pos)                    /*!< 0x00000040 */

#define TIM_CR1_ARPE_Pos          (7U)                                         
#define TIM_CR1_ARPE_Msk          (0x1U << TIM_CR1_ARPE_Pos)                   /*!< 0x00000080 */
#define TIM_CR1_ARPE              TIM_CR1_ARPE_Msk                             /*!<Auto-reload preload enable */

#define TIM_CR1_CKD_Pos           (8U)                                         
#define TIM_CR1_CKD_Msk           (0x3U << TIM_CR1_CKD_Pos)                    /*!< 0x00000300 */
#define TIM_CR1_CKD               TIM_CR1_CKD_Msk                              /*!<CKD[1:0] bits (clock division) */
#define TIM_CR1_CKD_0             (0x1U << TIM_CR1_CKD_Pos)                    /*!< 0x00000100 */
#define TIM_CR1_CKD_1             (0x2U << TIM_CR1_CKD_Pos)                    /*!< 0x00000200 */

#define TIM_CR1_UIFREMAP_Pos      (11U)                                        
#define TIM_CR1_UIFREMAP_Msk      (0x1U << TIM_CR1_UIFREMAP_Pos)               /*!< 0x00000800 */
#define TIM_CR1_UIFREMAP          TIM_CR1_UIFREMAP_Msk                         /*!<Update interrupt flag remap */

/*******************  Bit definition for TIM_CR2 register  ********************/
#define TIM_CR2_CCPC_Pos          (0U)                                         
#define TIM_CR2_CCPC_Msk          (0x1U << TIM_CR2_CCPC_Pos)                   /*!< 0x00000001 */
#define TIM_CR2_CCPC              TIM_CR2_CCPC_Msk                             /*!<Capture/Compare Preloaded Control */
#define TIM_CR2_CCUS_Pos          (2U)                                         
#define TIM_CR2_CCUS_Msk          (0x1U << TIM_CR2_CCUS_Pos)                   /*!< 0x00000004 */
#define TIM_CR2_CCUS              TIM_CR2_CCUS_Msk                             /*!<Capture/Compare Control Update Selection */
#define TIM_CR2_CCDS_Pos          (3U)                                         
#define TIM_CR2_CCDS_Msk          (0x1U << TIM_CR2_CCDS_Pos)                   /*!< 0x00000008 */
#define TIM_CR2_CCDS              TIM_CR2_CCDS_Msk                             /*!<Capture/Compare DMA Selection */

#define TIM_CR2_MMS_Pos           (4U)                                         
#define TIM_CR2_MMS_Msk           (0x7U << TIM_CR2_MMS_Pos)                    /*!< 0x00000070 */
#define TIM_CR2_MMS               TIM_CR2_MMS_Msk                              /*!<MMS[2:0] bits (Master Mode Selection) */
#define TIM_CR2_MMS_0             (0x1U << TIM_CR2_MMS_Pos)                    /*!< 0x00000010 */
#define TIM_CR2_MMS_1             (0x2U << TIM_CR2_MMS_Pos)                    /*!< 0x00000020 */
#define TIM_CR2_MMS_2             (0x4U << TIM_CR2_MMS_Pos)                    /*!< 0x00000040 */

#define TIM_CR2_TI1S_Pos          (7U)                                         
#define TIM_CR2_TI1S_Msk          (0x1U << TIM_CR2_TI1S_Pos)                   /*!< 0x00000080 */
#define TIM_CR2_TI1S              TIM_CR2_TI1S_Msk                             /*!<TI1 Selection */
#define TIM_CR2_OIS1_Pos          (8U)                                         
#define TIM_CR2_OIS1_Msk          (0x1U << TIM_CR2_OIS1_Pos)                   /*!< 0x00000100 */
#define TIM_CR2_OIS1              TIM_CR2_OIS1_Msk                             /*!<Output Idle state 1 (OC1 output) */
#define TIM_CR2_OIS1N_Pos         (9U)                                         
#define TIM_CR2_OIS1N_Msk         (0x1U << TIM_CR2_OIS1N_Pos)                  /*!< 0x00000200 */
#define TIM_CR2_OIS1N             TIM_CR2_OIS1N_Msk                            /*!<Output Idle state 1 (OC1N output) */
#define TIM_CR2_OIS2_Pos          (10U)                                        
#define TIM_CR2_OIS2_Msk          (0x1U << TIM_CR2_OIS2_Pos)                   /*!< 0x00000400 */
#define TIM_CR2_OIS2              TIM_CR2_OIS2_Msk                             /*!<Output Idle state 2 (OC2 output) */
#define TIM_CR2_OIS2N_Pos         (11U)                                        
#define TIM_CR2_OIS2N_Msk         (0x1U << TIM_CR2_OIS2N_Pos)                  /*!< 0x00000800 */
#define TIM_CR2_OIS2N             TIM_CR2_OIS2N_Msk                            /*!<Output Idle state 2 (OC2N output) */
#define TIM_CR2_OIS3_Pos          (12U)                                        
#define TIM_CR2_OIS3_Msk          (0x1U << TIM_CR2_OIS3_Pos)                   /*!< 0x00001000 */
#define TIM_CR2_OIS3              TIM_CR2_OIS3_Msk                             /*!<Output Idle state 3 (OC3 output) */
#define TIM_CR2_OIS3N_Pos         (13U)                                        
#define TIM_CR2_OIS3N_Msk         (0x1U << TIM_CR2_OIS3N_Pos)                  /*!< 0x00002000 */
#define TIM_CR2_OIS3N             TIM_CR2_OIS3N_Msk                            /*!<Output Idle state 3 (OC3N output) */
#define TIM_CR2_OIS4_Pos          (14U)                                        
#define TIM_CR2_OIS4_Msk          (0x1U << TIM_CR2_OIS4_Pos)                   /*!< 0x00004000 */
#define TIM_CR2_OIS4              TIM_CR2_OIS4_Msk                             /*!<Output Idle state 4 (OC4 output) */
#define TIM_CR2_OIS5_Pos          (16U)                                        
#define TIM_CR2_OIS5_Msk          (0x1U << TIM_CR2_OIS5_Pos)                   /*!< 0x00010000 */
#define TIM_CR2_OIS5              TIM_CR2_OIS5_Msk                             /*!<Output Idle state 5 (OC5 output) */
#define TIM_CR2_OIS6_Pos          (18U)                                        
#define TIM_CR2_OIS6_Msk          (0x1U << TIM_CR2_OIS6_Pos)                   /*!< 0x00040000 */
#define TIM_CR2_OIS6              TIM_CR2_OIS6_Msk                             /*!<Output Idle state 6 (OC6 output) */

#define TIM_CR2_MMS2_Pos          (20U)                                        
#define TIM_CR2_MMS2_Msk          (0xFU << TIM_CR2_MMS2_Pos)                   /*!< 0x00F00000 */
#define TIM_CR2_MMS2              TIM_CR2_MMS2_Msk                             /*!<MMS[2:0] bits (Master Mode Selection) */
#define TIM_CR2_MMS2_0            (0x1U << TIM_CR2_MMS2_Pos)                   /*!< 0x00100000 */
#define TIM_CR2_MMS2_1            (0x2U << TIM_CR2_MMS2_Pos)                   /*!< 0x00200000 */
#define TIM_CR2_MMS2_2            (0x4U << TIM_CR2_MMS2_Pos)                   /*!< 0x00400000 */
#define TIM_CR2_MMS2_3            (0x8U << TIM_CR2_MMS2_Pos)                   /*!< 0x00800000 */

/*******************  Bit definition for TIM_SMCR register  *******************/
#define TIM_SMCR_SMS_Pos          (0U)                                         
#define TIM_SMCR_SMS_Msk          (0x10007U << TIM_SMCR_SMS_Pos)               /*!< 0x00010007 */
#define TIM_SMCR_SMS              TIM_SMCR_SMS_Msk                             /*!<SMS[2:0] bits (Slave mode selection) */
#define TIM_SMCR_SMS_0            (0x00001U << TIM_SMCR_SMS_Pos)               /*!< 0x00000001 */
#define TIM_SMCR_SMS_1            (0x00002U << TIM_SMCR_SMS_Pos)               /*!< 0x00000002 */
#define TIM_SMCR_SMS_2            (0x00004U << TIM_SMCR_SMS_Pos)               /*!< 0x00000004 */
#define TIM_SMCR_SMS_3            (0x10000U << TIM_SMCR_SMS_Pos)               /*!< 0x00010000 */

#define TIM_SMCR_OCCS_Pos         (3U)                                         
#define TIM_SMCR_OCCS_Msk         (0x1U << TIM_SMCR_OCCS_Pos)                  /*!< 0x00000008 */
#define TIM_SMCR_OCCS             TIM_SMCR_OCCS_Msk                            /*!< OCREF clear selection */

#define TIM_SMCR_TS_Pos           (4U)                                         
#define TIM_SMCR_TS_Msk           (0x7U << TIM_SMCR_TS_Pos)                    /*!< 0x00000070 */
#define TIM_SMCR_TS               TIM_SMCR_TS_Msk                              /*!<TS[2:0] bits (Trigger selection) */
#define TIM_SMCR_TS_0             (0x1U << TIM_SMCR_TS_Pos)                    /*!< 0x00000010 */
#define TIM_SMCR_TS_1             (0x2U << TIM_SMCR_TS_Pos)                    /*!< 0x00000020 */
#define TIM_SMCR_TS_2             (0x4U << TIM_SMCR_TS_Pos)                    /*!< 0x00000040 */

#define TIM_SMCR_MSM_Pos          (7U)                                         
#define TIM_SMCR_MSM_Msk          (0x1U << TIM_SMCR_MSM_Pos)                   /*!< 0x00000080 */
#define TIM_SMCR_MSM              TIM_SMCR_MSM_Msk                             /*!<Master/slave mode */

#define TIM_SMCR_ETF_Pos          (8U)                                         
#define TIM_SMCR_ETF_Msk          (0xFU << TIM_SMCR_ETF_Pos)                   /*!< 0x00000F00 */
#define TIM_SMCR_ETF              TIM_SMCR_ETF_Msk                             /*!<ETF[3:0] bits (External trigger filter) */
#define TIM_SMCR_ETF_0            (0x1U << TIM_SMCR_ETF_Pos)                   /*!< 0x00000100 */
#define TIM_SMCR_ETF_1            (0x2U << TIM_SMCR_ETF_Pos)                   /*!< 0x00000200 */
#define TIM_SMCR_ETF_2            (0x4U << TIM_SMCR_ETF_Pos)                   /*!< 0x00000400 */
#define TIM_SMCR_ETF_3            (0x8U << TIM_SMCR_ETF_Pos)                   /*!< 0x00000800 */

#define TIM_SMCR_ETPS_Pos         (12U)                                        
#define TIM_SMCR_ETPS_Msk         (0x3U << TIM_SMCR_ETPS_Pos)                  /*!< 0x00003000 */
#define TIM_SMCR_ETPS             TIM_SMCR_ETPS_Msk                            /*!<ETPS[1:0] bits (External trigger prescaler) */
#define TIM_SMCR_ETPS_0           (0x1U << TIM_SMCR_ETPS_Pos)                  /*!< 0x00001000 */
#define TIM_SMCR_ETPS_1           (0x2U << TIM_SMCR_ETPS_Pos)                  /*!< 0x00002000 */

#define TIM_SMCR_ECE_Pos          (14U)                                        
#define TIM_SMCR_ECE_Msk          (0x1U << TIM_SMCR_ECE_Pos)                   /*!< 0x00004000 */
#define TIM_SMCR_ECE              TIM_SMCR_ECE_Msk                             /*!<External clock enable */
#define TIM_SMCR_ETP_Pos          (15U)                                        
#define TIM_SMCR_ETP_Msk          (0x1U << TIM_SMCR_ETP_Pos)                   /*!< 0x00008000 */
#define TIM_SMCR_ETP              TIM_SMCR_ETP_Msk                             /*!<External trigger polarity */

/*******************  Bit definition for TIM_DIER register  *******************/
#define TIM_DIER_UIE_Pos          (0U)                                         
#define TIM_DIER_UIE_Msk          (0x1U << TIM_DIER_UIE_Pos)                   /*!< 0x00000001 */
#define TIM_DIER_UIE              TIM_DIER_UIE_Msk                             /*!<Update interrupt enable */
#define TIM_DIER_CC1IE_Pos        (1U)                                         
#define TIM_DIER_CC1IE_Msk        (0x1U << TIM_DIER_CC1IE_Pos)                 /*!< 0x00000002 */
#define TIM_DIER_CC1IE            TIM_DIER_CC1IE_Msk                           /*!<Capture/Compare 1 interrupt enable */
#define TIM_DIER_CC2IE_Pos        (2U)                                         
#define TIM_DIER_CC2IE_Msk        (0x1U << TIM_DIER_CC2IE_Pos)                 /*!< 0x00000004 */
#define TIM_DIER_CC2IE            TIM_DIER_CC2IE_Msk                           /*!<Capture/Compare 2 interrupt enable */
#define TIM_DIER_CC3IE_Pos        (3U)                                         
#define TIM_DIER_CC3IE_Msk        (0x1U << TIM_DIER_CC3IE_Pos)                 /*!< 0x00000008 */
#define TIM_DIER_CC3IE            TIM_DIER_CC3IE_Msk                           /*!<Capture/Compare 3 interrupt enable */
#define TIM_DIER_CC4IE_Pos        (4U)                                         
#define TIM_DIER_CC4IE_Msk        (0x1U << TIM_DIER_CC4IE_Pos)                 /*!< 0x00000010 */
#define TIM_DIER_CC4IE            TIM_DIER_CC4IE_Msk                           /*!<Capture/Compare 4 interrupt enable */
#define TIM_DIER_COMIE_Pos        (5U)                                         
#define TIM_DIER_COMIE_Msk        (0x1U << TIM_DIER_COMIE_Pos)                 /*!< 0x00000020 */
#define TIM_DIER_COMIE            TIM_DIER_COMIE_Msk                           /*!<COM interrupt enable */
#define TIM_DIER_TIE_Pos          (6U)                                         
#define TIM_DIER_TIE_Msk          (0x1U << TIM_DIER_TIE_Pos)                   /*!< 0x00000040 */
#define TIM_DIER_TIE              TIM_DIER_TIE_Msk                             /*!<Trigger interrupt enable */
#define TIM_DIER_BIE_Pos          (7U)                                         
#define TIM_DIER_BIE_Msk          (0x1U << TIM_DIER_BIE_Pos)                   /*!< 0x00000080 */
#define TIM_DIER_BIE              TIM_DIER_BIE_Msk                             /*!<Break interrupt enable */
#define TIM_DIER_UDE_Pos          (8U)                                         
#define TIM_DIER_UDE_Msk          (0x1U << TIM_DIER_UDE_Pos)                   /*!< 0x00000100 */
#define TIM_DIER_UDE              TIM_DIER_UDE_Msk                             /*!<Update DMA request enable */
#define TIM_DIER_CC1DE_Pos        (9U)                                         
#define TIM_DIER_CC1DE_Msk        (0x1U << TIM_DIER_CC1DE_Pos)                 /*!< 0x00000200 */
#define TIM_DIER_CC1DE            TIM_DIER_CC1DE_Msk                           /*!<Capture/Compare 1 DMA request enable */
#define TIM_DIER_CC2DE_Pos        (10U)                                        
#define TIM_DIER_CC2DE_Msk        (0x1U << TIM_DIER_CC2DE_Pos)                 /*!< 0x00000400 */
#define TIM_DIER_CC2DE            TIM_DIER_CC2DE_Msk                           /*!<Capture/Compare 2 DMA request enable */
#define TIM_DIER_CC3DE_Pos        (11U)                                        
#define TIM_DIER_CC3DE_Msk        (0x1U << TIM_DIER_CC3DE_Pos)                 /*!< 0x00000800 */
#define TIM_DIER_CC3DE            TIM_DIER_CC3DE_Msk                           /*!<Capture/Compare 3 DMA request enable */
#define TIM_DIER_CC4DE_Pos        (12U)                                        
#define TIM_DIER_CC4DE_Msk        (0x1U << TIM_DIER_CC4DE_Pos)                 /*!< 0x00001000 */
#define TIM_DIER_CC4DE            TIM_DIER_CC4DE_Msk                           /*!<Capture/Compare 4 DMA request enable */
#define TIM_DIER_COMDE_Pos        (13U)                                        
#define TIM_DIER_COMDE_Msk        (0x1U << TIM_DIER_COMDE_Pos)                 /*!< 0x00002000 */
#define TIM_DIER_COMDE            TIM_DIER_COMDE_Msk                           /*!<COM DMA request enable */
#define TIM_DIER_TDE_Pos          (14U)                                        
#define TIM_DIER_TDE_Msk          (0x1U << TIM_DIER_TDE_Pos)                   /*!< 0x00004000 */
#define TIM_DIER_TDE              TIM_DIER_TDE_Msk                             /*!<Trigger DMA request enable */

/********************  Bit definition for TIM_SR register  ********************/
#define TIM_SR_UIF_Pos            (0U)                                         
#define TIM_SR_UIF_Msk            (0x1U << TIM_SR_UIF_Pos)                     /*!< 0x00000001 */
#define TIM_SR_UIF                TIM_SR_UIF_Msk                               /*!<Update interrupt Flag */
#define TIM_SR_CC1IF_Pos          (1U)                                         
#define TIM_SR_CC1IF_Msk          (0x1U << TIM_SR_CC1IF_Pos)                   /*!< 0x00000002 */
#define TIM_SR_CC1IF              TIM_SR_CC1IF_Msk                             /*!<Capture/Compare 1 interrupt Flag */
#define TIM_SR_CC2IF_Pos          (2U)                                         
#define TIM_SR_CC2IF_Msk          (0x1U << TIM_SR_CC2IF_Pos)                   /*!< 0x00000004 */
#define TIM_SR_CC2IF              TIM_SR_CC2IF_Msk                             /*!<Capture/Compare 2 interrupt Flag */
#define TIM_SR_CC3IF_Pos          (3U)                                         
#define TIM_SR_CC3IF_Msk          (0x1U << TIM_SR_CC3IF_Pos)                   /*!< 0x00000008 */
#define TIM_SR_CC3IF              TIM_SR_CC3IF_Msk                             /*!<Capture/Compare 3 interrupt Flag */
#define TIM_SR_CC4IF_Pos          (4U)                                         
#define TIM_SR_CC4IF_Msk          (0x1U << TIM_SR_CC4IF_Pos)                   /*!< 0x00000010 */
#define TIM_SR_CC4IF              TIM_SR_CC4IF_Msk                             /*!<Capture/Compare 4 interrupt Flag */
#define TIM_SR_COMIF_Pos          (5U)                                         
#define TIM_SR_COMIF_Msk          (0x1U << TIM_SR_COMIF_Pos)                   /*!< 0x00000020 */
#define TIM_SR_COMIF              TIM_SR_COMIF_Msk                             /*!<COM interrupt Flag */
#define TIM_SR_TIF_Pos            (6U)                                         
#define TIM_SR_TIF_Msk            (0x1U << TIM_SR_TIF_Pos)                     /*!< 0x00000040 */
#define TIM_SR_TIF                TIM_SR_TIF_Msk                               /*!<Trigger interrupt Flag */
#define TIM_SR_BIF_Pos            (7U)                                         
#define TIM_SR_BIF_Msk            (0x1U << TIM_SR_BIF_Pos)                     /*!< 0x00000080 */
#define TIM_SR_BIF                TIM_SR_BIF_Msk                               /*!<Break interrupt Flag */
#define TIM_SR_B2IF_Pos           (8U)                                         
#define TIM_SR_B2IF_Msk           (0x1U << TIM_SR_B2IF_Pos)                    /*!< 0x00000100 */
#define TIM_SR_B2IF               TIM_SR_B2IF_Msk                              /*!<Break 2 interrupt Flag */
#define TIM_SR_CC1OF_Pos          (9U)                                         
#define TIM_SR_CC1OF_Msk          (0x1U << TIM_SR_CC1OF_Pos)                   /*!< 0x00000200 */
#define TIM_SR_CC1OF              TIM_SR_CC1OF_Msk                             /*!<Capture/Compare 1 Overcapture Flag */
#define TIM_SR_CC2OF_Pos          (10U)                                        
#define TIM_SR_CC2OF_Msk          (0x1U << TIM_SR_CC2OF_Pos)                   /*!< 0x00000400 */
#define TIM_SR_CC2OF              TIM_SR_CC2OF_Msk                             /*!<Capture/Compare 2 Overcapture Flag */
#define TIM_SR_CC3OF_Pos          (11U)                                        
#define TIM_SR_CC3OF_Msk          (0x1U << TIM_SR_CC3OF_Pos)                   /*!< 0x00000800 */
#define TIM_SR_CC3OF              TIM_SR_CC3OF_Msk                             /*!<Capture/Compare 3 Overcapture Flag */
#define TIM_SR_CC4OF_Pos          (12U)                                        
#define TIM_SR_CC4OF_Msk          (0x1U << TIM_SR_CC4OF_Pos)                   /*!< 0x00001000 */
#define TIM_SR_CC4OF              TIM_SR_CC4OF_Msk                             /*!<Capture/Compare 4 Overcapture Flag */
#define TIM_SR_SBIF_Pos           (13U)                                        
#define TIM_SR_SBIF_Msk           (0x1U << TIM_SR_SBIF_Pos)                    /*!< 0x00002000 */
#define TIM_SR_SBIF               TIM_SR_SBIF_Msk                              /*!<System Break interrupt Flag */
#define TIM_SR_CC5IF_Pos          (16U)                                        
#define TIM_SR_CC5IF_Msk          (0x1U << TIM_SR_CC5IF_Pos)                   /*!< 0x00010000 */
#define TIM_SR_CC5IF              TIM_SR_CC5IF_Msk                             /*!<Capture/Compare 5 interrupt Flag */
#define TIM_SR_CC6IF_Pos          (17U)                                        
#define TIM_SR_CC6IF_Msk          (0x1U << TIM_SR_CC6IF_Pos)                   /*!< 0x00020000 */
#define TIM_SR_CC6IF              TIM_SR_CC6IF_Msk                             /*!<Capture/Compare 6 interrupt Flag */


/*******************  Bit definition for TIM_EGR register  ********************/
#define TIM_EGR_UG_Pos            (0U)                                         
#define TIM_EGR_UG_Msk            (0x1U << TIM_EGR_UG_Pos)                     /*!< 0x00000001 */
#define TIM_EGR_UG                TIM_EGR_UG_Msk                               /*!<Update Generation */
#define TIM_EGR_CC1G_Pos          (1U)                                         
#define TIM_EGR_CC1G_Msk          (0x1U << TIM_EGR_CC1G_Pos)                   /*!< 0x00000002 */
#define TIM_EGR_CC1G              TIM_EGR_CC1G_Msk                             /*!<Capture/Compare 1 Generation */
#define TIM_EGR_CC2G_Pos          (2U)                                         
#define TIM_EGR_CC2G_Msk          (0x1U << TIM_EGR_CC2G_Pos)                   /*!< 0x00000004 */
#define TIM_EGR_CC2G              TIM_EGR_CC2G_Msk                             /*!<Capture/Compare 2 Generation */
#define TIM_EGR_CC3G_Pos          (3U)                                         
#define TIM_EGR_CC3G_Msk          (0x1U << TIM_EGR_CC3G_Pos)                   /*!< 0x00000008 */
#define TIM_EGR_CC3G              TIM_EGR_CC3G_Msk                             /*!<Capture/Compare 3 Generation */
#define TIM_EGR_CC4G_Pos          (4U)                                         
#define TIM_EGR_CC4G_Msk          (0x1U << TIM_EGR_CC4G_Pos)                   /*!< 0x00000010 */
#define TIM_EGR_CC4G              TIM_EGR_CC4G_Msk                             /*!<Capture/Compare 4 Generation */
#define TIM_EGR_COMG_Pos          (5U)                                         
#define TIM_EGR_COMG_Msk          (0x1U << TIM_EGR_COMG_Pos)                   /*!< 0x00000020 */
#define TIM_EGR_COMG              TIM_EGR_COMG_Msk                             /*!<Capture/Compare Control Update Generation */
#define TIM_EGR_TG_Pos            (6U)                                         
#define TIM_EGR_TG_Msk            (0x1U << TIM_EGR_TG_Pos)                     /*!< 0x00000040 */
#define TIM_EGR_TG                TIM_EGR_TG_Msk                               /*!<Trigger Generation */
#define TIM_EGR_BG_Pos            (7U)                                         
#define TIM_EGR_BG_Msk            (0x1U << TIM_EGR_BG_Pos)                     /*!< 0x00000080 */
#define TIM_EGR_BG                TIM_EGR_BG_Msk                               /*!<Break Generation */
#define TIM_EGR_B2G_Pos           (8U)                                         
#define TIM_EGR_B2G_Msk           (0x1U << TIM_EGR_B2G_Pos)                    /*!< 0x00000100 */
#define TIM_EGR_B2G               TIM_EGR_B2G_Msk                              /*!<Break 2 Generation */


/******************  Bit definition for TIM_CCMR1 register  *******************/
#define TIM_CCMR1_CC1S_Pos        (0U)                                         
#define TIM_CCMR1_CC1S_Msk        (0x3U << TIM_CCMR1_CC1S_Pos)                 /*!< 0x00000003 */
#define TIM_CCMR1_CC1S            TIM_CCMR1_CC1S_Msk                           /*!<CC1S[1:0] bits (Capture/Compare 1 Selection) */
#define TIM_CCMR1_CC1S_0          (0x1U << TIM_CCMR1_CC1S_Pos)                 /*!< 0x00000001 */
#define TIM_CCMR1_CC1S_1          (0x2U << TIM_CCMR1_CC1S_Pos)                 /*!< 0x00000002 */

#define TIM_CCMR1_OC1FE_Pos       (2U)                                         
#define TIM_CCMR1_OC1FE_Msk       (0x1U << TIM_CCMR1_OC1FE_Pos)                /*!< 0x00000004 */
#define TIM_CCMR1_OC1FE           TIM_CCMR1_OC1FE_Msk                          /*!<Output Compare 1 Fast enable */
#define TIM_CCMR1_OC1PE_Pos       (3U)                                         
#define TIM_CCMR1_OC1PE_Msk       (0x1U << TIM_CCMR1_OC1PE_Pos)                /*!< 0x00000008 */
#define TIM_CCMR1_OC1PE           TIM_CCMR1_OC1PE_Msk                          /*!<Output Compare 1 Preload enable */

#define TIM_CCMR1_OC1M_Pos        (4U)                                         
#define TIM_CCMR1_OC1M_Msk        (0x1007U << TIM_CCMR1_OC1M_Pos)              /*!< 0x00010070 */
#define TIM_CCMR1_OC1M            TIM_CCMR1_OC1M_Msk                           /*!<OC1M[2:0] bits (Output Compare 1 Mode) */
#define TIM_CCMR1_OC1M_0          (0x0001U << TIM_CCMR1_OC1M_Pos)              /*!< 0x00000010 */
#define TIM_CCMR1_OC1M_1          (0x0002U << TIM_CCMR1_OC1M_Pos)              /*!< 0x00000020 */
#define TIM_CCMR1_OC1M_2          (0x0004U << TIM_CCMR1_OC1M_Pos)              /*!< 0x00000040 */
#define TIM_CCMR1_OC1M_3          (0x1000U << TIM_CCMR1_OC1M_Pos)              /*!< 0x00010000 */

#define TIM_CCMR1_OC1CE_Pos       (7U)                                         
#define TIM_CCMR1_OC1CE_Msk       (0x1U << TIM_CCMR1_OC1CE_Pos)                /*!< 0x00000080 */
#define TIM_CCMR1_OC1CE           TIM_CCMR1_OC1CE_Msk                          /*!<Output Compare 1 Clear Enable */

#define TIM_CCMR1_CC2S_Pos        (8U)                                         
#define TIM_CCMR1_CC2S_Msk        (0x3U << TIM_CCMR1_CC2S_Pos)                 /*!< 0x00000300 */
#define TIM_CCMR1_CC2S            TIM_CCMR1_CC2S_Msk                           /*!<CC2S[1:0] bits (Capture/Compare 2 Selection) */
#define TIM_CCMR1_CC2S_0          (0x1U << TIM_CCMR1_CC2S_Pos)                 /*!< 0x00000100 */
#define TIM_CCMR1_CC2S_1          (0x2U << TIM_CCMR1_CC2S_Pos)                 /*!< 0x00000200 */

#define TIM_CCMR1_OC2FE_Pos       (10U)                                        
#define TIM_CCMR1_OC2FE_Msk       (0x1U << TIM_CCMR1_OC2FE_Pos)                /*!< 0x00000400 */
#define TIM_CCMR1_OC2FE           TIM_CCMR1_OC2FE_Msk                          /*!<Output Compare 2 Fast enable */
#define TIM_CCMR1_OC2PE_Pos       (11U)                                        
#define TIM_CCMR1_OC2PE_Msk       (0x1U << TIM_CCMR1_OC2PE_Pos)                /*!< 0x00000800 */
#define TIM_CCMR1_OC2PE           TIM_CCMR1_OC2PE_Msk                          /*!<Output Compare 2 Preload enable */

#define TIM_CCMR1_OC2M_Pos        (12U)                                        
#define TIM_CCMR1_OC2M_Msk        (0x1007U << TIM_CCMR1_OC2M_Pos)              /*!< 0x01007000 */
#define TIM_CCMR1_OC2M            TIM_CCMR1_OC2M_Msk                           /*!<OC2M[2:0] bits (Output Compare 2 Mode) */
#define TIM_CCMR1_OC2M_0          (0x0001U << TIM_CCMR1_OC2M_Pos)              /*!< 0x00001000 */
#define TIM_CCMR1_OC2M_1          (0x0002U << TIM_CCMR1_OC2M_Pos)              /*!< 0x00002000 */
#define TIM_CCMR1_OC2M_2          (0x0004U << TIM_CCMR1_OC2M_Pos)              /*!< 0x00004000 */
#define TIM_CCMR1_OC2M_3          (0x1000U << TIM_CCMR1_OC2M_Pos)              /*!< 0x01000000 */

#define TIM_CCMR1_OC2CE_Pos       (15U)                                        
#define TIM_CCMR1_OC2CE_Msk       (0x1U << TIM_CCMR1_OC2CE_Pos)                /*!< 0x00008000 */
#define TIM_CCMR1_OC2CE           TIM_CCMR1_OC2CE_Msk                          /*!<Output Compare 2 Clear Enable */

/*----------------------------------------------------------------------------*/
#define TIM_CCMR1_IC1PSC_Pos      (2U)                                         
#define TIM_CCMR1_IC1PSC_Msk      (0x3U << TIM_CCMR1_IC1PSC_Pos)               /*!< 0x0000000C */
#define TIM_CCMR1_IC1PSC          TIM_CCMR1_IC1PSC_Msk                         /*!<IC1PSC[1:0] bits (Input Capture 1 Prescaler) */
#define TIM_CCMR1_IC1PSC_0        (0x1U << TIM_CCMR1_IC1PSC_Pos)               /*!< 0x00000004 */
#define TIM_CCMR1_IC1PSC_1        (0x2U << TIM_CCMR1_IC1PSC_Pos)               /*!< 0x00000008 */

#define TIM_CCMR1_IC1F_Pos        (4U)                                         
#define TIM_CCMR1_IC1F_Msk        (0xFU << TIM_CCMR1_IC1F_Pos)                 /*!< 0x000000F0 */
#define TIM_CCMR1_IC1F            TIM_CCMR1_IC1F_Msk                           /*!<IC1F[3:0] bits (Input Capture 1 Filter) */
#define TIM_CCMR1_IC1F_0          (0x1U << TIM_CCMR1_IC1F_Pos)                 /*!< 0x00000010 */
#define TIM_CCMR1_IC1F_1          (0x2U << TIM_CCMR1_IC1F_Pos)                 /*!< 0x00000020 */
#define TIM_CCMR1_IC1F_2          (0x4U << TIM_CCMR1_IC1F_Pos)                 /*!< 0x00000040 */
#define TIM_CCMR1_IC1F_3          (0x8U << TIM_CCMR1_IC1F_Pos)                 /*!< 0x00000080 */

#define TIM_CCMR1_IC2PSC_Pos      (10U)                                        
#define TIM_CCMR1_IC2PSC_Msk      (0x3U << TIM_CCMR1_IC2PSC_Pos)               /*!< 0x00000C00 */
#define TIM_CCMR1_IC2PSC          TIM_CCMR1_IC2PSC_Msk                         /*!<IC2PSC[1:0] bits (Input Capture 2 Prescaler) */
#define TIM_CCMR1_IC2PSC_0        (0x1U << TIM_CCMR1_IC2PSC_Pos)               /*!< 0x00000400 */
#define TIM_CCMR1_IC2PSC_1        (0x2U << TIM_CCMR1_IC2PSC_Pos)               /*!< 0x00000800 */

#define TIM_CCMR1_IC2F_Pos        (12U)                                        
#define TIM_CCMR1_IC2F_Msk        (0xFU << TIM_CCMR1_IC2F_Pos)                 /*!< 0x0000F000 */
#define TIM_CCMR1_IC2F            TIM_CCMR1_IC2F_Msk                           /*!<IC2F[3:0] bits (Input Capture 2 Filter) */
#define TIM_CCMR1_IC2F_0          (0x1U << TIM_CCMR1_IC2F_Pos)                 /*!< 0x00001000 */
#define TIM_CCMR1_IC2F_1          (0x2U << TIM_CCMR1_IC2F_Pos)                 /*!< 0x00002000 */
#define TIM_CCMR1_IC2F_2          (0x4U << TIM_CCMR1_IC2F_Pos)                 /*!< 0x00004000 */
#define TIM_CCMR1_IC2F_3          (0x8U << TIM_CCMR1_IC2F_Pos)                 /*!< 0x00008000 */

/******************  Bit definition for TIM_CCMR2 register  *******************/
#define TIM_CCMR2_CC3S_Pos        (0U)                                         
#define TIM_CCMR2_CC3S_Msk        (0x3U << TIM_CCMR2_CC3S_Pos)                 /*!< 0x00000003 */
#define TIM_CCMR2_CC3S            TIM_CCMR2_CC3S_Msk                           /*!<CC3S[1:0] bits (Capture/Compare 3 Selection) */
#define TIM_CCMR2_CC3S_0          (0x1U << TIM_CCMR2_CC3S_Pos)                 /*!< 0x00000001 */
#define TIM_CCMR2_CC3S_1          (0x2U << TIM_CCMR2_CC3S_Pos)                 /*!< 0x00000002 */

#define TIM_CCMR2_OC3FE_Pos       (2U)                                         
#define TIM_CCMR2_OC3FE_Msk       (0x1U << TIM_CCMR2_OC3FE_Pos)                /*!< 0x00000004 */
#define TIM_CCMR2_OC3FE           TIM_CCMR2_OC3FE_Msk                          /*!<Output Compare 3 Fast enable */
#define TIM_CCMR2_OC3PE_Pos       (3U)                                         
#define TIM_CCMR2_OC3PE_Msk       (0x1U << TIM_CCMR2_OC3PE_Pos)                /*!< 0x00000008 */
#define TIM_CCMR2_OC3PE           TIM_CCMR2_OC3PE_Msk                          /*!<Output Compare 3 Preload enable */

#define TIM_CCMR2_OC3M_Pos        (4U)                                         
#define TIM_CCMR2_OC3M_Msk        (0x1007U << TIM_CCMR2_OC3M_Pos)              /*!< 0x00010070 */
#define TIM_CCMR2_OC3M            TIM_CCMR2_OC3M_Msk                           /*!<OC3M[2:0] bits (Output Compare 3 Mode) */
#define TIM_CCMR2_OC3M_0          (0x0001U << TIM_CCMR2_OC3M_Pos)              /*!< 0x00000010 */
#define TIM_CCMR2_OC3M_1          (0x0002U << TIM_CCMR2_OC3M_Pos)              /*!< 0x00000020 */
#define TIM_CCMR2_OC3M_2          (0x0004U << TIM_CCMR2_OC3M_Pos)              /*!< 0x00000040 */
#define TIM_CCMR2_OC3M_3          (0x1000U << TIM_CCMR2_OC3M_Pos)              /*!< 0x00010000 */

#define TIM_CCMR2_OC3CE_Pos       (7U)                                         
#define TIM_CCMR2_OC3CE_Msk       (0x1U << TIM_CCMR2_OC3CE_Pos)                /*!< 0x00000080 */
#define TIM_CCMR2_OC3CE           TIM_CCMR2_OC3CE_Msk                          /*!<Output Compare 3 Clear Enable */

#define TIM_CCMR2_CC4S_Pos        (8U)                                         
#define TIM_CCMR2_CC4S_Msk        (0x3U << TIM_CCMR2_CC4S_Pos)                 /*!< 0x00000300 */
#define TIM_CCMR2_CC4S            TIM_CCMR2_CC4S_Msk                           /*!<CC4S[1:0] bits (Capture/Compare 4 Selection) */
#define TIM_CCMR2_CC4S_0          (0x1U << TIM_CCMR2_CC4S_Pos)                 /*!< 0x00000100 */
#define TIM_CCMR2_CC4S_1          (0x2U << TIM_CCMR2_CC4S_Pos)                 /*!< 0x00000200 */

#define TIM_CCMR2_OC4FE_Pos       (10U)                                        
#define TIM_CCMR2_OC4FE_Msk       (0x1U << TIM_CCMR2_OC4FE_Pos)                /*!< 0x00000400 */
#define TIM_CCMR2_OC4FE           TIM_CCMR2_OC4FE_Msk                          /*!<Output Compare 4 Fast enable */
#define TIM_CCMR2_OC4PE_Pos       (11U)                                        
#define TIM_CCMR2_OC4PE_Msk       (0x1U << TIM_CCMR2_OC4PE_Pos)                /*!< 0x00000800 */
#define TIM_CCMR2_OC4PE           TIM_CCMR2_OC4PE_Msk                          /*!<Output Compare 4 Preload enable */

#define TIM_CCMR2_OC4M_Pos        (12U)                                        
#define TIM_CCMR2_OC4M_Msk        (0x1007U << TIM_CCMR2_OC4M_Pos)              /*!< 0x01007000 */
#define TIM_CCMR2_OC4M            TIM_CCMR2_OC4M_Msk                           /*!<OC4M[2:0] bits (Output Compare 4 Mode) */
#define TIM_CCMR2_OC4M_0          (0x0001U << TIM_CCMR2_OC4M_Pos)              /*!< 0x00001000 */
#define TIM_CCMR2_OC4M_1          (0x0002U << TIM_CCMR2_OC4M_Pos)              /*!< 0x00002000 */
#define TIM_CCMR2_OC4M_2          (0x0004U << TIM_CCMR2_OC4M_Pos)              /*!< 0x00004000 */
#define TIM_CCMR2_OC4M_3          (0x1000U << TIM_CCMR2_OC4M_Pos)              /*!< 0x01000000 */

#define TIM_CCMR2_OC4CE_Pos       (15U)                                        
#define TIM_CCMR2_OC4CE_Msk       (0x1U << TIM_CCMR2_OC4CE_Pos)                /*!< 0x00008000 */
#define TIM_CCMR2_OC4CE           TIM_CCMR2_OC4CE_Msk                          /*!<Output Compare 4 Clear Enable */

/*----------------------------------------------------------------------------*/
#define TIM_CCMR2_IC3PSC_Pos      (2U)                                         
#define TIM_CCMR2_IC3PSC_Msk      (0x3U << TIM_CCMR2_IC3PSC_Pos)               /*!< 0x0000000C */
#define TIM_CCMR2_IC3PSC          TIM_CCMR2_IC3PSC_Msk                         /*!<IC3PSC[1:0] bits (Input Capture 3 Prescaler) */
#define TIM_CCMR2_IC3PSC_0        (0x1U << TIM_CCMR2_IC3PSC_Pos)               /*!< 0x00000004 */
#define TIM_CCMR2_IC3PSC_1        (0x2U << TIM_CCMR2_IC3PSC_Pos)               /*!< 0x00000008 */

#define TIM_CCMR2_IC3F_Pos        (4U)                                         
#define TIM_CCMR2_IC3F_Msk        (0xFU << TIM_CCMR2_IC3F_Pos)                 /*!< 0x000000F0 */
#define TIM_CCMR2_IC3F            TIM_CCMR2_IC3F_Msk                           /*!<IC3F[3:0] bits (Input Capture 3 Filter) */
#define TIM_CCMR2_IC3F_0          (0x1U << TIM_CCMR2_IC3F_Pos)                 /*!< 0x00000010 */
#define TIM_CCMR2_IC3F_1          (0x2U << TIM_CCMR2_IC3F_Pos)                 /*!< 0x00000020 */
#define TIM_CCMR2_IC3F_2          (0x4U << TIM_CCMR2_IC3F_Pos)                 /*!< 0x00000040 */
#define TIM_CCMR2_IC3F_3          (0x8U << TIM_CCMR2_IC3F_Pos)                 /*!< 0x00000080 */

#define TIM_CCMR2_IC4PSC_Pos      (10U)                                        
#define TIM_CCMR2_IC4PSC_Msk      (0x3U << TIM_CCMR2_IC4PSC_Pos)               /*!< 0x00000C00 */
#define TIM_CCMR2_IC4PSC          TIM_CCMR2_IC4PSC_Msk                         /*!<IC4PSC[1:0] bits (Input Capture 4 Prescaler) */
#define TIM_CCMR2_IC4PSC_0        (0x1U << TIM_CCMR2_IC4PSC_Pos)               /*!< 0x00000400 */
#define TIM_CCMR2_IC4PSC_1        (0x2U << TIM_CCMR2_IC4PSC_Pos)               /*!< 0x00000800 */

#define TIM_CCMR2_IC4F_Pos        (12U)                                        
#define TIM_CCMR2_IC4F_Msk        (0xFU << TIM_CCMR2_IC4F_Pos)                 /*!< 0x0000F000 */
#define TIM_CCMR2_IC4F            TIM_CCMR2_IC4F_Msk                           /*!<IC4F[3:0] bits (Input Capture 4 Filter) */
#define TIM_CCMR2_IC4F_0          (0x1U << TIM_CCMR2_IC4F_Pos)                 /*!< 0x00001000 */
#define TIM_CCMR2_IC4F_1          (0x2U << TIM_CCMR2_IC4F_Pos)                 /*!< 0x00002000 */
#define TIM_CCMR2_IC4F_2          (0x4U << TIM_CCMR2_IC4F_Pos)                 /*!< 0x00004000 */
#define TIM_CCMR2_IC4F_3          (0x8U << TIM_CCMR2_IC4F_Pos)                 /*!< 0x00008000 */

/******************  Bit definition for TIM_CCMR3 register  *******************/
#define TIM_CCMR3_OC5FE_Pos       (2U)                                         
#define TIM_CCMR3_OC5FE_Msk       (0x1U << TIM_CCMR3_OC5FE_Pos)                /*!< 0x00000004 */
#define TIM_CCMR3_OC5FE           TIM_CCMR3_OC5FE_Msk                          /*!<Output Compare 5 Fast enable */
#define TIM_CCMR3_OC5PE_Pos       (3U)                                         
#define TIM_CCMR3_OC5PE_Msk       (0x1U << TIM_CCMR3_OC5PE_Pos)                /*!< 0x00000008 */
#define TIM_CCMR3_OC5PE           TIM_CCMR3_OC5PE_Msk                          /*!<Output Compare 5 Preload enable */

#define TIM_CCMR3_OC5M_Pos        (4U)                                         
#define TIM_CCMR3_OC5M_Msk        (0x1007U << TIM_CCMR3_OC5M_Pos)              /*!< 0x00010070 */
#define TIM_CCMR3_OC5M            TIM_CCMR3_OC5M_Msk                           /*!<OC5M[3:0] bits (Output Compare 5 Mode) */
#define TIM_CCMR3_OC5M_0          (0x0001U << TIM_CCMR3_OC5M_Pos)              /*!< 0x00000010 */
#define TIM_CCMR3_OC5M_1          (0x0002U << TIM_CCMR3_OC5M_Pos)              /*!< 0x00000020 */
#define TIM_CCMR3_OC5M_2          (0x0004U << TIM_CCMR3_OC5M_Pos)              /*!< 0x00000040 */
#define TIM_CCMR3_OC5M_3          (0x1000U << TIM_CCMR3_OC5M_Pos)              /*!< 0x00010000 */

#define TIM_CCMR3_OC5CE_Pos       (7U)                                         
#define TIM_CCMR3_OC5CE_Msk       (0x1U << TIM_CCMR3_OC5CE_Pos)                /*!< 0x00000080 */
#define TIM_CCMR3_OC5CE           TIM_CCMR3_OC5CE_Msk                          /*!<Output Compare 5 Clear Enable */

#define TIM_CCMR3_OC6FE_Pos       (10U)                                        
#define TIM_CCMR3_OC6FE_Msk       (0x1U << TIM_CCMR3_OC6FE_Pos)                /*!< 0x00000400 */
#define TIM_CCMR3_OC6FE           TIM_CCMR3_OC6FE_Msk                          /*!<Output Compare 6 Fast enable */
#define TIM_CCMR3_OC6PE_Pos       (11U)                                        
#define TIM_CCMR3_OC6PE_Msk       (0x1U << TIM_CCMR3_OC6PE_Pos)                /*!< 0x00000800 */
#define TIM_CCMR3_OC6PE           TIM_CCMR3_OC6PE_Msk                          /*!<Output Compare 6 Preload enable */

#define TIM_CCMR3_OC6M_Pos        (12U)                                        
#define TIM_CCMR3_OC6M_Msk        (0x1007U << TIM_CCMR3_OC6M_Pos)              /*!< 0x01007000 */
#define TIM_CCMR3_OC6M            TIM_CCMR3_OC6M_Msk                           /*!<OC6M[3:0] bits (Output Compare 6 Mode) */
#define TIM_CCMR3_OC6M_0          (0x0001U << TIM_CCMR3_OC6M_Pos)              /*!< 0x00001000 */
#define TIM_CCMR3_OC6M_1          (0x0002U << TIM_CCMR3_OC6M_Pos)              /*!< 0x00002000 */
#define TIM_CCMR3_OC6M_2          (0x0004U << TIM_CCMR3_OC6M_Pos)              /*!< 0x00004000 */
#define TIM_CCMR3_OC6M_3          (0x1000U << TIM_CCMR3_OC6M_Pos)              /*!< 0x01000000 */

#define TIM_CCMR3_OC6CE_Pos       (15U)                                        
#define TIM_CCMR3_OC6CE_Msk       (0x1U << TIM_CCMR3_OC6CE_Pos)                /*!< 0x00008000 */
#define TIM_CCMR3_OC6CE           TIM_CCMR3_OC6CE_Msk                          /*!<Output Compare 6 Clear Enable */

/*******************  Bit definition for TIM_CCER register  *******************/
#define TIM_CCER_CC1E_Pos         (0U)                                         
#define TIM_CCER_CC1E_Msk         (0x1U << TIM_CCER_CC1E_Pos)                  /*!< 0x00000001 */
#define TIM_CCER_CC1E             TIM_CCER_CC1E_Msk                            /*!<Capture/Compare 1 output enable */
#define TIM_CCER_CC1P_Pos         (1U)                                         
#define TIM_CCER_CC1P_Msk         (0x1U << TIM_CCER_CC1P_Pos)                  /*!< 0x00000002 */
#define TIM_CCER_CC1P             TIM_CCER_CC1P_Msk                            /*!<Capture/Compare 1 output Polarity */
#define TIM_CCER_CC1NE_Pos        (2U)                                         
#define TIM_CCER_CC1NE_Msk        (0x1U << TIM_CCER_CC1NE_Pos)                 /*!< 0x00000004 */
#define TIM_CCER_CC1NE            TIM_CCER_CC1NE_Msk                           /*!<Capture/Compare 1 Complementary output enable */
#define TIM_CCER_CC1NP_Pos        (3U)                                         
#define TIM_CCER_CC1NP_Msk        (0x1U << TIM_CCER_CC1NP_Pos)                 /*!< 0x00000008 */
#define TIM_CCER_CC1NP            TIM_CCER_CC1NP_Msk                           /*!<Capture/Compare 1 Complementary output Polarity */
#define TIM_CCER_CC2E_Pos         (4U)                                         
#define TIM_CCER_CC2E_Msk         (0x1U << TIM_CCER_CC2E_Pos)                  /*!< 0x00000010 */
#define TIM_CCER_CC2E             TIM_CCER_CC2E_Msk                            /*!<Capture/Compare 2 output enable */
#define TIM_CCER_CC2P_Pos         (5U)                                         
#define TIM_CCER_CC2P_Msk         (0x1U << TIM_CCER_CC2P_Pos)                  /*!< 0x00000020 */
#define TIM_CCER_CC2P             TIM_CCER_CC2P_Msk                            /*!<Capture/Compare 2 output Polarity */
#define TIM_CCER_CC2NE_Pos        (6U)                                         
#define TIM_CCER_CC2NE_Msk        (0x1U << TIM_CCER_CC2NE_Pos)                 /*!< 0x00000040 */
#define TIM_CCER_CC2NE            TIM_CCER_CC2NE_Msk                           /*!<Capture/Compare 2 Complementary output enable */
#define TIM_CCER_CC2NP_Pos        (7U)                                         
#define TIM_CCER_CC2NP_Msk        (0x1U << TIM_CCER_CC2NP_Pos)                 /*!< 0x00000080 */
#define TIM_CCER_CC2NP            TIM_CCER_CC2NP_Msk                           /*!<Capture/Compare 2 Complementary output Polarity */
#define TIM_CCER_CC3E_Pos         (8U)                                         
#define TIM_CCER_CC3E_Msk         (0x1U << TIM_CCER_CC3E_Pos)                  /*!< 0x00000100 */
#define TIM_CCER_CC3E             TIM_CCER_CC3E_Msk                            /*!<Capture/Compare 3 output enable */
#define TIM_CCER_CC3P_Pos         (9U)                                         
#define TIM_CCER_CC3P_Msk         (0x1U << TIM_CCER_CC3P_Pos)                  /*!< 0x00000200 */
#define TIM_CCER_CC3P             TIM_CCER_CC3P_Msk                            /*!<Capture/Compare 3 output Polarity */
#define TIM_CCER_CC3NE_Pos        (10U)                                        
#define TIM_CCER_CC3NE_Msk        (0x1U << TIM_CCER_CC3NE_Pos)                 /*!< 0x00000400 */
#define TIM_CCER_CC3NE            TIM_CCER_CC3NE_Msk                           /*!<Capture/Compare 3 Complementary output enable */
#define TIM_CCER_CC3NP_Pos        (11U)                                        
#define TIM_CCER_CC3NP_Msk        (0x1U << TIM_CCER_CC3NP_Pos)                 /*!< 0x00000800 */
#define TIM_CCER_CC3NP            TIM_CCER_CC3NP_Msk                           /*!<Capture/Compare 3 Complementary output Polarity */
#define TIM_CCER_CC4E_Pos         (12U)                                        
#define TIM_CCER_CC4E_Msk         (0x1U << TIM_CCER_CC4E_Pos)                  /*!< 0x00001000 */
#define TIM_CCER_CC4E             TIM_CCER_CC4E_Msk                            /*!<Capture/Compare 4 output enable */
#define TIM_CCER_CC4P_Pos         (13U)                                        
#define TIM_CCER_CC4P_Msk         (0x1U << TIM_CCER_CC4P_Pos)                  /*!< 0x00002000 */
#define TIM_CCER_CC4P             TIM_CCER_CC4P_Msk                            /*!<Capture/Compare 4 output Polarity */
#define TIM_CCER_CC4NP_Pos        (15U)                                        
#define TIM_CCER_CC4NP_Msk        (0x1U << TIM_CCER_CC4NP_Pos)                 /*!< 0x00008000 */
#define TIM_CCER_CC4NP            TIM_CCER_CC4NP_Msk                           /*!<Capture/Compare 4 Complementary output Polarity */
#define TIM_CCER_CC5E_Pos         (16U)                                        
#define TIM_CCER_CC5E_Msk         (0x1U << TIM_CCER_CC5E_Pos)                  /*!< 0x00010000 */
#define TIM_CCER_CC5E             TIM_CCER_CC5E_Msk                            /*!<Capture/Compare 5 output enable */
#define TIM_CCER_CC5P_Pos         (17U)                                        
#define TIM_CCER_CC5P_Msk         (0x1U << TIM_CCER_CC5P_Pos)                  /*!< 0x00020000 */
#define TIM_CCER_CC5P             TIM_CCER_CC5P_Msk                            /*!<Capture/Compare 5 output Polarity */
#define TIM_CCER_CC6E_Pos         (20U)                                        
#define TIM_CCER_CC6E_Msk         (0x1U << TIM_CCER_CC6E_Pos)                  /*!< 0x00100000 */
#define TIM_CCER_CC6E             TIM_CCER_CC6E_Msk                            /*!<Capture/Compare 6 output enable */
#define TIM_CCER_CC6P_Pos         (21U)                                        
#define TIM_CCER_CC6P_Msk         (0x1U << TIM_CCER_CC6P_Pos)                  /*!< 0x00200000 */
#define TIM_CCER_CC6P             TIM_CCER_CC6P_Msk                            /*!<Capture/Compare 6 output Polarity */

/*******************  Bit definition for TIM_CNT register  ********************/
#define TIM_CNT_CNT_Pos           (0U)                                         
#define TIM_CNT_CNT_Msk           (0xFFFFFFFFU << TIM_CNT_CNT_Pos)             /*!< 0xFFFFFFFF */
#define TIM_CNT_CNT               TIM_CNT_CNT_Msk                              /*!<Counter Value */
#define TIM_CNT_UIFCPY_Pos        (31U)                                        
#define TIM_CNT_UIFCPY_Msk        (0x1U << TIM_CNT_UIFCPY_Pos)                 /*!< 0x80000000 */
#define TIM_CNT_UIFCPY            TIM_CNT_UIFCPY_Msk                           /*!<Update interrupt flag copy (if UIFREMAP=1) */

/*******************  Bit definition for TIM_PSC register  ********************/
#define TIM_PSC_PSC_Pos           (0U)                                         
#define TIM_PSC_PSC_Msk           (0xFFFFU << TIM_PSC_PSC_Pos)                 /*!< 0x0000FFFF */
#define TIM_PSC_PSC               TIM_PSC_PSC_Msk                              /*!<Prescaler Value */

/*******************  Bit definition for TIM_ARR register  ********************/
#define TIM_ARR_ARR_Pos           (0U)                                         
#define TIM_ARR_ARR_Msk           (0xFFFFFFFFU << TIM_ARR_ARR_Pos)             /*!< 0xFFFFFFFF */
#define TIM_ARR_ARR               TIM_ARR_ARR_Msk                              /*!<Actual auto-reload Value */

/*******************  Bit definition for TIM_RCR register  ********************/
#define TIM_RCR_REP_Pos           (0U)                                         
#define TIM_RCR_REP_Msk           (0xFFFFU << TIM_RCR_REP_Pos)                 /*!< 0x0000FFFF */
#define TIM_RCR_REP               TIM_RCR_REP_Msk                              /*!<Repetition Counter Value */

/*******************  Bit definition for TIM_CCR1 register  *******************/
#define TIM_CCR1_CCR1_Pos         (0U)                                         
#define TIM_CCR1_CCR1_Msk         (0xFFFFU << TIM_CCR1_CCR1_Pos)               /*!< 0x0000FFFF */
#define TIM_CCR1_CCR1             TIM_CCR1_CCR1_Msk                            /*!<Capture/Compare 1 Value */

/*******************  Bit definition for TIM_CCR2 register  *******************/
#define TIM_CCR2_CCR2_Pos         (0U)                                         
#define TIM_CCR2_CCR2_Msk         (0xFFFFU << TIM_CCR2_CCR2_Pos)               /*!< 0x0000FFFF */
#define TIM_CCR2_CCR2             TIM_CCR2_CCR2_Msk                            /*!<Capture/Compare 2 Value */

/*******************  Bit definition for TIM_CCR3 register  *******************/
#define TIM_CCR3_CCR3_Pos         (0U)                                         
#define TIM_CCR3_CCR3_Msk         (0xFFFFU << TIM_CCR3_CCR3_Pos)               /*!< 0x0000FFFF */
#define TIM_CCR3_CCR3             TIM_CCR3_CCR3_Msk                            /*!<Capture/Compare 3 Value */

/*******************  Bit definition for TIM_CCR4 register  *******************/
#define TIM_CCR4_CCR4_Pos         (0U)                                         
#define TIM_CCR4_CCR4_Msk         (0xFFFFU << TIM_CCR4_CCR4_Pos)               /*!< 0x0000FFFF */
#define TIM_CCR4_CCR4             TIM_CCR4_CCR4_Msk                            /*!<Capture/Compare 4 Value */

/*******************  Bit definition for TIM_CCR5 register  *******************/
#define TIM_CCR5_CCR5_Pos         (0U)                                         
#define TIM_CCR5_CCR5_Msk         (0xFFFFFFFFU << TIM_CCR5_CCR5_Pos)           /*!< 0xFFFFFFFF */
#define TIM_CCR5_CCR5             TIM_CCR5_CCR5_Msk                            /*!<Capture/Compare 5 Value */
#define TIM_CCR5_GC5C1_Pos        (29U)                                        
#define TIM_CCR5_GC5C1_Msk        (0x1U << TIM_CCR5_GC5C1_Pos)                 /*!< 0x20000000 */
#define TIM_CCR5_GC5C1            TIM_CCR5_GC5C1_Msk                           /*!<Group Channel 5 and Channel 1 */
#define TIM_CCR5_GC5C2_Pos        (30U)                                        
#define TIM_CCR5_GC5C2_Msk        (0x1U << TIM_CCR5_GC5C2_Pos)                 /*!< 0x40000000 */
#define TIM_CCR5_GC5C2            TIM_CCR5_GC5C2_Msk                           /*!<Group Channel 5 and Channel 2 */
#define TIM_CCR5_GC5C3_Pos        (31U)                                        
#define TIM_CCR5_GC5C3_Msk        (0x1U << TIM_CCR5_GC5C3_Pos)                 /*!< 0x80000000 */
#define TIM_CCR5_GC5C3            TIM_CCR5_GC5C3_Msk                           /*!<Group Channel 5 and Channel 3 */

/*******************  Bit definition for TIM_CCR6 register  *******************/
#define TIM_CCR6_CCR6_Pos         (0U)                                         
#define TIM_CCR6_CCR6_Msk         (0xFFFFU << TIM_CCR6_CCR6_Pos)               /*!< 0x0000FFFF */
#define TIM_CCR6_CCR6             TIM_CCR6_CCR6_Msk                            /*!<Capture/Compare 6 Value */

/*******************  Bit definition for TIM_BDTR register  *******************/
#define TIM_BDTR_DTG_Pos          (0U)                                         
#define TIM_BDTR_DTG_Msk          (0xFFU << TIM_BDTR_DTG_Pos)                  /*!< 0x000000FF */
#define TIM_BDTR_DTG              TIM_BDTR_DTG_Msk                             /*!<DTG[0:7] bits (Dead-Time Generator set-up) */
#define TIM_BDTR_DTG_0            (0x01U << TIM_BDTR_DTG_Pos)                  /*!< 0x00000001 */
#define TIM_BDTR_DTG_1            (0x02U << TIM_BDTR_DTG_Pos)                  /*!< 0x00000002 */
#define TIM_BDTR_DTG_2            (0x04U << TIM_BDTR_DTG_Pos)                  /*!< 0x00000004 */
#define TIM_BDTR_DTG_3            (0x08U << TIM_BDTR_DTG_Pos)                  /*!< 0x00000008 */
#define TIM_BDTR_DTG_4            (0x10U << TIM_BDTR_DTG_Pos)                  /*!< 0x00000010 */
#define TIM_BDTR_DTG_5            (0x20U << TIM_BDTR_DTG_Pos)                  /*!< 0x00000020 */
#define TIM_BDTR_DTG_6            (0x40U << TIM_BDTR_DTG_Pos)                  /*!< 0x00000040 */
#define TIM_BDTR_DTG_7            (0x80U << TIM_BDTR_DTG_Pos)                  /*!< 0x00000080 */

#define TIM_BDTR_LOCK_Pos         (8U)                                         
#define TIM_BDTR_LOCK_Msk         (0x3U << TIM_BDTR_LOCK_Pos)                  /*!< 0x00000300 */
#define TIM_BDTR_LOCK             TIM_BDTR_LOCK_Msk                            /*!<LOCK[1:0] bits (Lock Configuration) */
#define TIM_BDTR_LOCK_0           (0x1U << TIM_BDTR_LOCK_Pos)                  /*!< 0x00000100 */
#define TIM_BDTR_LOCK_1           (0x2U << TIM_BDTR_LOCK_Pos)                  /*!< 0x00000200 */

#define TIM_BDTR_OSSI_Pos         (10U)                                        
#define TIM_BDTR_OSSI_Msk         (0x1U << TIM_BDTR_OSSI_Pos)                  /*!< 0x00000400 */
#define TIM_BDTR_OSSI             TIM_BDTR_OSSI_Msk                            /*!<Off-State Selection for Idle mode */
#define TIM_BDTR_OSSR_Pos         (11U)                                        
#define TIM_BDTR_OSSR_Msk         (0x1U << TIM_BDTR_OSSR_Pos)                  /*!< 0x00000800 */
#define TIM_BDTR_OSSR             TIM_BDTR_OSSR_Msk                            /*!<Off-State Selection for Run mode */
#define TIM_BDTR_BKE_Pos          (12U)                                        
#define TIM_BDTR_BKE_Msk          (0x1U << TIM_BDTR_BKE_Pos)                   /*!< 0x00001000 */
#define TIM_BDTR_BKE              TIM_BDTR_BKE_Msk                             /*!<Break enable for Break 1 */
#define TIM_BDTR_BKP_Pos          (13U)                                        
#define TIM_BDTR_BKP_Msk          (0x1U << TIM_BDTR_BKP_Pos)                   /*!< 0x00002000 */
#define TIM_BDTR_BKP              TIM_BDTR_BKP_Msk                             /*!<Break Polarity for Break 1 */
#define TIM_BDTR_AOE_Pos          (14U)                                        
#define TIM_BDTR_AOE_Msk          (0x1U << TIM_BDTR_AOE_Pos)                   /*!< 0x00004000 */
#define TIM_BDTR_AOE              TIM_BDTR_AOE_Msk                             /*!<Automatic Output enable */
#define TIM_BDTR_MOE_Pos          (15U)                                        
#define TIM_BDTR_MOE_Msk          (0x1U << TIM_BDTR_MOE_Pos)                   /*!< 0x00008000 */
#define TIM_BDTR_MOE              TIM_BDTR_MOE_Msk                             /*!<Main Output enable */

#define TIM_BDTR_BKF_Pos          (16U)                                        
#define TIM_BDTR_BKF_Msk          (0xFU << TIM_BDTR_BKF_Pos)                   /*!< 0x000F0000 */
#define TIM_BDTR_BKF              TIM_BDTR_BKF_Msk                             /*!<Break Filter for Break 1 */
#define TIM_BDTR_BK2F_Pos         (20U)                                        
#define TIM_BDTR_BK2F_Msk         (0xFU << TIM_BDTR_BK2F_Pos)                  /*!< 0x00F00000 */
#define TIM_BDTR_BK2F             TIM_BDTR_BK2F_Msk                            /*!<Break Filter for Break 2 */

#define TIM_BDTR_BK2E_Pos         (24U)                                        
#define TIM_BDTR_BK2E_Msk         (0x1U << TIM_BDTR_BK2E_Pos)                  /*!< 0x01000000 */
#define TIM_BDTR_BK2E             TIM_BDTR_BK2E_Msk                            /*!<Break enable for Break 2 */
#define TIM_BDTR_BK2P_Pos         (25U)                                        
#define TIM_BDTR_BK2P_Msk         (0x1U << TIM_BDTR_BK2P_Pos)                  /*!< 0x02000000 */
#define TIM_BDTR_BK2P             TIM_BDTR_BK2P_Msk                            /*!<Break Polarity for Break 2 */

/*******************  Bit definition for TIM_DCR register  ********************/
#define TIM_DCR_DBA_Pos           (0U)                                         
#define TIM_DCR_DBA_Msk           (0x1FU << TIM_DCR_DBA_Pos)                   /*!< 0x0000001F */
#define TIM_DCR_DBA               TIM_DCR_DBA_Msk                              /*!<DBA[4:0] bits (DMA Base Address) */
#define TIM_DCR_DBA_0             (0x01U << TIM_DCR_DBA_Pos)                   /*!< 0x00000001 */
#define TIM_DCR_DBA_1             (0x02U << TIM_DCR_DBA_Pos)                   /*!< 0x00000002 */
#define TIM_DCR_DBA_2             (0x04U << TIM_DCR_DBA_Pos)                   /*!< 0x00000004 */
#define TIM_DCR_DBA_3             (0x08U << TIM_DCR_DBA_Pos)                   /*!< 0x00000008 */
#define TIM_DCR_DBA_4             (0x10U << TIM_DCR_DBA_Pos)                   /*!< 0x00000010 */

#define TIM_DCR_DBL_Pos           (8U)                                         
#define TIM_DCR_DBL_Msk           (0x1FU << TIM_DCR_DBL_Pos)                   /*!< 0x00001F00 */
#define TIM_DCR_DBL               TIM_DCR_DBL_Msk                              /*!<DBL[4:0] bits (DMA Burst Length) */
#define TIM_DCR_DBL_0             (0x01U << TIM_DCR_DBL_Pos)                   /*!< 0x00000100 */
#define TIM_DCR_DBL_1             (0x02U << TIM_DCR_DBL_Pos)                   /*!< 0x00000200 */
#define TIM_DCR_DBL_2             (0x04U << TIM_DCR_DBL_Pos)                   /*!< 0x00000400 */
#define TIM_DCR_DBL_3             (0x08U << TIM_DCR_DBL_Pos)                   /*!< 0x00000800 */
#define TIM_DCR_DBL_4             (0x10U << TIM_DCR_DBL_Pos)                   /*!< 0x00001000 */

/*******************  Bit definition for TIM_DMAR register  *******************/
#define TIM_DMAR_DMAB_Pos         (0U)                                         
#define TIM_DMAR_DMAB_Msk         (0xFFFFU << TIM_DMAR_DMAB_Pos)               /*!< 0x0000FFFF */
#define TIM_DMAR_DMAB             TIM_DMAR_DMAB_Msk                            /*!<DMA register for burst accesses */

/*******************  Bit definition for TIM1_OR1 register  *******************/
#define TIM1_OR1_ETR_ADC1_RMP_Pos      (0U)                                    
#define TIM1_OR1_ETR_ADC1_RMP_Msk      (0x3U << TIM1_OR1_ETR_ADC1_RMP_Pos)     /*!< 0x00000003 */
#define TIM1_OR1_ETR_ADC1_RMP          TIM1_OR1_ETR_ADC1_RMP_Msk               /*!<ETR_ADC1_RMP[1:0] bits (TIM1 ETR remap on ADC1) */
#define TIM1_OR1_ETR_ADC1_RMP_0        (0x1U << TIM1_OR1_ETR_ADC1_RMP_Pos)     /*!< 0x00000001 */
#define TIM1_OR1_ETR_ADC1_RMP_1        (0x2U << TIM1_OR1_ETR_ADC1_RMP_Pos)     /*!< 0x00000002 */

#define TIM1_OR1_ETR_ADC3_RMP_Pos      (2U)                                    
#define TIM1_OR1_ETR_ADC3_RMP_Msk      (0x3U << TIM1_OR1_ETR_ADC3_RMP_Pos)     /*!< 0x0000000C */
#define TIM1_OR1_ETR_ADC3_RMP          TIM1_OR1_ETR_ADC3_RMP_Msk               /*!<ETR_ADC3_RMP[1:0] bits (TIM1 ETR remap on ADC3) */
#define TIM1_OR1_ETR_ADC3_RMP_0        (0x1U << TIM1_OR1_ETR_ADC3_RMP_Pos)     /*!< 0x00000004 */
#define TIM1_OR1_ETR_ADC3_RMP_1        (0x2U << TIM1_OR1_ETR_ADC3_RMP_Pos)     /*!< 0x00000008 */

#define TIM1_OR1_TI1_RMP_Pos           (4U)                                    
#define TIM1_OR1_TI1_RMP_Msk           (0x1U << TIM1_OR1_TI1_RMP_Pos)          /*!< 0x00000010 */
#define TIM1_OR1_TI1_RMP               TIM1_OR1_TI1_RMP_Msk                    /*!<TIM1 Input Capture 1 remap */

/*******************  Bit definition for TIM1_OR2 register  *******************/
#define TIM1_OR2_BKINE_Pos             (0U)                                    
#define TIM1_OR2_BKINE_Msk             (0x1U << TIM1_OR2_BKINE_Pos)            /*!< 0x00000001 */
#define TIM1_OR2_BKINE                 TIM1_OR2_BKINE_Msk                      /*!<BRK BKIN input enable */
#define TIM1_OR2_BKCMP1E_Pos           (1U)                                    
#define TIM1_OR2_BKCMP1E_Msk           (0x1U << TIM1_OR2_BKCMP1E_Pos)          /*!< 0x00000002 */
#define TIM1_OR2_BKCMP1E               TIM1_OR2_BKCMP1E_Msk                    /*!<BRK COMP1 enable */
#define TIM1_OR2_BKCMP2E_Pos           (2U)                                    
#define TIM1_OR2_BKCMP2E_Msk           (0x1U << TIM1_OR2_BKCMP2E_Pos)          /*!< 0x00000004 */
#define TIM1_OR2_BKCMP2E               TIM1_OR2_BKCMP2E_Msk                    /*!<BRK COMP2 enable */
#define TIM1_OR2_BKDF1BK0E_Pos         (8U)                                    
#define TIM1_OR2_BKDF1BK0E_Msk         (0x1U << TIM1_OR2_BKDF1BK0E_Pos)        /*!< 0x00000100 */
#define TIM1_OR2_BKDF1BK0E             TIM1_OR2_BKDF1BK0E_Msk                  /*!<BRK DFSDM1_BREAK[0] enable */
#define TIM1_OR2_BKINP_Pos             (9U)                                    
#define TIM1_OR2_BKINP_Msk             (0x1U << TIM1_OR2_BKINP_Pos)            /*!< 0x00000200 */
#define TIM1_OR2_BKINP                 TIM1_OR2_BKINP_Msk                      /*!<BRK BKIN input polarity */
#define TIM1_OR2_BKCMP1P_Pos           (10U)                                   
#define TIM1_OR2_BKCMP1P_Msk           (0x1U << TIM1_OR2_BKCMP1P_Pos)          /*!< 0x00000400 */
#define TIM1_OR2_BKCMP1P               TIM1_OR2_BKCMP1P_Msk                    /*!<BRK COMP1 input polarity */
#define TIM1_OR2_BKCMP2P_Pos           (11U)                                   
#define TIM1_OR2_BKCMP2P_Msk           (0x1U << TIM1_OR2_BKCMP2P_Pos)          /*!< 0x00000800 */
#define TIM1_OR2_BKCMP2P               TIM1_OR2_BKCMP2P_Msk                    /*!<BRK COMP2 input polarity */

#define TIM1_OR2_ETRSEL_Pos            (14U)                                   
#define TIM1_OR2_ETRSEL_Msk            (0x7U << TIM1_OR2_ETRSEL_Pos)           /*!< 0x0001C000 */
#define TIM1_OR2_ETRSEL                TIM1_OR2_ETRSEL_Msk                     /*!<ETRSEL[2:0] bits (TIM1 ETR source selection) */
#define TIM1_OR2_ETRSEL_0              (0x1U << TIM1_OR2_ETRSEL_Pos)           /*!< 0x00004000 */
#define TIM1_OR2_ETRSEL_1              (0x2U << TIM1_OR2_ETRSEL_Pos)           /*!< 0x00008000 */
#define TIM1_OR2_ETRSEL_2              (0x4U << TIM1_OR2_ETRSEL_Pos)           /*!< 0x00010000 */

/*******************  Bit definition for TIM1_OR3 register  *******************/
#define TIM1_OR3_BK2INE_Pos            (0U)                                    
#define TIM1_OR3_BK2INE_Msk            (0x1U << TIM1_OR3_BK2INE_Pos)           /*!< 0x00000001 */
#define TIM1_OR3_BK2INE                TIM1_OR3_BK2INE_Msk                     /*!<BRK2 BKIN2 input enable */
#define TIM1_OR3_BK2CMP1E_Pos          (1U)                                    
#define TIM1_OR3_BK2CMP1E_Msk          (0x1U << TIM1_OR3_BK2CMP1E_Pos)         /*!< 0x00000002 */
#define TIM1_OR3_BK2CMP1E              TIM1_OR3_BK2CMP1E_Msk                   /*!<BRK2 COMP1 enable */
#define TIM1_OR3_BK2CMP2E_Pos          (2U)                                    
#define TIM1_OR3_BK2CMP2E_Msk          (0x1U << TIM1_OR3_BK2CMP2E_Pos)         /*!< 0x00000004 */
#define TIM1_OR3_BK2CMP2E              TIM1_OR3_BK2CMP2E_Msk                   /*!<BRK2 COMP2 enable */
#define TIM1_OR3_BK2DF1BK1E_Pos        (8U)                                    
#define TIM1_OR3_BK2DF1BK1E_Msk        (0x1U << TIM1_OR3_BK2DF1BK1E_Pos)       /*!< 0x00000100 */
#define TIM1_OR3_BK2DF1BK1E            TIM1_OR3_BK2DF1BK1E_Msk                 /*!<BRK2 DFSDM1_BREAK[1] enable */
#define TIM1_OR3_BK2INP_Pos            (9U)                                    
#define TIM1_OR3_BK2INP_Msk            (0x1U << TIM1_OR3_BK2INP_Pos)           /*!< 0x00000200 */
#define TIM1_OR3_BK2INP                TIM1_OR3_BK2INP_Msk                     /*!<BRK2 BKIN2 input polarity */
#define TIM1_OR3_BK2CMP1P_Pos          (10U)                                   
#define TIM1_OR3_BK2CMP1P_Msk          (0x1U << TIM1_OR3_BK2CMP1P_Pos)         /*!< 0x00000400 */
#define TIM1_OR3_BK2CMP1P              TIM1_OR3_BK2CMP1P_Msk                   /*!<BRK2 COMP1 input polarity */
#define TIM1_OR3_BK2CMP2P_Pos          (11U)                                   
#define TIM1_OR3_BK2CMP2P_Msk          (0x1U << TIM1_OR3_BK2CMP2P_Pos)         /*!< 0x00000800 */
#define TIM1_OR3_BK2CMP2P              TIM1_OR3_BK2CMP2P_Msk                   /*!<BRK2 COMP2 input polarity */

/*******************  Bit definition for TIM8_OR1 register  *******************/
#define TIM8_OR1_ETR_ADC2_RMP_Pos      (0U)                                    
#define TIM8_OR1_ETR_ADC2_RMP_Msk      (0x3U << TIM8_OR1_ETR_ADC2_RMP_Pos)     /*!< 0x00000003 */
#define TIM8_OR1_ETR_ADC2_RMP          TIM8_OR1_ETR_ADC2_RMP_Msk               /*!<ETR_ADC2_RMP[1:0] bits (TIM8 ETR remap on ADC2) */
#define TIM8_OR1_ETR_ADC2_RMP_0        (0x1U << TIM8_OR1_ETR_ADC2_RMP_Pos)     /*!< 0x00000001 */
#define TIM8_OR1_ETR_ADC2_RMP_1        (0x2U << TIM8_OR1_ETR_ADC2_RMP_Pos)     /*!< 0x00000002 */

#define TIM8_OR1_ETR_ADC3_RMP_Pos      (2U)                                    
#define TIM8_OR1_ETR_ADC3_RMP_Msk      (0x3U << TIM8_OR1_ETR_ADC3_RMP_Pos)     /*!< 0x0000000C */
#define TIM8_OR1_ETR_ADC3_RMP          TIM8_OR1_ETR_ADC3_RMP_Msk               /*!<ETR_ADC3_RMP[1:0] bits (TIM8 ETR remap on ADC3) */
#define TIM8_OR1_ETR_ADC3_RMP_0        (0x1U << TIM8_OR1_ETR_ADC3_RMP_Pos)     /*!< 0x00000004 */
#define TIM8_OR1_ETR_ADC3_RMP_1        (0x2U << TIM8_OR1_ETR_ADC3_RMP_Pos)     /*!< 0x00000008 */

#define TIM8_OR1_TI1_RMP_Pos           (4U)                                    
#define TIM8_OR1_TI1_RMP_Msk           (0x1U << TIM8_OR1_TI1_RMP_Pos)          /*!< 0x00000010 */
#define TIM8_OR1_TI1_RMP               TIM8_OR1_TI1_RMP_Msk                    /*!<TIM8 Input Capture 1 remap */

/*******************  Bit definition for TIM8_OR2 register  *******************/
#define TIM8_OR2_BKINE_Pos             (0U)                                    
#define TIM8_OR2_BKINE_Msk             (0x1U << TIM8_OR2_BKINE_Pos)            /*!< 0x00000001 */
#define TIM8_OR2_BKINE                 TIM8_OR2_BKINE_Msk                      /*!<BRK BKIN input enable */
#define TIM8_OR2_BKCMP1E_Pos           (1U)                                    
#define TIM8_OR2_BKCMP1E_Msk           (0x1U << TIM8_OR2_BKCMP1E_Pos)          /*!< 0x00000002 */
#define TIM8_OR2_BKCMP1E               TIM8_OR2_BKCMP1E_Msk                    /*!<BRK COMP1 enable */
#define TIM8_OR2_BKCMP2E_Pos           (2U)                                    
#define TIM8_OR2_BKCMP2E_Msk           (0x1U << TIM8_OR2_BKCMP2E_Pos)          /*!< 0x00000004 */
#define TIM8_OR2_BKCMP2E               TIM8_OR2_BKCMP2E_Msk                    /*!<BRK COMP2 enable */
#define TIM8_OR2_BKDF1BK2E_Pos         (8U)                                    
#define TIM8_OR2_BKDF1BK2E_Msk         (0x1U << TIM8_OR2_BKDF1BK2E_Pos)        /*!< 0x00000100 */
#define TIM8_OR2_BKDF1BK2E             TIM8_OR2_BKDF1BK2E_Msk                  /*!<BRK DFSDM1_BREAK[2] enable */
#define TIM8_OR2_BKINP_Pos             (9U)                                    
#define TIM8_OR2_BKINP_Msk             (0x1U << TIM8_OR2_BKINP_Pos)            /*!< 0x00000200 */
#define TIM8_OR2_BKINP                 TIM8_OR2_BKINP_Msk                      /*!<BRK BKIN input polarity */
#define TIM8_OR2_BKCMP1P_Pos           (10U)                                   
#define TIM8_OR2_BKCMP1P_Msk           (0x1U << TIM8_OR2_BKCMP1P_Pos)          /*!< 0x00000400 */
#define TIM8_OR2_BKCMP1P               TIM8_OR2_BKCMP1P_Msk                    /*!<BRK COMP1 input polarity */
#define TIM8_OR2_BKCMP2P_Pos           (11U)                                   
#define TIM8_OR2_BKCMP2P_Msk           (0x1U << TIM8_OR2_BKCMP2P_Pos)          /*!< 0x00000800 */
#define TIM8_OR2_BKCMP2P               TIM8_OR2_BKCMP2P_Msk                    /*!<BRK COMP2 input polarity */

#define TIM8_OR2_ETRSEL_Pos            (14U)                                   
#define TIM8_OR2_ETRSEL_Msk            (0x7U << TIM8_OR2_ETRSEL_Pos)           /*!< 0x0001C000 */
#define TIM8_OR2_ETRSEL                TIM8_OR2_ETRSEL_Msk                     /*!<ETRSEL[2:0] bits (TIM8 ETR source selection) */
#define TIM8_OR2_ETRSEL_0              (0x1U << TIM8_OR2_ETRSEL_Pos)           /*!< 0x00004000 */
#define TIM8_OR2_ETRSEL_1              (0x2U << TIM8_OR2_ETRSEL_Pos)           /*!< 0x00008000 */
#define TIM8_OR2_ETRSEL_2              (0x4U << TIM8_OR2_ETRSEL_Pos)           /*!< 0x00010000 */

/*******************  Bit definition for TIM8_OR3 register  *******************/
#define TIM8_OR3_BK2INE_Pos            (0U)                                    
#define TIM8_OR3_BK2INE_Msk            (0x1U << TIM8_OR3_BK2INE_Pos)           /*!< 0x00000001 */
#define TIM8_OR3_BK2INE                TIM8_OR3_BK2INE_Msk                     /*!<BRK2 BKIN2 input enable */
#define TIM8_OR3_BK2CMP1E_Pos          (1U)                                    
#define TIM8_OR3_BK2CMP1E_Msk          (0x1U << TIM8_OR3_BK2CMP1E_Pos)         /*!< 0x00000002 */
#define TIM8_OR3_BK2CMP1E              TIM8_OR3_BK2CMP1E_Msk                   /*!<BRK2 COMP1 enable */
#define TIM8_OR3_BK2CMP2E_Pos          (2U)                                    
#define TIM8_OR3_BK2CMP2E_Msk          (0x1U << TIM8_OR3_BK2CMP2E_Pos)         /*!< 0x00000004 */
#define TIM8_OR3_BK2CMP2E              TIM8_OR3_BK2CMP2E_Msk                   /*!<BRK2 COMP2 enable */
#define TIM8_OR3_BK2DF1BK3E_Pos        (8U)                                    
#define TIM8_OR3_BK2DF1BK3E_Msk        (0x1U << TIM8_OR3_BK2DF1BK3E_Pos)       /*!< 0x00000100 */
#define TIM8_OR3_BK2DF1BK3E            TIM8_OR3_BK2DF1BK3E_Msk                 /*!<BRK2 DFSDM1_BREAK[3] enable */
#define TIM8_OR3_BK2INP_Pos            (9U)                                    
#define TIM8_OR3_BK2INP_Msk            (0x1U << TIM8_OR3_BK2INP_Pos)           /*!< 0x00000200 */
#define TIM8_OR3_BK2INP                TIM8_OR3_BK2INP_Msk                     /*!<BRK2 BKIN2 input polarity */
#define TIM8_OR3_BK2CMP1P_Pos          (10U)                                   
#define TIM8_OR3_BK2CMP1P_Msk          (0x1U << TIM8_OR3_BK2CMP1P_Pos)         /*!< 0x00000400 */
#define TIM8_OR3_BK2CMP1P              TIM8_OR3_BK2CMP1P_Msk                   /*!<BRK2 COMP1 input polarity */
#define TIM8_OR3_BK2CMP2P_Pos          (11U)                                   
#define TIM8_OR3_BK2CMP2P_Msk          (0x1U << TIM8_OR3_BK2CMP2P_Pos)         /*!< 0x00000800 */
#define TIM8_OR3_BK2CMP2P              TIM8_OR3_BK2CMP2P_Msk                   /*!<BRK2 COMP2 input polarity */

/*******************  Bit definition for TIM2_OR1 register  *******************/
#define TIM2_OR1_ITR1_RMP_Pos      (0U)                                        
#define TIM2_OR1_ITR1_RMP_Msk      (0x1U << TIM2_OR1_ITR1_RMP_Pos)             /*!< 0x00000001 */
#define TIM2_OR1_ITR1_RMP          TIM2_OR1_ITR1_RMP_Msk                       /*!<TIM2 Internal trigger 1 remap */
#define TIM2_OR1_ETR1_RMP_Pos      (1U)                                        
#define TIM2_OR1_ETR1_RMP_Msk      (0x1U << TIM2_OR1_ETR1_RMP_Pos)             /*!< 0x00000002 */
#define TIM2_OR1_ETR1_RMP          TIM2_OR1_ETR1_RMP_Msk                       /*!<TIM2 External trigger 1 remap */

#define TIM2_OR1_TI4_RMP_Pos       (2U)                                        
#define TIM2_OR1_TI4_RMP_Msk       (0x3U << TIM2_OR1_TI4_RMP_Pos)              /*!< 0x0000000C */
#define TIM2_OR1_TI4_RMP           TIM2_OR1_TI4_RMP_Msk                        /*!<TI4_RMP[1:0] bits (TIM2 Input Capture 4 remap) */
#define TIM2_OR1_TI4_RMP_0         (0x1U << TIM2_OR1_TI4_RMP_Pos)              /*!< 0x00000004 */
#define TIM2_OR1_TI4_RMP_1         (0x2U << TIM2_OR1_TI4_RMP_Pos)              /*!< 0x00000008 */

/*******************  Bit definition for TIM2_OR2 register  *******************/
#define TIM2_OR2_ETRSEL_Pos        (14U)                                       
#define TIM2_OR2_ETRSEL_Msk        (0x7U << TIM2_OR2_ETRSEL_Pos)               /*!< 0x0001C000 */
#define TIM2_OR2_ETRSEL            TIM2_OR2_ETRSEL_Msk                         /*!<ETRSEL[2:0] bits (TIM2 ETR source selection) */
#define TIM2_OR2_ETRSEL_0          (0x1U << TIM2_OR2_ETRSEL_Pos)               /*!< 0x00004000 */
#define TIM2_OR2_ETRSEL_1          (0x2U << TIM2_OR2_ETRSEL_Pos)               /*!< 0x00008000 */
#define TIM2_OR2_ETRSEL_2          (0x4U << TIM2_OR2_ETRSEL_Pos)               /*!< 0x00010000 */

/*******************  Bit definition for TIM3_OR1 register  *******************/
#define TIM3_OR1_TI1_RMP_Pos       (0U)                                        
#define TIM3_OR1_TI1_RMP_Msk       (0x3U << TIM3_OR1_TI1_RMP_Pos)              /*!< 0x00000003 */
#define TIM3_OR1_TI1_RMP           TIM3_OR1_TI1_RMP_Msk                        /*!<TI1_RMP[1:0] bits (TIM3 Input Capture 1 remap) */
#define TIM3_OR1_TI1_RMP_0         (0x1U << TIM3_OR1_TI1_RMP_Pos)              /*!< 0x00000001 */
#define TIM3_OR1_TI1_RMP_1         (0x2U << TIM3_OR1_TI1_RMP_Pos)              /*!< 0x00000002 */

/*******************  Bit definition for TIM3_OR2 register  *******************/
#define TIM3_OR2_ETRSEL_Pos        (14U)                                       
#define TIM3_OR2_ETRSEL_Msk        (0x7U << TIM3_OR2_ETRSEL_Pos)               /*!< 0x0001C000 */
#define TIM3_OR2_ETRSEL            TIM3_OR2_ETRSEL_Msk                         /*!<ETRSEL[2:0] bits (TIM3 ETR source selection) */
#define TIM3_OR2_ETRSEL_0          (0x1U << TIM3_OR2_ETRSEL_Pos)               /*!< 0x00004000 */
#define TIM3_OR2_ETRSEL_1          (0x2U << TIM3_OR2_ETRSEL_Pos)               /*!< 0x00008000 */
#define TIM3_OR2_ETRSEL_2          (0x4U << TIM3_OR2_ETRSEL_Pos)               /*!< 0x00010000 */

/*******************  Bit definition for TIM15_OR1 register  ******************/
#define TIM15_OR1_TI1_RMP_Pos      (0U)                                        
#define TIM15_OR1_TI1_RMP_Msk      (0x1U << TIM15_OR1_TI1_RMP_Pos)             /*!< 0x00000001 */
#define TIM15_OR1_TI1_RMP          TIM15_OR1_TI1_RMP_Msk                       /*!<TIM15 Input Capture 1 remap */

#define TIM15_OR1_ENCODER_MODE_Pos (1U)                                        
#define TIM15_OR1_ENCODER_MODE_Msk (0x3U << TIM15_OR1_ENCODER_MODE_Pos)        /*!< 0x00000006 */
#define TIM15_OR1_ENCODER_MODE     TIM15_OR1_ENCODER_MODE_Msk                  /*!<ENCODER_MODE[1:0] bits (TIM15 Encoder mode) */
#define TIM15_OR1_ENCODER_MODE_0   (0x1U << TIM15_OR1_ENCODER_MODE_Pos)        /*!< 0x00000002 */
#define TIM15_OR1_ENCODER_MODE_1   (0x2U << TIM15_OR1_ENCODER_MODE_Pos)        /*!< 0x00000004 */

/*******************  Bit definition for TIM15_OR2 register  ******************/
#define TIM15_OR2_BKINE_Pos        (0U)                                        
#define TIM15_OR2_BKINE_Msk        (0x1U << TIM15_OR2_BKINE_Pos)               /*!< 0x00000001 */
#define TIM15_OR2_BKINE            TIM15_OR2_BKINE_Msk                         /*!<BRK BKIN input enable */
#define TIM15_OR2_BKCMP1E_Pos      (1U)                                        
#define TIM15_OR2_BKCMP1E_Msk      (0x1U << TIM15_OR2_BKCMP1E_Pos)             /*!< 0x00000002 */
#define TIM15_OR2_BKCMP1E          TIM15_OR2_BKCMP1E_Msk                       /*!<BRK COMP1 enable */
#define TIM15_OR2_BKCMP2E_Pos      (2U)                                        
#define TIM15_OR2_BKCMP2E_Msk      (0x1U << TIM15_OR2_BKCMP2E_Pos)             /*!< 0x00000004 */
#define TIM15_OR2_BKCMP2E          TIM15_OR2_BKCMP2E_Msk                       /*!<BRK COMP2 enable */
#define TIM15_OR2_BKDF1BK0E_Pos    (8U)                                        
#define TIM15_OR2_BKDF1BK0E_Msk    (0x1U << TIM15_OR2_BKDF1BK0E_Pos)           /*!< 0x00000100 */
#define TIM15_OR2_BKDF1BK0E        TIM15_OR2_BKDF1BK0E_Msk                     /*!<BRK DFSDM1_BREAK[0] enable */
#define TIM15_OR2_BKINP_Pos        (9U)                                        
#define TIM15_OR2_BKINP_Msk        (0x1U << TIM15_OR2_BKINP_Pos)               /*!< 0x00000200 */
#define TIM15_OR2_BKINP            TIM15_OR2_BKINP_Msk                         /*!<BRK BKIN input polarity */
#define TIM15_OR2_BKCMP1P_Pos      (10U)                                       
#define TIM15_OR2_BKCMP1P_Msk      (0x1U << TIM15_OR2_BKCMP1P_Pos)             /*!< 0x00000400 */
#define TIM15_OR2_BKCMP1P          TIM15_OR2_BKCMP1P_Msk                       /*!<BRK COMP1 input polarity */
#define TIM15_OR2_BKCMP2P_Pos      (11U)                                       
#define TIM15_OR2_BKCMP2P_Msk      (0x1U << TIM15_OR2_BKCMP2P_Pos)             /*!< 0x00000800 */
#define TIM15_OR2_BKCMP2P          TIM15_OR2_BKCMP2P_Msk                       /*!<BRK COMP2 input polarity */

/*******************  Bit definition for TIM16_OR1 register  ******************/
#define TIM16_OR1_TI1_RMP_Pos      (0U)                                        
#define TIM16_OR1_TI1_RMP_Msk      (0x3U << TIM16_OR1_TI1_RMP_Pos)             /*!< 0x00000003 */
#define TIM16_OR1_TI1_RMP          TIM16_OR1_TI1_RMP_Msk                       /*!<TI1_RMP[1:0] bits (TIM16 Input Capture 1 remap) */
#define TIM16_OR1_TI1_RMP_0        (0x1U << TIM16_OR1_TI1_RMP_Pos)             /*!< 0x00000001 */
#define TIM16_OR1_TI1_RMP_1        (0x2U << TIM16_OR1_TI1_RMP_Pos)             /*!< 0x00000002 */

/*******************  Bit definition for TIM16_OR2 register  ******************/
#define TIM16_OR2_BKINE_Pos        (0U)                                        
#define TIM16_OR2_BKINE_Msk        (0x1U << TIM16_OR2_BKINE_Pos)               /*!< 0x00000001 */
#define TIM16_OR2_BKINE            TIM16_OR2_BKINE_Msk                         /*!<BRK BKIN input enable */
#define TIM16_OR2_BKCMP1E_Pos      (1U)                                        
#define TIM16_OR2_BKCMP1E_Msk      (0x1U << TIM16_OR2_BKCMP1E_Pos)             /*!< 0x00000002 */
#define TIM16_OR2_BKCMP1E          TIM16_OR2_BKCMP1E_Msk                       /*!<BRK COMP1 enable */
#define TIM16_OR2_BKCMP2E_Pos      (2U)                                        
#define TIM16_OR2_BKCMP2E_Msk      (0x1U << TIM16_OR2_BKCMP2E_Pos)             /*!< 0x00000004 */
#define TIM16_OR2_BKCMP2E          TIM16_OR2_BKCMP2E_Msk                       /*!<BRK COMP2 enable */
#define TIM16_OR2_BKDF1BK1E_Pos    (8U)                                        
#define TIM16_OR2_BKDF1BK1E_Msk    (0x1U << TIM16_OR2_BKDF1BK1E_Pos)           /*!< 0x00000100 */
#define TIM16_OR2_BKDF1BK1E        TIM16_OR2_BKDF1BK1E_Msk                     /*!<BRK DFSDM1_BREAK[1] enable */
#define TIM16_OR2_BKINP_Pos        (9U)                                        
#define TIM16_OR2_BKINP_Msk        (0x1U << TIM16_OR2_BKINP_Pos)               /*!< 0x00000200 */
#define TIM16_OR2_BKINP            TIM16_OR2_BKINP_Msk                         /*!<BRK BKIN input polarity */
#define TIM16_OR2_BKCMP1P_Pos      (10U)                                       
#define TIM16_OR2_BKCMP1P_Msk      (0x1U << TIM16_OR2_BKCMP1P_Pos)             /*!< 0x00000400 */
#define TIM16_OR2_BKCMP1P          TIM16_OR2_BKCMP1P_Msk                       /*!<BRK COMP1 input polarity */
#define TIM16_OR2_BKCMP2P_Pos      (11U)                                       
#define TIM16_OR2_BKCMP2P_Msk      (0x1U << TIM16_OR2_BKCMP2P_Pos)             /*!< 0x00000800 */
#define TIM16_OR2_BKCMP2P          TIM16_OR2_BKCMP2P_Msk                       /*!<BRK COMP2 input polarity */

/*******************  Bit definition for TIM17_OR1 register  ******************/
#define TIM17_OR1_TI1_RMP_Pos      (0U)                                        
#define TIM17_OR1_TI1_RMP_Msk      (0x3U << TIM17_OR1_TI1_RMP_Pos)             /*!< 0x00000003 */
#define TIM17_OR1_TI1_RMP          TIM17_OR1_TI1_RMP_Msk                       /*!<TI1_RMP[1:0] bits (TIM17 Input Capture 1 remap) */
#define TIM17_OR1_TI1_RMP_0        (0x1U << TIM17_OR1_TI1_RMP_Pos)             /*!< 0x00000001 */
#define TIM17_OR1_TI1_RMP_1        (0x2U << TIM17_OR1_TI1_RMP_Pos)             /*!< 0x00000002 */

/*******************  Bit definition for TIM17_OR2 register  ******************/
#define TIM17_OR2_BKINE_Pos        (0U)                                        
#define TIM17_OR2_BKINE_Msk        (0x1U << TIM17_OR2_BKINE_Pos)               /*!< 0x00000001 */
#define TIM17_OR2_BKINE            TIM17_OR2_BKINE_Msk                         /*!<BRK BKIN input enable */
#define TIM17_OR2_BKCMP1E_Pos      (1U)                                        
#define TIM17_OR2_BKCMP1E_Msk      (0x1U << TIM17_OR2_BKCMP1E_Pos)             /*!< 0x00000002 */
#define TIM17_OR2_BKCMP1E          TIM17_OR2_BKCMP1E_Msk                       /*!<BRK COMP1 enable */
#define TIM17_OR2_BKCMP2E_Pos      (2U)                                        
#define TIM17_OR2_BKCMP2E_Msk      (0x1U << TIM17_OR2_BKCMP2E_Pos)             /*!< 0x00000004 */
#define TIM17_OR2_BKCMP2E          TIM17_OR2_BKCMP2E_Msk                       /*!<BRK COMP2 enable */
#define TIM17_OR2_BKDF1BK2E_Pos    (8U)                                        
#define TIM17_OR2_BKDF1BK2E_Msk    (0x1U << TIM17_OR2_BKDF1BK2E_Pos)           /*!< 0x00000100 */
#define TIM17_OR2_BKDF1BK2E        TIM17_OR2_BKDF1BK2E_Msk                     /*!<BRK DFSDM1_BREAK[2] enable */
#define TIM17_OR2_BKINP_Pos        (9U)                                        
#define TIM17_OR2_BKINP_Msk        (0x1U << TIM17_OR2_BKINP_Pos)               /*!< 0x00000200 */
#define TIM17_OR2_BKINP            TIM17_OR2_BKINP_Msk                         /*!<BRK BKIN input polarity */
#define TIM17_OR2_BKCMP1P_Pos      (10U)                                       
#define TIM17_OR2_BKCMP1P_Msk      (0x1U << TIM17_OR2_BKCMP1P_Pos)             /*!< 0x00000400 */
#define TIM17_OR2_BKCMP1P          TIM17_OR2_BKCMP1P_Msk                       /*!<BRK COMP1 input polarity */
#define TIM17_OR2_BKCMP2P_Pos      (11U)                                       
#define TIM17_OR2_BKCMP2P_Msk      (0x1U << TIM17_OR2_BKCMP2P_Pos)             /*!< 0x00000800 */
#define TIM17_OR2_BKCMP2P          TIM17_OR2_BKCMP2P_Msk                       /*!<BRK COMP2 input polarity */
