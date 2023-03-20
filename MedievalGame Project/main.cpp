#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <locale.h>
#include <string>
#include <sstream>
#include <SFML/Audio.hpp>



template <typename T>
std::string toString(T val)
{
    std::ostringstream oss;
    oss<< val;
    return oss.str();
}

template<typename T>
T fromString(const std::string& s)
{
  std::istringstream iss(s);
  T res;
  iss >> res;
  return res;
}

using namespace sf;
using namespace std;

bool PlayMusic=true;
Music AllMusic;
int MusicCount=0;
bool MonarchBattleMusicPlay=false;

int Money=100, Man=100, Food=100, Wood=100, Stone=100, Iron=0, Leather=0, Wine=0, Diamonds=0, Horses=0; //all resources
int Bow=0, Spear=0, Sword=0, LeatherArmor=0, MetalArmor=0;
int iMoney=0, iMan=0, iFood=0, iWood=0, iStone=0, iIron=0, iLeather=0, iWine=0, iDiamonds=0, iHorses=0; //income ints
int iBow=0, iSpear=0, iSword=0, iLeatherArmor=0, iMetalArmor=0;
int ManExWood=0, ManExStone=0;//basic extrating ints
int Taxes=20, TaxesInGold=Taxes*Man/100;
int Population=Man;
string ExWoodStr = toString(iWood);
string ExStoneStr = toString(iStone);
string ManExWoodStr = toString(ManExWood);
string ManExStoneStr = toString(ManExStone);
string TaxesStr = toString(Taxes);
string TaxesInGoldStr = toString(TaxesInGold);
string EconomyMenuNumbersStr[5] = {ManExWoodStr, ExWoodStr, ManExStoneStr, ExStoneStr, TaxesStr+"%"};
int eMoney=0, eMan=0, eFood=Man, eWood=0, eStone=0, eIron=0, eLeather=0, eWine=0, eDiamonds=0, eHorses=0; //expenses ints
int eBow=0, eSpear=0, eSword=0, eLeatherArmor=0, eMetalArmor=0;
int tMoney=0, tMan=0, tFood=0, tWood=0, tStone=0, tIron=0, tLeather=0, tWine=0, tDiamonds=0, tHorses=0; //total of difference between resources
int tBow=0, tSpear=0, tSword=0, tLeatherArmor=0, tMetalArmor=0;
int BuyFood=0, BuyWood=0, BuyStone=0, BuyIron=0, BuyLeather=0, BuyWine=0, BuyDiamonds=0, BuyHorses=0; //resources in trading
int BuyBow=0, BuySpear=0, BuySword=0, BuyLeatherArmor=0, BuyMetalArmor=0;
int SellFood=0, SellWood=0, SellStone=0, SellIron=0, SellLeather=0, SellWine=0, SellDiamonds=0, SellHorses=0; //resources in trading
int SellBow=0, SellSpear=0, SellSword=0, SellLeatherArmor=0, SellMetalArmor=0;
int OffFood=100, OffWood=100, OffStone=100, OffIron=100, OffLeather=100, OffWine=100, OffDiamonds=100, OffHorses=100; //resources in trading
int OffBow=100, OffSpear=100, OffSword=100, OffLeatherArmor=100, OffMetalArmor=100;
int DemFood=100, DemWood=100, DemStone=100, DemIron=100, DemLeather=100, DemWine=100, DemDiamonds=100, DemHorses=100; //resources in trading
int DemBow=100, DemSpear=100, DemSword=100, DemLeatherArmor=100, DemMetalArmor=100;
int PriceFood=1, PriceWood=1, PriceStone=1, PriceIron=5, PriceLeather=4, PriceWine=6, PriceDiamonds=20, PriceHorses=12; //resources in trading
int PriceBow=4, PriceSpear=4, PriceSword=12, PriceLeatherArmor=10, PriceMetalArmor=25;
int bowm0=0, bowm1=10, bowm2=0, hbowm=0, spearm0=0, spearm1=10, spearm2=0, feodalknights=0; //army ints
int swordm0=0, swordm1=0, swordm2=0, teutonic=0, lighth1=0, heavyh1=0, lighth2=0, heavyh2=0;
bool Artifacts[20] = {false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false};
bool ForgeChoosed=false;
bool ForgeMood[9][6][5]; //How many forges and moods.

int ResourcesQuantity[15]= {Money, Man, Food, Wood, Stone, Iron, Leather, Wine, Diamonds, Horses, Bow, Spear, Sword, LeatherArmor, MetalArmor};
int ArmyQuantity[16] = {bowm0, bowm1, bowm2, hbowm, spearm0, spearm1, spearm2, feodalknights, swordm0, swordm1, swordm2, teutonic, lighth1, heavyh1, lighth2, heavyh2};
int ResourcesIncome[15]= {iMoney, iMan, iFood, iWood, iStone, iIron, iLeather, iWine, iDiamonds, iHorses, iBow, iSpear, iSword, iLeatherArmor, iMetalArmor};
int ResourcesExpenses[15]= {eMoney, eMan, eFood, eWood, eStone, eIron, eLeather, eWine, eDiamonds, eHorses, eBow, eSpear, eSword, eLeatherArmor, eMetalArmor};
int ResourcesTotal[15]= {tMoney, tMan, tFood, tWood, tStone, tIron, tLeather, tWine, tDiamonds, tHorses, tBow, tSpear, tSword, tLeatherArmor, tMetalArmor};
int SellResources[13] = {SellFood, SellWood, SellStone, SellIron, SellLeather, SellWine, SellDiamonds,SellHorses, SellBow, SellSpear, SellSword, SellLeatherArmor, SellMetalArmor};
int BuyResources[13] = {BuyFood, BuyWood, BuyStone, BuyIron, BuyLeather, BuyWine, BuyDiamonds, BuyHorses, BuyBow, BuySpear, BuySword, BuyLeatherArmor, BuyMetalArmor};
int DemandResources[13] = {DemFood, DemWood, DemStone, DemIron, DemLeather, DemWine, DemDiamonds, DemHorses, DemBow, DemSpear, DemSword, DemLeatherArmor, DemMetalArmor};
int OfferResources[13] = {OffFood, OffWood, OffStone, OffIron, OffLeather, OffWine, OffDiamonds, OffHorses, OffBow, OffSpear, OffSword, OffLeatherArmor, OffMetalArmor};
int PricesResources[13] = {PriceFood, PriceWood, PriceStone, PriceIron, PriceLeather, PriceWine, PriceDiamonds, PriceHorses, PriceBow, PriceSpear, PriceSword, PriceLeatherArmor, PriceMetalArmor};
string ResourcesQuantityStr[15];
string ArmyQuantityStr[16];
string ResourcesIncomeStr[15];
string ResourcesExpensesStr[15];
string ResourcesTotalStr[15];
string SellResourcesStr[14];
string BuyResourcesStr[14];
string DemandResourcesStr[13];
string OfferResourcesStr[13];
string PricesResourcesStr[13];
bool AutoBuy[13], AutoSell[13], AutoAllExWood=false, AutoAllExStone=false;

//chars of prices and other info in building menu of buildings
int BuildingCost[15], BuildingIncome[15], BuildingExpenses[15];
string BuildingCostStr[15], BuildingIncomeStr[15], BuildingExpensesStr[15];
bool BuildingPayed[15] ={false, false, false, false, false, false, false,
false, false, false, false, false, false, false, false};

bool ExitBool=false, NoEnoughResources=false;
Time CountedTime=seconds(-2);
Time KostilCountedTime;
int ForestNumber=4, HillNumber=4;
int MonarchLove=3;
int PeopleLove=10;
int PrincessLove=0;
int SosedLove=3;
bool SosedLoveWarning=false, SosedLoveWarningDone=false, DificultyIncrease=false, NoMore=false;
int MolitvAretikusu=0, WeddingPoints=0;
bool VictoryStatus=false, WeddingStatus=true, FinalDecisions=false, YouLostGame=false, YouWonGame=false, YouWonWedding=false;
bool CanLovePrincess=true, MonarchBattleStart=false, SosedBattleStart=false, FinalMolitvaDone=false, FinalOption=false, RiskyFinal=false;
bool SecretFinal[3] = {false,false, false};
string ResultStr1, ResultStr2, ResultStr3, FinalStr;


