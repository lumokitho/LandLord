#include <global.h>

int stack_Keypad, stack_Counter, stack_LCD, stack_ADC = 0;


TickType_t xDelay1 = TicksPerMS * 1;
TickType_t xDelay10 = TicksPerMS * 10;
TickType_t xDelay25 = TicksPerMS * 25;
TickType_t xDelay50 = TicksPerMS * 50;
TickType_t xDelay100 = TicksPerMS * 100;
TickType_t xDelay200 = TicksPerMS * 200;
TickType_t xDelay150 = TicksPerMS * 150;
TickType_t xDelay250 = TicksPerMS * 250;
TickType_t xDelay500 = TicksPerMS * 500;
TickType_t xDelay1000 = TicksPerMS * 1000;


volatile uint32_t debug1 = 0;
volatile uint8_t debug2 = 0;
volatile uint8_t debug3 = 0;
volatile uint8_t debug4 = 0;
volatile debug_t debugArray[5] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
volatile uint8_t debugState = 0;
volatile uint32_t ADC0 = 0;
volatile uint32_t ADC1 = 0;
volatile uint32_t ADC2 = 0;
volatile uint32_t ADC3 = 0;
volatile uint32_t ADC4 = 0;
volatile uint32_t ADC5 = 0;
volatile uint32_t ADC6 = 0;
volatile uint32_t ADC7 = 0;

volatile uint32_t delayuS = 0;
volatile uint32_t delaymS = 0;
