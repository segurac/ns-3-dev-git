
for ((VAR=1; VAR<=25000000; VAR++))    
do
	python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=$1 --RunNum=$VAR"
done
