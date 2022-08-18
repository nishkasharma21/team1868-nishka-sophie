// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "PORTS.h"
#include "ctre/Phoenix.h"
#include <rev/CANSparkMax.h>
#include <frc/motorcontrol/MotorControllerGroup.h>

class Drivetrain: public frc2::SubsystemBase {
 public:
  Drivetrain();
  void SetMotorValue(double thrust, double rotation);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  /**
   * Will be called periodically whenever the CommandScheduler runs during
   * simulation.
   */
  void SimulationPeriodic() override;

 private:
  WPI_TalonFX *leftPrimary, *leftSecondary, *rightPrimary, *rightSecondary;
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
