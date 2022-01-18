#include "Animate.h"
#include "config.h"
// #include <TJpg_Decoder.h>

#if Animate_Choice != 0
int Animate_key = 0; //记录图标显示帧数
#endif

#if Animate_Choice == 1
#include "img/astronaut.h"
#elif Animate_Choice == 2
#include "img/hutao.h"
#endif

void imgAnim(const uint8_t **Animate_value, uint32_t *Animate_size)
{

    if (Animate_key <= 10)
    {
        Animate_key++;
    }
    else
    {
        Animate_key = 0;
    }
//太空人起飞
#if Animate_Choice == 1
    *Animate_value = astronaut[Animate_key];
    *Animate_size = astronaut[Animate_key];
//胡桃摇
#elif Animate_Choice == 2
    *Animate_value = hutao[Animate_key];
    *Animate_size = hutao_size[Animate_key];
}

#endif