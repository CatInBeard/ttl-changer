# ttl-changer
A program to bypass restrictions on Internet sharing from a mobile device
## Description
Often, checking whether traffic is being shared is done by examining the TTL. The standard TTL for a phone is 64, and for a computer, it is 128. When passing through the phone’s network share, the TTL value decreases by one. To disguise computer traffic as a phone, you need to set the TTL to 65. This can be done using the ```sudo sysctl net.ipv4.ip_default_ttl=65``` command. The entire project could fit into 2 lines of a bash script, but unfortunately, interpreted scripts cannot be used with the set-user-id privilege. Therefore, to ensure the script does not require sudo when running, a compiled programming language is used.
## License
This project is licensed under the terms of the MIT License. See the [LICENSE](LICENSE) file for details.
## Installation
1. Clone the repository:
  ```git clone https://github.com/CatInBeard/ttl-changer.git```
2. Build application: 
    ```make build```
3. Copy files and set priveleges (require root priveleges):
    ```make install```
4. Clean directory:
    ```make clean```
5. To mask your traffic run the command (the effect will remain until reboot):
```ttl-changer```