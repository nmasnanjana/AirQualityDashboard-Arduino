#ifndef NETWORKING_H
#define NETWORKING_H

#include <Arduino.h>

void initialize_dhcp(byte* macAddress);
void PrintNetInfoSerial();

#endif