#include "cell-individual-offset.h"


std::vector<double> CellIndividualOffset::OffsetList(40,0);
int CellIndividualOffset::CellNum(1);
int** CellIndividualOffset::AdjacencyMatrix = nullptr;

void CellIndividualOffset::setOffsetList(std::vector<double>& CioList)
{
		OffsetList = CioList;
}


std::vector<double> CellIndividualOffset::getOffsetList()
{
		return OffsetList;
}

void CellIndividualOffset::setAdjacencyMatrix(int** AdjacencyMatrixToCopy)
{
		AdjacencyMatrix = new int*[CellNum];
		for (int i=0; i<CellNum; i++){
			AdjacencyMatrix[i] = new int[CellNum];
			for (int j=0; j<CellNum; j++){
				AdjacencyMatrix[i][j] = AdjacencyMatrixToCopy[i][j];
			}
		}
}

int** CellIndividualOffset::getAdjacencyMatrix(){
	return AdjacencyMatrix;
}

void CellIndividualOffset::setCellNum(int Num){
	CellNum = Num;
}

int CellIndividualOffset::getCellNum(){
	return CellNum;
}