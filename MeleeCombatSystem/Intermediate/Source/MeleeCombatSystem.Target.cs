using UnrealBuildTool;

public class MeleeCombatSystemTarget : TargetRules
{
	public MeleeCombatSystemTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("MeleeCombatSystem");
	}
}
