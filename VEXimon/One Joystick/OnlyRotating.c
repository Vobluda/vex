#pragma config(Motor,  port1,           left,          tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port10,          right,         tmotorVex393_HBridge, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	motor[left] = (vexRT[3]+vexRT[4])/2;
	motor[right] = (vexRT[3]-vexRT[4])/2;
	wait1Msec(1);
}