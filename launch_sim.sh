
for ((VAR=1; VAR<=250; VAR++))    
do
   #python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=scratch/LTEHandoverSim/RealSce/real_sce_config.xml --RunNum=$VAR"
   #python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=scratch/LTEHandoverSim/POC/poc_sb_config.xml --RunNum=$VAR"
   python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=scratch/LTEHandoverSim/RL4N_toy/toy_config.xml --RunNum=$VAR"
done
