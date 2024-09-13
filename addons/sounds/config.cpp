class CfgPatches {
    class AET_MP_Sounds {
        author = "$STR_aet_mp_author";
        name = "AET_MP_Sounds";
        url = "$STR_aet_URL";
        units[] = {
			"AET_MP_Sound_DutyPropaganda",
			"AET_MP_Sound_FreedomPropaganda"
		};
        weapons[] = {};
        requiredAddons[] = {};
        authors[] = {"Nomas / Redwan S. [AET]"};
    };
};

class CfgSFX
{
	class AET_MP_SFX_DutyPropaganda
	{
		sounds[]=
		{
			"AET_MP_Sound_DutyPropaganda"
		};
		name="AET Duty Propaganda";
		AET_MP_Sound_DutyPropaganda[]=
		{
			"sounds\soundTracks\DutyPropaganda.ogg",
			1,
			1,
			500,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class AET_MP_SFX_FreedomPropaganda
	{
		sounds[]=
		{
			"AET_MP_Sound_FreedomPropaganda"
		};
		name="AET Freedom Propaganda";
		AET_MP_Sound_FreedomPropaganda[]=
		{
			"sounds\soundTracks\FreedomPropaganda.ogg",
			1,
			1,
			500,
			1,
			0,
			0,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
};

class CfgVehicles
{
	class Sound;
	class AET_MP_Sound_DutyPropaganda: Sound
	{
		author="AET";
		scope=2;
		sound="AET_MP_SFX_DutyPropaganda";
		displayName="AET Duty Propaganda";
	};
	class AET_MP_Sound_FreedomPropaganda: Sound
	{
		author="AET";
		scope=2;
		sound="AET_MP_SFX_FreedomPropaganda";
		displayName="AET Freedom Propaganda";
	};
};

class CfgSounds
{
	sounds[]={};
	class AET_MP_Sound_DutyPropaganda
	{
		author="AET";
		name="AET Duty Propaganda";
		sound[]=
		{
			"\sounds\soundTracks\DutyPropaganda.ogg",
			1,
			1,
			500
		};
		titles[]=
		{
			0,
			""
		};
		duration=65;
	};
	class AET_MP_Sound_FreedomPropaganda
	{
		author="AET";
		name="AET Freedom Propaganda";
		sound[]=
		{
			"sounds\soundTracks\FreedomPropaganda.ogg",
			1,
			1,
			500
		};
		titles[]=
		{
			0,
			""
		};
		duration=182;
	};
};