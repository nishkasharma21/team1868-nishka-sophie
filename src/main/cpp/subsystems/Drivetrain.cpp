// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Drivetrain.h"

Drivetrain::Drivetrain() {
  leftPrimary = new WPI_TalonFX(0); 
  leftSecondary = new WPI_TalonFX(0);
  rightPrimary = new WPI_TalonFX(0);
  rightSecondary = new WPI_TalonFX(0);
  // Implementation of subsystem construcr goes here.
}

void Drivetrain::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void Drivetrain::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}

void Drivetrain::SetMotorValue(double thrust, double rotation){

}