int ColorR=255, ColorG=255, ColorB=255;
int Turn=0, TurnsLeftForMonarchBattle=3, TurnsToLoseWithoutMoney=5;
string TurnsToLoseWithoutMoneyStr;
int WindowWidth, WindowHeight, WindowWidthMoved, WindowHeightMoved;
bool MenuActive = false;
bool SettingsMenu = false;
bool InterfaceInteraction[6] = {false, false, false, false, false, false};
bool DrawBuildingArea = false;
bool DrawDestroyArea = false;
Texture *GlobalBuildingPointer;
bool StartTextView = true, ponyal=false, neponyal=false;
bool TestMoved=false, ResourceMoved[9][4];
int MovedCoordX, MovedCoordY;
string MovedStatIncomeStr[9][4][5], MovedStatExcomeStr[9][4][5], IncMovedStr, ExcMovedStr;

#include "BuildingFile.h"
Building* City[9][6];
Building* GlobalCityInfo[20];


int ChoosedBuildingInMenu, ChoosedArtifactInMenu, ChoosedArmyInMenu;
int BuildX=1, BuildY=1, DestroyX=1, DestroyY=1, ForgeX=1, ForgeY=1;
int BuildingsBuilt=3;
int FreeSpace=40-BuildingsBuilt;
int PortQuantity=1;
string BuildingsBuiltStr = toString(BuildingsBuilt);
string FreeSpaceStr = toString(FreeSpace);
int nBarracksCount=0, gBarracksCount=0, MaxHired=0, AlreadyHired=0;
string MaxHiredStr, AlreadyHiredStr;
bool nBarracksExist=false, gBarracksExist=false;
bool BabaxCoordinates[9][6], CancelCoordinates[9][6], DeactivatedByUser[9][6];


bool BattleStart=false, BattleStartChecks=false, BattleSurprise=false, BattleSurpriseDraw=false, Retreat=false;
bool BattleRound=false, YouWonBattle=false, YouLostBattle=false, Empate=false;
bool LeftFlangChoosed=true, CenterChoosed=false, RightFlangChoosed=false;
bool MaxInLeft=false, MaxInCenter=false, MaxInRight=false;
bool CheckIfAllDead[3], CheckIfEnemyDead[3];
int NobodyLeft[3], EnemyLeft[3];
int ArmyToGoX, ArmyCountDraw[3], EnemyCountDraw[3], DeadArmyCountDraw, DeadEnemyCountDraw, RoundCount=0;
int ArmyIn[3][16], EnemyIn[3][16], ArmyDied[16], EnemyDied[16];
int Check1=0, Check2=0, Check3=0;
string ArmyInStr[3][16], EnemyInStr[3][16], DeadArmyStr[16], DeadEnemyStr[16], RoundCountStr, TrofeyStr;
int AllAttack[3], AllEnemyAttack[3], AllArcherAttack[3], EnemyArcherAttack[3], FeodalKnightsAttack[3], EnemyKnightsAttack[3];
double AllHP[3][16], AllEnemyHP[3][16];
int AllDef[3][16], AllEnemyDef[3][16];
int AttackRating[3][16], EnemyAttackRating[3][16], AttackRatingCount=0, EnemyAttackRatingCount=0;
bool AttackFromFlangsBool[4] = {false, false, false, false};
int AttackFromFlangsInt[4];
bool WhichSteakToAttack[3][16], WhichEnemySteakToAttack[3][16];
int ArmyFledFromBattle[16], EnemyFledFromBattle[16], MoralTest, FledArmyCount=0, FledEnemyCount=0;
int AllDeadEnemies=0, AllLiveEnemies=0, AllDeadArmy=0, AllLiveArmy=0;
int CityGuards[3][16];
int ArmyChars[5][16];
void ArmyCharsFill(int att, int hp, int def, int mor, int salary, int unitnumber) {
ArmyChars[0][unitnumber]=att;
ArmyChars[1][unitnumber]=hp;
ArmyChars[2][unitnumber]=def;
ArmyChars[3][unitnumber]=mor;
ArmyChars[4][unitnumber]=salary;
}
bool UnitTypeSoldier[16] = {true, true, true, false, true, true, true, false, true, true, true, true, false, false, false, false};

string AttackStr, HealthStr, ArmorStr, MoralStr;
string ArmySalaryStr[16]; //converting in contentLoading
int VavarVoinChars[5]={12, 12, 2, 10, 0};

int ArmyCosts[7][16];
int ArmyResQ;
void ArmyCostsFill(int moneycst, int horsecst, int bowcst, int spearcst, int swordcst, int letharmcst, int metarmcst, int unitnumber) {
ArmyCosts[0][unitnumber]=moneycst;
ArmyCosts[1][unitnumber]=horsecst;
ArmyCosts[2][unitnumber]=bowcst;
ArmyCosts[3][unitnumber]=spearcst;
ArmyCosts[4][unitnumber]=swordcst;
ArmyCosts[5][unitnumber]=letharmcst;
ArmyCosts[6][unitnumber]=metarmcst;
}
string ArmyCostsStr[7][16]; //converting in contentLoading
bool ArmyPayed[7]={true, false, false, false, false, false, false};
bool PeasantsHired=false, BowmanHired=false, MilitiaHired=false;


int NumberOfEvents, WhichEvent1=0, WhichEvent2=0, WhichEvent3=0;
string EventTextStr[3];
string EventButtonsTextStr[3][2];
bool Event1Menu=false, Event2Menu=false, Event3Menu=false;
int EventsProbability;
int TotalPossibleEvents=25; //!!!!
int EventInt[1+25];
bool EventChoosed[1+25]; //Number changes by TotalPossibleEvents
bool EventBlocked[1+25];
bool EventDecided[1+25][4];
bool GoodBadEventDraw=false;
string EventDecidedStr[1+25][4];
string GoodBadEventStr[2] = {"Хорошо.", "Плохо."};
string EventStr;
bool EventHided=false;
bool PirateBattle=false, RobbersBattle=false, BanditBattle=false;
bool PirateBattleCheck=false, RobbersBattleCheck=false, BanditBattleCheck=false;
int BordelOpened=0;

int ProbabInClicks, n2ProbabInClicks, n3ProbabInClicks, Cheks=0;
bool NewQuestRequest=true;
int QuestChoice=rand()%10;
int QuestsTime=10;
string QuestsTimeStr=toString(QuestsTime);


int BMI[31][15], BME[31][15]; //21 buildings +9others, with 15 resources.
string BMIstr[31][15], BMEstr[31][15];
int test;
void WoodStoneWorkers()
{
    iWood=ManExWood; iStone=ManExStone;
    BMIstr[29][3]=toString(BMI[29][3]=iWood);
    BMIstr[30][4]=toString(BMI[30][4]=iStone);
    ResourcesQuantityStr[1]=toString(ResourcesQuantity[1]);
    ExWoodStr = toString(iWood);
    ManExWoodStr = toString(ManExWood);
    EconomyMenuNumbersStr[0] = ManExWoodStr;
    EconomyMenuNumbersStr[1] = ExWoodStr;
    ExStoneStr = toString(iStone);
    ManExStoneStr = toString(ManExStone);
    EconomyMenuNumbersStr[2] = ManExStoneStr;
    EconomyMenuNumbersStr[3] = ExStoneStr;

}


