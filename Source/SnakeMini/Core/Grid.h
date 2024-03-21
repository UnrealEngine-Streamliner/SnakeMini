// Snake Game. Copyright Streamliner. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Types.h"

/**
 * 
 */
namespace Snake
{
class Grid
{
public:
	Grid(const Dimension& dimension);
	Dimension dimension() const { return c_dimension; }

};

private:
	const Dimension c_dimension;
	TArray<CellType> m_cells;

	void initWalls();
	void printDebug();
	FORCEINLINE int32 positionToIndex(int32 x, int32 y) const;
};
}
