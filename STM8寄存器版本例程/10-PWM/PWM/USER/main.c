
/******************** (C) COPYRIGHT  ���iCreateǶ��ʽ���������� ********************
 * �ļ���  ��main.c
 * ����    ��TIM2��ʱ����ʹ��  
 * ʵ��ƽ̨��iCreate STM8������
 * �Ĵ����汾  ��V1.0.0
 * ����    ��ling_guansheng  QQ��779814207
 * ����    ��
 * �Ա�    ��http://shop71177993.taobao.com/
 *�޸�ʱ�� ��2011-12-20
**********************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "clk_conf.h"
#include "pwm.h"
#include "beep.h"


/* Private defines -----------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

int main(void)
{
  /* Infinite loop */

  /*�����ڲ�����ʱ��16MΪ��ʱ��*/ 
   Clk_conf();
   PWM_Init();
   #if TIM2_Channel==TIM2_Channel1
   Set_Beep_OptionByte();
   #endif
    
  while(1)
  {

    #if TIM2_Channel==TIM2_Channel2
    TestPWM_LED();
    #elif TIM2_Channel==TIM2_Channel1
    TestPWM_Beep();
    #endif
 
  }
}






#ifdef USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param file: pointer to the source file name
  * @param line: assert_param error line source number
  * @retval : None
  */
void assert_failed(u8* file, u32 line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/******************* (C) COPYRIGHT ���iCreateǶ��ʽ���������� *****END OF FILE****/
