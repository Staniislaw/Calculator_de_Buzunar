#ifndef SCREENGREUTATEVIEW_HPP
#define SCREENGREUTATEVIEW_HPP

#include <gui_generated/screengreutate_screen/ScreenGreutateViewBase.hpp>
#include <gui/screengreutate_screen/ScreenGreutatePresenter.hpp>

class ScreenGreutateView : public ScreenGreutateViewBase
{
public:
    ScreenGreutateView();
    virtual ~ScreenGreutateView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

	virtual void fncNumber1();
   virtual void fncNumber2();
   virtual void fncNumber3();
   virtual void fncNumber6();
   virtual void fncNumber5();
   virtual void fncNumber0();
   virtual void fncNumber9();
   virtual void fncNumber8();
   virtual void fncNumber7();
   virtual void fncNumber4();
   virtual void fncClear();
   virtual void fncDelete();
   virtual void fncCearBuffer();
   virtual void fncPoint();
protected:
   bool Condition=true;
   bool decimalAdded = false;
   static const int BUFFER_SIZE = 50;
   char Buffer[BUFFER_SIZE];
   char Buffer1[BUFFER_SIZE];
   char BufferPLUSMINUS[1];
   void addToBuffer(const char* num);
   void fncResult();
};

#endif // SCREENGREUTATEVIEW_HPP