void ObrabotkaDoxodovRasxodov (){
iMoney=0, iMan=0, iFood=0, iIron=0, iLeather=0, iWine=0, iDiamonds=0, iHorses=0; //income ints without wood/stone, cause change in clicks economy
iBow=0, iSpear=0, iSword=0, iLeatherArmor=0, iMetalArmor=0;
eMoney=0, eMan=0, eFood=0, eWood=0, eStone=0, eIron=0, eLeather=0, eWine=0, eDiamonds=0, eHorses=0; //expenses ints
eBow=0, eSpear=0, eSword=0, eLeatherArmor=0, eMetalArmor=0;


Population=ResourcesQuantity[1]+ManExWood+ManExStone;
for (int i=0; i<16; i++) {Population+=ArmyQuantity[i];}
if (Artifacts[4]){iMan=1;}
if (Artifacts[8]){iMoney=1.5*Taxes*ResourcesQuantity[1]/100;}
else {iMoney=Taxes*ResourcesQuantity[1]/100;}
TaxesInGold=iMoney;

TaxesInGoldStr = toString(iMoney);
if ((Turn>=30)&&(Turn<70)) {eMoney=50;}
if (Turn>=70) {eMoney=200;}

if (Artifacts[12]) {iDiamonds=1;}
iMoney+=BordelOpened*10;

for(int i=0; i<31; i++){
for(int j=0; j<15; j++) {BMI[i][j]=0; BMIstr[i][j]=""; BME[i][j]=0; BMEstr[i][j]="";}}

for (int i=0;i<16;i++){eMoney+=ArmyQuantity[i]*ArmyChars[4][i]; BME[27][0]+=ArmyQuantity[i]*ArmyChars[4][i];} //paying to army
eFood+=((ManExWood+ManExStone)/2); BME[28][2]=((ManExWood+ManExStone)/2); //food for workers


    for (int i=0; i<9; i++) //forge incomes
        {for (int j=0; j<6; j++)
            {for (int k=0; k<5; k++)
                if (ForgeMood[i][j][0]) {break;}
                if (ForgeMood[i][j][1]) {eWood+=10; eIron+=5; iBow+=10;}
                if (ForgeMood[i][j][2]) {eWood+=10; eIron+=5; iSpear+=10;}
                if (ForgeMood[i][j][3]) {eIron+=20; iSword+=10;}
                if (ForgeMood[i][j][4]) {eIron+=40; iMetalArmor+=10;}
            }}



        BMIstr[21][0]=toString(BMI[21][0]=TaxesInGold);
        BMIstr[22][0]=toString(BMI[22][0]=BordelOpened*10);

        if (Artifacts[4]) {BMIstr[23][1]=toString(BMI[23][1]=1);}
        if (Artifacts[9]) {BMIstr[24][3]=toString(BMI[24][3]=20);}
        if (Artifacts[11]) {BMIstr[25][8]=toString(BMI[25][8]=1);}
            for(int i=1; i<9; i++){
            for(int j=1; j<6; j++){
                if ((City [i][j]->getCost())==1){
                        test=City [i][j]->typeCheck();
                BMI[test][0]+=(City[i][j]->getMoney());
                BMIstr[test][0]=toString(BMI[test][0]);
                BMI[test][1]+=(City[i][j]->getMan());
                BMIstr[test][1]=toString(BMI[test][1]);
                BMI[test][2]+=(City[i][j]->getFood());
                BMIstr[test][2]=toString(BMI[test][2]);
                BMI[test][3]+=(City[i][j]->getWood());
                BMIstr[test][3]=toString(BMI[test][3]);
                BMI[test][4]+=(City[i][j]->getStone());
                BMIstr[test][4]=toString(BMI[test][4]);
                BMI[test][5]+=(City[i][j]->getIron());
                BMIstr[test][5]=toString(BMI[test][5]);
                BMI[test][6]+=(City[i][j]->getLeather());
                BMIstr[test][6]=toString(BMI[test][6]);
                BMI[test][7]+=(City[i][j]->getWine());
                BMIstr[test][7]=toString(BMI[test][7]);
                BMI[test][8]+=(City[i][j]->getDiamonds());
                BMIstr[test][8]=toString(BMI[test][8]);
                BMI[test][14]+=(City[i][j]->getHorses());
                BMIstr[test][14]=toString(BMI[test][14]);
                BMI[test][12]+=(City[i][j]->getLeatherArmor());
                BMIstr[test][12]=toString(BMI[test][12]);
            }}}

        if (TaxesInGold<0) {BMEstr[21][0]=toString(BME[21][0]=TaxesInGold);}
        if ((Turn>=30)&&(Turn<70)) {BMEstr[26][0]=toString(BME[26][0]=50);}
        if (Turn>=70) {BMEstr[26][0]=toString(BME[26][0]=200);}
        BMEstr[27][0]=toString(BME[27][0]); //army
        BMEstr[28][2]=toString(BME[28][2]); //workers food
            for(int i=1; i<9; i++){
            for(int j=1; j<6; j++){
                if ((City [i][j]->getCost())==1){
                        test=City [i][j]->typeCheck();
                BME[test][0]+=(City[i][j]->takeMoney());
                BMEstr[test][0]=toString(BME[test][0]);
                BME[test][1]+=(City[i][j]->takeMan());
                BMEstr[test][1]=toString(BME[test][1]);
                BME[test][2]+=(City[i][j]->takeFood());
                BMEstr[test][2]=toString(BME[test][2]);
                BME[test][3]+=(City[i][j]->takeWood());
                BMEstr[test][3]=toString(BME[test][3]);
                BME[test][4]+=(City[i][j]->takeStone());
                BMEstr[test][4]=toString(BME[test][4]);
                BME[test][5]+=(City[i][j]->takeIron());
                BMEstr[test][5]=toString(BME[test][5]);
                BME[test][6]+=(City[i][j]->takeLeather());
                BMEstr[test][6]=toString(BME[test][6]);
                BME[test][7]+=(City[i][j]->takeWine());
                BMEstr[test][7]=toString(BME[test][7]);
                BME[test][8]+=(City[i][j]->takeDiamonds());
                BMEstr[test][8]=toString(BME[test][8]);
                BME[test][14]+=(City[i][j]->takeHorses());
                BMEstr[test][14]=toString(BME[test][14]);
                BME[test][12]+=(City[i][j]->takeLeatherArmor());
                BMEstr[test][12]=toString(BME[test][12]);
            }}}





    for(int i=0; i<9; i++){ //Building classes to ints of income and expenses
        for(int j=0; j<6; j++){
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iMoney+=City[i][j]->getMoney();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iMan+=City[i][j]->getMan();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iFood+=City[i][j]->getFood();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iWood+=City[i][j]->getWood();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iStone+=City[i][j]->getStone();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iIron+=City[i][j]->getIron();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iLeather+=City[i][j]->getLeather();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iWine+=City[i][j]->getWine();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iDiamonds+=City[i][j]->getDiamonds();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iHorses+=City[i][j]->getHorses();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iBow+=City[i][j]->getBow();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iSpear+=City[i][j]->getSpear();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iSword+=City[i][j]->getSword();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iLeatherArmor+=City[i][j]->getLeatherArmor();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){iMetalArmor+=City[i][j]->getMetalArmor();}

            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eMoney+=City[i][j]->takeMoney();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eMan+=City[i][j]->takeMan();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eFood+=City[i][j]->takeFood();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eWood+=City[i][j]->takeWood();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eStone+=City[i][j]->takeStone();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eIron+=City[i][j]->takeIron();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eLeather+=City[i][j]->takeLeather();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eWine+=City[i][j]->takeWine();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eDiamonds+=City[i][j]->takeDiamonds();}
            if ((CancelCoordinates[i][j]==false)&&(DeactivatedByUser[i][j]==false)){eHorses+=City[i][j]->takeHorses();}

            }}


    for (int i=0; i<15; i++){ //Int income resyrsov v massiv
                switch (i){
                    case 0: ResourcesIncome[i]= iMoney;
                    break;
                   case 1: ResourcesIncome[i]= iMan;
                   break;
                   case 2: ResourcesIncome[i]= iFood;
                   break;
                   case 3: if (Artifacts[10]) {ResourcesIncome[i]= iWood+20;}
                   else {ResourcesIncome[i]= iWood;}
                   break;
                   case 4:  ResourcesIncome[i]= iStone;
                   break;
                   case 5: ResourcesIncome[i]= iIron;
                   break;
                   case 6: ResourcesIncome[i]= iLeather;
                   break;
                   case 7: ResourcesIncome[i]= iWine;
                   break;
                   case 8: ResourcesIncome[i]= iDiamonds;
                   break;
                   case 9: ResourcesIncome[i]= iHorses;
                   break;
                   case 10: ResourcesIncome[i]= iBow;
                   break;
                   case 11: ResourcesIncome[i]= iSpear;
                   break;
                   case 12: ResourcesIncome[i]= iSword;
                   break;
                   case 13: ResourcesIncome[i]= iLeatherArmor;
                   break;
                   case 14: ResourcesIncome[i]= iMetalArmor;
                   break;}
                }

    for (int i=0; i<15; i++){ //Int expenses resyrsov v massiv
                switch (i){
                    case 0: ResourcesExpenses[i]= eMoney;
                    break;
                   case 1: ResourcesExpenses[i]= eMan;
                   break;
                   case 2: ResourcesExpenses[i]= eFood;
                   break;
                   case 3: ResourcesExpenses[i]= eWood;
                   break;
                   case 4: ResourcesExpenses[i]= eStone;
                   break;
                   case 5: ResourcesExpenses[i]= eIron;
                   break;
                   case 6: ResourcesExpenses[i]= eLeather;
                   break;
                   case 7: ResourcesExpenses[i]= eWine;
                   break;
                   case 8: ResourcesExpenses[i]= eDiamonds;
                   break;
                   case 9: ResourcesExpenses[i]= eHorses;
                   break;
                   case 10: ResourcesExpenses[i]= eBow;
                   break;
                   case 11: ResourcesExpenses[i]= eSpear;
                   break;
                   case 12: ResourcesExpenses[i]= eSword;
                   break;
                   case 13: ResourcesExpenses[i]= eLeatherArmor;
                   break;
                   case 14: ResourcesExpenses[i]= eMetalArmor;
                   break;}
                }
        for (int i=0; i<15; i++){ //int of total pered auto
            ResourcesTotal[i]= ResourcesIncome[i]-ResourcesExpenses[i];}

        for (int i=0;i<13;i++){ //autobuy and autosell calculus
        if (AutoBuy[i]) {ResourcesExpenses[0]+=PricesResources[i]*OfferResources[i]; ResourcesIncome[2+i]+=OfferResources[i];}
        if (AutoSell[i]){ if (ResourcesQuantity[2+i]+ResourcesTotal[2+i]<=DemandResources[i]){
            ResourcesIncome[0]+=PricesResources[i]*(ResourcesQuantity[2+i]+ResourcesTotal[2+i]);
            ResourcesExpenses[2+i]+=ResourcesQuantity[2+i]+ResourcesTotal[2+i];}
            else if (ResourcesQuantity[2+i]+ResourcesTotal[2+i]>DemandResources[i]) {
                ResourcesIncome[0]+=PricesResources[i]*DemandResources[i];
                ResourcesExpenses[2+i]+=DemandResources[i];}}
        } //auto buy/sell info


        for (int i=0; i<15; i++){ //int of total v massiv i stroky
            ResourcesIncomeStr[i]=toString(ResourcesIncome[i]);
            ResourcesExpensesStr[i]=toString(ResourcesExpenses[i]);
            ResourcesTotal[i]= ResourcesIncome[i]-ResourcesExpenses[i];
            ResourcesTotalStr[i]=toString(ResourcesTotal[i]);
        }

    WoodStoneWorkers();


}



