

#define BUILDINGFILE_H_INCLUDED


class Building : public sf::Transformable, public sf::Drawable {
public:
virtual int getCost(){
return 0;
};

virtual int getMoney(){
return 0;
};
virtual int getMan(){
return 0;
};
virtual int getFood(){
return 0;
};
virtual int getWood(){
return 0;
};
virtual int getStone(){
return 0;
};
virtual int getIron(){
return 0;
};
virtual int getLeather(){
return 0;
};
virtual int getWine(){
return 0;
};
virtual int getDiamonds(){
return 0;
};
virtual int getHorses(){
return 0;
};
virtual int getBow(){
return 0;
};
virtual int getSpear(){
return 0;
};
virtual int getSword(){
return 0;
};
virtual int getLeatherArmor(){
return 0;
};
virtual int getMetalArmor(){
return 0;
};



virtual int takeMoney(){
return 0;
};
virtual int takeMan(){
return 0;
};
virtual int takeFood(){
return 0;
};
virtual int takeWood(){
return 0;
};
virtual int takeStone(){
return 0;
};
virtual int takeIron(){
return 0;
};
virtual int takeLeather(){
return 0;
};
virtual int takeWine(){
return 0;
};
virtual int takeDiamonds(){
return 0;
};
virtual int takeHorses(){
return 0;
};
virtual int takeBow(){
return 0;
};
virtual int takeSpear(){
return 0;
};
virtual int takeSword(){
return 0;
};
virtual int takeLeatherArmor(){
return 0;
};
virtual int takeMetalArmor(){
return 0;
};


virtual int payMoney(){
return 0;
};
virtual int payMan(){
return 0;
};
virtual int payFood(){
return 0;
};
virtual int payWood(){
return 0;
};
virtual int payStone(){
return 0;
};
virtual int payIron(){
return 0;
};
virtual int payLeather(){
return 0;
};
virtual int payWine(){
return 0;
};
virtual int payDiamonds(){
return 0;
};
virtual int payHorses(){
return 0;
};
virtual int payBow(){
return 0;
};
virtual int paySpear(){
return 0;
};
virtual int paySword(){
return 0;
};
virtual int payLeatherArmor(){
return 0;
};
virtual int payMetalArmor(){
return 0;
};

virtual int typeCheck(){
return 0;
};

virtual int nBarracks(){
return 0;
};

virtual int gBarracks(){
return 0;
};


virtual ~Building(void) {}
};

class EmptyPlace : public Building{
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();}
int getCost(){
return 0;
};

};

class FeodalHouse : public Building{
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite FeodalHouseSp;
FeodalHouseSp.setTexture(*GlobalBuildingPointer);
FeodalHouseSp.setTextureRect(sf::IntRect(0, 0, 150, 128));
target.draw(FeodalHouseSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 20;}

int getMan(){
return 1;}
int getMoney(){
return 10;}
int takeFood(){
return 10;}
};


class Farm : public Building{ //0
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite FarmSp;
FarmSp.setTexture(*GlobalBuildingPointer);
FarmSp.setTextureRect(sf::IntRect(150, 0, 125, 128));
target.draw(FarmSp, states);}
int getCost(){
return 1;}
int typeCheck(){
return 0;}

int payWood(){
if (Artifacts[11]){
return 30;}
else {return 40;}
}
int payMan(){
return 10;}
int getFood(){
if (Artifacts[2]){
return 25;}
else {return 20;}
}

};

class HunterHouse : public Building{ //1
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite HunterSp;
HunterSp.setTexture(*GlobalBuildingPointer);
HunterSp.setTextureRect(sf::IntRect(300, 0, 125, 128));
target.draw(HunterSp, states);}

int getCost(){
return 1;}
int typeCheck(){
return 1;}

int payWood(){
if (Artifacts[11]){
return 15;}
else {return 20;}
}
int payMan(){
return 10;}
int payBow(){
return 10;}
int getLeather(){
return 10;}
int getFood(){
return 10;}
int takeMoney(){
return 30;}

};

