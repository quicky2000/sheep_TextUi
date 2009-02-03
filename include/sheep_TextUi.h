#ifndef _SHEEP_TEXT_UI_H_
#define _SHEEP_TEXT_UI_H_

#include "FSM_UI.h"
#include "sheep_situation.h"

class sheep_TextUi:public FSM_UI<sheep_situation>
{
 public:
  sheep_TextUi(void);
  
  //Methods inherited from interface
  void displaySpecificSituation(const sheep_situation *p_situation);
  string toString(void)const;
  
 private:
};
#endif