#include "Events.h"


void EndTurnFunction ()
{

    if ((Event1Menu)||(Event2Menu)||(Event3Menu)||(TurnsToLoseWithoutMoney<=0)||(EventHided)) {return;} //do not end turn while have active messages
    if (KostilCountedTime-CountedTime<=seconds(1.01)) {return;}
//    if (NoEnoughResources) {return;}
    ObrabotkaDoxodovRasxodov ();
    CountedTime=KostilCountedTime;

    Turn++; if ((Turn==30)||(Turn==70)){DificultyIncrease=true;}
    if (Turn==100){VictoryStatus=true; if (Artifacts[16]) {PrincessLove+=3;}}
    for (int i=0; i<9; i++){
        for (int j=0; j<6; j++){
            BabaxCoordinates[i][j]=false;}}

    if (PeopleLove<=0){
            BattleStart=true;
            EnemyIn[0][0]=Population/9;
            EnemyIn[0][4]=Population/9;
            EnemyIn[0][8]=Population/9;

            EnemyIn[1][0]=Population/9;
            EnemyIn[1][4]=Population/9;
            EnemyIn[1][8]=Population/9;

            EnemyIn[2][0]=Population/9;
            EnemyIn[2][4]=Population/9;
            EnemyIn[2][8]=Population/9;
            ResourcesQuantity[1]=ResourcesQuantity[1]/2; ManExWood=ManExWood/2, ManExStone=ManExStone/2;

            PeopleLove=3;
        }

    AlreadyHired=0;
    Population=ResourcesQuantity[1]+ManExWood+ManExStone; //counting all population for trading
    QuestsTime--;
    if (QuestsTime==0) {QuestChoice=rand()%10; MonarchLove--; QuestsTime=10;}
    QuestsTimeStr=toString(QuestsTime);
    if ((MonarchLove==0)&&(TurnsLeftForMonarchBattle!=0)) {TurnsLeftForMonarchBattle--;} else {TurnsLeftForMonarchBattle=3;}
    if ((Artifacts[4])&&(PeopleLove<5)){PeopleLove++;}
    if ((Turn!=100)&&(Turn!=30)&&(Turn!=70)) {Luck();}



    for (int i=0; i<6; i++){InterfaceInteraction[i]=false, SettingsMenu=false;}
    DrawBuildingArea = false; DrawDestroyArea = false;


    //auto off
    for (int i=0; i<9; i++){
        for (int j=0; j<6; j++){
        CancelCoordinates[i][j]=true;
        ObrabotkaDoxodovRasxodov();}}



    while(1) {
    bool SmthWasActivated=0;
    for (int i=0; i<9; i++){
        for (int j=0; j<6; j++){
                if ((((City[i][j]->takeFood())<=0)||(City[i][j]->takeFood()<=ResourcesQuantity[2]+ResourcesTotal[2]))&&
                    (((City[i][j]->takeWood())<=0)||(City[i][j]->takeWood()<=ResourcesQuantity[3]+ResourcesTotal[3]))&&
                    (((City[i][j]->takeIron())<=0)||(City[i][j]->takeIron()<=ResourcesQuantity[5]+ResourcesTotal[5]))&&
                    (((City[i][j]->takeLeather())<=0)||(City[i][j]->takeLeather()<=ResourcesQuantity[6]+ResourcesTotal[6]))&&
                    (((City[i][j]->takeWine())<=0)||(City[i][j]->takeWine()<=ResourcesQuantity[7]+ResourcesTotal[7]))&&
                    (((City[i][j]->takeHorses())<=0)||(City[i][j]->takeHorses()<=ResourcesQuantity[9]+ResourcesTotal[9]))
                    &&(CancelCoordinates[i][j]==true)&&(DeactivatedByUser[i][j]==false)){
                        CancelCoordinates[i][j]=false; SmthWasActivated=1;
                        ObrabotkaDoxodovRasxodov();
                        }}}
    if (SmthWasActivated==0) break;}


    if (ResourcesQuantity[2]<0){ //buying nedostatok edu by x2 price
    ResourcesQuantity[0]+=ResourcesQuantity[2]*PricesResources[2]*2; //+k dengam t.k. tam MINUS resyrsov
    ResourcesQuantity[2]=0;
    }


    for(int i=0; i<9; i++){ //mines chance to diamonds
        for(int j=0; j<6; j++){
    if (City[i][j]->typeCheck()==2) {
    int FoundDiamonds=1+rand()%10;
    if (FoundDiamonds<=1){ResourcesQuantity[8]++;}}}}


    for (int i=0; i<15; i++){ //Masiv resyrsov + massiv itoga
        ResourcesQuantity[i]+=ResourcesTotal[i];}

    for (int i=0; i<15; i++){ //Masiv resyrsov + massiv itoga
        ResourcesQuantityStr[i]=toString(ResourcesQuantity[i]);
            }


    PortQuantity=0;
    for(int i=1; i<9; i++){
        for(int j=1; j<6; j++){
            if ((City [i][j]->typeCheck())==15){PortQuantity++;}}}
    DemandResources[0]=Population/5+5*PortQuantity;
    if (EventChoosed[15]) {DemandResources[0]=0;}
    DemandResources[1]=Population/8+5*PortQuantity;
    DemandResources[2]=Population/8+5*PortQuantity;
    DemandResources[3]=Population/10+4*PortQuantity;
    DemandResources[4]=Population/10+4*PortQuantity;
    DemandResources[5]=Population/10+4*PortQuantity;
    if (EventChoosed[15]) {DemandResources[5]=0;}
    DemandResources[6]=Population/50+1*PortQuantity;
    DemandResources[7]=Population/20+4*PortQuantity;
    if (EventChoosed[7]) {DemandResources[7]=0;}
    DemandResources[8]=Population/20+3*PortQuantity;
    DemandResources[9]=Population/20+3*PortQuantity;
    DemandResources[10]=Population/30+2*PortQuantity;
    DemandResources[11]=Population/20+3*PortQuantity;
    DemandResources[12]=Population/50+1*PortQuantity;

    OfferResources[0]=Population/2+5*PortQuantity;
    OfferResources[1]=Population/3+5*PortQuantity;
    OfferResources[2]=Population/3+5*PortQuantity;
    OfferResources[3]=Population/10+4*PortQuantity;
    OfferResources[4]=Population/10+4*PortQuantity;
    OfferResources[5]=Population/10+4*PortQuantity;
    OfferResources[6]=Population/50+1*PortQuantity;
    OfferResources[7]=Population/20+4*PortQuantity;
    OfferResources[8]=Population/20+3*PortQuantity;
    OfferResources[9]=Population/20+3*PortQuantity;
    OfferResources[10]=Population/30+2*PortQuantity;
    OfferResources[11]=Population/20+3*PortQuantity;
    OfferResources[12]=Population/50+1*PortQuantity;

        if (AutoAllExWood) {
          iWood=0; iStone=0; ResourcesQuantity[1]+=(ManExWood+ManExStone); ManExWood=0; ManExStone=0;
          ManExWood=ResourcesQuantity[1]; iWood=ResourcesQuantity[1]; ResourcesQuantity[1]=0;}
        if (AutoAllExStone) {
          iWood=0; iStone=0; ResourcesQuantity[1]+=(ManExWood+ManExStone); ManExWood=0; ManExStone=0;
          ManExStone=ResourcesQuantity[1]; iStone=ResourcesQuantity[1]; ResourcesQuantity[1]=0;}


        ObrabotkaDoxodovRasxodov ();
        if (ResourcesQuantity[0]>=0){TurnsToLoseWithoutMoney=5;}
        if (ResourcesQuantity[0]<0){TurnsToLoseWithoutMoney--;}
        if (TurnsToLoseWithoutMoney==0){YouLostGame=true;}
}
string KingsQuestsStr[10];

