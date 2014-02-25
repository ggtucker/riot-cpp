riot-cpp
========
A C++ League of Legends API Wrapper
===================================
riot-cpp is an easy-to-use C++ library with the purpose of handling the HTTP queries and JSON parsing from Riot's API. This library is currently in development by Geoffrey Tucker.

This API wrapper depends on both curl and rapidjson libraries. These submodules can be found in the /lib/ folder. Rapidjson is a header-only C++ library, but Curl on the other hand must be compiled and linked on your individual system.

Usage
-----

```c++
// main.cpp

#include <RiotCPP/Riot.hpp>

int main(int argc, char** argv)
{
	Riot::api_key = "<INSERT-YOUR-API-KEY-HERE>";
	Riot::region = Riot::Region::NA;    // Note: these values default to NA
	Riot::locale = Riot::Locale::en_US; // and en_US and do not need to be set

	// We are now ready to use riot-cpp!
	// See below for the list of API functions
}

```

NOTE: THIS IS A WORK IN PROGRESS
--------------------------------
I am currently in the process of writing the rest of the DataParser functions. Currently the working API functions are:

```c++
ChampionList getChampionList(bool freeToPlay=false);
RecentGames getRecentGames(long long summonerID);
League getChallengerLeague(QueueType qtype=QueueType::RANKED_SOLO_5x5);
std::vector<LeagueItem> getLeagueItems(long long summonerID);
std::vector<League> getLeagues(long long summonerID);
ChampionData getChampionData(long long championID, ChampData cdata=ChampData::ALL);
ChampionDataList getChampionDataList(ChampData cdata=ChampData::ALL);
Item getItem(long long itemID, ItemData idata=ItemData::ALL);
ItemList getItemList(ItemListData ildata=ItemListData::ALL);
Mastery getMastery(long long masteryID, MasteryData mdata=MasteryData::ALL);
MasteryList getMasteryList(MasteryListData mldata=MasteryListData::ALL);
Realm getRealm();
Rune getRune(long long runeID, RuneData rdata=RuneData::ALL);
RuneList getRuneList(RuneListData rldata=RuneListData::ALL);
SummonerSpell getSummonerSpell(long long spellID, SpellData sdata=SpellData::ALL);
SummonerSpellList getSummonerSpellList(SpellData sdata=SpellData::ALL);
```

To Do List
----------
- Finish writing the rest of the DataParser functions
- For each of the DTOs, add a bool for each field to represent whether that field received a value
- Modfiy RiotPrinter to only print fields that are valid (less irrelevant clutter being printed)
- Revise and increase efficiency (i.e. pass by pointer to dynamically allocated data rather than by value, etc.)
- Handle response errors

API Functions
-------------

```c++
// ----------API Resource: champion-v1.1---------- //

	/* Retrieves all champions */
	ChampionList getChampionList(bool freeToPlay=false);

// ----------API Resource: game-v1.3---------- //

	/* Retrieves recent games by summoner */
	RecentGames getRecentGames(long long summonerID);

// ----------API Resource: league-v2.3---------- //

	/* Retrieves challenger tier league */
	League getChallengerLeague(QueueType qtype=QueueType::RANKED_SOLO_5x5);

	/* Retrieves leagues item data for each of summoner's teams */
	std::vector<LeagueItem> getLeagueItems(long long summonerID);

	/* Retrieves leagues data for each of summoner's teams */
	std::vector<League> getLeagues(long long summonerID);

// ----------API Resource: lol-static-data-v1---------- //

	/* Retrieves champion data by ID */
	ChampionData getChampionData(long long championID, ChampData cdata=ChampData::ALL);

	/* Retrieves list of champion data */
	ChampionDataList getChampionDataList(ChampData cdata=ChampData::ALL);

	/* Retrieves item data by ID */
	Item getItem(long long itemID, ItemData idata=ItemData::ALL);

	/* Retrieves list of item data */
	ItemList getItemList(ItemListData ildata=ItemListData::ALL);

	/* Retrieves mastery data by ID */
	Mastery getMastery(long long masteryID, MasteryData mdata=MasteryData::ALL);

	/* Retrieves list of mastery data */
	MasteryList getMasteryList(MasteryListData mldata=MasteryListData::ALL);

	/* Retrieves realm data */
	Realm getRealm();

	/* Retrieves rune data by ID */
	Rune getRune(long long runeID, RuneData rdata=RuneData::ALL);

	/* Retrieves list of rune data */
	RuneList getRuneList(RuneListData rldata=RuneListData::ALL);

	/* Retrieves spell data by ID */
	SummonerSpell getSummonerSpell(long long spellID, SpellData sdata=SpellData::ALL);

	/* Retrieves list of spell data */
	SummonerSpellList getSummonerSpellList(SpellData sdata=SpellData::ALL);

// ----------API Resource: stats-v1.2---------- //

	/* Retrieves player stats summaries */
	PlayerStatsSummaryList getPlayerStats(long long summonerID, Season season=Season::SEASON4);

	/* Retrieves player ranked stats */
	RankedStats getRankedStats(long long summonerID, Season season=Season::SEASON4);

// ----------API Resource: summoner-v1.3---------- //

	/* Retrieves mastery pages for given summoner ID */
	MasteryPages getMasteryPages(long long summonerID);

	/* Retrieves mastery pages for each of the given summoner IDs */
	std::map<long long, MasteryPages> getMasteryPages(const std::vector<long long>& summonerIDs);

	/* Retrieves rune pages for given summoner ID */
	RunePages getRunePages(long long summonerID);

	/* Retrieves rune pages for each of the given summoner IDs */
	std::map<long long, RunePages> getRunePages(const std::vector<long long>& summonerIDs);

	/* Retrieves summoner for given summoner name */
	Summoner getSummoner(const std::string& summonerName);

	/* Retrieves summoner for each of the given summoner names */
	std::map<std::string, Summoner> getSummoners(const std::vector<std::string>& summonerNames);

	/* Retrieves summoner name for given summoner ID */
	std::string getSummonerName(long long summonerID);

	/* Retrieves summoner name for each of the given summoner IDs */
	std::map<long long, std::string> getSummonerNames(const std::vector<long long>& summonerIDs);

	/* Retrieves summoner for given summoner ID */
	Summoner getSummoner(long long summonerID);

	/* Retrieves summoner for each of the given summoner IDs */
	std::map<long long, Summoner> getSummoners(const std::vector<long long>& summonerIDs);

// ----------API Resource: team-v2.2---------- //

	/* Retrieves teams for given summoner ID */
	std::vector<Team> getTeams(long long summonerID);

	/* Retrieves team for given team ID */
	Team getTeam(std::string teamID);

	/* Retrieves team for each of the given team IDs */
	std::map<std::string, Team> getTeams(const std::vector<std::string>& teamIDs);
```

