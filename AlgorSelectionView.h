#pragma once
#include <iomanip>
#include "FileController.h"
#include "StructModels.h"
#include "InputController.h"
#include "Decorator.h"
#include "SortingAlgor.h"

class AlgorSelectionView{
private:
	static void renderAlgorRecord(int index, SortingAlgor data);
	static void renderAlgorList(vector<SortingAlgor> datas, bool *selectedAlgors, size_t size, bool haveSelected);

public:
	static size_t renderAlgorSelection();
};

