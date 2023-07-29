#ifndef ENERINNO_MCP9600_H
#define ENERINNO_MCP9600_H

void init_thermocouples();
float get_sensor_value(int sensorIndex);
float getSensorTemperature(int sensorIndex);
void thermocouple_loop();
#endif