#include <gui/screenlisttimp_1_screen/ScreenListTimp_1View.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
ScreenListTimp_1View::ScreenListTimp_1View()
{

}

void ScreenListTimp_1View::setupScreen()
{
    ScreenListTimp_1ViewBase::setupScreen();
}

void ScreenListTimp_1View::tearDownScreen()
{
    ScreenListTimp_1ViewBase::tearDownScreen();
}
void ScreenListTimp_1View::fncMs()
{
	ScreenData::getInstance().selectedRadioIndex2 =1;
    Unicode::strncpy(ScreenData::getInstance().buffer2, "Ms", 32);
}
void ScreenListTimp_1View::fncS(){
	ScreenData::getInstance().selectedRadioIndex2 =2;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "S", 32);
}
void ScreenListTimp_1View::fncMin(){
	ScreenData::getInstance().selectedRadioIndex2 =3;
	    Unicode::strncpy(ScreenData::getInstance().buffer2, "Min", 32);
}
void ScreenListTimp_1View::fncOre(){
	ScreenData::getInstance().selectedRadioIndex2 =4;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "H", 32);
}
void ScreenListTimp_1View::fncZile(){
	ScreenData::getInstance().selectedRadioIndex2 =5;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "Zile", 32);
}
void ScreenListTimp_1View::fncSapt(){
	ScreenData::getInstance().selectedRadioIndex2 =6;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "Sapt", 32);
}
void ScreenListTimp_1View::fncAni(){
	ScreenData::getInstance().selectedRadioIndex2 =7;
	Unicode::strncpy(ScreenData::getInstance().buffer2, "An", 32);
}
