#!/bin/bash

if [ $# -eq 0 ]; then
    CONFIG="scratch/LTEHandoverSim/RL4N_toy/toy_config.xml"
else
    CONFIG="$1"
fi


CONFIGFILE=$1


for ((VAR=1; VAR<=250; VAR++))
do
   #python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=scratch/LTEHandoverSim/RealSce/real_sce_config.xml --RunNum=$VAR"
   #python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=scratch/LTEHandoverSim/POC/poc_sb_config.xml --RunNum=$VAR"
   python3 ns3 run "scratch/LTEHandoverSim/LTE_environment --ConfigFile=$CONFIG --RunNum=$VAR"
done
