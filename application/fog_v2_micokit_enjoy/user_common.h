#ifndef _USER_COMMON_H_
#define _USER_COMMON_H_

#include "mico.h"

typedef struct _EXT_SENSOR_DATA
{
    uint32_t    command_id;     //�������������
    uint8_t     temperature;    //�¶�
    uint8_t     humidity;       //ʪ��
    uint16_t    light_sensor;   //����ǿ��
    uint16_t    infrared_reflective;  //����
}EXT_SENSOR_DATA;


extern void free_json_obj(json_object **json_obj);
extern void micokit_ext_set(void);
extern void micokit_set_oled(uint8_t temperature, uint8_t humidity);

#endif