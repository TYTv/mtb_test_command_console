USE COMMAND CONSOLE IN CYPRESS MODUSTOOLBOX

---------------------------------------------------------------------

device

1. CY8CKIT-062S2-43012

2. CY8CPROTO-062-4343W

3. CYW9P62S1-43438EVB-01 [1mb flash version]

4. AzureWave 21H Model: AW-CU427 [2mb flash version] (use CY8CPROTO-062-4343W bsp and modify wifi_nvram_image.h to "xtalfreq=26000")

---------------------------------------------------------------------

Command Console Library

https://github.com/cypresssemiconductorco/command-console

---------------------------------------------------------------------

guide

1. open modustoolbox v2.2 and create a workspace

2. file -> import -> git -> projects from git -> next -> clone uri -> next -> uri: https://github.com/TYTv/mtb_test_command_console.git -> next -> next -> directory: your workspace forder path -> next -> next -> finish

3. quick panel -> tools -> library manager 1.2 -> select your board to active -> update -> close

4. quick panel -> launches -> generate launches for mtb_test_command_console

5. open conn_wifi.h file and modify wifi_ssid / wifi_password

6. plug in usb

7. quick panel -> launches -> mtb_test_command_console program (kitprog3_miniprog4)