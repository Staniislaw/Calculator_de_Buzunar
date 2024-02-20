#ifndef SCREENVITEZAVIEW_HPP
#define SCREENVITEZAVIEW_HPP

#include <gui_generated/screenviteza_screen/ScreenVitezaViewBase.hpp>
#include <gui/screenviteza_screen/ScreenVitezaPresenter.hpp>


class ScreenVitezaView : public ScreenVitezaViewBase
{
public:
    ScreenVitezaView();
    virtual ~ScreenVitezaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    // Funcționalitatea din ScreenListLayotView poate fi utilizată direct în ScreenVitezaView


    virtual void fncNumber1();
	virtual void fncNumber2();
	virtual void fncNumber3();
	virtual void fncNumber4();
	virtual void fncNumber5();
	virtual void fncNumber6();
	virtual void fncNumber7();
	virtual void fncNumber8();
	virtual void fncNumber9();
	virtual void fncNumber0();

    void fncResult();
	virtual void fncDelete();
	virtual void fncClear();
	virtual void fncClearBuffer();
	 virtual void fncPoint();
protected:
	  bool Condition=true;
	  bool decimalAdded = false;
	  static const int BUFFER_SIZE = 50;
	  char Buffer[BUFFER_SIZE];
	  char Buffer1[BUFFER_SIZE];
	  char BufferPLUSMINUS[1];
	  void addToBuffer(const char* num);

};

#endif // SCREENVITEZAVIEW_HPP
