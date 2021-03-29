/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

/*
 * Modified 9 June 2018 by Justin Mattair
 *   for MattairTech boards (www.mattairtech.com)
 *
 * See README.md for documentation and pin mapping information
 */


#include "variant.h"

/*
 * Pins descriptions
 */
#if defined PIN_MAP_STANDARD
#if defined(PIN_DESCRIPTION_TABLE_SIMPLE)
const PinDescription g_APinDescription[]=
{
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( PORTA, 2 ), PER_ATTR_DRIVE_STD, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_2, ADC_Channel0 ) },
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( PORTA, 4 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), TCC0_CH0, SetExtIntADC( EXTERNAL_INT_4, ADC_Channel2 ) },
	{ SetPortPin( PORTA, 5 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), TCC0_CH1, SetExtIntADC( EXTERNAL_INT_5, ADC_Channel3 ) },
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( PORTA, 8 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), TCC0_CH2, SetExtIntADC( EXTERNAL_INT_6, No_ADC_Channel ) },
	{ SetPortPin( PORTA, 9 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), TCC0_CH3, SetExtIntADC( EXTERNAL_INT_7, No_ADC_Channel ) },
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( PORTA, 14 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), TC1_CH0, SetExtIntADC( EXTERNAL_INT_NMI, ADC_Channel6 ) },
	{ SetPortPin( PORTA, 15 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), TC1_CH1, SetExtIntADC( EXTERNAL_INT_1, ADC_Channel7 ) },
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( PORTA, 24 ), PER_ATTR_DRIVE_STD, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // USB/DM
	{ SetPortPin( PORTA, 25 ), PER_ATTR_DRIVE_STD, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // USB/DP
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( PORTA, 28 ), PER_ATTR_DRIVE_STD, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused (Reset)
	{ SetPortPin( NOT_A_PORT, 0 ), PER_ATTR_NONE, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused
	{ SetPortPin( PORTA, 30 ), (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // SWD CLK
	{ SetPortPin( PORTA, 31 ), (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_3, No_ADC_Channel ) }, // SWD IO
} ;
#else
const PinDescription g_APinDescription[]=
{
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { PORTA,  2, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DAC|PIN_ATTR_DIGITAL|PIN_ATTR_EXTINT), NOT_ON_TIMER, ADC_Channel0, EXTERNAL_INT_2, GCLK_CCL_NONE },
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { PORTA,  4, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC0_CH0, ADC_Channel2, EXTERNAL_INT_4, GCLK_CCL_NONE },
        { PORTA,  5, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC0_CH1, ADC_Channel3, EXTERNAL_INT_5, GCLK_CCL_NONE },
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { PORTA,  8, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC0_CH2, No_ADC_Channel, EXTERNAL_INT_6, GCLK_CCL_NONE },
        { PORTA,  9, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC0_CH3, No_ADC_Channel, EXTERNAL_INT_7, GCLK_CCL_NONE },
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { PORTA, 14, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC1_CH0, ADC_Channel6, EXTERNAL_INT_NMI, GCLK_CCL_NONE },
        { PORTA, 15, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC1_CH1, ADC_Channel7, EXTERNAL_INT_1, GCLK_CCL_NONE },
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { PORTA, 24, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DM
        { PORTA, 25, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DP
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { PORTA, 28, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused (Reset)
        { NOT_A_PORT,  0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused
        { PORTA, 30, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SWD CLK
        { PORTA, 31, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_3, GCLK_CCL_NONE }, // SWD IO
} ;
#endif
#elif defined(PIN_MAP_COMPACT)
#if defined(PIN_DESCRIPTION_TABLE_SIMPLE)
const PinDescription g_APinDescription[]=
{
	{ SetPortPin( PORTA, 2 ), PER_ATTR_DRIVE_STD, NOT_ON_TIMER, ADC_Channel0, EXTERNAL_INT_2, GCLK_CCL_NONE },
	{ SetPortPin( PORTA, 4 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), TCC0_CH0, ADC_Channel2, EXTERNAL_INT_4, GCLK_CCL_NONE },
	{ SetPortPin( PORTA, 5 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), TCC0_CH1, ADC_Channel3, EXTERNAL_INT_5, GCLK_CCL_NONE },
	{ SetPortPin( PORTA, 8 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), TCC0_CH2, No_ADC_Channel, EXTERNAL_INT_6, GCLK_CCL_NONE },
	{ SetPortPin( PORTA, 9 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), TCC0_CH3, No_ADC_Channel, EXTERNAL_INT_7, GCLK_CCL_NONE },
	{ SetPortPin( PORTA, 14 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), TC1_CH0, ADC_Channel6, EXTERNAL_INT_NMI, GCLK_CCL_NONE },
	{ SetPortPin( PORTA, 15 ), (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), TC1_CH1, ADC_Channel7, EXTERNAL_INT_1, GCLK_CCL_NONE },
	{ SetPortPin( PORTA, 24 ), PER_ATTR_DRIVE_STD, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // USB/DM
	{ SetPortPin( PORTA, 25 ), PER_ATTR_DRIVE_STD, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // USB/DP
	{ SetPortPin( PORTA, 28 ), PER_ATTR_DRIVE_STD, NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // Unused (Reset)
	{ SetPortPin( PORTA, 30 ), (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), NOT_ON_TIMER, SetExtIntADC( EXTERNAL_INT_NONE, No_ADC_Channel ) }, // SWD CLK
	{ SetPortPin( PORTA, 31 ), (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_3, GCLK_CCL_NONE }, // SWD IO
} ;
#else
const PinDescription g_APinDescription[]=
{
        { PORTA,  2, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DAC|PIN_ATTR_DIGITAL|PIN_ATTR_EXTINT), NOT_ON_TIMER, ADC_Channel0, EXTERNAL_INT_2, GCLK_CCL_NONE },
        { PORTA,  4, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC0_CH0, ADC_Channel2, EXTERNAL_INT_4, GCLK_CCL_NONE },
        { PORTA,  5, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_ALT|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC0_CH1, ADC_Channel3, EXTERNAL_INT_5, GCLK_CCL_NONE },
        { PORTA,  8, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC0_CH2, No_ADC_Channel, EXTERNAL_INT_6, GCLK_CCL_NONE },
        { PORTA,  9, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TCC0_CH3, No_ADC_Channel, EXTERNAL_INT_7, GCLK_CCL_NONE },
        { PORTA, 14, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC1_CH0, ADC_Channel6, EXTERNAL_INT_NMI, GCLK_CCL_NONE },
        { PORTA, 15, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), TC1_CH1, ADC_Channel7, EXTERNAL_INT_1, GCLK_CCL_NONE },
        { PORTA, 24, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DM
        { PORTA, 25, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DP
        { PORTA, 28, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // Unused (Reset)
        { PORTA, 30, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SWD CLK
        { PORTA, 31, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM|PIN_ATTR_EXTINT), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_3, GCLK_CCL_NONE }, // SWD IO
} ;
#endif
#endif

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TC1, TC2 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;


Uart Serial1( SERCOM_INSTANCE_SERIAL1, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM1_Handler()
{
  Serial1.IrqHandler();
}