RiotPrinter
-----------
For testing applications, I've provided a nicely formatted and easy way to view the DTO data using the RiotPrinter. Look below to see how the RiotPrinter might be used. (Note: These print statements print ALL of the fields from the corresponding DTO, so it's advised to print only a few DTOs at a time)

```c++
#include <RiotCPP/Riot.hpp>
#include <RiotCPP/RiotPrinter.hpp>

int main(int argc, char** argv)
{
	Riot::api_key = "<INSERT-YOUR-API-KEY-HERE>";
	
	Riot::ChampionList championList = Riot::getChampionList(true);
	Riot::RiotPrinter::printChampionList(championList);

	Riot::RecentGames recentGames = Riot::getRecentGames(5908);
	Riot::RiotPrinter::printRecentGames(recentGames);

	Riot::League championLeague = Riot::getChallengerLeague();
	Riot::RiotPrinter::printLeague(championLeague);

	std::vector<Riot::LeagueItem> dyrusLeagueItems = Riot::getLeagueItems(5908);
	for(int i = 0; i < dyrusLeagueItems.size(); i++)
		Riot::RiotPrinter::printLeagueItem(dyrusLeagueItems[i]);
		
	std::vector<Riot::League> dyrusLeagues = Riot::getLeagues(5908);
	for(int i = 0; i < dyrusLeagues.size(); i++)
		Riot::RiotPrinter::printLeague(dyrusLeagues[i]);

	Riot::ChampionData ryzeData = Riot::getChampionData(13);
	Riot::RiotPrinter::printChampionData(ryzeData);

	Riot::ChampionDataList championDataList = Riot::getChampionDataList();
	Riot::RiotPrinter::printChampionDataList(championDataList);

	Riot::Item tearOfTheGoddess = Riot::getItem(3070);
	Riot::RiotPrinter::printItem(tearOfTheGoddess);

	Riot::ItemList itemList = Riot::getItemList();
	Riot::RiotPrinter::printItemList(itemList);

	Riot::Mastery banditMastery = Riot::getMastery(4352);
	Riot::RiotPrinter::printMastery(banditMastery);

	Riot::MasteryList masteryList = Riot::getMasteryList();
	Riot::RiotPrinter::printMasteryList(masteryList);

	Riot::Realm realm = Riot::getRealm();
	Riot::RiotPrinter::printRealm(realm);

	Riot::Rune greaterGlyphOfAP = Riot::getRune(5297);
	Riot::RiotPrinter::printRune(greaterGlyphOfAP);

	Riot::RuneList runeList = Riot::getRuneList();
	Riot::RiotPrinter::printRuneList(runeList);

	Riot::SummonerSpell smite = Riot::getSummonerSpell("SummonerSmite");
	Riot::RiotPrinter::printSummonerSpell(smite);

	Riot::SummonerSpellList spellList = Riot::getSummonerSpellList();
	Riot::RiotPrinter::printSummonerSpellList(spellList);
}
```

Supported API Versions
----------------------
- champion-v1.1
- game-v1.3
- league-v2.3
- lol-static-data-v1
- stats-v1.2
- summoner-v1.3
- team-v2.2

Disclaimer
----------
This product is not endorsed, certified or otherwise approved in any way by Riot Games, Inc. or any of its affiliates.