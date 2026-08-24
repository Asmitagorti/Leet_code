#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    
    result[0] = 0;
    result[1] = 1;
    return result;
//     Starting Nmap 7.98 ( https://nmap.org ) at 2026-03-21 10:38 +0530
// Failed to resolve "r".
// Nmap scan report for reliance.reliance (192.168.29.1)
// Host is up (0.016s latency).
// Not shown: 991 filtered tcp ports (no-response)
// PORT     STATE  SERVICE
// 80/tcp   open   http
// 443/tcp  open   https
// 1900/tcp open   upnp
// 2869/tcp closed icslap
// 7443/tcp open   oracleas-https
// 8002/tcp closed teradataordbms
// 8080/tcp open   http-proxy
// 8200/tcp closed trivnet1
// 8443/tcp open   https-alt
// MAC Address: 20:89:8A:AB:60:61 (Shenzhen Skyworth Digital  Technology)

// Nmap scan report for 192.168.29.46
// Host is up (0.019s latency).
// Not shown: 998 closed tcp ports (reset)
// PORT      STATE SERVICE
// 49152/tcp open  unknown
// 62078/tcp open  iphone-sync
// MAC Address: 86:C8:60:52:38:88 (Unknown)

// Nmap scan report for 192.168.29.67
// Host is up (0.014s latency).
// All 1000 scanned ports on 192.168.29.67 are in ignored states.
// Not shown: 1000 closed tcp ports (reset)
// MAC Address: E2:E8:17:E7:97:9A (Unknown)

// Nmap scan report for 192.168.29.107
// Host is up (0.0074s latency).
// Not shown: 999 closed tcp ports (reset)
// PORT     STATE SERVICE
// 2869/tcp open  icslap
// MAC Address: 10:76:36:AF:A9:FA (Earda Technologies)

// Nmap scan report for 192.168.29.147
// Host is up (0.010s latency).
// Not shown: 998 closed tcp ports (reset)
// PORT      STATE SERVICE
// 49152/tcp open  unknown
// 62078/tcp open  iphone-sync
// MAC Address: 86:E4:D0:26:D4:1C (Unknown)

// Nmap scan report for 192.168.29.182
// Host is up (0.011s latency).
// All 1000 scanned ports on 192.168.29.182 are in ignored states.
// Not shown: 1000 closed tcp ports (reset)
// MAC Address: 56:CA:5B:F4:F9:4C (Unknown)

// Nmap scan report for 192.168.29.226
// Host is up (0.024s latency).
// Not shown: 997 filtered tcp ports (no-response)
// PORT    STATE SERVICE
// 22/tcp  open  ssh
// 80/tcp  open  http
// 443/tcp open  https
// MAC Address: 3C:64:CF:CE:94:AC (TP-Link PTE.)

// Nmap scan report for 192.168.29.231
// Host is up (0.025s latency).
// Not shown: 993 filtered tcp ports (no-response)
// PORT      STATE SERVICE
// 22/tcp    open  ssh
// 5000/tcp  open  upnp
// 7000/tcp  open  afs3-fileserver
// 10001/tcp open  scp-config
// 10002/tcp open  documentum
// 10003/tcp open  documentum_s
// 10004/tcp open  emcrmirccd
// MAC Address: 3A:08:29:FA:26:BB (Unknown)

// Nmap scan report for 192.168.29.101
// Host is up (0.00045s latency).
// Not shown: 976 closed tcp ports (reset)
// PORT     STATE    SERVICE
// 25/tcp   filtered smtp
// 110/tcp  filtered pop3
// 119/tcp  filtered nntp
// 125/tcp  filtered locus-map
// 135/tcp  open     msrpc
// 139/tcp  open     netbios-ssn
// 143/tcp  filtered imap
// 445/tcp  open     microsoft-ds
// 465/tcp  filtered smtps
// 548/tcp  filtered afp
// 563/tcp  filtered snews
// 587/tcp  filtered submission
// 800/tcp  filtered mdbs_daemon
// 903/tcp  filtered iss-console-mgr
// 993/tcp  filtered imaps
// 995/tcp  filtered pop3s
// 1025/tcp filtered NFS-or-IIS
// 1122/tcp filtered availant-mgr
// 1433/tcp filtered ms-sql-s
// 1521/tcp open     oracle
// 3306/tcp open     mysql
// 5357/tcp open     wsdapi
// 5432/tcp open     postgresql
// 8080/tcp open     http-proxy

// Nmap done: 256 IP addresses (9 hosts up) scanned in 46.85 seconds
}