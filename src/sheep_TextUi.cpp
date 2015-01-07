/*
  This file is part of sheep, implementation of sheep brain-teaser
  Copyright (C) 2013  Julien Thevenon ( julien_thevenon at yahoo.fr )

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
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
