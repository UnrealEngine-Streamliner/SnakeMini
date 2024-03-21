// Snake Game. Copyright Streamliner. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

namespace Snake
{
struct Dimension
{
	int32 width;
	int32 height;
};

enum class CellType
{
	Empty = 0,
	Wall
	// Food
	// Snake
};

struct Settings {
	Dimension gridSize;
}
}