@echo off 
gcc.exe -Wall -o D:\Documents\GitHub\UnitConverter\CurrentVersion\Converter.exe D:\Documents\GitHub\UnitConverter\Project\Modules\Data.c D:\Documents\GitHub\UnitConverter\Project\Modules\Time.c D:\Documents\GitHub\UnitConverter\Project\Modules\Temperature.c D:\Documents\GitHub\UnitConverter\Project\Main.c D:\Documents\GitHub\UnitConverter\Project\Switches\selectionswitchData.c D:\Documents\GitHub\UnitConverter\Project\Switches\selectionswitchTime.c D:\Documents\GitHub\UnitConverter\Project\Switches\selectionswitchTemperature.c D:\Documents\GitHub\UnitConverter\Project\Service\parsing.c D:\Documents\GitHub\UnitConverter\Project\Service\convert.c 
@echo on
pause
exit
