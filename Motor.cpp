#include "Motor.h"
#include "Arduino.h"
Motor::Motor(int ePin, int inPin1, int inPin2)
{
	enablePin = ePin;
	inputA = inPin1;
	inputB = inPin2;

}

void Motor::Initialize()
{
	pinMode(enablePin, OUTPUT);
	pinMode(inputA, OUTPUT);
	pinMode(inputB, OUTPUT);
}
void Motor::RotateClockwise(int speed)
{
	digitalWrite(inputA, HIGH);
	digitalWrite(inputB, LOW);
	digitalWrite(enablePin, speed);
}

void Motor::RotateCounterClockwise(int speed)
{
	digitalWrite(inputA, LOW);
	digitalWrite(inputB, HIGH);
	digitalWrite(enablePin, speed);
}
