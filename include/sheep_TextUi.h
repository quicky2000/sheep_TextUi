#ifndef _SHEEP_TEXT_UI_H_
#define _SHEEP_TEXT_UI_H_

#include "FSM_UI.h"
#include "sheep_situation.h"

namespace sheep_TextUi
{
  class sheep_TextUi:public FSM_base::FSM_UI<sheep::sheep_situation>
  {
  public:
    sheep_TextUi(void);
  
    //Methods inherited from interface
    void display_specific_situation(const sheep::sheep_situation & p_situation);
    const std::string & get_class_name(void)const;
  
  private:
    static const std::string m_class_name;
  };
}
#endif // _SHEEP_TEXT_UI_H_
//EOF
