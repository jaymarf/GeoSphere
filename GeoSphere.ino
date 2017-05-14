#include "Motor.h"
//Moto1
Motor motor1(11, 2, 4);
Motor motor2(10, 8, 7);
int serialDate = 0;

void setup()
{
	// motor1.Initialize();
	 //motor2.Initialize();
	 Serial.begin(9600);
}
int mySpeed(double Percent)
{
	return Percent * 255;
}

void loop()
{
	if (Serial.available() > 0)
	{
		serialDate = Serial.read();
		Serial.println(serialDate);
	}
	/*int rotations = 5;
	for (int i = 0; i < rotations; i++)
	{
		motor1.RotateClockwise(255);
		motor2.RotateCounterClockwise(255);
	}*/
}
