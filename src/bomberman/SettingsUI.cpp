//
// SettingsUI.cpp for BombAERman in /home/tommy/Dropbox/Epitech/2ème Année/cpp_bomberman/src/bomberman/
//
// Made by TommyStarK
// Login   <milox_t@epitech.eu>
//
// Started on  Sun May 24 17:21:08 2015 TommyStarK
// Last update Sun May 24 17:58:51 2015 TommyStarK
//

#include "UIManager/SettingsUI.hh"

SettingsUI::SettingsUI()
{

}

SettingsUI::~SettingsUI()
{

}

void                          SettingsUI::launch()
{

}

stateUI                       SettingsUI::handlerEvent()
{
  return (std::tuple<bool, std::string>(false, this->getName()));
}