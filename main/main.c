#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "plclib.h"

void app_main(void)
{
    while(1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
