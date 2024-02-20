#ifndef SCREENTIMPVIEW_HPP
#define SCREENTIMPVIEW_HPP

#include <gui_generated/screentimp_screen/ScreenTimpViewBase.hpp>
#include <gui/screentimp_screen/ScreenTimpPresenter.hpp>

class ScreenTimpView : public ScreenTimpViewBase
{
public:
    ScreenTimpView();
    virtual ~ScreenTimpView() {}
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

#endif // SCREENTIMPVIEW_HPP
