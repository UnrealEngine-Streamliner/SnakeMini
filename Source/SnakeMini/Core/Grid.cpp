// Snake Game. Copyright Streamliner. All Rights Reserved.

DEFINE_LOG_CATEGORY_STATIC(LogGrid, All, All);

#include "Core/Grid.h"

using namespace Snake;

Grid::Grid(const Dimension& dimension) : c_dimension(Dimension{dimension.width + 2, dimension.height + 2})
{
    m_cells.Init(CellType::Empty, c_dimension.width * c_dimension.height);
    initWalls();
    printDebug();
}

void Grid::initWalls()
{
    for (int32 y = 0; y < c_dimension.height; ++y)
    {
        for (int32 x = 0; x < c_dimension.width; ++x)
        {
            if (x == 0 || x == c_dimension.width - 1 || y == 0 || y == c_dimension.height - 1)
            {
                positionToIndex(x, y) = CellType::Wall;
            }
        }
    }
}

void Grid::printDebug()
{
#if !UE_BUILD_SHIPPING
    for (int32 y = 0; y < c_dimension.height; ++y)
    {
        FString line;
        for (int32 x = 0; x < c_dimension.width; ++x)
        {
            TCHAR symbol;
            switch(positionToIndex(x, y)
            {
                case CellType::Empty:
                    symbol = TEXT('0');
                    break;
                case CellType::Wall:
                    symbol = TEXT('*');
                    break;
            }
            line.AppendChar(symbol);
        }
        UE_LOG(LogGrid, Display, TEXT("%s"), *line);
    }
#endif
}

int32 Grid::positionToIndex(int32 x, int32 y) const
{
    return y * c_dimension.width + x;
}
```
