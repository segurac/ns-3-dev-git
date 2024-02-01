
for VAR in {1..250}
do
   #python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=scratch/LTEHandoverSim/real_sce_config.xml ..RunNum={$VAR}"
    python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=scratch/LTEHandoverSim/poc_config.xml ..RunNum={$VAR}"
done
