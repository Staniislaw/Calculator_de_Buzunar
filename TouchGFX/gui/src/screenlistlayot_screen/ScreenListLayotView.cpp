#include <gui/screenlistlayot_screen/ScreenListLayotView.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"


ScreenListLayotView::ScreenListLayotView()
{

}

void ScreenListLayotView::setupScreen()
{
    ScreenListLayotViewBase::setupScreen();
}

void ScreenListLayotView::tearDownScreen()
{
    ScreenListLayotViewBase::tearDownScreen();
}
void ScreenListLayotView::fncRadioMpS()
{
    ScreenData::getInstance().selectedRadioIndex1 = 2;
    Unicode::strncpy(ScreenData::getInstance().buffer1, "M/S", 32);
}
void ScreenListLayotView::fncRadioCMpS()
{
	 ScreenData::getInstance().selectedRadioIndex1 = 1;
	 Unicode::strncpy(ScreenData::getInstance().buffer1, "Cm/S", 32);
}
void ScreenListLayotView::fncKmpO()
{
	 ScreenData::getInstance().selectedRadioIndex1 = 3;
	 Unicode::strncpy(ScreenData::getInstance().buffer1, "Km/O", 32);
}
