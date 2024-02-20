// ScreenData.h
#include <touchgfx/hal/Types.hpp>
#include <touchgfx/Unicode.hpp>

#ifndef APPLICATION_USER_SCREENDATA_H_
#define APPLICATION_USER_SCREENDATA_H_

class ScreenData
{
public:
    static ScreenData& getInstance()
    {
        static ScreenData instance;
        return instance;
    }

    // Adaugă aici variabilele tale globale pentru comunicarea între ecrane
    touchgfx::Unicode::UnicodeChar buffer1[32] = {'A', 'l', 'e', 'g', 'e', '\0'}; // Buffer pentru radio button 1
    touchgfx::Unicode::UnicodeChar buffer2[32] = {'A', 'l', 'e', 'g', 'e', '\0'}; // Buffer pentru radio button 2
    int selectedRadioIndex1 = 0; // Indicele radio button-ului selectat pentru radio button 1
    int selectedRadioIndex2 = 0; // Indicele radio button-ului selectat pentru radio button 2

private:
    ScreenData() {} // Constructor privat pentru Singleton
};

#endif /* APPLICATION_USER_SCREENDATA_H_ */
