#include "sheep_TextUi.h"
#include "sheep_situation.h"

using namespace std;

namespace sheep_TextUi
{
  //----------------------------------------------------------------------------
  sheep_TextUi::sheep_TextUi(void):
    FSM_UI<sheep::sheep_situation>()
  {
  }

  //----------------------------------------------------------------------------
  void sheep_TextUi::display_specific_situation(const sheep::sheep_situation & p_situation)
  {
    std::cout << p_situation.to_string() << std::endl ;
  }

  //----------------------------------------------------------------------------
  const std::string & sheep_TextUi::get_class_name(void)const
  {
    return m_class_name;
  }


  //----------------------------------------------------------------------------
  FSM_interfaces::FSM_UI_if & create_sheep_text_ui(void)
  {
    return *(new sheep_TextUi());
  }

  extern "C"
  {
    void register_fsm_ui(map<string,FSM_interfaces::FSM_UI_creator_t> & p_factory)
    {
      register_fsm_ui("sheep",create_sheep_text_ui,p_factory);
    }
  }

  const std::string sheep_TextUi::m_class_name = "sheep_TextUi";
}
//EOF
