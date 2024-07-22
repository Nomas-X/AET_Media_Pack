#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class YepperzzsMusicPack
	{
		name = "Yepperzz's Music Pack";
		author = "Yepperzz";
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
	class YepperzzsMusicPack
	{
		displayName = "Yepperzz's Music Pack";
	};
};
