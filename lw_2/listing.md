```
aschapov@Lenovo-ideapad-720S-14IKB:~$ cd inf_labs
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ cd lw_2
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ who
aschapov :1           2023-10-02 00:45 (:1)
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ pwd
/home/aschapov/inf_labs/lw_2
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ ls
Report-template.md
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ ls -l
total 4
-rw-rw-r-- 1 aschapov aschapov 3233 сен 25 01:31 Report-template.md
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ cd /home/aschapov/inf_labs
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ touch 123.txt
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ cp 123.txt /home/aschapov/inf_labs/lw_2
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ rm 123.txt
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ cd lw_2
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ ls
123.txt  Report-template.md
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ mv 123.txt /home/aschapov/inf_labs/
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ cd /home/aschapov/inf_labs/
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ls
123.txt  lw_10  lw_12  lw_14  lw_2  lw_4  lw_6  lw_8
lw_1     lw_11  lw_13  lw_15  lw_3  lw_5  lw_7  lw_9
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ rm 123.txt
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ps
    PID TTY          TIME CMD
   4475 pts/0    00:00:00 bash
  12245 pts/0    00:00:00 ps
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ps axu
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root           1  0.0  0.0 166976 12288 ?        Ss   00:45   0:02 /sbin/i
root           2  0.0  0.0      0     0 ?        S    00:45   0:00 [kthrea
root           3  0.0  0.0      0     0 ?        I<   00:45   0:00 [rcu_gp
root           4  0.0  0.0      0     0 ?        I<   00:45   0:00 [rcu_pa
root           5  0.0  0.0      0     0 ?        I<   00:45   0:00 [slub_f
root           6  0.0  0.0      0     0 ?        I<   00:45   0:00 [netns]
root           8  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          10  0.0  0.0      0     0 ?        I<   00:45   0:00 [mm_per
root          11  0.0  0.0      0     0 ?        I    00:45   0:00 [rcu_ta
root          12  0.0  0.0      0     0 ?        I    00:45   0:00 [rcu_ta
root          13  0.0  0.0      0     0 ?        I    00:45   0:00 [rcu_ta
root          14  0.0  0.0      0     0 ?        S    00:45   0:00 [ksofti
root          15  0.0  0.0      0     0 ?        I    00:45   0:15 [rcu_pr
root          16  0.0  0.0      0     0 ?        S    00:45   0:00 [migrat
root          17  0.0  0.0      0     0 ?        S    00:45   0:00 [idle_i
root          19  0.0  0.0      0     0 ?        S    00:45   0:00 [cpuhp/
root          20  0.0  0.0      0     0 ?        S    00:45   0:00 [cpuhp/
root          21  0.0  0.0      0     0 ?        S    00:45   0:00 [idle_i
root          22  0.0  0.0      0     0 ?        S    00:45   0:00 [migrat
root          23  0.0  0.0      0     0 ?        S    00:45   0:00 [ksofti
root          25  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          26  0.0  0.0      0     0 ?        S    00:45   0:00 [cpuhp/
root          27  0.0  0.0      0     0 ?        S    00:45   0:00 [idle_i
root          28  0.0  0.0      0     0 ?        S    00:45   0:00 [migrat
root          29  0.0  0.0      0     0 ?        S    00:45   0:00 [ksofti
root          31  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          32  0.0  0.0      0     0 ?        S    00:45   0:00 [cpuhp/
root          33  0.0  0.0      0     0 ?        S    00:45   0:00 [idle_i
root          34  0.0  0.0      0     0 ?        S    00:45   0:00 [migrat
root          35  0.0  0.0      0     0 ?        S    00:45   0:00 [ksofti
root          37  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          38  0.0  0.0      0     0 ?        S    00:45   0:00 [cpuhp/
root          39  0.0  0.0      0     0 ?        S    00:45   0:00 [idle_i
root          40  0.0  0.0      0     0 ?        S    00:45   0:00 [migrat
root          41  0.0  0.0      0     0 ?        S    00:45   0:00 [ksofti
root          43  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          44  0.0  0.0      0     0 ?        S    00:45   0:00 [cpuhp/
root          45  0.0  0.0      0     0 ?        S    00:45   0:00 [idle_i
root          46  0.0  0.0      0     0 ?        S    00:45   0:00 [migrat
root          47  0.1  0.0      0     0 ?        S    00:45   0:37 [ksofti
root          49  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          50  0.0  0.0      0     0 ?        S    00:45   0:00 [cpuhp/
root          51  0.0  0.0      0     0 ?        S    00:45   0:00 [idle_i
root          52  0.0  0.0      0     0 ?        S    00:45   0:00 [migrat
root          53  0.0  0.0      0     0 ?        S    00:45   0:00 [ksofti
root          55  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          56  0.0  0.0      0     0 ?        S    00:45   0:00 [cpuhp/
root          57  0.0  0.0      0     0 ?        S    00:45   0:00 [idle_i
root          58  0.0  0.0      0     0 ?        S    00:45   0:00 [migrat
root          59  0.0  0.0      0     0 ?        S    00:45   0:01 [ksofti
root          61  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          62  0.0  0.0      0     0 ?        S    00:45   0:00 [kdevtm
root          63  0.0  0.0      0     0 ?        I<   00:45   0:00 [inet_f
root          64  0.0  0.0      0     0 ?        S    00:45   0:00 [kaudit
root          65  0.0  0.0      0     0 ?        S    00:45   0:00 [khungt
root          67  0.0  0.0      0     0 ?        S    00:45   0:00 [oom_re
root          69  0.0  0.0      0     0 ?        I<   00:45   0:00 [writeb
root          70  0.0  0.0      0     0 ?        S    00:45   0:00 [kcompa
root          71  0.0  0.0      0     0 ?        SN   00:45   0:00 [ksmd]
root          72  0.0  0.0      0     0 ?        SN   00:45   0:00 [khugep
root          73  0.0  0.0      0     0 ?        I<   00:45   0:00 [kinteg
root          74  0.0  0.0      0     0 ?        I<   00:45   0:00 [kblock
root          75  0.0  0.0      0     0 ?        I<   00:45   0:00 [blkcg_
root          77  0.0  0.0      0     0 ?        I<   00:45   0:00 [tpm_de
root          78  0.0  0.0      0     0 ?        I<   00:45   0:00 [ata_sf
root          79  0.0  0.0      0     0 ?        I<   00:45   0:00 [md]
root          80  0.0  0.0      0     0 ?        I<   00:45   0:00 [edac-p
root          81  0.0  0.0      0     0 ?        I<   00:45   0:00 [devfre
root          82  0.0  0.0      0     0 ?        S    00:45   0:00 [watchd
root          84  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          85  0.0  0.0      0     0 ?        S    00:45   0:00 [kswapd
root          86  0.0  0.0      0     0 ?        S    00:45   0:00 [ecrypt
root          87  0.0  0.0      0     0 ?        I<   00:45   0:00 [kthrot
root          93  0.0  0.0      0     0 ?        I<   00:45   0:00 [acpi_t
root          94  0.0  0.0      0     0 ?        S    00:45   0:00 [xenbus
root          95  0.0  0.0      0     0 ?        S    00:45   0:00 [hwrng]
root          97  0.0  0.0      0     0 ?        I<   00:45   0:00 [mld]
root          98  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root          99  0.0  0.0      0     0 ?        I<   00:45   0:00 [ipv6_a
root         106  0.0  0.0      0     0 ?        I<   00:45   0:00 [kstrp]
root         108  0.0  0.0      0     0 ?        I<   00:45   0:00 [zswap-
root         113  0.0  0.0      0     0 ?        I<   00:45   0:00 [charge
root         133  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root         136  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root         137  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root         138  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root         150  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root         151  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworke
root         157  0.0  0.0      0     0 ?        I    00:45   0:01 [kworke
root         168  0.0  0.0      0     0 ?        S    00:45   0:33 [irq/80
root         183  0.0  0.0      0     0 ?        I<   00:45   0:00 [nvme-w
root         184  0.0  0.0      0     0 ?        I<   00:45   0:00 [nvme-r
root         185  0.0  0.0      0     0 ?        I<   00:45   0:00 [nvme-d
root         186  0.0  0.0      0     0 ?        I<   00:45   0:00 [nvme-a
root         258  0.0  0.0      0     0 ?        S    00:45   0:00 [jbd2/n
root         259  0.0  0.0      0     0 ?        I<   00:45   0:00 [ext4-r
root         299  0.0  0.1  48660 19676 ?        S<s  00:45   0:01 /lib/sy
root         330  0.0  0.0  26924  7148 ?        Ss   00:45   0:00 /lib/sy
root         424  0.0  0.0      0     0 ?        I<   00:45   0:00 [cfg802
root         445  0.0  0.0      0     0 ?        I<   00:45   0:00 [USBC00
root         455  0.0  0.0      0     0 ?        I<   00:45   0:00 [ath10k
root         456  0.0  0.0      0     0 ?        I<   00:45   0:00 [ath10k
root         457  0.0  0.0      0     0 ?        I<   00:45   0:00 [ath10k
root         500  0.0  0.0      0     0 ?        S    00:45   0:00 [nv_que
root         501  0.0  0.0      0     0 ?        S    00:45   0:00 [nv_que
root         504  0.0  0.0      0     0 ?        S    00:45   0:00 [nvidia
root         505  0.0  0.0      0     0 ?        S    00:45   0:00 [nvidia
root         507  0.0  0.0      0     0 ?        S    00:45   0:02 [irq/13
root         509  0.0  0.0      0     0 ?        S    00:45   0:00 [nv_que
root         514  0.0  0.0      0     0 ?        I<   00:45   0:00 [cryptd
root         515  0.0  0.0      0     0 ?        S    00:45   0:00 [card1-
root         516  0.0  0.0      0     0 ?        S    00:45   0:00 [card1-
root         517  0.0  0.0      0     0 ?        S    00:45   0:00 [card1-
root         547  0.0  0.0      0     0 ?        S    00:45   0:00 [jbd2/n
root         548  0.0  0.0      0     0 ?        I<   00:45   0:00 [ext4-r
root         580  0.0  0.0      0     0 ?        S    00:45   0:00 [UVM gl
root         581  0.0  0.0      0     0 ?        S    00:45   0:00 [UVM de
root         582  0.0  0.0      0     0 ?        S    00:45   0:00 [UVM To
root         625  0.0  0.0      0     0 ?        S    00:45   0:01 [jbd2/n
root         626  0.0  0.0      0     0 ?        I<   00:45   0:00 [ext4-r
systemd+     695  0.0  0.0  14824  7036 ?        Ss   00:45   0:20 /lib/sy
systemd+     698  0.0  0.0  26188 14556 ?        Ss   00:45   0:02 /lib/sy
systemd+     700  0.0  0.0  89376  7540 ?        Ssl  00:45   0:00 /lib/sy
root         811  0.0  0.0 239988  8124 ?        Ssl  00:45   0:00 /usr/li
root         812  0.0  0.0   2812  2108 ?        Ss   00:45   0:00 /usr/sb
avahi        815  0.0  0.0   7628  4256 ?        Ss   00:45   0:00 avahi-d
root         816  0.0  0.0  10928  5748 ?        Ss   00:45   0:00 /usr/li
root         819  0.0  0.0   9496  3092 ?        Ss   00:45   0:00 /usr/sb
message+     820  0.0  0.0  11224  7160 ?        Ss   00:45   0:03 @dbus-d
root         821  0.0  0.1 261180 19376 ?        Ssl  00:45   0:03 /usr/sb
root         826  0.0  0.0  82760  4132 ?        Ssl  00:45   0:01 /usr/sb
root         830  0.0  0.1  41036 21588 ?        Ss   00:45   0:00 /usr/bi
root         834  0.0  0.0 242992 11552 ?        Ssl  00:45   0:02 /usr/li
root         838  0.0  0.0 240076  7912 ?        Ssl  00:45   0:00 /usr/li
syslog       841  0.0  0.0 222400  5992 ?        Ssl  00:45   0:00 /usr/sb
root         849  0.0  0.2 1763052 33396 ?       Ssl  00:45   0:04 /usr/li
root         851  0.0  0.0 236380  6964 ?        Ssl  00:45   0:00 /usr/li
root         857  0.0  0.0  48224  8264 ?        Ss   00:45   0:00 /lib/sy
root         858  0.0  0.0 128596 10508 ?        Ssl  00:45   0:01 /usr/sb
root         859  0.0  0.0 393416 13860 ?        Ssl  00:45   0:00 /usr/li
root         860  0.0  0.0  17832 12172 ?        Ss   00:45   0:00 /sbin/w
avahi        878  0.0  0.0   7440  1484 ?        S    00:45   0:00 avahi-d
root         895  0.0  0.0 318048 12920 ?        Ssl  00:45   0:00 /usr/sb
root         897  0.0  0.0  73520 14724 ?        Ss   00:45   0:00 /usr/sb
root         902  0.0  0.0 719324 10412 ?        Ssl  00:45   0:01 /snap/c
root         903  0.0  0.0   2888  1720 ?        Ss   00:45   0:00 /bin/sh
root         906  0.0  0.0   2888  1792 ?        Ss   00:45   0:00 /bin/sh
lp           960  0.0  0.0  16284  6868 ?        S    00:45   0:00 /usr/li
root         961  0.0  0.0 241368  9276 ?        Ssl  00:45   0:00 /usr/sb
root        1003  0.0  0.1 118132 23932 ?        Ssl  00:45   0:00 /usr/bi
rtkit       1060  0.0  0.0 154000  3496 ?        SNsl 00:45   0:00 /usr/li
root        1159  0.0  0.0 242376  9272 ?        Ssl  00:45   0:00 /usr/li
root        1452  0.0  0.0  66620 12480 ?        S    00:45   0:00 cupsd -
root        1511  0.0  0.0   2888   984 ?        S    00:45   0:00 /bin/sh
root        1523  0.0  0.2 373016 39664 ?        Ssl  00:45   0:15 /usr/li
colord      1637  0.0  0.0 245392 13604 ?        Ssl  00:45   0:00 /usr/li
root        1787  0.0  0.0 172620 11936 ?        Ssl  00:45   0:00 /usr/sb
kernoops    1802  0.0  0.0  13084  2352 ?        Ss   00:45   0:00 /usr/sb
kernoops    1805  0.0  0.0  13084  2324 ?        Ss   00:45   0:00 /usr/sb
root        1810  0.0  0.0 318188 11208 ?        Sl   00:45   0:00 gdm-ses
aschapov    1833  0.0  0.0  18140 11000 ?        Ss   00:45   0:01 /lib/sy
aschapov    1834  0.0  0.0 104724  6072 ?        S    00:45   0:00 (sd-pam
aschapov    1840  0.0  0.0  39856  6872 ?        S<sl 00:45   0:00 /usr/bi
aschapov    1841  0.0  0.0  23608  6860 ?        Ssl  00:45   0:00 /usr/bi
aschapov    1842  1.5  0.1 3071820 30196 ?       S<sl 00:45   9:27 /usr/bi
aschapov    1852  0.0  0.0 240992  7844 ?        Sl   00:45   0:00 /usr/bi
aschapov    1861  0.0  0.0  10040  6060 ?        Ss   00:45   0:03 /usr/bi
aschapov    1865  0.0  0.0 240648  8384 ?        Ssl  00:45   0:00 /usr/li
aschapov    1876  0.0  0.0 380888  6940 ?        Sl   00:45   0:00 /usr/li
aschapov    1877  0.0  0.0 463172  7772 ?        Ssl  00:45   0:00 /usr/li
aschapov    1887  0.0  0.0 236144  6560 ?        Ssl  00:45   0:00 /usr/li
root        1894  0.0  0.0   2792  2028 ?        Ss   00:45   0:00 fusermo
aschapov    1917  0.0  0.1 635548 28552 ?        SNsl 00:45   0:02 /usr/li
root        1931  0.0  0.0      0     0 ?        S<   00:45   0:00 [krfcom
root        1932  0.0  0.0      0     0 ?        I<   00:45   0:11 [kworke
aschapov    1934  0.0  0.0 316060 11152 ?        Ssl  00:45   0:00 /usr/li
aschapov    1939  0.0  0.0 162428  6320 tty2     Ssl+ 00:45   0:00 /usr/li
aschapov    1941  1.3  0.8 1656692 133792 tty2   Sl+  00:45   8:03 /usr/li
aschapov    1946  0.0  0.0 237244  7880 ?        Ssl  00:45   0:00 /usr/li
aschapov    1950  0.0  0.5 722200 87456 ?        SLl  00:45   0:03 /usr/li
aschapov    1957  0.0  0.0 338400 15800 ?        Sl   00:45   0:00 /usr/li
aschapov    1968  0.0  0.0 315200  8588 ?        Ssl  00:45   0:00 /usr/li
aschapov    1976  0.0  0.0 236460  6972 ?        Ssl  00:45   0:00 /usr/li
aschapov    1984  0.0  0.0 237544  7480 ?        Ssl  00:45   0:00 /usr/li
aschapov    2081  0.0  0.0 240632  8472 ?        Sl   00:45   0:00 /usr/bi
aschapov    2086  0.0  0.0 223040 16004 tty2     Sl+  00:45   0:00 /usr/li
aschapov    2166  0.0  0.0 309760  8680 ?        Ssl  00:45   0:00 /usr/li
aschapov    2172  0.0  0.0   8560  4680 ?        S    00:45   0:00 /usr/bi
aschapov    2188  0.0  0.0  91908  5800 ?        Ssl  00:45   0:00 /usr/li
aschapov    2199  0.0  0.1 658584 18096 ?        Ssl  00:45   0:01 /usr/li
aschapov    2203  0.0  0.0  76252 14124 ?        Ss   00:45   0:00 /snap/s
aschapov    2281  1.5  1.8 5866380 300336 ?      Rsl  00:45   9:43 /usr/bi
aschapov    2300  0.0  0.1 314548 26784 ?        Sl   00:45   0:00 /snap/s
aschapov    2304  0.0  0.0 550088 14424 ?        Ssl  00:45   0:00 /usr/li
aschapov    2319  0.0  0.6 1574600 108924 ?      Ssl  00:45   0:01 /usr/li
aschapov    2356  0.0  0.1 343172 27116 ?        Ssl  00:45   0:00 /usr/li
aschapov    2368  0.0  0.0 162748  8536 ?        Sl   00:45   0:02 /usr/li
aschapov    2370  0.0  0.1 2873940 28516 ?       Sl   00:45   0:00 /usr/bi
aschapov    2400  0.0  0.1 796200 22396 ?        Sl   00:45   0:00 /usr/li
aschapov    2406  0.0  0.2 1076228 39876 ?       Ssl  00:45   0:00 /usr/li
aschapov    2414  0.0  0.0 157084  6176 ?        Ssl  00:45   0:00 /usr/li
aschapov    2415  0.0  0.0 163072  6672 ?        Ssl  00:45   0:00 /usr/li
aschapov    2426  0.0  0.3 1606000 55536 ?       Ssl  00:45   0:01 /usr/li
aschapov    2445  0.0  0.1 745972 30104 ?        Ssl  00:45   0:00 /usr/li
aschapov    2453  0.0  0.0 314872  9332 ?        Sl   00:45   0:00 /usr/li
aschapov    2473  0.0  0.1 2931280 28464 ?       Sl   00:45   0:00 /usr/bi
aschapov    2493  0.0  0.0   2888  1668 ?        Ss   00:45   0:00 sh -c /
aschapov    2494  0.0  0.0 310428  7160 ?        Ssl  00:45   0:00 /usr/li
aschapov    2496  0.0  0.0 315556 12548 ?        Sl   00:45   0:09 /usr/bi
aschapov    2497  0.0  0.1 611040 29464 ?        Ssl  00:45   0:00 /usr/li
aschapov    2499  0.0  0.1 375472 16768 ?        Ssl  00:45   0:00 /usr/li
aschapov    2502  0.0  0.0 311928  8364 ?        Ssl  00:45   0:01 /usr/li
aschapov    2505  0.0  0.1 341468 25112 ?        Ssl  00:45   0:00 /usr/li
aschapov    2508  0.0  0.1 791468 30388 ?        Ssl  00:45   0:00 /usr/li
aschapov    2509  0.0  0.1 790236 29964 ?        Ssl  00:45   0:00 /usr/li
aschapov    2511  0.0  0.0 249852 11524 ?        Ssl  00:45   0:00 /usr/li
aschapov    2512  0.0  0.0 457856  6972 ?        Ssl  00:45   0:00 /usr/li
aschapov    2513  0.0  0.0 236288  6640 ?        Ssl  00:45   0:00 /usr/li
aschapov    2514  0.0  0.0 465940 11296 ?        Ssl  00:45   0:01 /usr/li
aschapov    2515  0.0  0.0 312316  8688 ?        Ssl  00:45   0:00 /usr/li
aschapov    2519  0.0  0.0 319348 10096 ?        Ssl  00:45   0:00 /usr/li
aschapov    2524  0.0  0.1 341824 25452 ?        Ssl  00:45   0:00 /usr/li
aschapov    2526  0.0  0.1 343408 27444 ?        Ssl  00:45   0:00 /usr/li
aschapov    2543  0.0  0.4 813596 68612 ?        Sl   00:45   0:00 /usr/li
aschapov    2566  0.0  0.0 232264  8204 ?        Sl   00:45   0:00 /usr/li
aschapov    2578  0.0  0.0 163480  7544 ?        Sl   00:45   0:00 /usr/li
aschapov    2582  0.0  0.1 272592 30468 ?        Sl   00:45   0:04 /usr/li
aschapov    2592  0.0  0.1 194236 25236 ?        Sl   00:45   0:00 /usr/li
aschapov    2616  0.0  0.0 237260  7776 ?        Sl   00:45   0:00 /usr/li
aschapov    2626  0.0  1.7 1237632 284396 ?      Sl   00:45   0:08 /snap/s
aschapov    2634  0.0  0.0 342360 15508 ?        Sl   00:45   0:00 /usr/li
aschapov    2719  0.0  0.0 163616  7648 ?        Sl   00:45   0:02 /usr/li
aschapov    3690  1.3  2.5 34348256 413016 ?     SLl  00:46   8:03 /opt/go
aschapov    3696  0.0  0.0   8512  2092 ?        S    00:46   0:00 cat
aschapov    3697  0.0  0.0   8512  2096 ?        S    00:46   0:00 cat
aschapov    3699  0.0  0.0 33577020 3848 ?       Sl   00:46   0:00 /opt/go
aschapov    3701  0.0  0.0 33567784 3304 ?       Sl   00:46   0:00 /opt/go
aschapov    3707  0.0  0.3 33910904 59320 ?      S    00:46   0:00 /opt/go
aschapov    3708  0.0  0.3 33910896 60228 ?      S    00:46   0:00 /opt/go
aschapov    3709  0.0  0.0 33563692 4416 ?       S    00:46   0:00 /opt/go
aschapov    3712  0.0  0.1 33910920 16468 ?      S    00:46   0:00 /opt/go
aschapov    3737  2.8  1.8 34631824 294220 ?     Sl   00:46  17:27 /opt/go
aschapov    3738  0.4  0.8 33945892 130188 ?     Sl   00:46   2:59 /opt/go
aschapov    3748  0.0  0.4 33963504 66532 ?      Sl   00:46   0:33 /opt/go
aschapov    3833  0.1  0.7 1186937292 120716 ?   Sl   00:46   0:52 /opt/go
aschapov    3845  0.0  0.6 1186902532 111104 ?   Sl   00:46   0:00 /opt/go
aschapov    3860  0.0  0.8 1186935396 136064 ?   Sl   00:46   0:27 /opt/go
aschapov    3960  1.6  1.9 1199688228 313628 ?   Sl   00:46  10:06 /opt/go
aschapov    3974  2.2  0.5 34738320 93876 ?      Sl   00:46  13:59 /opt/go
aschapov    3990  0.1  1.4 1189068280 242868 ?   Sl   00:46   0:47 /opt/go
aschapov    4002  0.1  1.6 1189088160 275764 ?   Sl   00:46   0:59 /opt/go
aschapov    4044  0.1  1.1 1189063440 188944 ?   Sl   00:46   0:45 /opt/go
aschapov    4058  0.0  1.1 1186970928 182868 ?   Sl   00:46   0:13 /opt/go
aschapov    4122  0.0  0.2 538312 43164 ?        Sl   00:46   0:00 update-
aschapov    4447  0.0  0.1  35904 19672 ?        S    00:49   0:00 /usr/bi
aschapov    4450  0.0  0.1 307644 28552 ?        Sl   00:49   0:00 /usr/bi
aschapov    4453  0.0  0.3 816148 54488 ?        Ssl  00:49   0:11 /usr/li
aschapov    4475  0.0  0.0  11408  5684 pts/0    Ss   00:49   0:00 bash
aschapov    4804  0.1  1.3 1186955988 216624 ?   Sl   01:04   0:52 /opt/go
aschapov    4830  0.0  0.8 1186934016 136380 ?   Sl   01:04   0:01 /opt/go
aschapov    4969  0.0  0.4 1137128 73144 ?       Sl   01:05   0:07 /usr/bi
aschapov    5016  0.0  0.0 388736  9384 ?        Sl   01:06   0:00 /usr/li
aschapov    5031  0.0  0.0 316824  9344 ?        Sl   01:06   0:00 /usr/li
aschapov    5072  0.0  0.5 1608996 92708 ?       Sl   01:07   0:28 evince 
aschapov    5081  0.0  0.0 156788  5860 ?        Sl   01:07   0:00 /usr/li
root        5553  0.0  0.0      0     0 ?        I    01:30   0:00 [kworke
root        5567  0.0  0.0      0     0 ?        I    09:01   0:00 [kworke
root        5569  0.0  0.0      0     0 ?        I    09:01   0:00 [kworke
root        5570  0.0  0.0      0     0 ?        I    09:01   0:01 [kworke
root        5597  0.0  0.0      0     0 ?        S    09:01   0:00 [irq/12
root        5641  0.0  0.0      0     0 ?        S    09:01   0:00 [nvidia
root        5694  0.0  0.0      0     0 ?        I    09:01   0:00 [kworke
root        8864  0.0  0.0      0     0 ?        I    09:17   0:00 [kworke
root        8913  0.4  0.0      0     0 ?        I    09:20   0:25 [kworke
root        9344  0.1  0.0      0     0 ?        I    09:38   0:05 [kworke
aschapov    9466 60.6  2.8 1203915304 471028 ?   Sl   09:39  50:15 /opt/go
root        9864  0.2  0.0      0     0 ?        I<   09:40   0:12 [kworke
root        9865  0.2  0.0      0     0 ?        D<   09:40   0:11 [kworke
aschapov    9866  0.0  0.0  46956  7808 ?        Ss   09:40   0:00 /usr/li
root        9906  0.0  0.0      0     0 ?        I    09:41   0:00 [kworke
root       10298  0.0  0.0      0     0 ?        I    10:00   0:00 [kworke
root       10420  0.0  0.0      0     0 ?        I    10:05   0:01 [kworke
aschapov   10421  0.7  1.1 1186976344 178768 ?   Sl   10:05   0:26 /opt/go
aschapov   10434  0.2  0.9 1186984964 148260 ?   Sl   10:05   0:08 /opt/go
aschapov   10450  0.0  0.6 1186934088 104912 ?   Sl   10:05   0:01 /opt/go
root       10679  0.0  0.0   3208  1792 ?        S    10:15   0:00 sleep 3
aschapov   10873  0.1  0.3 3055820 60304 ?       Sl   10:16   0:03 gjs /us
aschapov   11078  0.6  1.1 1186991436 192052 ?   Sl   10:19   0:16 /opt/go
aschapov   11168  2.8  1.3 1186982804 223308 ?   Sl   10:23   1:07 /opt/go
root       11397  0.0  0.0      0     0 ?        I    10:32   0:00 [kworke
aschapov   11531  2.6  1.1 1186990624 187584 ?   Sl   10:35   0:43 /opt/go
root       11591  0.0  0.0      0     0 ?        I    10:37   0:00 [kworke
root       11704  0.0  0.0      0     0 ?        I    10:41   0:00 [kworke
root       11718  0.0  0.0      0     0 ?        I    10:43   0:00 [kworke
root       11736  0.3  0.0      0     0 ?        I    10:43   0:04 [kworke
root       12015  0.0  0.0      0     0 ?        I    10:50   0:00 [kworke
root       12026  0.0  0.0      0     0 ?        I    10:51   0:00 [kworke
aschapov   12029  1.8  1.2 1186940108 203992 ?   Sl   10:52   0:10 /opt/go
aschapov   12043  0.0  0.6 1186934024 103564 ?   Sl   10:53   0:00 /opt/go
aschapov   12090  0.0  0.6 1186934224 104816 ?   Sl   10:54   0:00 /opt/go
aschapov   12172  0.2  0.7 1186937000 126724 ?   Sl   10:57   0:00 /opt/go
aschapov   12180  0.7  1.1 1189032016 182344 ?   Sl   10:57   0:02 /opt/go
root       12188  0.0  0.0      0     0 ?        I    10:57   0:00 [kworke
aschapov   12215  0.0  0.4 1186884460 69340 ?    Sl   10:59   0:00 /opt/go
root       12227  0.0  0.0      0     0 ?        I    10:59   0:00 [kworke
root       12257  0.0  0.0      0     0 ?        I    11:01   0:00 [kworke
aschapov   12268  0.0  0.0  12672  3456 pts/0    R+   11:02   0:00 ps axu
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ps axu head
error: unsupported option (BSD syntax)

Usage:
 ps [options]

 Try 'ps --help <simple|list|output|threads|misc|all>'
  or 'ps --help <s|l|o|t|m|a>'
 for additional help text.

For more details see ps(1).
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ps axu | head
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root           1  0.0  0.0 166976 12288 ?        Ss   00:45   0:02 /sbin/init splash
root           2  0.0  0.0      0     0 ?        S    00:45   0:00 [kthreadd]
root           3  0.0  0.0      0     0 ?        I<   00:45   0:00 [rcu_gp]
root           4  0.0  0.0      0     0 ?        I<   00:45   0:00 [rcu_par_gp]
root           5  0.0  0.0      0     0 ?        I<   00:45   0:00 [slub_flushwq]
root           6  0.0  0.0      0     0 ?        I<   00:45   0:00 [netns]
root           8  0.0  0.0      0     0 ?        I<   00:45   0:00 [kworker/0:0H-events_highpri]
root          10  0.0  0.0      0     0 ?        I<   00:45   0:00 [mm_percpu_wq]
root          11  0.0  0.0      0     0 ?        I    00:45   0:00 [rcu_tasks_kthread]
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ps axu | tail
aschapov   12029  1.6  1.2 1186940108 204632 ?   Sl   10:52   0:10 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=3699 --enable-crash-reporter=487b6f07-67ba-4f88-861c-edb2597067cb, --disable-nacl --origin-trial-disabled-features=WebGPU --change-stack-guard-on-fork=enable --lang=en-US --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=223 --time-ticks-at-unix-epoch=-1696196724980814 --launch-time-ticks=9450541645 --shared-files=v8_context_snapshot_data:100 --field-trial-handle=0,i,18010479272518336537,1765120775420000077,262144
aschapov   12043  0.0  0.6 1186934024 103564 ?   Sl   10:53   0:00 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=3699 --enable-crash-reporter=487b6f07-67ba-4f88-861c-edb2597067cb, --disable-nacl --origin-trial-disabled-features=WebGPU --change-stack-guard-on-fork=enable --lang=en-US --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=224 --time-ticks-at-unix-epoch=-1696196724980814 --launch-time-ticks=9465987385 --shared-files=v8_context_snapshot_data:100 --field-trial-handle=0,i,18010479272518336537,1765120775420000077,262144
aschapov   12090  0.0  0.6 1186934224 105072 ?   Sl   10:54   0:00 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=3699 --enable-crash-reporter=487b6f07-67ba-4f88-861c-edb2597067cb, --disable-nacl --origin-trial-disabled-features=WebGPU --change-stack-guard-on-fork=enable --lang=en-US --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=227 --time-ticks-at-unix-epoch=-1696196724980814 --launch-time-ticks=9554571137 --shared-files=v8_context_snapshot_data:100 --field-trial-handle=0,i,18010479272518336537,1765120775420000077,262144
aschapov   12172  0.1  0.7 1186937000 126724 ?   Sl   10:57   0:00 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=3699 --enable-crash-reporter=487b6f07-67ba-4f88-861c-edb2597067cb, --extension-process --disable-nacl --origin-trial-disabled-features=WebGPU --change-stack-guard-on-fork=enable --lang=en-US --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=229 --time-ticks-at-unix-epoch=-1696196724980814 --launch-time-ticks=9726687760 --shared-files=v8_context_snapshot_data:100 --field-trial-handle=0,i,18010479272518336537,1765120775420000077,262144
aschapov   12180  0.5  1.1 1189032016 182344 ?   Sl   10:57   0:02 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=3699 --enable-crash-reporter=487b6f07-67ba-4f88-861c-edb2597067cb, --disable-nacl --origin-trial-disabled-features=WebGPU --change-stack-guard-on-fork=enable --pdf-renderer --lang=en-US --js-flags=--jitless --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=230 --time-ticks-at-unix-epoch=-1696196724980814 --launch-time-ticks=9726832905 --shared-files=v8_context_snapshot_data:100 --field-trial-handle=0,i,18010479272518336537,1765120775420000077,262144
aschapov   12215  0.0  0.4 1186884460 69340 ?    Sl   10:59   0:00 /opt/google/chrome/chrome --type=renderer --crashpad-handler-pid=3699 --enable-crash-reporter=487b6f07-67ba-4f88-861c-edb2597067cb, --disable-nacl --origin-trial-disabled-features=WebGPU --change-stack-guard-on-fork=enable --lang=en-US --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=232 --time-ticks-at-unix-epoch=-1696196724980814 --launch-time-ticks=9854548355 --shared-files=v8_context_snapshot_data:100 --field-trial-handle=0,i,18010479272518336537,1765120775420000077,262144
root       12227  0.0  0.0      0     0 ?        I    10:59   0:00 [kworker/0:2-events]
root       12257  0.0  0.0      0     0 ?        I    11:01   0:00 [kworker/1:0]
aschapov   12278  0.0  0.0  12672  3456 pts/0    R+   11:03   0:00 ps axu
aschapov   12279  0.0  0.0   8408  2176 pts/0    S+   11:03   0:00 tail
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ history head
bash: history: head: numeric argument required
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ history | head
    1  sudo apt install gnome-tweaks
    2  gnome-tweaks
    3  cd /home/aschapov/inf_labs
    4  mkdir lw_1
    5  cd /inf_labs/lw_1
    6  cd /lw_1
    7  cd /home/aschapov/inf_labs/lw1
    8  ls
    9  cd lw_1
   10  rm -r lw_1
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ history | tail
   35  ls
   36  rm 123.txt
   37  ps
   38  ps axu
   39  ps axu head
   40  ps axu | head
   41  ps axu | tail
   42  history head
   43  history | head
   44  history | tail
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ mkdir test
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ls
lw_1   lw_11  lw_13  lw_15  lw_3  lw_5  lw_7  lw_9
lw_10  lw_12  lw_14  lw_2   lw_4  lw_6  lw_8  test
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ rmdir test
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ls
lw_1   lw_11  lw_13  lw_15  lw_3  lw_5  lw_7  lw_9
lw_10  lw_12  lw_14  lw_2   lw_4  lw_6  lw_8
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ sudo
usage: sudo -h | -K | -k | -V
usage: sudo -v [-ABknS] [-g group] [-h host] [-p prompt] [-u user]
usage: sudo -l [-ABknS] [-g group] [-h host] [-p prompt] [-U user] [-u
            user] [command]
usage: sudo [-ABbEHknPS] [-r role] [-t type] [-C num] [-D directory] [-g
            group] [-h host] [-p prompt] [-R directory] [-T timeout] [-u
            user] [VAR=value] [-i|-s] [<command>]
usage: sudo -e [-ABknS] [-r role] [-t type] [-C num] [-D directory] [-g
            group] [-h host] [-p prompt] [-R directory] [-T timeout] [-u
            user] file ...
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ ssh a_shiapov@185.5.249.140
The authenticity of host '185.5.249.140 (185.5.249.140)' can't be established.
ED25519 key fingerprint is SHA256:gMWpghci4jH+8KckY83J+zLNE4DrwfrDZorZZU2IRGI.
This key is not known by any other names
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added '185.5.249.140' (ED25519) to the list of known hosts.
a_shiapov@185.5.249.140's password: 
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.


The programs included with the Ubuntu system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Ubuntu comes with ABSOLUTELY NO WARRANTY, to the extent permitted by
applicable law.

a_shiapov@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ cd lw_2
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ touch listing.md
schapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ tar cvf archive.tar listing.md
listing.md
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ ssh a_shiapov@185.5.249.140
a_shiapov@185.5.249.140's password: 
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Oct  2 11:14:38 2023 from 85.143.224.9
a_shiapov@vds2476450:~$ scp /home/aschapov/inf_labs/lw_2/archive.tar a_shiapov@185.5.249.140:/home
The authenticity of host '185.5.249.140 (185.5.249.140)' can't be established.
ECDSA key fingerprint is SHA256:HaVGMUF4Ylk978WKR4oBPYEWkv+fd86Gg9Yqcwnu3Z4.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added '185.5.249.140' (ECDSA) to the list of known hosts.
a_shiapov@185.5.249.140's password: 
/home/aschapov/inf_labs/lw_2/archive.tar: No such file or directory
a_shiapov@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ scp /home/aschapov/inf_labs/lw_2/archive.tar a_shiapov@185.5.249.140:/home
a_shiapov@185.5.249.140's password: 
scp: /home/archive.tar: Permission denied
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ ssh a_shiapov@185.5.249.140
a_shiapov@185.5.249.140's password: 
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Oct  2 11:43:59 2023 from 85.143.224.9
a_shiapov@vds2476450:~$ pwd
/home/a_shiapov
a_shiapov@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ scp /home/aschapov/inf_labs/lw_2/archive.tar a_shiapov@185.5.249.140:/home/a_shiapov
a_shiapov@185.5.249.140's password: 
archive.tar                             100%   40KB   2.0MB/s   00:00    
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ ssh a_shiapov@185.5.249.140
a_shiapov@185.5.249.140's password: 
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Oct  2 11:50:38 2023 from 85.143.224.9
a_shiapov@vds2476450:~$ ls
archive.tar
a_shiapov@vds2476450:~$ tar xvf archive.tar
listing.md
a_shiapov@vds2476450:~$ ls
archive.tar  listing.md
a_shiapov@vds2476450:~$ scp a_shiapov@185.5.249.140:/home/a_shiapov /home/aschapov/inf_labs/
a_shiapov@185.5.249.140's password: 
scp: /home/a_shiapov: not a regular file
a_shiapov@vds2476450:~$ scp a_shiapov@185.5.249.140:/home/a_shiapov /home/aschapov/inf_labs/
a_shiapov@185.5.249.140's password: 
scp: /home/a_shiapov: not a regular file
a_shiapov@vds2476450:~$ scp a_shiapov@185.5.249.140:/home/a_shiapov/listing.md /home/aschapov/inf_labs/
a_shiapov@185.5.249.140's password: 
/home/aschapov/inf_labs/: No such file or directory
a_shiapov@vds2476450:~$ scp a_shiapov@185.5.249.140:/home/a_shiapov/listing.md /home/aschapov/inf_labs
a_shiapov@185.5.249.140's password: 
Permission denied, please try again.
a_shiapov@185.5.249.140's password: 
/home/aschapov/inf_labs: No such file or directory
a_shiapov@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_2$ scp a_shiapov@185.5.249.140:/home/a_shiapov/listing.md /home/aschapov/inf_labs/
a_shiapov@185.5.249.140's password: 
listing.md                              100%   32KB   2.4MB/s   00:00    
```

