#include <SPI.h>
#include <Ethernet.h>
#include <Arduino.h>
#include "HardwareSerial.h"

// Function for getting a ip address via DHCP
void initialize_dhcp(byte* macAddress) {
    Serial.println("Initializing DHCP");

    // Try to configure Ethernet using DHCP
    if (Ethernet.begin(macAddress) == 0) {
        Serial.println("Failed to initialize Ethernet with DHCP");
        
        // Checking for hardware configuration
        if (Ethernet.hardwareStatus() == EthernetNoHardware) {
            Serial.println("No Ethernet hardware found");
        }

        // Delay the program for a bit
        while (true) {
            delay(1);
        }

    } else {
        Serial.println("DHCP initialized successfully");
    }
}

// Function to print net info to the serial
void PrintNetInfoSerial() {
    // ip address
    Serial.print("IP Address: ");
    Serial.println(Ethernet.localIP());

    // subnet mask
    Serial.print("Subnet Mask: ");
    Serial.println(Ethernet.subnetMask());

    // gateway IP
    Serial.print("Gateway IP: ");
    Serial.println(Ethernet.gatewayIP());

    // dns server address
    Serial.print("DNS Server IP: ");
    Serial.println(Ethernet.dnsServerIP());
}