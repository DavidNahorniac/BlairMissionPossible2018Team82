#ifndef SENSOR_H
#define SENSOR_H

#ifdef __cplusplus
extern "C"{
#endif


//pins
#define PHOTOCELL null
#define TEMP_SENSOR null
#define ANEMOMETER null
#define SALINITY_SENSOR null

int getLightLevel();
double getTemp();
double getWindSpeed();
double getSalinity();







#ifdef __cplusplus
} //close extern C
#endif
#endif