#include "ClicksLogic.h"

int main()
{
setlocale(LC_ALL, "rus");
srand(time(NULL));

Time AllTime;
Time MusicTime;
//for (int i=0; i<20; i++){ //for tests
//        Artifacts[i] = true;
//    }

//to receive chars of buildings in one massive
for (int i=0; i<13; i++){
    AutoBuy[13]=false;
    AutoSell[13]=false;
}

GlobalCityInfo[0] = new Farm();
GlobalCityInfo[1] = new HunterHouse();
GlobalCityInfo[2] = new Mine();
GlobalCityInfo[3] = new WindMill();
GlobalCityInfo[4] = new Fishery();
GlobalCityInfo[5] = new Barracks();
GlobalCityInfo[6] = new GuardianBarracks();
GlobalCityInfo[7] = new Tower();
GlobalCityInfo[8] = new StoneTower();
GlobalCityInfo[9] = new GuardTower();
GlobalCityInfo[10] = new Tannery();
GlobalCityInfo[11] = new Forge();
GlobalCityInfo[12] = new Winery();
GlobalCityInfo[13] = new Tavern();
GlobalCityInfo[14] = new Stable();
GlobalCityInfo[15] = new Port();
GlobalCityInfo[16] = new MagicStones();
GlobalCityInfo[17] = new Gallow();
GlobalCityInfo[18] = new Statue();
GlobalCityInfo[19] = new FeodalHouse();

for(int i=0; i<9; i++){
for(int j=0; j<6; j++) {City[i][j] = new EmptyPlace(); BabaxCoordinates[i][j]=false;
CancelCoordinates[i][j]=false; DeactivatedByUser[i][j]=false;}}
for(int i=0; i<31; i++){
for(int j=0; j<15; j++) {BMI[i][j]=0; BMIstr[i][j]="";}}

delete City[1][1];
delete City[2][1];
delete City[1][5];
City [1][1] = new FeodalHouse();
City [2][1] = new Farm();
City [1][5] = new Port();





     for (int i=0; i<15; i++){ //Int vsex resyrsov v massiv
                switch (i){
                    case 0: ResourcesQuantity[i]= Money;
                    break;
                   case 1: ResourcesQuantity[i]= Man;
                   break;
                   case 2: ResourcesQuantity[i]= Food;
                   break;
                   case 3: ResourcesQuantity[i]= Wood;
                   break;
                   case 4:  ResourcesQuantity[i]= Stone;
                   break;
                   case 5: ResourcesQuantity[i]= Iron;
                   break;
                   case 6: ResourcesQuantity[i]= Leather;
                   break;
                   case 7: ResourcesQuantity[i]= Wine;
                   break;
                   case 8: ResourcesQuantity[i]= Diamonds;
                   break;
                   case 9: ResourcesQuantity[i]= Horses;
                   break;
                   case 10: ResourcesQuantity[i]= Bow;
                   break;
                   case 11: ResourcesQuantity[i]= Spear;
                   break;
                   case 12: ResourcesQuantity[i]= Sword;
                   break;
                   case 13: ResourcesQuantity[i]= LeatherArmor;
                   break;
                   case 14: ResourcesQuantity[i]= MetalArmor;
                   break;}
                }
    for (int i=0; i<15; i++){ //Massiv vsex resyrsov v stroky
    ResourcesQuantityStr[i]=toString(ResourcesQuantity[i]);
//    Artifacts[i]=true;
    }



    for (int i=0; i<16; i++){ //Int voisk v massiv
                switch (i){
                    case 0: ArmyQuantity[i]= bowm0;
                    break;
                   case 1: ArmyQuantity[i]= bowm1;
                   break;
                   case 2: ArmyQuantity[i]= bowm2;
                   break;
                   case 3: ArmyQuantity[i]= hbowm;
                   break;
                   case 4: ArmyQuantity[i]= spearm0;
                   break;
                   case 5: ArmyQuantity[i]= spearm1;
                   break;
                   case 6: ArmyQuantity[i]= spearm2;
                   break;
                   case 7: ArmyQuantity[i]= feodalknights;
                   break;
                   case 8: ArmyQuantity[i]= swordm0;
                   break;
                   case 9: ArmyQuantity[i]= swordm1;
                   break;
                   case 10: ArmyQuantity[i]= swordm2;
                   break;
                   case 11: ArmyQuantity[i]= teutonic;
                   break;
                   case 12: ArmyQuantity[i]= lighth1;
                   break;
                   case 13: ArmyQuantity[i]= heavyh1;
                   break;
                   case 14: ArmyQuantity[i]= lighth2;
                   break;
                   case 15: ArmyQuantity[i]= heavyh2;
                   break;}
                }
    ArmyCharsFill(2, 10, 0, 4, 0, 0); //bowman 0
    ArmyCharsFill(4, 12, 1, 5, 2, 1); //bowman 1
    ArmyCharsFill(4, 12, 2, 6, 2, 2); //bowman 2
    ArmyCharsFill(4, 12, 0, 6, 2, 3); //horsebowman
    ArmyCharsFill(2, 10, 0, 4, 0, 4); //peasant
    ArmyCharsFill(4, 12, 1, 6, 1, 5); //spearman
    ArmyCharsFill(6, 15, 2, 8, 2, 6); //alebardman
    ArmyCharsFill(20, 20, 3, 9, 4, 7); //feodal knights
    ArmyCharsFill(4, 10, 0, 6, 0, 8); //militia
    ArmyCharsFill(5, 12, 1, 7, 1, 9); //swordman
    ArmyCharsFill(7, 15, 2, 8, 2, 10); //heavy swordman
    ArmyCharsFill(15, 15, 3, 10, 3, 11); //teutonic knights
    ArmyCharsFill(6, 12, 1, 7, 2, 12); //light horse
    ArmyCharsFill(8, 15, 2, 9, 3, 13); //catafrcts
    ArmyCharsFill(5, 12, 1, 7, 2, 14); //impact cavalry
    ArmyCharsFill(7, 15, 2, 9, 3, 15); //heavy cavalry

    ArmyCostsFill(0, 0, 1, 0, 0, 0, 0, 0);//bowman0
    ArmyCostsFill(0, 0, 1, 0, 0, 1, 0, 1);//bowman1
    ArmyCostsFill(0, 0, 1, 0, 0, 0, 1, 2);//bowman2
    ArmyCostsFill(0, 1, 1, 0, 0, 1, 0, 3);//horsebowman
    ArmyCostsFill(0, 0, 0, 0, 0, 0, 0, 4);//peasant
    ArmyCostsFill(0, 0, 0, 1, 0, 1, 0, 5);//spearman
    ArmyCostsFill(0, 0, 0, 2, 0, 0, 1, 6);//alebardman
    ArmyCostsFill(0, 2, 0, 2, 2, 0, 2, 7);//feodalknight
    ArmyCostsFill(5, 0, 0, 0, 0, 0, 0, 8);//militia
    ArmyCostsFill(0, 0, 0, 0, 1, 1, 0, 9);//swordman
    ArmyCostsFill(0, 0, 0, 0, 1, 0, 1, 10);//heavy swordman
    ArmyCostsFill(0, 0, 0, 0, 2, 0, 2, 11);//teutonic knights
    ArmyCostsFill(0, 1, 0, 0, 1, 1, 0, 12);//light cav
    ArmyCostsFill(0, 1, 0, 0, 1, 0, 2, 13);//catafracts
    ArmyCostsFill(0, 1, 0, 1, 0, 1, 0, 14);//shock cavalry
    ArmyCostsFill(0, 1, 0, 2, 0, 0, 2, 15);//heavy cavalry

    for (int i=0; i<9; i++)
        {for (int j=0; j<6; j++)
            {for (int k=0; k<5; k++){ForgeMood[i][j][k]=false;}}} //Giving 0 forges 0 mood

    for (int i=0; i<=TotalPossibleEvents; i++) {EventBlocked[i]=false;}// decidings in events
    for (int i=0; i<=TotalPossibleEvents; i++) {EventChoosed[i]=false;}
    for (int i=0; i<=TotalPossibleEvents; i++) {for (int j=0; j<4; j++) {EventDecided[i][j]=false;}}

    RenderWindow window(sf::VideoMode(1300, 700), "My window");
    window.setPosition(sf::Vector2i(0, 0));
    window.setVerticalSyncEnabled(1);
    window.setTitle("The Feodal");
    Image GameIcon;
    GameIcon.loadFromFile("interface/helmet.png");
    window.setIcon(32,32,GameIcon.getPixelsPtr());

    Vector2u size = window.getSize();
    WindowWidth = size.x;
    WindowHeight = size.y;

    Clock clock;
    clock.restart();

    #include "ContentLoading.h"

    ObrabotkaDoxodovRasxodov ();

    while (window.isOpen())
    {
        Event event;
        if ((SosedLove==1)&&(SosedLoveWarningDone==false)) {SosedLoveWarning=true;}
        CancelCoordinates[1][1]=false;
        SpMonarchRep.setTextureRect(sf::IntRect(0, 30*(MonarchLove), 300, 30)); //Interface Frase Color
        MonarchRepText.setString(" Монарх Аретонский\n"+MonarchRepStr[MonarchLove-1]); //Interface monarch reputation frase
        if (MonarchLove==0) {TurnsLeftForMonarchBattleStr=toString(TurnsLeftForMonarchBattle);
        MonarchRepText.setString(" Монарх Аретонский\n Атакует через "+TurnsLeftForMonarchBattleStr+" Хода!");}
        MonarchRepText.setPosition(1000, 40);

        AllTime = clock.getElapsedTime();
//        if (((AllTime-CountedTime)>=seconds(1.01f))&&(EndTurnProtection)){
//            EndTurnProtection=false;
//        }

        TurnStr=toString(Turn); //Prosto otobrazhenie xoda
        CountTurnText.setString("Ход  "+TurnStr);




        for (int i=0; i<15; i++){ //Massiv vsex resyrsov v stroky
            ResourcesQuantityStr[i]=toString(ResourcesQuantity[i]);
            }

        for (int i=0; i<16; i++){ //Massiv voisk v stroky
            ArmyQuantityStr[i]=toString(ArmyQuantity[i]);
            }



        while (window.pollEvent(event))
        {

            if ((event.type == sf::Event::Closed)||(ExitBool == true))
                window.close();

            if (event.type == sf::Event::MouseButtonPressed) {
                KostilCountedTime = clock.getElapsedTime();
                Vector2u size = window.getSize();
                WindowWidth = size.x;
                WindowHeight = size.y;
                ObrabotkaCoordinat(event);
            }

            if (event.type == sf::Event::MouseMoved)
            {
                Vector2u size = window.getSize();
                WindowWidthMoved = size.x;
                WindowHeightMoved = size.y;
                ObrabotkaCoordinatMoved(event);
            }

            if (event.type == sf::Event::KeyPressed){

                 if (event.key.code == sf::Keyboard::Escape) {
                        for (int i=0; i<6; i++){InterfaceInteraction[i]=false;}
                        SettingsMenu =! SettingsMenu;
                        }

//                if (event.key.code == sf::Keyboard::Num1) {
//                        BattleStart=true;
//                        EnemyIn[0][0]+=10;
//                        EnemyIn[1][8]+=10;
//                        EnemyIn[2][4]+=10;
//                }
//                if (event.key.code == sf::Keyboard::Num2) {
//                        BattleStart=true;
//                        EnemyIn[1][7]+=10;
//                }
//                if (event.key.code == sf::Keyboard::Num3) {
//                        BattleStart=true;
//                        EnemyIn[0][1]+=10;
//                        EnemyIn[1][5]+=10;
//                        EnemyIn[2][9]+=10;
//                }
//                if (event.key.code == sf::Keyboard::Num4) {
//                        BattleStart=true;
//                        EnemyIn[0][2]+=10;
//                        EnemyIn[1][6]+=10;
//                        EnemyIn[2][10]+=10;
//                }
//                if (event.key.code == sf::Keyboard::Num5) {
//                        BattleStart=true;
//                        EnemyIn[0][15]+=10;
//                        EnemyIn[1][12]+=10;
//                        EnemyIn[2][13]+=10;
//                }


            } //end key pressed

        if (DrawBuildingArea){ //creating building classes when built
            for (int i=0;i<15;i++){
                if  ((ChoosedBuildingInMenu!=19)&&((BuildingCost[i]==0)||(ResourcesQuantity[i]>=BuildingCost[i]))){
                BuildingPayed[i]=true;
                }}
        if (BuildingPayed[1]==false) {
                    if (ManExWood>=BuildingCost[1]) {BuildingPayed[1]=true;}
                    else if (ManExStone>=BuildingCost[1]) {BuildingPayed[1]=true;}
                }
        if ((BuildingPayed[0])&&(BuildingPayed[1])&&(BuildingPayed[2])&&(BuildingPayed[3])&&(BuildingPayed[4])&&
            (BuildingPayed[5])&&(BuildingPayed[6])&&(BuildingPayed[7])&&(BuildingPayed[8])&&(BuildingPayed[9])&&
            (BuildingPayed[10])&&(BuildingPayed[11])&&(BuildingPayed[12])&&(BuildingPayed[13])&&(BuildingPayed[14])){

            if ((City[BuildX][BuildY]->getCost()==0)&&(ChoosedBuildingInMenu!=19)){
                delete City[BuildX][BuildY];
                    switch (ChoosedBuildingInMenu){
                        case 0:
                        City[BuildX][BuildY] = new Farm();
                        break;
                        case 1:
                        City[BuildX][BuildY] = new HunterHouse();
                        break;
                        case 2:
                        City[BuildX][BuildY] = new Mine();
                        break;
                        case 3:
                        City[BuildX][BuildY] = new WindMill();
                        break;
                        case 4:
                        City[BuildX][BuildY] = new Fishery();
                        break;
                        case 5:
                        City[BuildX][BuildY] = new Barracks();
                        break;
                        case 6:
                        City[BuildX][BuildY] = new GuardianBarracks();
                        break;
                        case 7:
                        City[BuildX][BuildY] = new Tower();
                        break;
                        case 8:
                        City[BuildX][BuildY] = new StoneTower();
                        break;
                        case 9:
                        City[BuildX][BuildY] = new GuardTower();
                        break;
                        case 10:
                        City[BuildX][BuildY] = new Tannery();
                        break;
                        case 11:
                        City[BuildX][BuildY] = new Forge();
                        break;
                        case 12:
                        City[BuildX][BuildY] = new Winery();
                        break;
                        case 13:
                        City[BuildX][BuildY] = new Tavern();
                        break;
                        case 14:
                        City[BuildX][BuildY] = new Stable();
                        break;
                        case 15:
                        City[BuildX][BuildY] = new Port();
                        break;
                        case 16:
                        City[BuildX][BuildY] = new MagicStones();
                        n2ProbabInClicks=rand()%20;
                        if (Artifacts[n2ProbabInClicks]==false) {Artifacts[n2ProbabInClicks]=true;}
                        else {ResourcesQuantity[0]+=100;}
                        PeopleLove--;
                        break;
                        case 17:
                        City[BuildX][BuildY] = new Gallow();
                        break;
                        case 18:
                        City[BuildX][BuildY] = new Statue();
                        break;
                        }



                for (int i=0;i<15;i++){
                    if ((i==1)&&(ResourcesQuantity[1]<BuildingCost[1])){
                        if (ManExWood>=BuildingCost[1]) {ManExWood-=BuildingCost[1];}
                        else if (ManExStone>=BuildingCost[1]) {ManExStone-=BuildingCost[1];}}
                    if ((i==1)&&(ResourcesQuantity[1]>=BuildingCost[1])){
                            ResourcesQuantity[1] -= BuildingCost[1];}
                    if (i!=1) {ResourcesQuantity[i] -= BuildingCost[i];
                    ResourcesQuantityStr[i]=toString(ResourcesQuantity[i]);}
                    WoodStoneWorkers();
                    }



                ObrabotkaDoxodovRasxodov();
                BuildX=1, BuildY=1;
                DrawBuildingArea = false;
                BuildingsBuilt=0;
                for(int i=0; i<9; i++){
                    for(int j=0; j<6; j++) {
                    if ((City[i][j]->getCost())>0) {BuildingsBuilt++;}}}
                FreeSpace=40-BuildingsBuilt;
                BuildingsBuiltStr = toString(BuildingsBuilt);
                FreeSpaceStr = toString(FreeSpace);
                BuildingCountStr = "Застроено " +BuildingsBuiltStr+ " полей. Свободно " +FreeSpaceStr+ " полей";
            } //end of check of free space
            }//end of building payed
            else {BuildX=1; BuildY=1; DrawBuildingArea = false;}

            }//end of drawing buildings
        if (DrawDestroyArea){ //destroying building classes
            if ((City[DestroyX][DestroyY]->getCost()==1)&&(City[DestroyX][DestroyY]!=City[1][1])){
                ResourcesQuantity[1]+=City[DestroyX][DestroyY]->payMan();
                delete City[DestroyX][DestroyY];
                City[DestroyX][DestroyY] = new EmptyPlace();
                for (int i=0; i<5; i++) {ForgeMood[DestroyX][DestroyY][i]=false;}

               ObrabotkaDoxodovRasxodov();
               DestroyX=1, DestroyY=1;

                BuildingsBuilt=0;
                for(int i=0; i<9; i++){
                    for(int j=0; j<6; j++) {
                    if ((City[i][j]->getCost())>0) {BuildingsBuilt++;}}}
                FreeSpace=40-BuildingsBuilt;
                BuildingsBuiltStr = toString(BuildingsBuilt);
                FreeSpaceStr = toString(FreeSpace);
                BuildingCountStr = "Застроено " +BuildingsBuiltStr+ " полей. Свободно " +FreeSpaceStr+ " полей";

                } //end of check of existing building

            }//end of destroying buildings


        if (Artifacts[17]){DemandResources[0]=Population/4+10*PortQuantity;}
        if ((BattleStart)||(BattleRound)) {for (int i=0; i<6; i++){InterfaceInteraction[i]=false;}}

        if (BattleStart){
                if (BattleStartChecks==false){

                    int TowersHelp=100;

                    for (int i=16; i<16; i++){CityGuards[1][i]=0;}

                    for(int i=0; i<9; i++){
                        for(int j=0; j<6; j++){
                        if ((City[i][j]->typeCheck())==7){TowersHelp=1+rand()%100;
                        CityGuards[1][0]+=5;
                        if (TowersHelp<=20) {BattleSurprise=false;}}
                        if ((City[i][j]->typeCheck())==8){TowersHelp=1+rand()%100;
                        CityGuards[1][1]+=5;
                        if (TowersHelp<=30) {BattleSurprise=false;}}
                        if ((City[i][j]->typeCheck())==9){TowersHelp=1+rand()%100;
                        CityGuards[1][5]+=10;
                        if (TowersHelp<=50) {BattleSurprise=false;}}
                    }} //towers cheks for enemy

                for (int i=0; i<16; i++){ArmyIn[1][i]+=CityGuards[1][i];} //guards to army

                for (int k=0; k<3; k++){
                    NobodyLeft[k]=0; EnemyLeft[k]=0;
                    CheckIfAllDead[k]=false; CheckIfEnemyDead[k]=false;}
                BattleStartChecks=true;} //end of battle start checks

                for (int i=0; i<16; i++){
                    if ((BattleSurprise)&&(Artifacts[6]==false)) {ArmyQuantity[i]=ArmyQuantity[i]*0.8; BattleSurpriseDraw=true;}
                    }//zastali vrasplox, 20% poteri.

            BattleSurprise=false;}

         if ((Turn>=30)&&(Turn<70)){
            KingsQuestsStr[0]=toString("Своим королевским указом, Монарх \nприказывает вам подготовить обозы с \nпровизией для амбаров королевства, \nна случай войны и осады. \nТребуется 400 пищи и 25 выпивки.");
            KingsQuestsStr[1]=toString("Для проведения рыцарского турнира в \nстолице, требуется еда и выпивка! \nКороль хочет обоз с 200 еды и 100 выпивки!");
            KingsQuestsStr[2]=toString("Монарх хочет украсить свои регалии \nлучшими рубинами королевства! \nОн требует от вас прислать ему 20 самых \nлучших ваших драгоценных камней!");
            KingsQuestsStr[3]=toString("Монарх хочет укрепить оборону столицы \nи требует от вас солдат. \nЕму нужно 10 лучников и 10 копейщиков.");
            KingsQuestsStr[4]=toString("Монарх планирует разводить элитную \nпороду лошадей. Ему требуются самые \nпородистые лошади королевства! \nПредоставьте табун в 30 голов Королю.");
            KingsQuestsStr[5]=toString("Король запланировал возведение \nсовременных укреплений в столице. \nУвеличить высоту стен и башен, расширить \nров. Ему нужны стройматериалы. \n350 дерева и 350 камня будут в самый раз.");
            KingsQuestsStr[6]=toString("Для королевских оружейных требуется \nоружие! \nПредоставьте монарху 40 луков и 40 копий!");
            KingsQuestsStr[8]=toString("Принцесса хочет построить в \nкоролевском саду зверинец, но ей не \nхватает животных. Мы могли бы купить, \nчерез наши торговые связи, диковинного \nКрольчонка! Но обойдется он в 400 монет... ");
        }
         if (Turn>=70){
            KingsQuestsStr[0]=toString("Своим королевским указом, Монарх \nприказывает вам подготовить обозы с \nпровизией для амбаров королевства, \nна случай войны и осады. \nТребуется 500 пищи и 50 выпивки.");
            KingsQuestsStr[1]=toString("Для проведения рыцарского турнира в \nстолице, требуется еда и выпивка! \nКороль хочет обоз с 250 еды и 150 выпивки!");
            KingsQuestsStr[2]=toString("Монарх хочет украсить свои регалии \nлучшими рубинами королевства! \nОн требует от вас прислать ему 30 самых \nлучших ваших драгоценных камней!");
            KingsQuestsStr[3]=toString("Монарх хочет укрепить оборону столицы \nи требует от вас солдат. \nЕму нужно 15 лучников и 15 копейщиков.");
            KingsQuestsStr[4]=toString("Монарх планирует разводить элитную \nпороду лошадей. Ему требуются самые \nпородистые лошади королевства! \nПредоставьте табун в 50 голов Королю.");
            KingsQuestsStr[5]=toString("Король запланировал возведение \nсовременных укреплений в столице. \nУвеличить высоту стен и башен, расширить \nров. Ему нужны стройматериалы. \n500 дерева и 500 камня будут в самый раз.");
            KingsQuestsStr[6]=toString("Для королевских оружейных требуется \nоружие! \nПредоставьте монарху 50 луков и 50 копий!");
            KingsQuestsStr[8]=toString("Принцесса хочет построить в \nкоролевском саду зверинец, но ей не \nхватает животных. Мы могли бы купить, \nчерез наши торговые связи, диковинную \nЧукчийскую Аватарку! Но обойдется она в \n500 монет... ");
            }



        if (TurnsLeftForMonarchBattle==0){
            BattleSurprise=true;
            BattleStart=true;
            MonarchBattleStart=true;
            EnemyIn[0][1]=30;
            EnemyIn[0][5]=20;
            EnemyIn[0][9]=20;
            EnemyIn[0][7]=2;

            EnemyIn[1][6]=20;
            EnemyIn[1][10]=20;
            EnemyIn[1][7]=5;
            EnemyIn[1][1]=30;

            EnemyIn[2][1]=30;
            EnemyIn[2][5]=20;
            EnemyIn[2][9]=20;
            EnemyIn[2][7]=2;

            MonarchBattleMusicPlay=true;
            TurnsLeftForMonarchBattle=3;
        }

        if (SosedLove==0){
            BattleSurprise=true;
            BattleStart=true;
            EnemyIn[0][1]=10;
            EnemyIn[0][5]=10;
            EnemyIn[0][12]=5;

            EnemyIn[1][1]=10;
            EnemyIn[1][5]=10;
            EnemyIn[1][7]=1;
            EnemyIn[1][10]=10;

            EnemyIn[2][1]=10;
            EnemyIn[2][5]=10;
            EnemyIn[2][12]=5;
            SosedLove=2;
        }

        if (PirateBattle){
            BattleSurprise=false;
            BattleStart=true;
            PirateBattleCheck=true;
            EnemyIn[0][1]=1+rand()%5; if (Turn>50) {EnemyIn[0][1]+=3;}
            EnemyIn[0][5]=1+rand()%5; if (Turn>50) {EnemyIn[0][5]+=3;}
            EnemyIn[0][9]=1+rand()%5; if (Turn>50) {EnemyIn[0][9]+=3;}

            EnemyIn[1][1]=1+rand()%5; if (Turn>50) {EnemyIn[1][1]+=3;}
            EnemyIn[1][5]=1+rand()%5; if (Turn>50) {EnemyIn[1][5]+=3;}
            EnemyIn[1][9]=1+rand()%5; if (Turn>50) {EnemyIn[1][9]+=3;}

            EnemyIn[2][1]=1+rand()%5; if (Turn>50) {EnemyIn[2][1]+=3;}
            EnemyIn[2][5]=1+rand()%5; if (Turn>50) {EnemyIn[2][5]+=3;}
            EnemyIn[2][9]=1+rand()%5; if (Turn>50) {EnemyIn[2][9]+=3;}
            PirateBattle=false;

        }

        if (RobbersBattle){
            BattleSurprise=false;
            BattleStart=true;
            RobbersBattleCheck=true;
            EnemyIn[0][2]=1+rand()%3; if (Turn>50) {EnemyIn[0][2]+=3;}
            EnemyIn[0][6]=1+rand()%3; if (Turn>50) {EnemyIn[0][6]+=3;}

            EnemyIn[1][2]=3+rand()%3; if (Turn>50) {EnemyIn[1][2]+=5;}
            EnemyIn[1][10]=2; if (Turn>50) {EnemyIn[1][10]+=2;}
            EnemyIn[1][11]=1;

            EnemyIn[2][2]=1+rand()%3; if (Turn>50) {EnemyIn[2][2]+=3;}
            EnemyIn[2][6]=1+rand()%3; if (Turn>50) {EnemyIn[2][6]+=3;}

            RobbersBattle=false;
        }

        if (BanditBattle){
            BattleSurprise=false;
            BattleStart=true;
            BanditBattleCheck=true;
            EnemyIn[0][0]=1+rand()%2; if (Turn>50) {EnemyIn[0][0]+=2;}
            EnemyIn[0][1]=1; if (Turn>50) {EnemyIn[0][1]+=1;}
            EnemyIn[0][4]=1+rand()%2; if (Turn>50) {EnemyIn[0][4]+=2;}
            EnemyIn[0][8]=1+rand()%2; if (Turn>50) {EnemyIn[0][8]+=2;}

            EnemyIn[1][0]=1+rand()%2; if (Turn>50) {EnemyIn[1][0]+=2;}
            EnemyIn[1][5]=1; if (Turn>50) {EnemyIn[1][5]+=1;}
            EnemyIn[1][4]=1+rand()%2; if (Turn>50) {EnemyIn[1][4]+=2;}
            EnemyIn[1][8]=1+rand()%2; if (Turn>50) {EnemyIn[1][8]+=2;}

            EnemyIn[2][0]=1+rand()%2; if (Turn>50) {EnemyIn[2][0]+=2;}
            EnemyIn[2][9]=1; if (Turn>50) {EnemyIn[2][9]+=1;}
            EnemyIn[2][4]=1+rand()%2; if (Turn>50) {EnemyIn[2][4]+=1;}
            EnemyIn[2][8]=1+rand()%2; if (Turn>50) {EnemyIn[2][8]+=1;}
            BanditBattle=false;
        }




        } //end of while event

        if (MonarchBattleMusicPlay) {AllMusic.stop(); AllMusic.openFromFile("king.ogg"); AllMusic.play(); MusicCount=1; MonarchBattleMusicPlay=false;}
        if ((AllMusic.getStatus()==AllMusic.Stopped)&&(MusicCount==0)) {AllMusic.stop(); AllMusic.openFromFile("catan.ogg"); AllMusic.play(); MusicCount=2;}
        if ((AllMusic.getStatus()==AllMusic.Stopped)&&(MusicCount==1)) {AllMusic.stop(); AllMusic.openFromFile("catan.ogg"); AllMusic.play(); MusicCount++;}
        if ((AllMusic.getStatus()==AllMusic.Stopped)&&(MusicCount==2)) {AllMusic.stop(); AllMusic.openFromFile("music2.ogg"); AllMusic.play(); MusicCount++;}
        if ((AllMusic.getStatus()==AllMusic.Stopped)&&(MusicCount==3)) {AllMusic.stop(); AllMusic.openFromFile("music3.ogg"); AllMusic.play(); MusicCount++;}
        if ((AllMusic.getStatus()==AllMusic.Stopped)&&(MusicCount==4)) {AllMusic.stop(); AllMusic.openFromFile("music4.ogg"); AllMusic.play(); MusicCount++;}
        if ((AllMusic.getStatus()==AllMusic.Stopped)&&(MusicCount==5)) {AllMusic.stop(); AllMusic.openFromFile("music5.ogg"); AllMusic.play(); MusicCount=1;}


       #include "DrawFile.h"

        // end the current frame
        window.display();}



for(int i=0; i<9; i++){
for(int j=0; j<6; j++) delete City[i][j];}

    return 0;
}


