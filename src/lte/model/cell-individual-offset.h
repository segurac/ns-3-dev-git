#ifndef CELL_INDIVIDUAL_OFFSET_H
#define CELL_INDIVIDUAL_OFFSET_H

#include <vector>

class CellIndividualOffset
{
	
	static std::vector<double> OffsetList;
	static int** AdjacencyMatrix;
	static int CellNum;

	public:	
		static void setCellNum(int Num);
		static int getCellNum();
		
		static void setOffsetList(std::vector<double>& CioList);
		static std::vector<double> getOffsetList();

		static void setAdjacencyMatrix(int** AdjacencyMatrix);
		static int** getAdjacencyMatrix();


};

#endif