class Mine : public Building{ //2
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite MineSp;
MineSp.setTexture(*GlobalBuildingPointer);
MineSp.setTextureRect(sf::IntRect(450, 0, 125, 128));
target.draw(MineSp, states);}

int getCost(){
return 1;}
int typeCheck(){
return 2;}

int payMan(){
return 25;}
int payWood(){
if (Artifacts[11]){
return 160;}
else {return 200;}
}
int payStone(){
if (Artifacts[11]){
return 40;}
else {return 50;}
}
int getIron(){
return 10;}

int takeMoney(){
return 25;}

};

class WindMill : public Building{//3
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite WindMillSp;
WindMillSp.setTexture(*GlobalBuildingPointer);
WindMillSp.setTextureRect(sf::IntRect(600, 0, 125, 128));
target.draw(WindMillSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 3;}

int payMan(){
return 5;}
int payWood(){
if (Artifacts[11]){
return 60;}
else {return 80;}
}
int getFood(){
return 30;}
int takeMoney(){
return 5;}
};

class Fishery : public Building{//4
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite FisherySp;
FisherySp.setTexture(*GlobalBuildingPointer);
FisherySp.setTextureRect(sf::IntRect(750, 0, 125, 128));
target.draw(FisherySp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 4;}


int payMan(){
return 10;}
int payWood(){
if (Artifacts[11]){
return 40;}
else {return 50;}
}
int getFood(){
if (Artifacts[1]){
return 30;}
else {return 25;}
}
};

class Barracks : public Building{//5
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite BarracksSp;
BarracksSp.setTexture(*GlobalBuildingPointer);
BarracksSp.setTextureRect(sf::IntRect(900, 0, 125, 128));
target.draw(BarracksSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 5;}

int payWood(){
if (Artifacts[11]){
return 80;}
else {return 100;}
}
int nBarracks(){
return 1;}
};

class GuardianBarracks : public Building{//6
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite GuardianBarracksSp;
GuardianBarracksSp.setTexture(*GlobalBuildingPointer);
GuardianBarracksSp.setTextureRect(sf::IntRect(1050, 0, 125, 128));
target.draw(GuardianBarracksSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 6;}

int payStone(){
if (Artifacts[11]){
return 80;}
else {return 100;}
}
int payIron(){
if (Artifacts[11]){
return 40;}
else {return 50;}
}

int gBarracks(){
return 1;}
};

class Tower : public Building{//7
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite TowerSp;
TowerSp.setTexture(*GlobalBuildingPointer);
TowerSp.setTextureRect(sf::IntRect(1200, 0, 125, 128));
target.draw(TowerSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 7;}

int payWood(){
if (Artifacts[11]){
return 30;}
else {return 40;}
}
int payMoney(){
return 10;}

};

class StoneTower : public Building{//8
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite StoneTowerSp;
StoneTowerSp.setTexture(*GlobalBuildingPointer);
StoneTowerSp.setTextureRect(sf::IntRect(1350, 0, 125, 128));
target.draw(StoneTowerSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 8;}

int payStone(){
if (Artifacts[11]){
return 75;}
else {return 100;}
}
int payMoney(){
return 20;}
int takeMoney(){
return 5;}
int Checks(){
return 1;}

};

class GuardTower : public Building{//9
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite GuardTowerSp;
GuardTowerSp.setTexture(*GlobalBuildingPointer);
GuardTowerSp.setTextureRect(sf::IntRect(1500, 0, 125, 128));
target.draw(GuardTowerSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 9;}

int payStone(){
if (Artifacts[11]){
return 160;}
else {return 200;}
}
int payIron(){
return 20;}
int payMoney(){
return 50;}
int takeMoney(){
return 10;}
int Checks(){
return 2;}
};

class Tannery : public Building{//10
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite TannerySp;
TannerySp.setTexture(*GlobalBuildingPointer);
TannerySp.setTextureRect(sf::IntRect(1650, 0, 125, 128));
target.draw(TannerySp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 10;}


int payMan(){
return 10;}
int payWood(){
if (Artifacts[11]){
return 60;}
else {return 80;}
}
int getLeatherArmor(){
return 10;}
int takeLeather(){
return 20;}
int takeMoney(){
return 10;}
};


