#!bin\bash
ifconfig -a | grep -w ether | cut -d ' ' -f2
