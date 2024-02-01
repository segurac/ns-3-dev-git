#include "cell-individual-offset.h"

namespace ns3
{


std::vector<double> CellIndividualOffset::OffsetList(40,0);
int CellIndividualOffset::CellNum(1);
std::vector<std::vector<int>> CellIndividualOffset::AdjacencyMatrix;

void CellIndividualOffset::setOffsetList(std::vector<double>& CioList)
{
		OffsetList = CioList;
}


std::vector<double> CellIndividualOffset::getOffsetList()
{
		return OffsetList;
}

void CellIndividualOffset::setAdjacencyMatrix(std::vector< std::vector<int>  >& AdjacencyMatrixToCopy)
{
	AdjacencyMatrix = AdjacencyMatrixToCopy; //this does deep copy and memory management
						 //We should add here an assert on the size to be [CellNum][CellNum]
}

std::vector< std::vector<int>  > CellIndividualOffset::getAdjacencyMatrix(){
	return AdjacencyMatrix;
}

void CellIndividualOffset::setCellNum(int Num){
	CellNum = Num;
}

int CellIndividualOffset::getCellNum(){
	return CellNum;
}

} //namespace ns3
