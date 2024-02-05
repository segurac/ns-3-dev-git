#include "cell-individual-offset.h"
#include <ns3/log.h>


namespace ns3
{

NS_LOG_COMPONENT_DEFINE("CellIndividualOffset");


std::vector<double> CellIndividualOffset::OffsetList(40,0);
int CellIndividualOffset::CellNum(1);
std::vector<std::vector<int>> CellIndividualOffset::AdjacencyMatrix;

std::vector<double> CellIndividualOffset::hysteresis(40,6);
std::vector<uint16_t> CellIndividualOffset::timeToTrigger(40,80);

void CellIndividualOffset::setOffsetList(std::vector<double>& CioList)
{
		OffsetList = CioList;
}


std::vector<double> CellIndividualOffset::getOffsetList()
{
		return OffsetList;
}


std::vector< std::vector<double>> CellIndividualOffset::getOffsetMatrix()
{

        std::vector<double> cioList = CellIndividualOffset::getOffsetList();
        
        int Cell_num = CellIndividualOffset::getCellNum();
		std::vector< std::vector<int> > HO_possible = CellIndividualOffset::getAdjacencyMatrix();

        int index=0;
    	std::vector<std::vector<double>> matrix(Cell_num, std::vector<double>(Cell_num, 1e100));
        for (int i=0; i<Cell_num;i++)
        {
            for (int j=0; j<i;j++)
            {
                if (HO_possible[i][j]==1)
                {
                    matrix[i][j] = -1 * cioList[index];
                    matrix[j][i] = cioList[index];
                    index++;
                }
            }
        }


		NS_LOG_LOGIC("index "<< index);
        ////////////////////////////////////
        for (int j = 0; j < Cell_num*Cell_num; ++j)
        {
            NS_LOG_LOGIC("cioList ["<<j<<"]"<< cioList[j]);
        }
        for (int i = 0; i < Cell_num; ++i)
        {
            for (int j = 0; j < Cell_num; ++j)
            {
                NS_LOG_LOGIC("matrix ["<<i<<"]"<<"["<<j<<"]= "<< matrix[i][j]);
            }
        }

	return matrix;
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


void CellIndividualOffset::setHysteresis(const std::vector<double>& hys)
{
	hysteresis = hys;
}
std::vector<double> CellIndividualOffset::getHysteresis()
{
	return hysteresis;
}

void CellIndividualOffset::setTimeToTrigger(const std::vector<uint16_t>& ttt)
{
	timeToTrigger = ttt;
}
std::vector<uint16_t> CellIndividualOffset::getTimeToTrigger()
{
	return timeToTrigger;
}


} //namespace ns3
