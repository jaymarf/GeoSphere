class Motor {
private:
	int enablePin;
	int inputA;
	int inputB;

public:
	Motor(int in1, int in2, int in3);
	void Initialize();
	void RotateClockwise(int speed);
	void RotateCounterClockwise(int speed);
};