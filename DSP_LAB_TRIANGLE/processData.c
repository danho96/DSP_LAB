#include "Talkthrough.h"

void Process_Data(void)
{
	//	int sampleLeft=iChannel0LeftIn<<8;
	//	int sampleRight=iChannel0RightIn<<8;
	//	int sample =(sampleLeft+sampleRight)/2;
	counter2++;


	if (signalAmplitude > maxAmplitude)
	{
		signalAmplitude = 0;
	}
	signalAmplitude += (maxAmplitude / (48000 / frequency));
	int sample = (signalAmplitude << 8);
	plotTable[counter] = signalAmplitude;
	counter++;
	if (counter > 10000) counter = 0;
	//student's code here


	//postprocessing
	sample = sample >> 8;
	iChannel0LeftOut = sample;
	iChannel0RightOut = sample;
	iChannel1LeftOut = sample;
	iChannel1RightOut = sample;
}
