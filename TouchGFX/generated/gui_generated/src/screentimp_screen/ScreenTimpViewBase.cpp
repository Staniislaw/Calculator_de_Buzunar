/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screentimp_screen/ScreenTimpViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ScreenTimpViewBase::ScreenTimpViewBase() :
    flexButtonCallback(this, &ScreenTimpViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_VITEZA_ID));
    scalableImage1.setPosition(0, 148, 240, 172);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage1);

    boxWithBorder1.setPosition(0, 0, 240, 148);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(33, 31, 31));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);
    add(boxWithBorder1);

    flexButtonClear.setBoxWithBorderPosition(0, 0, 77, 25);
    flexButtonClear.setBorderSize(5);
    flexButtonClear.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonClear.setAlpha(42);
    flexButtonClear.setAction(flexButtonCallback);
    flexButtonClear.setPosition(81, 160, 77, 25);
    add(flexButtonClear);

    textArea3.setXY(202, 2);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3UDS));
    add(textArea3);

    flexButtonDelete.setBoxWithBorderPosition(0, 0, 76, 34);
    flexButtonDelete.setBorderSize(5);
    flexButtonDelete.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonDelete.setAlpha(42);
    flexButtonDelete.setAction(flexButtonCallback);
    flexButtonDelete.setPosition(161, 160, 76, 34);
    add(flexButtonDelete);

    flexButtonN3.setBoxWithBorderPosition(0, 0, 79, 27);
    flexButtonN3.setBorderSize(5);
    flexButtonN3.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN3.setAlpha(61);
    flexButtonN3.setAction(flexButtonCallback);
    flexButtonN3.setPosition(158, 257, 79, 27);
    add(flexButtonN3);

    flexButtonN6.setBoxWithBorderPosition(0, 0, 79, 33);
    flexButtonN6.setBorderSize(5);
    flexButtonN6.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN6.setAlpha(61);
    flexButtonN6.setAction(flexButtonCallback);
    flexButtonN6.setPosition(161, 221, 79, 33);
    add(flexButtonN6);

    flexButtonN5.setBoxWithBorderPosition(0, 0, 79, 36);
    flexButtonN5.setBorderSize(5);
    flexButtonN5.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN5.setAlpha(61);
    flexButtonN5.setAction(flexButtonCallback);
    flexButtonN5.setPosition(81, 221, 79, 36);
    add(flexButtonN5);

    flexButtonN0.setBoxWithBorderPosition(0, 0, 79, 27);
    flexButtonN0.setBorderSize(5);
    flexButtonN0.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN0.setAlpha(61);
    flexButtonN0.setAction(flexButtonCallback);
    flexButtonN0.setPosition(81, 289, 79, 27);
    add(flexButtonN0);

    flexButtonN9.setBoxWithBorderPosition(0, 0, 79, 27);
    flexButtonN9.setBorderSize(5);
    flexButtonN9.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN9.setAlpha(61);
    flexButtonN9.setAction(flexButtonCallback);
    flexButtonN9.setPosition(158, 194, 79, 27);
    add(flexButtonN9);

    flexButtonN8.setBoxWithBorderPosition(0, 0, 79, 27);
    flexButtonN8.setBorderSize(5);
    flexButtonN8.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN8.setAlpha(61);
    flexButtonN8.setAction(flexButtonCallback);
    flexButtonN8.setPosition(81, 194, 79, 27);
    add(flexButtonN8);

    flexButtonN7.setBoxWithBorderPosition(0, 0, 79, 27);
    flexButtonN7.setBorderSize(5);
    flexButtonN7.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN7.setAlpha(61);
    flexButtonN7.setAction(flexButtonCallback);
    flexButtonN7.setPosition(0, 194, 79, 27);
    add(flexButtonN7);

    flexButtonN4.setBoxWithBorderPosition(0, 0, 79, 30);
    flexButtonN4.setBorderSize(5);
    flexButtonN4.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN4.setAlpha(61);
    flexButtonN4.setAction(flexButtonCallback);
    flexButtonN4.setPosition(0, 227, 79, 30);
    add(flexButtonN4);

    flexButtonN2.setBoxWithBorderPosition(0, 0, 79, 27);
    flexButtonN2.setBorderSize(5);
    flexButtonN2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN2.setAlpha(61);
    flexButtonN2.setAction(flexButtonCallback);
    flexButtonN2.setPosition(79, 257, 79, 27);
    add(flexButtonN2);

    flexButtonN1.setBoxWithBorderPosition(0, 0, 79, 27);
    flexButtonN1.setBorderSize(5);
    flexButtonN1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonN1.setAlpha(61);
    flexButtonN1.setAction(flexButtonCallback);
    flexButtonN1.setPosition(0, 257, 79, 27);
    add(flexButtonN1);

    flexButtonBack.setBoxWithBorderPosition(0, 0, 50, 41);
    flexButtonBack.setBorderSize(5);
    flexButtonBack.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonBack.setAlpha(57);
    flexButtonBack.setAction(flexButtonCallback);
    flexButtonBack.setPosition(190, 5, 50, 41);
    add(flexButtonBack);

    flexButton2.setBoxWithBorderPosition(0, 0, 190, 28);
    flexButton2.setBorderSize(5);
    flexButton2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2.setAction(flexButtonCallback);
    flexButton2.setPosition(0, 120, 190, 28);
    add(flexButton2);

    textAreaMarime_2.setPosition(0, 123, 180, 25);
    textAreaMarime_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textAreaMarime_2.setLinespacing(0);
    Unicode::snprintf(textAreaMarime_2Buffer, TEXTAREAMARIME_2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_BZW1).getText());
    textAreaMarime_2.setWildcard(textAreaMarime_2Buffer);
    textAreaMarime_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RLCL));
    add(textAreaMarime_2);

    flexButton1.setBoxWithBorderPosition(0, 0, 190, 25);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setAction(flexButtonCallback);
    flexButton1.setPosition(0, 46, 190, 25);
    add(flexButton1);

    textAreaMarime.setPosition(0, 45, 180, 25);
    textAreaMarime.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textAreaMarime.setLinespacing(0);
    Unicode::snprintf(textAreaMarimeBuffer, TEXTAREAMARIME_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_VEV9).getText());
    textAreaMarime.setWildcard(textAreaMarimeBuffer);
    textAreaMarime.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LNSK));
    add(textAreaMarime);

    textArea2.setPosition(0, 74, 240, 46);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_EMB7).getText());
    textArea2.setWildcard(textArea2Buffer);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_WDO0));
    add(textArea2);

    textArea1.setPosition(0, 0, 190, 46);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_LSXG).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NBEB));
    add(textArea1);

    flexButtonPoint.setBoxWithBorderPosition(0, 0, 72, 27);
    flexButtonPoint.setBorderSize(5);
    flexButtonPoint.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButtonPoint.setAlpha(42);
    flexButtonPoint.setAction(flexButtonCallback);
    flexButtonPoint.setPosition(165, 289, 72, 27);
    add(flexButtonPoint);
}

