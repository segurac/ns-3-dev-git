#ifndef CELL_INDIVIDUAL_OFFSET_H
#define CELL_INDIVIDUAL_OFFSET_H

#include <vector>

namespace ns3
{


class CellIndividualOffset
{
	
	static std::vector<double> OffsetList;
	static std::vector< std::vector<int>  > AdjacencyMatrix;
	static int CellNum;

	public:	
		static void setCellNum(int Num);
		static int getCellNum();
		
		static void setOffsetList(std::vector<double>& CioList);
		static std::vector<double> getOffsetList();

		static void setAdjacencyMatrix(std::vector< std::vector<int>  >&  AdjacencyMatrix);
		static std::vector< std::vector<int>  > getAdjacencyMatrix();


};

} //namespace ns3
#endif
