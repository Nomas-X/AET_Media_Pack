class CfgSFX
{
	class GVAR(SFX_DutyPropaganda)
	{
		sounds[]=
		{
			QGVAR(DutyPropaganda)
		};
		name="AET Duty Propaganda";
		GVAR(DutyPropaganda)[]=
		{
			QPATHTOF(data\nomas\DutyPropaganda.ogg),
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
	class GVAR(SFX_FreedomPropaganda)
	{
		sounds[]=
		{
			QGVAR(FreedomPropaganda)
		};
		name="AET Freedom Propaganda";
		GVAR(FreedomPropaganda)[]=
		{
			QPATHTOF(data\nomas\FreedomPropaganda.ogg),
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
	class GVAR(DutyPropaganda): Sound
	{
		author="AET";
		scope=2;
		sound=QGVAR(SFX_DutyPropaganda);
		displayName="AET Duty Propaganda";
	};
	class GVAR(FreedomPropaganda): Sound
	{
		author="AET";
		scope=2;
		sound=QGVAR(SFX_FreedomPropaganda);
		displayName="AET Freedom Propaganda";
	};
};
