class CfgSFX
{
	class AET_MP_SFX_DutyPropaganda
	{
		sounds[]=
		{
			"AET_MP_Sound_DutyPropaganda"
		};
		name="AET Duty Propaganda TEST";
		AET_MP_Sound_DutyPropaganda[]=
		{
			"z\aet_mp\addons\sounds\soundTracks\DutyPropaganda.ogg",
			20,
			1,
			1000,
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
		name="AET Freedom Propaganda TEST";
		AET_MP_Sound_FreedomPropaganda[]=
		{
			"z\aet_mp\addons\sounds\soundTracks\FreedomPropaganda.ogg",
			20,
			1,
			1000,
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