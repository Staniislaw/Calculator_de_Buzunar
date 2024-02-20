#include <gui/screenlisttimp_screen/ScreenListTimpView.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
ScreenListTimpView::ScreenListTimpView()
{

}

void ScreenListTimpView::setupScreen()
{
    ScreenListTimpViewBase::setupScreen();
}

void ScreenListTimpView::tearDownScreen()
{
    ScreenListTimpViewBase::tearDownScreen();
}
void ScreenListTimpView::fncMs()
{
	ScreenData::getInstance().selectedRadioIndex1 =1;
    Unicode::strncpy(ScreenData::getInstance().buffer1, "Ms", 32);
}
void ScreenListTimpView::fncS(){
	ScreenData::getInstance().selectedRadioIndex1 =2;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "S", 32);
}
void ScreenListTimpView::fncMin(){
	ScreenData::getInstance().selectedRadioIndex1 =3;
	    Unicode::strncpy(ScreenData::getInstance().buffer1, "Min", 32);
}
void ScreenListTimpView::fncOre(){
	ScreenData::getInstance().selectedRadioIndex1 =4;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "H", 32);
}
void ScreenListTimpView::fncZile(){
	ScreenData::getInstance().selectedRadioIndex1 =5;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "Zile", 32);
}
void ScreenListTimpView::fncSapt(){
	ScreenData::getInstance().selectedRadioIndex1 =6;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "Sapt", 32);
}
void ScreenListTimpView::fncAni(){
	ScreenData::getInstance().selectedRadioIndex1 =7;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "An", 32);
}
