#ifndef __CONFIG_H_
#define __CONFIG_H_

/**
 * Тип логгера
 */
uint8_t loggerType = LOGGER_SD_CARD;
/**
 * SD Card Start block
 */
uint32_t sdCardStartBlock_config = 1025;

/**
 * Возможность задать время полета
 * В миллисекундах
 * 0 - не выключаться
 */
int flightTime = 8000;


/**
 * Ожидание перед началом стабилизации.
 * После того как подключено питание стабилизация
 * начнется не сразу, а после этого времени.
 */
int heatUpTime = 3000;


/**
 * Возможность задать силу тяги
 * От 0 до 255
 */
double xSpeed = 40;
double ySpeed = 40;

/**
 * ПИД максимальные значения (+-)
 */
double pidOutputLimits = 90;


/**
 * Fail-safe
 * Отключение моторов, если угл наклона превысил допустимый предел
 */
int failsafeAngle = 90;


/**
 * Калибровка угла плоскости припаянной инерциальной сборки на коптере
 * по отношению к плоскости коптера.
 * На ровной поверхности
 * X: 181
 * Y:177
 */
int xOffsetIMU = -1;
int yOffsetIMU = +3;


/**
 * Цель для ПИД-регулятора стремиться к этим значениям
 * чтобы сохранить свое положение в пространстве.
 */
double targetAngleX = 180.0;
double targetAngleY = 180.0;


/**
 * Настройка выводов моторов
 */
int esc_x1_pin = 3;
int esc_x2_pin = 6;
//Y-axis
int esc_y1_pin = 5;
int esc_y2_pin = 9; //Pin with led

/**
 * Вывод МК на светодиод.
 * К сожалению, в данном коптере он подключен к мотору
 */
int ledPin = esc_y2_pin;

#endif