ScreenTimpViewBase::~ScreenTimpViewBase()
{

}

void ScreenTimpViewBase::setupScreen()
{

}

void ScreenTimpViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButtonBack)
    {
        //Interaction1
        //When flexButtonBack clicked change screen to Menu
        //Go to Menu with screen transition towards West
        application().gotoMenuScreenSlideTransitionWest();
    
        //Interaction16
        //When Interaction1 completed call virtual function
        //Call fncCearBuffer
        fncCearBuffer();
    }
    if (&src == &flexButtonN1)
    {
        //Interaction2
        //When flexButtonN1 clicked call virtual function
        //Call fncNumber1
        fncNumber1();
    }
    if (&src == &flexButtonN2)
    {
        //Interaction3
        //When flexButtonN2 clicked call virtual function
        //Call fncNumber2
        fncNumber2();
    }
    if (&src == &flexButtonN3)
    {
        //Interaction4
        //When flexButtonN3 clicked call virtual function
        //Call fncNumber3
        fncNumber3();
    }
    if (&src == &flexButtonN6)
    {
        //Interaction5
        //When flexButtonN6 clicked call virtual function
        //Call fncNumber6
        fncNumber6();
    }
    if (&src == &flexButtonN5)
    {
        //Interaction6
        //When flexButtonN5 clicked call virtual function
        //Call fncNumber5
        fncNumber5();
    }
    if (&src == &flexButtonN0)
    {
        //Interaction7
        //When flexButtonN0 clicked call virtual function
        //Call fncNumber0
        fncNumber0();
    }
    if (&src == &flexButtonN9)
    {
        //Interaction8
        //When flexButtonN9 clicked call virtual function
        //Call fncNumber9
        fncNumber9();
    }
    if (&src == &flexButtonN8)
    {
        //Interaction9
        //When flexButtonN8 clicked call virtual function
        //Call fncNumber8
        fncNumber8();
    }
    if (&src == &flexButtonN7)
    {
        //Interaction10
        //When flexButtonN7 clicked call virtual function
        //Call fncNumber7
        fncNumber7();
    }
    if (&src == &flexButtonN4)
    {
        //Interaction11
        //When flexButtonN4 clicked call virtual function
        //Call fncNumber4
        fncNumber4();
    }
    if (&src == &flexButtonClear)
    {
        //Interaction12
        //When flexButtonClear clicked call virtual function
        //Call fncClear
        fncClear();
    }
    if (&src == &flexButtonDelete)
    {
        //Interaction13
        //When flexButtonDelete clicked call virtual function
        //Call fncDelete
        fncDelete();
    }
    if (&src == &flexButton1)
    {
        //Interaction14
        //When flexButton1 clicked change screen to ScreenListTimp
        //Go to ScreenListTimp with no screen transition
        application().gotoScreenListTimpScreenNoTransition();
    }
    if (&src == &flexButton2)
    {
        //Interaction15
        //When flexButton2 clicked change screen to ScreenListTimp_1
        //Go to ScreenListTimp_1 with no screen transition
        application().gotoScreenListTimp_1ScreenNoTransition();
    }
    if (&src == &flexButtonPoint)
    {
        //Interaction17
        //When flexButtonPoint clicked call virtual function
        //Call fncPoint
        fncPoint();
    }
}
