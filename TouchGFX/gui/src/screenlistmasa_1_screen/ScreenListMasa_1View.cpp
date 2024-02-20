#include <gui/screenlistmasa_1_screen/ScreenListMasa_1View.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
ScreenListMasa_1View::ScreenListMasa_1View()
{

}

void ScreenListMasa_1View::setupScreen()
{
    ScreenListMasa_1ViewBase::setupScreen();
}

void ScreenListMasa_1View::tearDownScreen()
{
    ScreenListMasa_1ViewBase::tearDownScreen();
}

void ScreenListMasa_1View::fncMG()
{
	ScreenData::getInstance().selectedRadioIndex2 =1;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "Mg", 32);
}
void ScreenListMasa_1View::fncG()
{
	ScreenData::getInstance().selectedRadioIndex2 =2;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "G", 32);
}
void ScreenListMasa_1View::fncKG()
{
	ScreenData::getInstance().selectedRadioIndex2 =3;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "Kg", 32);
}
void ScreenListMasa_1View::fncT()
{
	ScreenData::getInstance().selectedRadioIndex2 =4;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "T", 32);
}
