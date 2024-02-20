#include <gui/screenlistlayot_1_screen/ScreenListLayot_1View.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
ScreenListLayot_1View::ScreenListLayot_1View()
{

}

void ScreenListLayot_1View::setupScreen()
{
    ScreenListLayot_1ViewBase::setupScreen();
}

void ScreenListLayot_1View::tearDownScreen()
{
    ScreenListLayot_1ViewBase::tearDownScreen();
}
void ScreenListLayot_1View::fncRadioMpS()
{
    ScreenData::getInstance().selectedRadioIndex2 = 2;
    Unicode::strncpy(ScreenData::getInstance().buffer2, "M/S", 32);
}
void ScreenListLayot_1View::fncRadioCMpS()
{
	 ScreenData::getInstance().selectedRadioIndex2 = 1;
	 Unicode::strncpy(ScreenData::getInstance().buffer2, "Cm/S", 32);
}
void ScreenListLayot_1View::fncKmpO()
{
	 ScreenData::getInstance().selectedRadioIndex2 = 3;
	 Unicode::strncpy(ScreenData::getInstance().buffer2, "Km/O", 32);
}
