/*
 * CamCent.cpp

 *
 *  Created on: Feb 16, 2015
 *      Author: Kyler
 */


// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "CamCent.h"

CamCent::CamCent() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::camera);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void CamCent::Initialize() {


}

// Called repeatedly when this Command is scheduled to run
void CamCent::Execute(){
	float angle;
	while((Robot::camera->cameraVert->GetAngle() > 80)){
	angle = Robot::camera->cameraVert->GetAngle();
	Robot::camera->cameraVert->SetAngle(angle-2);
	}
	while((Robot::camera->cameraHoriz->GetAngle() > 100)){
	angle = Robot::camera->cameraHoriz->GetAngle();
	Robot::camera->cameraHoriz->SetAngle(angle-2);
	}
	while((Robot::camera->cameraVert->GetAngle() < 80)){
	angle = Robot::camera->cameraVert->GetAngle();
	Robot::camera->cameraVert->SetAngle(angle+2);
	}
	while((Robot::camera->cameraHoriz->GetAngle() < 100)){
	angle = Robot::camera->cameraHoriz->GetAngle();
	Robot::camera->cameraHoriz->SetAngle(angle+2);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CamCent::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void CamCent::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CamCent::Interrupted() {

}








