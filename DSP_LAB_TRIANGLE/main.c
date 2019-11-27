#include <stdio.h>

// left input data from ad1836
int iChannel0LeftIn, iChannel1LeftIn;
// right input data from ad1836
int iChannel0RightIn, iChannel1RightIn;
// left ouput data for ad1836	
int iChannel0LeftOut, iChannel1LeftOut;
// right ouput data for ad1836
int iChannel0RightOut, iChannel1RightOut;
// array for registers to configure the ad1836
// names are defined in "Talkthrough.h"

int frequency = 440;
int maxAmplitude = 1000000;
int signalAmplitude = 0;
int counter = 0;
int counter2 = 0;

// SPORT0 DMA transmit buffer
volatile int iTxBuffer1[4];
// SPORT0 DMA receive buffer
volatile int iRxBuffer1[4];

volatile int plotTable[10000];

int main(int argc, char* argv[])
{
	printf("sd");
	while (1)
	{

	}
}