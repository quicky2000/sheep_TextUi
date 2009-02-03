#include "sheep_TextUi.h"
#include "sheep_situation.h"

sheep_TextUi::sheep_TextUi(void):FSM_UI<sheep_situation>()
{
}

void sheep_TextUi::displaySpecificSituation(const sheep_situation *p_situation)
{
  cout << p_situation->toString() << endl ;
}

string sheep_TextUi::toString(void)const
{
  return "sheep_TextUi";
}


FSM_UI_if* createSheepTextUi(void)
{
  return new sheep_TextUi();
}

extern "C"
{
  void registerFsmUi(map<string,FSM_UI_creator> *p_factory)
  {
    registerFsmUi("sheep",createSheepTextUi,p_factory);
  }
}
