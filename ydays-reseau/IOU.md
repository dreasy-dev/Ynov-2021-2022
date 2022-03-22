    en
    conf t
    vlan 10
    name Test
    ex
    vlan 20
    name Beta
    ex
    int e0/1
    sw mode access
    sw access vlan 10
    ex
    int e0/2
    sw mode access
    sw access vlan 20
    ex
    ip dhcp snooping
    ip dhcp snooping vlan 20
    ip dhcp snooping vlan 10
    int e3/3
    ip dhcp snooping trust
