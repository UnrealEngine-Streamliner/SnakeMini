// Snake Game. Copyright Streamliner. All Rights Reserved.


#include "Core/Game.h"

DEFINE_LOG_CATEGORY_STATIC(LogGame, All, All);

using namespace Snake;

Game::Game(const Settings& settings) : c_settings(settings)
{
    m_grid = MakeShared<Grid>(c_settings.gridSize);
}
