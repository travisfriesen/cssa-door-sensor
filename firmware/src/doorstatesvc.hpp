#pragma once

#include <Arduino.h>

class DoorStateService {
  private:
    byte querySwitchMode();
    bool querySensorState();
    void tickSwitch();
    void tickSensor();
    

  public:
    DoorStateService();
    

    void tick();
    bool getSensorState();
    byte getSwitchState();
    String getStateString();
};

extern DoorStateService DoorStateSvc;