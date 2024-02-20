/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenlistmasa_screen/ScreenListMasaViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ScreenListMasaViewBase::ScreenListMasaViewBase() :
    buttonCallback(this, &ScreenListMasaViewBase::buttonCallbackHandler),
    radioButtonSelectedCallback(this, &ScreenListMasaViewBase::radioButtonSelectedCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    boxWithBorder1.setPosition(-8, 0, 248, 320);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(61, 67, 74));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);
    add(boxWithBorder1);

    flexButtonBACK.setXY(61, 270);
    flexButtonBACK.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_DISABLED_ID));
    flexButtonBACK.setAction(buttonCallback);
    add(flexButtonBACK);

    textArea1_1.setXY(36, 6);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PQD7));
    add(textArea1_1);

    textArea1_2.setXY(36, 78);
    textArea1_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_2.setLinespacing(0);
    textArea1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NVB3));
    add(textArea1_2);

    textArea1_2_1.setXY(35, 114);
    textArea1_2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_2_1.setLinespacing(0);
    textArea1_2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AKBQ));
    add(textArea1_2_1);

    textArea1.setXY(36, 42);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_V79H));
    add(textArea1);

    listLayout1.setXY(0, 0);
    listLayout1.setDirection(touchgfx::SOUTH);
    radioButtonGroup1.setRadioButtonSelectedHandler(radioButtonSelectedCallback);
    
    radioButtonMiliGram.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_OFF_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_OFF_PRESSED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_ON_DARK_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_ON_PRESSED_ID));
    radioButtonMiliGram.setSelected(false);
    radioButtonMiliGram.setDeselectionEnabled(false);
    radioButtonGroup1.add(radioButtonMiliGram);
    listLayout1.add(radioButtonMiliGram);

    radioButtonGram.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_OFF_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_OFF_PRESSED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_ON_DARK_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_ON_PRESSED_ID));
    radioButtonGram.setSelected(false);
    radioButtonGram.setDeselectionEnabled(false);
    radioButtonGroup1.add(radioButtonGram);
    listLayout1.add(radioButtonGram);

    radioButtonKG.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_OFF_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_OFF_PRESSED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_ON_DARK_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_ON_PRESSED_ID));
    radioButtonKG.setSelected(false);
    radioButtonKG.setDeselectionEnabled(false);
    radioButtonGroup1.add(radioButtonKG);
    listLayout1.add(radioButtonKG);

    radioButtonTone.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_OFF_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_OFF_PRESSED_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_ON_DARK_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_RADIOBUTTON_RADIO_MEDIUM_ROUNDED_ON_PRESSED_ID));
    radioButtonTone.setSelected(false);
    radioButtonTone.setDeselectionEnabled(false);
    radioButtonGroup1.add(radioButtonTone);
    listLayout1.add(radioButtonTone);

    add(listLayout1);
}

ScreenListMasaViewBase::~ScreenListMasaViewBase()
{

}

void ScreenListMasaViewBase::setupScreen()
{

}

void ScreenListMasaViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &flexButtonBACK)
    {
        //Interaction1
        //When flexButtonBACK clicked change screen to ScreenGreutate
        //Go to ScreenGreutate with no screen transition
        application().gotoScreenGreutateScreenNoTransition();
    }
}

void ScreenListMasaViewBase::radioButtonSelectedCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &radioButtonMiliGram)
    {
        //Interaction2
        //When radioButtonMiliGram selected call virtual function
        //Call fncMG
        fncMG();
    }
    if (&src == &radioButtonGram)
    {
        //Interaction3
        //When radioButtonGram selected call virtual function
        //Call fncG
        fncG();
    }
    if (&src == &radioButtonKG)
    {
        //Interaction4
        //When radioButtonKG selected call virtual function
        //Call fncKG
        fncKG();
    }
    if (&src == &radioButtonTone)
    {
        //Interaction5
        //When radioButtonTone selected call virtual function
        //Call fncT
        fncT();
    }
}