class Forge : public Building{//11
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite ForgeSp;
ForgeSp.setTexture(*GlobalBuildingPointer);
ForgeSp.setTextureRect(sf::IntRect(1800, 0, 125, 128));
target.draw(ForgeSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 11;}


int payMan(){
return 10;}
int payStone(){
if (Artifacts[11]){
return 40;}
else {return 50;}
}
int payIron(){
return 10;}


};


class Winery : public Building{//12
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite WinerySp;
WinerySp.setTexture(*GlobalBuildingPointer);
WinerySp.setTextureRect(sf::IntRect(1950, 0, 125, 128));
target.draw(WinerySp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 12;}


int payMan(){
return 10;}
int payWood(){
if (Artifacts[11]){
return 60;}
else {return 80;}
}
int getWine(){
return 20;}
int takeFood(){
return 50;}
int takeWood(){
return 50;}
};

class Tavern : public Building{//13
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite TavernSp;
TavernSp.setTexture(*GlobalBuildingPointer);
TavernSp.setTextureRect(sf::IntRect(2100, 0, 125, 128));
target.draw(TavernSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 13;}


int payMan(){
return 5;}
int payWood(){
if (Artifacts[11]){
return 40;}
else {return 50;}
}
int payStone(){
if (Artifacts[11]){
return 40;}
else {return 50;}
}
int getMoney(){
return 100;}
int takeFood(){
return 50;}
int takeWine(){
return 10;}

};

class Stable : public Building{//14
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite StableSp;
StableSp.setTexture(*GlobalBuildingPointer);
StableSp.setTextureRect(sf::IntRect(2250, 0, 125, 128));
target.draw(StableSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 14;}


int payMan(){
return 5;}
int payWood(){
if (Artifacts[11]){
return 60;}
else {return 80;}
}
int payHorses(){
return 20;}
int getHorses(){
if (Artifacts[5]){
return 10;}
else {return 5;}
}
int takeFood(){
return 50;}
};


class Port : public Building{ //15
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite PortSp;
PortSp.setTexture(*GlobalBuildingPointer);
PortSp.setTextureRect(sf::IntRect(2400, 0, 150, 128));
target.draw(PortSp, states);}

int getCost(){
return 1;}
int typeCheck(){
return 15;}

int payMan(){
return 5;}
int payWood(){
if (Artifacts[11]){
return 40;}
else {return 50;}
}
int getMoney(){
if (Artifacts[1]){
return 15;}
else {return 10;}
}
};



class MagicStones : public Building{//16
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite MagicStonesSp;
MagicStonesSp.setTexture(*GlobalBuildingPointer);
MagicStonesSp.setTextureRect(sf::IntRect(2550, 0, 125, 128));
target.draw(MagicStonesSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 16;}

int payStone(){
if (Artifacts[11]){
return 80;}
else {return 100;}
}
int payDiamonds(){
return 5;}

};

class Gallow : public Building{//17
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite GallowSp;
GallowSp.setTexture(*GlobalBuildingPointer);
GallowSp.setTextureRect(sf::IntRect(2700, 0, 125, 128));
target.draw(GallowSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 17;}

int payMan(){
return 5;}
int payWood(){
return 10;}

};

class Statue : public Building{//18
public:
virtual void draw (RenderTarget &target, RenderStates states) const{
states.transform *= getTransform();
Sprite StatueSp;
StatueSp.setTexture(*GlobalBuildingPointer);
StatueSp.setTextureRect(sf::IntRect(2850, 0, 125, 128));
target.draw(StatueSp, states);
}
int getCost(){
return 1;}
int typeCheck(){
return 18;}

int payStone(){
if (Artifacts[11]){
return 30;}
else {return 40;}
}
int payDiamonds(){
return 10;}
int payMoney(){
return 200;}
int getMan(){
return 1;}
};





