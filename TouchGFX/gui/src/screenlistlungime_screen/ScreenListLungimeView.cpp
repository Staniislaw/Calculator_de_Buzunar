#include <gui/screenlistlungime_screen/ScreenListLungimeView.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
ScreenListLungimeView::ScreenListLungimeView()
{

}

void ScreenListLungimeView::setupScreen()
{
    ScreenListLungimeViewBase::setupScreen();
}

void ScreenListLungimeView::tearDownScreen()
{
    ScreenListLungimeViewBase::tearDownScreen();
}
void ScreenListLungimeView::fncMm()
   {
	ScreenData::getInstance().selectedRadioIndex1 =1;
	Unicode::strncpy(ScreenData::getInstance().buffer1, "Mm", 32);
   }
void ScreenListLungimeView::fncCm()
   {
	ScreenData::getInstance().selectedRadioIndex1 =2;
		Unicode::strncpy(ScreenData::getInstance().buffer1, "Cm", 32);
   }
void ScreenListLungimeView::fncM()
   {
	ScreenData::getInstance().selectedRadioIndex1 =3;
		Unicode::strncpy(ScreenData::getInstance().buffer1, "M", 32);
   }
void ScreenListLungimeView::fncKm()
   {
	ScreenData::getInstance().selectedRadioIndex1 =4;
		Unicode::strncpy(ScreenData::getInstance().buffer1, "Km", 32);
   }
