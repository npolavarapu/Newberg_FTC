#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTMotor)
#pragma config(Sensor, S2,     gyroSensor,     sensorI2CHiTechnicGyro)
#pragma config(Sensor, S3,     IRSeeker,       sensorHiTechnicIRSeeker1200)
#pragma config(Sensor, S4,     ,               sensorHiTechnicTouchMux)
#pragma config(Motor,  mtr_S1_C1_1,     FrontLeft,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     MidLeft,       tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     FrontRight,    tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     MidRight,      tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     BackLeft,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     Arm,           tmotorTetrix, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C4_1,     BackRight,     tmotorTetrix, openLoop, reversed, encoder)
#pragma config(Motor,  mtr_S1_C4_2,     Joint,         tmotorTetrix, openLoop, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

while (true)
	{
		TButtons nBtn;

	  //while (true) // wait for button press
	  //{
	  	nBtn = nNxtButtonPressed;
	  //	if (nBtn != -1)
	  //	  break;
	  //}

	  switch (nBtn)
	  {
	  	case kLeftButton:
	  	  motor[Arm] = 55;
	  	  wait10Msec(2);
	  	  break;
			case kRightButton:
			  motor[Arm] = -55;
			  wait10Msec(2);
	  	  break;
			case kExitButton:	   			break;
			case -1:
			  motor[Arm] = 0;
			  wait10Msec(2);
	  	  break;
			default:
			  motor[Arm] = 0;
			  wait10Msec(2);
			break;
		}

}
}
