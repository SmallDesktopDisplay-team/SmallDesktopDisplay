#include "Animate.h"
#include "config.h"
#include <TJpg_Decoder.h>

#if Animate_Choice == 1
#include "img/pangzi.h"

int Anim = 0;      //图标显示指针记录
int AprevTime = 0; //更新时间记录

#elif Animate_Choice == 2
#include "img/hutao.h"

int Anim = 0;      //图标显示指针记录
int AprevTime = 0; //更新时间记录
#endif

#if Animate_Choice == 1
//太空人起飞
void imgAnim(TJpg_Decoder *in_TJpgDec)
{
    TJpgDec = *in_TJpgDec;
    int x = 160, y = 160;
    if (millis() - AprevTime > 41) // x ms切换一次
    {
        Anim++;
        AprevTime = millis();
    }
    if (Anim == 10)
        Anim = 0;
    switch (Anim)
    {
    case 0:
        TJpgDec.drawJpg(x, y, i0, sizeof(i0));
        break;
    case 1:
        TJpgDec.drawJpg(x, y, i1, sizeof(i1));
        break;
    case 2:
        TJpgDec.drawJpg(x, y, i2, sizeof(i2));
        break;
    case 3:
        TJpgDec.drawJpg(x, y, i3, sizeof(i3));
        break;
    case 4:
        TJpgDec.drawJpg(x, y, i4, sizeof(i4));
        break;
    case 5:
        TJpgDec.drawJpg(x, y, i5, sizeof(i5));
        break;
    case 6:
        TJpgDec.drawJpg(x, y, i6, sizeof(i6));
        break;
    case 7:
        TJpgDec.drawJpg(x, y, i7, sizeof(i7));
        break;
    case 8:
        TJpgDec.drawJpg(x, y, i8, sizeof(i8));
        break;
    case 9:
        TJpgDec.drawJpg(x, y, i9, sizeof(i9));
        break;
    default:
        Serial.println("显示Anim错误");
        break;
    }
}
#elif Animate_Choice == 2
//胡桃摇
void imgAnim(TJpg_Decoder *in_TJpgDec)
{
    TJpgDec = *in_TJpgDec;
    int x = 160, y = 160;
    if (millis() - AprevTime > 33) // x ms切换一次
    {
        Anim++;
        AprevTime = millis();
    }
    if (Anim == 54)
        Anim = 0;

    switch (Anim)
    {
    case 0:
        TJpgDec.drawJpg(x, y, hutao0, sizeof(hutao0));
        break;
    case 1:
        TJpgDec.drawJpg(x, y, hutao1, sizeof(hutao1));
        break;
    case 2:
        TJpgDec.drawJpg(x, y, hutao2, sizeof(hutao2));
        break;
    case 3:
        TJpgDec.drawJpg(x, y, hutao3, sizeof(hutao3));
        break;
    case 4:
        TJpgDec.drawJpg(x, y, hutao4, sizeof(hutao4));
        break;
    case 5:
        TJpgDec.drawJpg(x, y, hutao5, sizeof(hutao5));
        break;
    case 6:
        TJpgDec.drawJpg(x, y, hutao6, sizeof(hutao6));
        break;
    case 7:
        TJpgDec.drawJpg(x, y, hutao7, sizeof(hutao7));
        break;
    case 8:
        TJpgDec.drawJpg(x, y, hutao8, sizeof(hutao8));
        break;
    case 9:
        TJpgDec.drawJpg(x, y, hutao9, sizeof(hutao9));
        break;
    case 10:
        TJpgDec.drawJpg(x, y, hutao10, sizeof(hutao10));
        break;
    case 11:
        TJpgDec.drawJpg(x, y, hutao11, sizeof(hutao11));
        break;
    case 12:
        TJpgDec.drawJpg(x, y, hutao12, sizeof(hutao12));
        break;
    case 13:
        TJpgDec.drawJpg(x, y, hutao13, sizeof(hutao13));
        break;
    case 14:
        TJpgDec.drawJpg(x, y, hutao14, sizeof(hutao14));
        break;
    case 15:
        TJpgDec.drawJpg(x, y, hutao15, sizeof(hutao15));
        break;
    case 16:
        TJpgDec.drawJpg(x, y, hutao16, sizeof(hutao16));
        break;
    case 17:
        TJpgDec.drawJpg(x, y, hutao17, sizeof(hutao17));
        break;
    case 18:
        TJpgDec.drawJpg(x, y, hutao18, sizeof(hutao18));
        break;
    case 19:
        TJpgDec.drawJpg(x, y, hutao19, sizeof(hutao19));
        break;
    case 20:
        TJpgDec.drawJpg(x, y, hutao20, sizeof(hutao20));
        break;
    case 21:
        TJpgDec.drawJpg(x, y, hutao21, sizeof(hutao21));
        break;
    case 22:
        TJpgDec.drawJpg(x, y, hutao22, sizeof(hutao22));
        break;
    case 23:
        TJpgDec.drawJpg(x, y, hutao23, sizeof(hutao23));
        break;
    case 24:
        TJpgDec.drawJpg(x, y, hutao24, sizeof(hutao24));
        break;
    case 25:
        TJpgDec.drawJpg(x, y, hutao25, sizeof(hutao25));
        break;
    case 26:
        TJpgDec.drawJpg(x, y, hutao26, sizeof(hutao26));
        break;
    case 27:
        TJpgDec.drawJpg(x, y, hutao27, sizeof(hutao27));
        break;
    case 28:
        TJpgDec.drawJpg(x, y, hutao28, sizeof(hutao28));
        break;
    case 29:
        TJpgDec.drawJpg(x, y, hutao29, sizeof(hutao29));
        break;
    case 30:
        TJpgDec.drawJpg(x, y, hutao30, sizeof(hutao30));
        break;
    case 31:
        TJpgDec.drawJpg(x, y, hutao31, sizeof(hutao31));
        break;
    case 32:
        TJpgDec.drawJpg(x, y, hutao32, sizeof(hutao32));
        break;
    case 33:
        TJpgDec.drawJpg(x, y, hutao33, sizeof(hutao33));
        break;
    case 34:
        TJpgDec.drawJpg(x, y, hutao34, sizeof(hutao34));
        break;
    case 35:
        TJpgDec.drawJpg(x, y, hutao35, sizeof(hutao35));
        break;
    case 36:
        TJpgDec.drawJpg(x, y, hutao36, sizeof(hutao36));
        break;
    case 37:
        TJpgDec.drawJpg(x, y, hutao37, sizeof(hutao37));
        break;
    case 38:
        TJpgDec.drawJpg(x, y, hutao38, sizeof(hutao38));
        break;
    case 39:
        TJpgDec.drawJpg(x, y, hutao39, sizeof(hutao39));
        break;
    case 40:
        TJpgDec.drawJpg(x, y, hutao40, sizeof(hutao40));
        break;
    case 41:
        TJpgDec.drawJpg(x, y, hutao41, sizeof(hutao41));
        break;
    case 42:
        TJpgDec.drawJpg(x, y, hutao42, sizeof(hutao42));
        break;
    case 43:
        TJpgDec.drawJpg(x, y, hutao43, sizeof(hutao43));
        break;
    case 44:
        TJpgDec.drawJpg(x, y, hutao44, sizeof(hutao44));
        break;
    case 45:
        TJpgDec.drawJpg(x, y, hutao45, sizeof(hutao45));
        break;
    case 46:
        TJpgDec.drawJpg(x, y, hutao46, sizeof(hutao46));
        break;
    case 47:
        TJpgDec.drawJpg(x, y, hutao47, sizeof(hutao47));
        break;
    case 48:
        TJpgDec.drawJpg(x, y, hutao48, sizeof(hutao48));
        break;
    case 49:
        TJpgDec.drawJpg(x, y, hutao49, sizeof(hutao49));
        break;
    case 50:
        TJpgDec.drawJpg(x, y, hutao50, sizeof(hutao50));
        break;
    case 51:
        TJpgDec.drawJpg(x, y, hutao51, sizeof(hutao51));
        break;
    case 52:
        TJpgDec.drawJpg(x, y, hutao52, sizeof(hutao52));
        break;
    case 53:
        TJpgDec.drawJpg(x, y, hutao53, sizeof(hutao53));
        break;
    default:
        Serial.println("显示胡桃错误");
        break;
    }
}
#endif

//更新右下角
void refresh_AnimatedImage(TJpg_Decoder *TJpgDec)
{
#if Animate_Choice
    if (DHT_img_flag == 0)
        imgAnim(TJpgDec);
#endif
}
