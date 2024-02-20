#include <gui/screenlistlungime_1_screen/ScreenListLungime_1View.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
ScreenListLungime_1View::ScreenListLungime_1View()
{

}

void ScreenListLungime_1View::setupScreen()
{
    ScreenListLungime_1ViewBase::setupScreen();
}

void ScreenListLungime_1View::tearDownScreen()
{
    ScreenListLungime_1ViewBase::tearDownScreen();
}
void ScreenListLungime_1View::fncMm()
{
ScreenData::getInstance().selectedRadioIndex2 =1;
Unicode::strncpy(ScreenData::getInstance().buffer2, "Mm", 32);
}
void ScreenListLungime_1View::fncCm()
{
ScreenData::getInstance().selectedRadioIndex2 =2;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "Cm", 32);
}
void ScreenListLungime_1View::fncM()
{
ScreenData::getInstance().selectedRadioIndex2 =3;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "M", 32);
}
void ScreenListLungime_1View::fncKm()
{
ScreenData::getInstance().selectedRadioIndex2 =4;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "Km", 32);
}
