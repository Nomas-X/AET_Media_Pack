#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class AETMusicPack
	{
		name = "AET Music Pack";
		author = "AET";
		requiredVersion = 1.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
      	worlds[] = {};
	};
};
class CfgMusic
{
	#include "FileListWithMusicTracks.hpp"
};
class CfgMusicClasses
{
	class AETMusicPack
	{
		displayName = "AET Music Pack";
	};
};
