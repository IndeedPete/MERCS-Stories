class ShopMissions
{	
	class MIntro
    {
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		isHub = 0;
		keepLoadout = 0;
		stage = "AA";
		tacPad = 0;
	};
	
	class BSM_Min
    {
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		isHub = 0;
		keepLoadout = 0;
		stage = "A";
		tacPad = 0;
	};
	
	class EF_Min
    {
		coldBreath = 0;
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		ignoredGear[] = {"uniform", "backpack", "assignedItems"};
		isHub = 0;
		keepLoadout = 1;
		stage = "A";
		tacPad = 0;
	};
	
	class BSM_Min2
    {
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		isHub = 0;
		keepLoadout = 0;
		stage = "A";
		tacPad = 0;
	};
	
	class EF_Min2
    {
		coldBreath = 0;
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		ignoredGear[] = {"uniform", "backpack", "assignedItems"};
		isHub = 0;
		keepLoadout = 1;
		replacement = "woodland";
		stage = "A";
		tacPad = 1;
	};
	
	class BSM_Hub01
    {
		condition = 0;
		fixedDate = 0;
		fixedWeather = 0;
		hourAdd = 12;
		isHub = 1;
		keepLoadout = 1;
		resting = 1;
		stage = "B";
		tacPad = 0;
	};
	
	class BSM_M01
	{
		client = "BlackStarMovement";	
		condition = 1;
		description = "Black Star guerillas move out to destroy an old radar and weather station before the enemy gets his hands on this strategically valuable location.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot"};
		isHub = 0;
		keepLoadout = 1;
		stage = "B";
		tacPad = 0;
		title = "Blind Eye";
	};
	
	class BSM_M02
	{
		client = "BlackStarMovement";	
		condition = 1;
		description = "Black Star guerillas and local police forces plan to erect defences in the villages around the old depot.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot"};
		isHub = 0;
		keepLoadout = 1;
		stage = "B";
		tacPad = 0;
		title = "Supply Run";
	};
	
	class BSM_M03
	{
		client = "BlackStarMovement";	
		condition = 1;
		description = "The depot lost contact to the Viking cell. Black Star forces move out to check Viking's camp site in the woods.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot"};
		isHub = 0;
		keepLoadout = 1;
		stage = "B";
		tacPad = 0;
		title = "Viking Lost";
	};
	
	class BSM_M04
	{
		client = "BlackStarMovement";	
		condition = 1;
		description = "Veikko Halla moves out to meet with a local arms dealer in order to enter negotiations for a contract to rearm the Black Star.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"cars"};
		isHub = 0;
		keepLoadout = 1;
		stage = "B";
		tacPad = 0;
		title = "Eazy Dealz";
	};
	
	class CSAT_Hub01
    {
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		isHub = 1;
		keepLoadout = 1;
		stage = "C";
		tacPad = 0;
	};
	
	class CSAT_M01a
	{
		client = "CSAT";	
		condition = "(getText(missionConfigFile >> 'name') == 'CSAT_Hub01')";
		description = "CSAT forces mobilise heavy armour and infantry in order to break through to the BSM's HQ at the Old Outpost.";
		fixedDate = 1;
		fixedWeather = 1;
		insertionTypes[] = {"cars"};
		isHub = 0;
		keepLoadout = 1;
		stage = "C";
		tacPad = 1;
		title = "Breakthrough";
	};
	
	class CSAT_M01b
	{
		client = "CSAT";	
		condition = "(getText(missionConfigFile >> 'name') == 'CSAT_Hub01')";
		description = "A CSAT assassin squad under command of Second Lieutenant Malik Nafisi deploys in the woods east of the BSM's HQ at the Old Outpost in order to covertly take out enemy key personnel.";
		fixedDate = 1;
		fixedWeather = 1;
		insertionTypes[] = {"foot"};
		isHub = 0;
		keepLoadout = 1;
		stage = "C";
		tacPad = 1;
		title = "Assassination";
	};
	
	class EF_Min3
    {
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		ignoredGear[] = {"uniform", "assignedItems"};
		isHub = 0;
		keepLoadout = 1;
		replacement = "snow";
		stage = "D";
		tacPad = 1;
	};
	
	class EF_Hub01
    {
		condition = 0;
		fixedDate = 0;
		fixedWeather = 0;
		hourAdd = 4;
		isHub = 1;
		keepLoadout = 1;
		replacement = "snow";
		resting = 1;
		stage = "D";
		tacPad = 0;
	};
	
	class EF_M01
	{
		client = "EFMil";	
		condition = 1;
		description = "Erik Stieglitz and James Walker move out to observe an abandoned construction side. Waiting for the perfect opportunity to strike and acquire important blueprints.";
		fixedDate = 0;
		fixedWeather = 0;
		hourAdd = 4;
		insertionTypes[] = {"foot"};
		isHub = 0;
		keepLoadout = 1;
		resting = 0;
		stage = "D";
		tacPad = 1;
		title = "Blueprints";
	};
	
	class EF_M02
	{
		client = "EFMil";	
		condition = 1;
		description = "The Wolfpack moves out in order to extract strategically valuable data from a Black Star held satellite array.";
		fixedDate = 0;
		fixedWeather = 0;
		hourAdd = 1;
		insertionTypes[] = {"foot"};
		isHub = 0;
		keepLoadout = 1;
		resting = 0;
		stage = "D";
		tacPad = 1;
		title = "Grand Theft Data";
	};
	
	class EF_M03
	{
		client = "EFMil";	
		condition = 1;
		description = "The Wolfpack meets with an informant right in the centre of Grammendorf, the capital of Helvantis.";
		fixedDate = 0;
		fixedWeather = 0;
		hourAdd = 1;
		insertionTypes[] = {"foot"};
		isHub = 0;
		keepLoadout = 1;
		resting = 0;
		stage = "D";
		tacPad = 1;
		title = "The Informant";
	};
	
	class EF_M04
	{
		client = "EFMil";	
		condition = 0;
		description = "A few days later, James Walker and Erik Stieglitz return from reconnaissance only to find their camp damaged and abandoned.";
		fixedDate = 1;
		fixedWeather = 1;
		isHub = 0;
		keepLoadout = 1;
		resting = 1;
		stage = "E";
		tacPad = 1;
		title = "Deployment Bravo";
	};
	
	class MOut_Execution
	{
		client = "EFMil";	
		condition = 0;
		description = "Operations Chief Erik Stieglitz decided to intervene the torture of an informant in Grammendorf. Both James Walker and Erik Stieglitz were overwhelmed by the rest of the team and then brought to an undisclosed location, deep in the Helvantian woods.";
		fixedDate = 0;
		fixedWeather = 1;
		hourAdd = 0;
		isHub = 0;
		keepLoadout = 1;
		resting = 0;
		stage = "Z";
		tacPad = 0;
		title = "Exitus";
	};
	
	class BSM_Hub02
    {
		condition = 0;
		fixedDate = 0;
		fixedWeather = 0;
		hourAdd = 4;
		isHub = 1;
		keepLoadout = 1;
		resting = 1;
		shopParams[] = {1,{},{"Garage","HeliPad1"},{"IP_B_MRAP_01_FBSM","IP_C_Heli_Light_01_civil_FPO"}};
		stage = "F";
		tacPad = 0;
	};
	
	class BSM_M05
	{
		client = "BSM";	
		condition = 1;
		description = "Black Star forces mobilise in order to engage an enemy observation post and neutralise sniper teams threatening the Großbrand Military Base.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot","cars"};
		keepLoadout = 1;
		location = "Lower Grammendorf Ruins";
		recommended = "-";
		resting = 0;
		reward = 0;
		shopParams[] = {1,{},{"Garage","HeliPad1"},{}};
		stage = "F";
		supportTypes[] = {"Mortar","CAS","Contractors"};
		tacPad = 1;
		title = "Cleanup";
	};
	
	class BSM_M06
	{
		client = "BSM";	
		condition = 1;
		description = "An independent photo journalist contacted the Black Star for a documentary about the conflict. He is covertly entering the country by boat and Black Star forces have agreed to pick him up on the beach near the village of Schweben.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot","cars","air"};
		keepLoadout = 1;
		location = "Schweben";
		recommended = "-";
		resting = 0;
		reward = 25000;
		stage = "F";
		supportTypes[] = {"Mortar","CAS","Contractors"};
		tacPad = 1;
		title = "Freedom of Press";
	};
	
	class BSM_M07
	{
		client = "BSM";	
		condition = 1;
		description = "Black Star forces under the command of Veikko Halla move out to extract a medical doctor from the surrounded city of Abstwind.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot","cars","air"};
		keepLoadout = 1;
		location = "Abstwind";
		recommended = "-";
		resting = 0;
		reward = 0;
		stage = "F";
		supportTypes[] = {"Mortar","CAS","Contractors"};
		tacPad = 1;
		title = "MEDEVAC";
	};
	
	class BSM_M08
	{
		client = "BSM";	
		condition = "(['BSM_M06'] call IP_fnc_missionDone) && !(['BSM_M08'] call IP_fnc_missionDone)";
		description = "Independent photojournalist Don McCullen accompanies a BSM unit around Veikko Halla to an ambush mission in order to get solid proof for European activity in Helvantis.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot"};
		keepLoadout = 1;
		location = "North-West of the Satellite Array";
		recommended = "Explosives, AT Launchers";
		resting = 0;
		reward = 100000;
		stage = "F";
		supportTypes[] = {};
		tacPad = 0;
		title = "Embedded Journalism";
	};
	
	class BSM_M09
	{
		client = "BSM";	
		condition = 1;
		description = "European troops erected a vital outpost on the front line which endangers the BSM's western flank. Veikko Halla moves out to capture the outpost and secure the equipment stored there.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot","cars"};
		keepLoadout = 1;
		location = "South of Sargenzell";
		recommended = "AT Launchers";
		resting = 0;
		reward = 0;
		stage = "F";
		supportTypes[] = {"Mortar","CAS","Contractors"};
		tacPad = 1;
		title = "Hostile Takeover";
	};
	
	class BSM_M10
	{
		client = "BSM";	
		condition = 1;
		description = "Due to a large snow storm east of Helvantis, three Iranian To-199 Neophron fighter jets had to emergency land at the Helvantis Airfield. Veikko Halla moves out to destroy these vital assets.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot"};
		keepLoadout = 1;
		location = "Helvantis Airfield";
		recommended = "Explosives, Silencers";
		resting = 1;
		reward = 0;
		stage = "F";
		supportTypes[] = {};
		tacPad = 1;
		title = "Flight Cancelled";
	};
	
	class BSM_M11
	{
		client = "BSM";	
		condition = "(['BSM_M06'] call IP_fnc_missionDone) && (['BSM_M07'] call IP_fnc_missionDone) && !(['BSM_M11'] call IP_fnc_missionDone)";
		description = "Photojournalist Don McCullen received a message regarding a hidden excavation site west of the Großbrand Military base. Police and Black Star forces move out to investigate.";
		fixedDate = 0;
		fixedWeather = 1;
		insertionTypes[] = {"foot"};
		keepLoadout = 1;
		location = "West of the Großbrand Military Base";
		recommended = "-";
		resting = 0;
		reward = 0;
		stage = "F";
		supportTypes[] = {};
		tacPad = 0;
		title = "Breadcrumbs";
	};
	
	class BSM_M12
	{
		client = "BSM";	
		condition = "({[_x] call IP_fnc_missionDone} count ['BSM_M05', 'BSM_M06', 'BSM_M07', 'BSM_M08', 'BSM_M09', 'BSM_M10', 'BSM_M11'] == count ['BSM_M05', 'BSM_M06', 'BSM_M07', 'BSM_M08', 'BSM_M09', 'BSM_M10', 'BSM_M11']) && !(['BSM_M12'] call IP_fnc_missionDone)";
		description = "A Black Star convoy was sent out to pick up civilians from the village of Vollmerz. The convoy never returned and Black Star forces move out to investigate.";
		fixedDate = 1;
		fixedWeather = 1;
		insertionTypes[] = {"foot"};
		keepLoadout = 1;
		location = "Vollmerz";
		recommended = "-";
		resting = 0;
		reward = 0;
		stage = "F";
		supportTypes[] = {};
		tacPad = 0;
		title = "Turning Point";
	};
	
	class CSAT_Hub02
    {
		condition = 0;
		fixedDate = 0;
		fixedWeather = 0;
		hourAdd = 2;
		isHub = 1;
		keepLoadout = 1;
		stage = "G";
		tacPad = 0;
	};
	
	class CSAT_M02
	{
		client = "CSAT";	
		condition = 1;
		description = "A European Blackfoot was shot down and crashed into the lake near Brachttal. CSAT combat divers move out in an attempt to recover its airborne computer.";
		fixedDate = 0;
		fixedWeather = 1;
		insertionTypes[] = {"air"};
		keepLoadout = 0;
		location = "Brachttal";
		recommended = "Nothing, the loadout is fixed.";
		resting = 0;
		reward = 0;
		stage = "G";
		supportTypes[] = {};
		tacPad = 0;
		title = "Data Recovery";
	};
	
	class CSAT_M03
	{
		client = "CSAT";	
		condition = 1;
		description = "A CSAT Tank platoon deploys west of the great river in order to seize ground in west Helvantis.";
		fixedDate = 0;
		fixedWeather = 0;
		insertionTypes[] = {"foot"};
		keepLoadout = 1;
		location = "North-East of Brachttal";
		recommended = "-";
		resting = 0;
		reward = 0;
		stage = "G";
		supportTypes[] = {};
		tacPad = 1;
		title = "Armoured Assault";
	};
	
	class CSAT_M04a
	{
		client = "CSAT";	
		condition = "(missionNamespace getVariable ['IP_ICE_BSMOffensive', true]) && {{[_x] call IP_fnc_missionDone} count ['CSAT_M02', 'CSAT_M03'] == count ['CSAT_M02', 'CSAT_M03']} && {!(['CSAT_M04a'] call IP_fnc_missionDone)}";
		description = "CSAT forces prepare an attack on the Großbrand Military Base. Second Lieutenant Malik Nafisi is sent out in advance to coordinate a pre-emptive air strike.";
		fixedDate = 0;
		fixedWeather = 1;
		insertionTypes[] = {"air"};
		keepLoadout = 1;
		location = "Lower Grammendorf Ruins";
		recommended = "-";
		resting = 0;
		reward = 0;
		stage = "G";
		supportTypes[] = {};
		tacPad = 1;
		title = "Pathfinder";
	};
	
	class CSAT_M04b
	{
		client = "CSAT";	
		condition = "!(missionNamespace getVariable ['IP_ICE_BSMOffensive', true]) && {{[_x] call IP_fnc_missionDone} count ['CSAT_M02', 'CSAT_M03'] == count ['CSAT_M02', 'CSAT_M03']} && {!(['CSAT_M04b'] call IP_fnc_missionDone)}";
		description = "Black Star command has called in a meeting with EUROFORCE and the CSAT Snow Tigers. Second Lieutenant Malik Nafisi is sent as representative in order to negotiate a weapon silence.";
		fixedDate = 1;
		fixedWeather = 1;
		insertionTypes[] = {"air"};
		keepLoadout = 0;
		location = "Old Hotel";
		recommended = "-";
		resting = 0;
		reward = 0;
		stage = "G";
		supportTypes[] = {};
		tacPad = 0;
		title = "The Summit";
	};
	
	class EF_Hub02
    {
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		hourAdd = 0;
		isHub = 1;
		keepLoadout = 1;
		stage = "H";
		tacPad = 0;
	};
	
	class EF_M05a
	{
		client = "EFMil";	
		condition = 0;
		description = "A European armoured element, callsign 'Spearhead', is advancing at the Black Star's western flank. Its task is to cut through the enemy's defences and make way for the main force to take the capital.";
		fixedDate = 1;
		fixedWeather = 0;
		insertionTypes[] = {};
		keepLoadout = 1;
		location = "Grammendorf";
		recommended = "-";
		resting = 0;
		reward = 0;
		stage = "H";
		supportTypes[] = {};
		tacPad = 1;
		title = "Spearhead";
	};
	
	class EF_M05b
	{
		client = "EFMil";	
		condition = 0;
		description = "ToDo";
		fixedDate = 1;
		fixedWeather = 0;
		ignoredGear[] = {"uniform"};
		insertionTypes[] = {};
		keepLoadout = 1;
		location = "ToDo";
		recommended = "-";
		resting = 0;
		reward = 0;
		stage = "H";
		supportTypes[] = {};
		tacPad = 1;
		title = "Strategische Aufklärung";
	};
	
	class MShopTest
	{
		client = "EFMil";	
		condition = 1;
		description = "Jim Knopf und Lukas der Lokomotivführer fahren einmal um die Insel mit zwei Bergen und dem tiefen weiten Meer, mit vielen Tunnels und Gleisen und dem Eisenbahnverkehr.";
		insertionTypes[] = {"foot","cars","air"};
		location = "Die Insel mit zwei Bergen!";
		recommended = "Eine Töff-Töff-Lock!";
		reward = 50000;
		stage = "Z";
		title = "Hello Shop System";
	};
	
	class FunctionTest
    {
		coldBreath = 0;
		condition = 0;
		fixedDate = 1;
		fixedWeather = 1;
		isHub = 1;
		keepLoadout = 0;
		resting = 1;
		stage = "Z";
		tacPad = 1;
	};
};