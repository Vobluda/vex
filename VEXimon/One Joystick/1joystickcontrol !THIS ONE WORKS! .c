#pragma config(Motor,  port1,           left,          tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port2,           hand,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          right,         tmotorVex393_HBridge, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {

	int leftvalue = 0;
	int rightvalue = 0;

	while(1==1)
	{
		/*Following code controls the wheels*/
		leftvalue = vexRT[3] + vexRT[2];
		rightvalue = vexRT[3] - vexRT[2];

		motor[left] = leftvalue;
		motor[right] = rightvalue;

		if(motor[left] > 127)
		{
			motor[left] = 127;
		}

		if(motor[right] > 127)
		{
			motor[right] = 127;
		}

		/*Following code controls hand and claw */
		motor[hand] = vexRT[4]/2;
		int btn6UVal = vexRT[Btn6U]*63;
		int btn5UVal = vexRT[Btn5U]*63;

		motor[hand] = btn6UVal - btn5UVal;

	}
}
