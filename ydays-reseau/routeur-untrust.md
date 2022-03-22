en
config t
int f0/0
ip add 10.1.1.2 255.255.255.0
no shut
exit

ip dhcp pool untrusted       
network 10.1.1.0 255.255.255.0
default-router 10.1.1.2
exit
