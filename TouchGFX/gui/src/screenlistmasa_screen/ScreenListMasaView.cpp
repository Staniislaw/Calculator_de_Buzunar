#include <gui/screenlistmasa_screen/ScreenListMasaView.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
ScreenListMasaView::ScreenListMasaView()
{

}

void ScreenListMasaView::setupScreen()
{
    ScreenListMasaViewBase::setupScreen();
}

void ScreenListMasaView::tearDownScreen()
{
    ScreenListMasaViewBase::tearDownScreen();
}
void ScreenListMasaView::fncMG()
{
	ScreenData::getInstance().selectedRadioIndex1 =1;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "Mg", 32);
}
void ScreenListMasaView::fncG()
{
	ScreenData::getInstance().selectedRadioIndex1 =2;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "G", 32);
}
void ScreenListMasaView::fncKG()
{
	ScreenData::getInstance().selectedRadioIndex1 =3;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "Kg", 32);
}
void ScreenListMasaView::fncT()
{
	ScreenData::getInstance().selectedRadioIndex1 =4;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "T", 32);
}
