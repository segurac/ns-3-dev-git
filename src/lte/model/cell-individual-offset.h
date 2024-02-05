#ifndef CELL_INDIVIDUAL_OFFSET_H
#define CELL_INDIVIDUAL_OFFSET_H

#include <vector>
#include <cstdint>

namespace ns3
{


class CellIndividualOffset
{
	
	static std::vector<double> OffsetList;
	static std::vector< std::vector<int>  > AdjacencyMatrix;
	static int CellNum;

	static std::vector<double> hysteresis;
	static std::vector<uint16_t> timeToTrigger;

	public:	
		static void setCellNum(int Num);
		static int getCellNum();
		
		static void setOffsetList(std::vector<double>& CioList);
		static std::vector<double> getOffsetList();
		static std::vector< std::vector<double>> getOffsetMatrix();

		static void setAdjacencyMatrix(std::vector< std::vector<int>  >&  AdjacencyMatrix);
		static std::vector< std::vector<int>  > getAdjacencyMatrix();

		static void setHysteresis(const std::vector<double>& hys);
		static std::vector<double> getHysteresis();
		
		static void setTimeToTrigger(const std::vector<uint16_t>& ttt);
		static std::vector<uint16_t> getTimeToTrigger();
		


};

} //namespace ns3
#endif
