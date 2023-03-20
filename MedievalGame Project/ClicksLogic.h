
    float TestClickX, TestClickY; //for tests only
    string ClickXStr = toString(TestClickX);
    string ClickYStr = toString(TestClickY);


void ObrabotkaCoordinat (Event event){
    ObrabotkaDoxodovRasxodov();
    float ClickX = event.mouseButton.x;
    float ClickY = event.mouseButton.y;
    ClickX=ClickX/WindowWidth*1300;
    ClickY=ClickY/WindowHeight*700;





    if ((event.mouseButton.button==Mouse::Left)||(event.mouseButton.button==Mouse::Right)){
    TestClickX = ClickX;  //for tests only
    TestClickY = ClickY;
    ClickXStr = toString(TestClickX);//for tests only
    ClickYStr = toString(TestClickY);

        if (YouLostGame){
            if ((ClickX>=220)&&(ClickY>=380)&&(ClickX<=480)&&(ClickY<=435)){
                ExitBool=true;}
            if ((ClickX>=520)&&(ClickY>=380)&&(ClickX<=780)&&(ClickY<=435)){
                ExitBool=true;}
         }

        if ((EventHided)&&(Event1Menu==false)){ //hide event button
             if ((ClickX>=780)&&(ClickX<=797)&&(ClickY>=150)&&(ClickY<=165)){
                    EventHided=false; Event1Menu=true; return;}
        }
        if ((EventHided==false)&&(Event1Menu)){ //hide event button
            if ((ClickX>=780)&&(ClickX<=797)&&(ClickY>=150)&&(ClickY<=165)){
                    EventHided=true; Event1Menu=false; return;}
        }

        if (ClickY>=670){ //colors buttons
            if ((ClickX>=1020)&&(ClickX<1050)){
                ColorR=255;
                ColorG=255;
                ColorB=153;
                return;}
            else if ((ClickX>=1060)&&(ClickX<1090)){
                ColorR=255;
                ColorG=204;
                ColorB=204;
                return;}
            else if ((ClickX>=1100)&&(ClickX<1130)){
                ColorR=204;
                ColorG=255;
                ColorB=153;
                return;}
            else if ((ClickX>=1140)&&(ClickX<1170)){
                ColorR=153;
                ColorG=204;
                ColorB=255;
                return;}
            else if ((ClickX>=1180)&&(ClickX<1210)){
                ColorR=0;
                ColorG=153;
                ColorB=153;
                return;}
            else if ((ClickX>=1220)&&(ClickX<1250)){
                ColorR=160;
                ColorG=160;
                ColorB=160;
                return;}
            else if ((ClickX>=1260)&&(ClickX<1290)){
                ColorR=255;
                ColorG=255;
                ColorB=255;
                return;}
        return;}

        if ((ClickX>=1020)&&(ClickX<1285)) { //end turn button
            if ((ClickY<660)&&(ClickY>=600)){
                    EndTurnFunction ();}}

        if((ClickY<200)&&(ClickY>=140)){ //buildings
            if ((ClickX>=1000)&&(ClickX<1145)){
            for (int i=0; i<6; i++){ if (i!=0){InterfaceInteraction[i]=false, SettingsMenu=false;}}
            InterfaceInteraction[0] =! InterfaceInteraction[0];
            DrawBuildingArea = false; DrawDestroyArea = false;}
        }

        if((ClickY<200)&&(ClickY>=140)){ //army
            if ((ClickX>=1150)&&(ClickX<1300)){
            for (int i=0; i<6; i++){ if (i!=1){InterfaceInteraction[i]=false, SettingsMenu=false;}}
            InterfaceInteraction[1] =! InterfaceInteraction[1];
            DrawBuildingArea = false; DrawDestroyArea = false;}
        }

        if((ClickY<260)&&(ClickY>=205)){ //economy
            if ((ClickX>=1000)&&(ClickX<1145)){
            for (int i=0; i<6; i++){ if (i!=2){InterfaceInteraction[i]=false, SettingsMenu=false;}}
            InterfaceInteraction[2] =! InterfaceInteraction[2];
            DrawBuildingArea = false; DrawDestroyArea = false;}
        }

        if((ClickY<260)&&(ClickY>=205)){ //trade
            if ((ClickX>=1150)&&(ClickX<1300)){
            for (int i=0; i<6; i++){ if (i!=3){InterfaceInteraction[i]=false, SettingsMenu=false;}}
            InterfaceInteraction[3] =! InterfaceInteraction[3];
            for (int j=0; j<13; j++) {SellResources[j]=0; BuyResources[j]=0;}
            DrawBuildingArea = false; DrawDestroyArea = false;}
        }

        if((ClickY<320)&&(ClickY>=265)){ //quests
            if ((ClickX>=1000)&&(ClickX<1145)){
            for (int i=0; i<6; i++){ if (i!=4){InterfaceInteraction[i]=false, SettingsMenu=false;}}
            InterfaceInteraction[4] =! InterfaceInteraction[4];
            DrawBuildingArea = false; DrawDestroyArea = false;}
        }

        if((ClickY<320)&&(ClickY>=265)){ //artifacts
            if ((ClickX>=1150)&&(ClickX<1300)){
            for (int i=0; i<6; i++){ if (i!=5){InterfaceInteraction[i]=false, SettingsMenu=false;}}
            InterfaceInteraction[5] =! InterfaceInteraction[5];
            DrawBuildingArea = false; DrawDestroyArea = false;}
        }


        if ((ClickX>=1000)&&(ClickX<=1300)&&(ClickY>=320)&&(ClickY<600)){ //sbros postroiki/destroy
            DrawBuildingArea = false;
            DrawDestroyArea = false;
            ForgeChoosed=false;
            for (int i=0; i<6; i++){InterfaceInteraction[i]=false;}
            return;
        }


        if (InterfaceInteraction[0]){ //building menu interaction
            if ((ClickX<=625)&&(ClickY<=580)&&(ClickY>=80)){
            int BuildingMenuCoordX, BuildingMenuCoordY;
            BuildingMenuCoordX = ClickX/125;
            BuildingMenuCoordY = (ClickY-80)/125;
            ChoosedBuildingInMenu = BuildingMenuCoordX+5*BuildingMenuCoordY;
            if (ChoosedBuildingInMenu>19){ChoosedBuildingInMenu=19;}
            return;}


            if ((ClickX>=650)&&(ClickX<=800)&&(ClickY>=490)&&(ClickY<565)){ //build button

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

                    for (int i=0;i<15;i++){BuildingPayed[i]=false;}
                    InterfaceInteraction[0] = false; DrawBuildingArea = true; return;}
                    else {BuildX=1; BuildY=1; DrawBuildingArea = false;}
            return;}//end build button

            if ((ClickX>=815)&&(ClickX<=965)&&(ClickY>=490)&&(ClickY<565)){ //destroy button
                InterfaceInteraction[0] = false;
                DrawDestroyArea = true;
                return;
            }
        return;} //end building menu interaction

        if (DrawBuildingArea){//Giving coordinates for building rezhim
            if (((ChoosedBuildingInMenu==15)&&(ClickX<=740)&&(ClickY>=540)&&(ClickY<650))|| //port
                ((ChoosedBuildingInMenu==4)&&(ClickX<=740)&&(ClickY>=540)&&(ClickY<650))|| //fishery
                ((ChoosedBuildingInMenu==3)&&(ClickX>740)&&(ClickX<1000)&&(ClickY>=40)&&(ClickY<280))|| //mine
                ((ChoosedBuildingInMenu==2)&&(ClickX>740)&&(ClickX<1000)&&(ClickY>=40)&&(ClickY<280))|| //windmill
                ((ChoosedBuildingInMenu==1)&&(ClickX>740)&&(ClickX<1000)&&(ClickY>=415)&&(ClickY<650))|| //hunthouse
                ((ClickX<=1000)&&(ClickY>=40)&&(ClickY<650)&&(ChoosedBuildingInMenu!=1)&&(ChoosedBuildingInMenu!=2)&&
                 (ChoosedBuildingInMenu!=3)&&(ChoosedBuildingInMenu!=4)&&(ChoosedBuildingInMenu!=15))){
            BuildX = 1+ClickX/125;
            BuildY = 1+(ClickY-40)/125;
            return;
        }}

        if ((ClickX<=1000)&&(ClickY>=40)&&(ClickY<650)&&(DrawDestroyArea)) { //Giving coordinates for destroying rezhim
            DestroyX = 1+ClickX/125;
            DestroyY = 1+(ClickY-40)/125;
            return;
        }

        if (InterfaceInteraction[1]){ //Army menu interaction
            nBarracksCount=0; gBarracksCount=0; MaxHired=0;
            for(int i=0; i<9; i++){ //Counting barracks
            for(int j=0; j<6; j++){
                nBarracksCount+=City[i][j]->nBarracks();
                gBarracksCount+=City[i][j]->gBarracks();}}
            if (nBarracksCount>0){nBarracksExist=true; MaxHired+=nBarracksCount*10;}
            else {nBarracksExist=false;}
            if (gBarracksCount>0){gBarracksExist=true; MaxHired+=gBarracksCount*20;}
            else {gBarracksExist=false;}


            if ((ClickX<=495)&&(ClickY<=585)&&(ClickY>=85)){
            int ArmyMenuCoordX, ArmyMenuCoordY;
            ArmyMenuCoordX = ClickX/125;
            ArmyMenuCoordY = (ClickY-85)/125;
            ChoosedArmyInMenu = ArmyMenuCoordX+4*ArmyMenuCoordY;
            return;}

            if ((ClickX>=515)&&(ClickY>=500)&&(ClickX<=665)&&(ClickY<=575)){ //HIRE button
                if ((((ChoosedArmyInMenu==1)||(ChoosedArmyInMenu==2)||(ChoosedArmyInMenu==3)||(ChoosedArmyInMenu==5)||
                    (ChoosedArmyInMenu==9)||(ChoosedArmyInMenu==12)||(ChoosedArmyInMenu==14))&&((nBarracksExist)||(gBarracksExist)))
                        ||(((ChoosedArmyInMenu==6)||(ChoosedArmyInMenu==7)||(ChoosedArmyInMenu==10)||(ChoosedArmyInMenu==11)||
                    (ChoosedArmyInMenu==13)||(ChoosedArmyInMenu==15))&&(gBarracksExist))
                        ||((ChoosedArmyInMenu==0)||(ChoosedArmyInMenu==4)||(ChoosedArmyInMenu==8))){

                if (event.mouseButton.button==Mouse::Left) {
                for (int i=1;i<7;i++){
                    if ((ResourcesQuantity[0]>=ArmyCosts[0][ChoosedArmyInMenu])&&
                    (ResourcesQuantity[8+i]>=ArmyCosts[i][ChoosedArmyInMenu])&&
                    (ResourcesQuantity[1]>=1)){
                    ArmyPayed[i]=true; //if all war resources are payed
                    if ((ChoosedArmyInMenu==0)&&(ResourcesQuantity[10]>=ArmyCosts[2][ChoosedArmyInMenu])){
                        BowmanHired=true;}
                    if (ChoosedArmyInMenu==4){PeasantsHired=true;}//hiring peasants
                    if ((ChoosedArmyInMenu==8)&&(ResourcesQuantity[0]>=ArmyCosts[0][ChoosedArmyInMenu])){
                        MilitiaHired=true;}
                }}
                if (((ArmyPayed[1])&&(ArmyPayed[2])&&(ArmyPayed[3])&&
                     (ArmyPayed[4])&&(ArmyPayed[5])&&(ArmyPayed[6])&&(MaxHired>AlreadyHired))||
                    (PeasantsHired)||(BowmanHired)||(MilitiaHired)) { //if all war resources are payed
                    ResourcesQuantity[0]-=ArmyCosts[0][ChoosedArmyInMenu]; //money
                    ResourcesQuantity[1]--; ArmyQuantity[ChoosedArmyInMenu]++; //man
                     if ((PeasantsHired==false)||(BowmanHired==false)||(MilitiaHired==false)) {AlreadyHired++;}
                    for (int i=1;i<7;i++){ResourcesQuantity[8+i]-=ArmyCosts[i][ChoosedArmyInMenu];//other resources
                    ArmyPayed[i]=false;}
                    PeasantsHired=false;
                    BowmanHired=false;
                    MilitiaHired=false;}

                }//end Left mouse click

                if (event.mouseButton.button==Mouse::Right) {
                 for (int i=1;i<7;i++){
                    if ((ResourcesQuantity[0]>=ArmyCosts[0][ChoosedArmyInMenu]*10)&&
                    (ResourcesQuantity[8+i]>=ArmyCosts[i][ChoosedArmyInMenu]*10)&&
                    (ResourcesQuantity[1]>=10)){
                    ArmyPayed[i]=true;
                    if ((ChoosedArmyInMenu==0)&&(ResourcesQuantity[10]>=10*ArmyCosts[2][ChoosedArmyInMenu])){
                        BowmanHired=true;}
                    if (ChoosedArmyInMenu==4){PeasantsHired=true;}//hiring peasants
                    if ((ChoosedArmyInMenu==8)&&(ResourcesQuantity[0]>=10*ArmyCosts[0][ChoosedArmyInMenu])){
                        MilitiaHired=true;}
                }}
                 if (((ArmyPayed[1])&&(ArmyPayed[2])&&(ArmyPayed[3])&&
                     (ArmyPayed[4])&&(ArmyPayed[5])&&(ArmyPayed[6])&&(MaxHired>=AlreadyHired+10))||
                     (PeasantsHired)||(BowmanHired)||(MilitiaHired)) {
                    ResourcesQuantity[0]-=ArmyCosts[0][ChoosedArmyInMenu]*10; //money
                    ResourcesQuantity[1]-=10; ArmyQuantity[ChoosedArmyInMenu]+=10; //man
                    if ((PeasantsHired==false)||(BowmanHired==false)||(MilitiaHired==false)) {AlreadyHired+=10;}
                    for (int i=1;i<7;i++){ResourcesQuantity[8+i]-=ArmyCosts[i][ChoosedArmyInMenu]*10;//other resources
                    ArmyPayed[i]=false;}
                    PeasantsHired=false;
                    BowmanHired=false;
                    MilitiaHired=false;}

                }//end Right mouse click
            ObrabotkaDoxodovRasxodov();
                        }//end of barracks request
            return;} //end of HIRE button

            if ((ClickX>=680)&&(ClickY>=500)&&(ClickX<=830)&&(ClickY<=575)){ //DISPOSE button
                if (event.mouseButton.button==Mouse::Left) {
                        if (ArmyQuantity[ChoosedArmyInMenu]>0){
                        ArmyQuantity[ChoosedArmyInMenu]--; ResourcesQuantity[1]++;
                        for (int i=1;i<7;i++){ResourcesQuantity[8+i]+=ArmyCosts[i][ChoosedArmyInMenu];}}

                        }//end left click
                if (event.mouseButton.button==Mouse::Right) {
                        if (ArmyQuantity[ChoosedArmyInMenu]>=10){
                        ArmyQuantity[ChoosedArmyInMenu]-=10; ResourcesQuantity[1]+=10;
                        for (int i=1;i<7;i++){ResourcesQuantity[8+i]+=ArmyCosts[i][ChoosedArmyInMenu]*10;}}
                        else if (ArmyQuantity[ChoosedArmyInMenu]<10){
                        ResourcesQuantity[1]+=ArmyQuantity[ChoosedArmyInMenu];
                        for (int i=1;i<7;i++){ResourcesQuantity[8+i]+=ArmyCosts[i][ChoosedArmyInMenu]*ArmyQuantity[ChoosedArmyInMenu];}
                        ArmyQuantity[ChoosedArmyInMenu]=0;}
                        }//end right click
            ObrabotkaDoxodovRasxodov();
            return;}

        } //end army

        if (InterfaceInteraction[2]){ //Economy menu interaction
            if ((ClickX>=30)&&(ClickX<=220)&&(ClickY>=410)&&(ClickY<=450)){ //imposts box
                if ((ClickX<125)&&(Taxes<100)){Taxes+=10; PeopleLove-=2;}
                if ((ClickX>=125)&&(Taxes>-100)){Taxes-=10; PeopleLove+=2;}
                    TaxesStr = toString(Taxes);
                    EconomyMenuNumbersStr[4] = TaxesStr+"%";
                    TaxesInGold=Taxes*ResourcesQuantity[1]/100;
                    TaxesInGoldStr = toString(TaxesInGold);
            }
            if ((ClickX>=250)&&(ClickX<=350)&&(ClickY>=370)&&(ClickY<=450)){ //wood box
                if ((ClickX<300)&&(ClickY<410)&&(ResourcesQuantity[1]>=1)){iWood++, ManExWood++, ResourcesQuantity[1]--;}
                if ((ClickX>=300)&&(ClickY<410)&&(ResourcesQuantity[1]>=10)){iWood+=10, ManExWood+=10, ResourcesQuantity[1]-=10;}
                if ((ClickX<300)&&(ClickY>=410)&&(ManExWood>=1)){iWood--, ManExWood--, ResourcesQuantity[1]++;}
                if ((ClickX>=300)&&(ClickY>=410)&&(ManExWood>=10)){iWood-=10, ManExWood-=10, ResourcesQuantity[1]+=10;}
                ObrabotkaDoxodovRasxodov(); return;
            }
            if ((ClickX>=250)&&(ClickX<=350)&&(ClickY>=475)&&(ClickY<=555)){ //stone box
                if ((ClickX<300)&&(ClickY<515)&&(ResourcesQuantity[1]>=1)){iStone++, ManExStone++, ResourcesQuantity[1]--;}
                if ((ClickX>=300)&&(ClickY<515)&&(ResourcesQuantity[1]>=10)){iStone+=10, ManExStone+=10, ResourcesQuantity[1]-=10;}
                if ((ClickX<300)&&(ClickY>=515)&&(ManExStone>=1)){iStone--, ManExStone--, ResourcesQuantity[1]++;}
                if ((ClickX>=300)&&(ClickY>=515)&&(ManExStone>=10)){iStone-=10, ManExStone-=10, ResourcesQuantity[1]+=10;}
                ObrabotkaDoxodovRasxodov(); return;
            }

           //auto buttons
            if ((ClickX>=808)&&(ClickY>=378)&&(ClickX<=838)&&(ClickY<=408)){
                  if ((AutoAllExWood==false)&&(AutoAllExStone==false)) {AutoAllExWood=true;
                  iWood=0; iStone=0; ResourcesQuantity[1]+=(ManExWood+ManExStone); ManExWood=0; ManExStone=0;
                  ManExWood=ResourcesQuantity[1]; iWood=ResourcesQuantity[1]; ResourcesQuantity[1]=0;
                  ObrabotkaDoxodovRasxodov(); return;}
                  if ((AutoAllExWood==false)&&(AutoAllExStone)) {AutoAllExWood=true; AutoAllExStone=false;
                  iWood=0; iStone=0; ResourcesQuantity[1]+=(ManExWood+ManExStone); ManExWood=0; ManExStone=0;
                  ManExWood=ResourcesQuantity[1]; iWood=ResourcesQuantity[1]; ResourcesQuantity[1]=0;
                  ObrabotkaDoxodovRasxodov(); return;;}
                  if ((AutoAllExWood)&&(AutoAllExStone==false)) {AutoAllExWood=false;
                  iWood=0; iStone=0; ResourcesQuantity[1]+=(ManExWood+ManExStone); ManExWood=0; ManExStone=0;
                  ObrabotkaDoxodovRasxodov(); return;}
                }
            if ((ClickX>=808)&&(ClickY>=480)&&(ClickX<=838)&&(ClickY<=510)){
                  if ((AutoAllExStone==false)&&(AutoAllExWood==false)) {AutoAllExStone=true;
                  iWood=0; iStone=0; ResourcesQuantity[1]+=(ManExWood+ManExStone); ManExWood=0; ManExStone=0;
                  ManExStone=ResourcesQuantity[1]; iStone=ResourcesQuantity[1]; ResourcesQuantity[1]=0;
                  ObrabotkaDoxodovRasxodov(); return;}
                  if ((AutoAllExStone==false)&&(AutoAllExWood)) {AutoAllExStone=true; AutoAllExWood=false;
                  iWood=0; iStone=0; ResourcesQuantity[1]+=(ManExWood+ManExStone); ManExWood=0; ManExStone=0;
                  ManExStone=ResourcesQuantity[1]; iStone=ResourcesQuantity[1]; ResourcesQuantity[1]=0;
                  ObrabotkaDoxodovRasxodov(); return;}
                  if ((AutoAllExStone)&&(AutoAllExWood==false)) {AutoAllExStone=false;
                  iWood=0; iStone=0; ResourcesQuantity[1]+=(ManExWood+ManExStone); ManExWood=0; ManExStone=0;
                  ObrabotkaDoxodovRasxodov(); return;}
                }



        ObrabotkaDoxodovRasxodov();
        return;}

        if (InterfaceInteraction[3]){ //Trade menu interaction
                ObrabotkaDoxodovRasxodov();
                int ChoosedToSellInMenu=0, ChoosedToBuyInMenu=0;

            if ((ClickX<=55)&&(ClickY<=620)&&(ClickY>=100)){ //kliki prodazhi
            ChoosedToSellInMenu = (ClickY-100)/40;
            if (event.mouseButton.button==Mouse::Left) {
                if ((ResourcesQuantity[ChoosedToSellInMenu+2]>SellResources[ChoosedToSellInMenu])
                    &&(SellResources[ChoosedToSellInMenu]<DemandResources[ChoosedToSellInMenu]))
                    {SellResources[ChoosedToSellInMenu]+=1;}
                else {if (ResourcesQuantity[ChoosedToSellInMenu+2]>=DemandResources[ChoosedToSellInMenu]){
                        SellResources[ChoosedToSellInMenu]=DemandResources[ChoosedToSellInMenu];}}
            }

            if (event.mouseButton.button==Mouse::Right) {
                    if ((ResourcesQuantity[ChoosedToSellInMenu+2]>=SellResources[ChoosedToSellInMenu]+10)
                    &&((SellResources[ChoosedToSellInMenu]+10)<DemandResources[ChoosedToSellInMenu]))
                    {SellResources[ChoosedToSellInMenu]+=10;}
                else {if (ResourcesQuantity[ChoosedToSellInMenu+2]>=DemandResources[ChoosedToSellInMenu]){
                        SellResources[ChoosedToSellInMenu]=DemandResources[ChoosedToSellInMenu];}}
            }
            return;}

            if ((ClickX>=450)&&(ClickX<=505)&&(ClickY<=615)&&(ClickY>=100)){ //kliki pokypki
            ChoosedToBuyInMenu = (ClickY-100)/40;
            if (event.mouseButton.button==Mouse::Left) {
                    if (OfferResources[ChoosedToBuyInMenu]>BuyResources[ChoosedToBuyInMenu]){
                        BuyResources[ChoosedToBuyInMenu]+=1;}}

            if (event.mouseButton.button==Mouse::Right) {
                    if (OfferResources[ChoosedToBuyInMenu]>=(BuyResources[ChoosedToBuyInMenu]+10)){
                        BuyResources[ChoosedToBuyInMenu]+=10;}
                    else {BuyResources[ChoosedToBuyInMenu]=OfferResources[ChoosedToBuyInMenu];}}
            return;}

            if ((ClickX>=60)&&(ClickX<=210)&&(ClickY>615)&&(ClickY<=675)){ //TO SELL
            for (int i=0; i<13; i++){
                    if (DemandResources[i]>=SellResources[i]){
                ResourcesQuantity[i+2]-=SellResources[i];
                DemandResources[i]-=SellResources[i];
                ResourcesQuantity[0]+=PricesResources[i]*SellResources[i];
                SellResources[i]=0;}}
            return;}

            if ((ClickX>=510)&&(ClickX<=660)&&(ClickY>615)&&(ClickY<=675)){//TO BUY
            for (int i=0; i<13; i++){
                     if ((OfferResources[i]>=BuyResources[i])&&(ResourcesQuantity[0]>=PricesResources[i]*BuyResources[i])){
                ResourcesQuantity[i+2]+=BuyResources[i];
                OfferResources[i]-=BuyResources[i];
                ResourcesQuantity[0]-=PricesResources[i]*BuyResources[i];
                BuyResources[i]=0;}}
            return;}

            if ((ClickX>=250)&&(ClickX<=390)&&(ClickY>615)&&(ClickY<=675)){ //sbros pokypok
            for (int i=0; i<13; i++){SellResources[i]=0;}
            return;}
            if ((ClickX>=700)&&(ClickX<=845)&&(ClickY>615)&&(ClickY<=675)){//sbros prodazh
            for (int i=0; i<13; i++){BuyResources[i]=0;}
            return;}

        for (int j=0; j<13; j++){ //auto buttons
            if ((ClickX>=130)&&(ClickY>=90+j*41)&&(ClickX<=160)&&(ClickY<=120+j*41)){
                    AutoSell[j]=!AutoSell[j];}
            if ((ClickX>=570)&&(ClickY>=90+j*41)&&(ClickX<=600)&&(ClickY<=120+j*41)){
                    AutoBuy[j]=!AutoBuy[j];
                }
            }

        }

        if (InterfaceInteraction[4]){ //Quest menu interaction
            if ((ClickX>=405)&&(ClickX<=660)&&(ClickY>=510)&&(ClickY<=565)){ //DONE button
                bool QuestDone=false;
                int ArtifactChoiceMod=1+rand()%2;
                if (Turn<30) {
                switch (QuestChoice){
                case 0: if (ResourcesQuantity[2]>=300){ResourcesQuantity[2]-=300; QuestDone=true; } break;
                case 1: if ((ResourcesQuantity[2]>=100)&&(ResourcesQuantity[7]>=50)){
                    ResourcesQuantity[2]-=100; ResourcesQuantity[7]-=50; QuestDone=true; } break;
                case 2: if (ResourcesQuantity[8]>=10){ResourcesQuantity[8]-=10; QuestDone=true;} break;
                case 3: if ((ArmyQuantity[1]>=5)&&(ArmyQuantity[5]>=5)){QuestDone=true; ArmyQuantity[1]-=5; ArmyQuantity[5]-=5; } break;
                case 4: if (ResourcesQuantity[9]>=20){ResourcesQuantity[9]-=20; QuestDone=true; } break;
                case 5: if ((ResourcesQuantity[3]>=250)&&(ResourcesQuantity[4]>=250)){
                    ResourcesQuantity[3]-=250; ResourcesQuantity[4]-=250; QuestDone=true; } break;
                case 6: if ((ResourcesQuantity[10]>=30)&&(ResourcesQuantity[11]>=30)){
                    ResourcesQuantity[10]-=30; ResourcesQuantity[11]-=30; QuestDone=true; } break;
                case 7:
                    if (ArtifactChoiceMod==1){
                    for (int i=0;i<20;i++) {if (Artifacts[i]==true) {Artifacts[i]=false; QuestDone=true; break;}}}
                    if (ArtifactChoiceMod==2){
                    for (int i=19;i>=0;i--) {if (Artifacts[i]==true) {Artifacts[i]=false; QuestDone=true; break;}}}
                break;
                case 8: if (ResourcesQuantity[0]>=300){ResourcesQuantity[0]-=300; QuestDone=true; PrincessLove++;} break;
                case 9: if (ArmyQuantity[12]>=20){QuestDone=true; ArmyQuantity[12]-=20; PrincessLove++; }
                }}
                if ((Turn>=30)&&(Turn<70)) {
                switch (QuestChoice){
                case 0: if ((ResourcesQuantity[2]>=400)&&(ResourcesQuantity[7]>=25)){ResourcesQuantity[2]-=400; ResourcesQuantity[7]-=25; QuestDone=true; } break;
                case 1: if ((ResourcesQuantity[2]>=200)&&(ResourcesQuantity[7]>=100)){
                    ResourcesQuantity[2]-=200; ResourcesQuantity[7]-=100; QuestDone=true; } break;
                case 2: if (ResourcesQuantity[8]>=20){ResourcesQuantity[8]-=20; QuestDone=true;} break;
                case 3: if ((ArmyQuantity[1]>=10)&&(ArmyQuantity[5]>=10)){QuestDone=true; ArmyQuantity[1]-=10; ArmyQuantity[5]-=10; } break;
                case 4: if (ResourcesQuantity[9]>=30){ResourcesQuantity[9]-=30; QuestDone=true; } break;
                case 5: if ((ResourcesQuantity[3]>=350)&&(ResourcesQuantity[4]>=350)){
                    ResourcesQuantity[3]-=350; ResourcesQuantity[4]-=350; QuestDone=true; } break;
                case 6: if ((ResourcesQuantity[10]>=40)&&(ResourcesQuantity[11]>=40)){
                    ResourcesQuantity[10]-=40; ResourcesQuantity[11]-=40; QuestDone=true; } break;
                case 7:
                    if (ArtifactChoiceMod==1){
                    for (int i=0;i<20;i++) {if (Artifacts[i]==true) {Artifacts[i]=false; QuestDone=true; break;}}}
                    if (ArtifactChoiceMod==2){
                    for (int i=19;i>=0;i--) {if (Artifacts[i]==true) {Artifacts[i]=false; QuestDone=true; break;}}}
                break;
                case 8: if (ResourcesQuantity[0]>=400){ResourcesQuantity[0]-=400; QuestDone=true; PrincessLove++;} break;
                case 9: if (ArmyQuantity[12]>=20){QuestDone=true; ArmyQuantity[12]-=20; PrincessLove++; }
                }}
                if (Turn>=70) {
                switch (QuestChoice){
                case 0: if ((ResourcesQuantity[2]>=500)&&(ResourcesQuantity[7]>=50)){ResourcesQuantity[2]-=500; ResourcesQuantity[7]-=50; QuestDone=true; } break;
                case 1: if ((ResourcesQuantity[2]>=250)&&(ResourcesQuantity[7]>=150)){
                    ResourcesQuantity[2]-=250; ResourcesQuantity[7]-=150; QuestDone=true; } break;
                case 2: if (ResourcesQuantity[8]>=30){ResourcesQuantity[8]-=30; QuestDone=true;} break;
                case 3: if ((ArmyQuantity[1]>=15)&&(ArmyQuantity[5]>=15)){QuestDone=true; ArmyQuantity[1]-=15; ArmyQuantity[5]-=15; } break;
                case 4: if (ResourcesQuantity[9]>=50){ResourcesQuantity[9]-=50; QuestDone=true; } break;
                case 5: if ((ResourcesQuantity[3]>=500)&&(ResourcesQuantity[4]>=500)){
                    ResourcesQuantity[3]-=500; ResourcesQuantity[4]-=500; QuestDone=true; } break;
                case 6: if ((ResourcesQuantity[10]>=50)&&(ResourcesQuantity[11]>=50)){
                    ResourcesQuantity[10]-=50; ResourcesQuantity[11]-=50; QuestDone=true; } break;
                case 7:
                    if (ArtifactChoiceMod==1){
                    for (int i=0;i<20;i++) {if (Artifacts[i]==true) {Artifacts[i]=false; QuestDone=true; break;}}}
                    if (ArtifactChoiceMod==2){
                    for (int i=19;i>=0;i--) {if (Artifacts[i]==true) {Artifacts[i]=false; QuestDone=true; break;}}}
                break;
                case 8: if (ResourcesQuantity[0]>=500){ResourcesQuantity[0]-=500; QuestDone=true; PrincessLove++;} break;
                case 9: if (ArmyQuantity[12]>=20){QuestDone=true; ArmyQuantity[12]-=20; PrincessLove++; }
                }}

            ObrabotkaDoxodovRasxodov();
            if (QuestDone) {
                QuestChoice=rand()%10; QuestsTime+=10; if (NoMore==false) {MonarchLove++;};
                if (MonarchLove>5){MonarchLove=5;}
                QuestDone=false;}
            QuestsTimeStr=toString(QuestsTime);
            return;}
            if ((ClickX>=705)&&(ClickX<=960)&&(ClickY>=510)&&(ClickY<=565)){ //Cancel button
            if (MonarchLove==1) {QuestsTime=10;} else {QuestsTime+=10;}
            QuestChoice=rand()%10;
            MonarchLove--;
            if (MonarchLove<0){MonarchLove=0;}
            QuestsTimeStr=toString(QuestsTime);
            return;}

        }//end quest menu interaction

        if (InterfaceInteraction[5]){ //Artifact menu interaction
            if ((ClickX<=615)&&(ClickY<=575)&&(ClickY>=90)){
            int ArtifactMenuCoordX, ArtifactMenuCoordY;
            ArtifactMenuCoordX = ClickX/125;
            ArtifactMenuCoordY = (ClickY-90)/125;
            ChoosedArtifactInMenu = ArtifactMenuCoordX+5*ArtifactMenuCoordY;
            return;}
            if ((ClickX>=690)&&(ClickX<=935)&&(ClickY>=465)&&(ClickY<=565)){ //sell artifact
            if (Artifacts[ChoosedArtifactInMenu]==true){Artifacts[ChoosedArtifactInMenu]=false;
            ResourcesQuantity[0]+=100;}
            return;}
        }

        if (SettingsMenu){
             if ((ClickX>=370)&&(ClickX<=635)&&(ClickY>=405)&&(ClickY<=455)){ //exit
                ExitBool=true;
             return;}
             if ((ClickX>=370)&&(ClickX<=635)&&(ClickY>=280)&&(ClickY<=335)){
                PlayMusic=!PlayMusic;
                if (PlayMusic){AllMusic.play();}
                if (PlayMusic==false){AllMusic.pause();}
             return;}
        }//end of settings menu

        if (BattleStart){

             if ((ClickX>=50)&&(ClickX<=945)&&(ClickY>=85)&&(ClickY<=630)){ //whole area of battle menu
                    AllDeadArmy=0; AllLiveArmy=0; AllLiveEnemies=0; AllDeadEnemies=0;
                    for (int z=0; z<16; z++){
                        AllDeadEnemies+=EnemyDied[z];
                        AllDeadArmy+=ArmyDied[z];
                        for (int zk=0; zk<3; zk++){
                        AllLiveEnemies+=EnemyIn[zk][z];
                        AllLiveArmy+=ArmyIn[zk][z];
                        }}

                if ((ClickX>=70)&&(ClickX<=330)&&(ClickY>=235)&&(ClickY<=290)){ //left flang
                    LeftFlangChoosed=true; CenterChoosed=false; RightFlangChoosed=false;return;}

                if ((ClickX>=70)&&(ClickX<=330)&&(ClickY>=305)&&(ClickY<=360)){ //center
                    LeftFlangChoosed=false; CenterChoosed=true; RightFlangChoosed=false;return;}

                if ((ClickX>=70)&&(ClickX<=330)&&(ClickY>=375)&&(ClickY<=430)){ //right flang
                    LeftFlangChoosed=false; CenterChoosed=false; RightFlangChoosed=true;return;}
                if ((ClickX>=70)&&(ClickX<=330)&&(ClickY>=565)&&(ClickY<=620)){ //retreat


                    BattleRound=false; RoundCount=0; BattleSurprise=false; BattleStartChecks=false; BattleSurpriseDraw=false;
                    YouWonBattle=false; YouLostBattle=false; Retreat=false; Empate=false;

                    for (int i=0; i<4; i++) {AttackFromFlangsBool[i]=false;}

                    for (int i=0; i<16; i++) {n3ProbabInClicks=1+rand()%AllLiveEnemies;
                    if (ResourcesQuantity[i]>=n3ProbabInClicks){ResourcesQuantity[i]-=n3ProbabInClicks;}}

                    for (int i=0; i<16; i++){
                        ArmyDied[i]=0; EnemyDied[i]=0;
                        ArmyFledFromBattle[i]=0; EnemyFledFromBattle[i]=0;
                    }

                   if (RobbersBattleCheck){
                    delete City[4][7]; City[4][7] = new EmptyPlace();
                    delete City[4][8]; City[4][8] = new EmptyPlace();
                    delete City[5][7]; City[5][7] = new EmptyPlace();
                    delete City[5][8]; City[5][8] = new EmptyPlace();
                    RobbersBattleCheck=false;}

                    BattleStart=false;
                    return;} //end of retraet button

                if ((ClickX>=670)&&(ClickX<=930)&&(ClickY>=565)&&(ClickY<=620)){ //to battle
                    BattleRound=true; BattleStart=false; Empate=false;


                    for (int i=0; i<4; i++) {AttackFromFlangsBool[i]=false;}

                    for (int i=0; i<16; i++){
                        ArmyDied[i]=0; EnemyDied[i]=0;
                        ArmyFledFromBattle[i]=0; EnemyFledFromBattle[i]=0;
                    }

                    if (Artifacts[3]){ //kop'e pchel
                        for (int i=0; i<16; i++){
                            for (int j=0; j<3; j++){
                                if  (EnemyIn[j][i]>=5) {
                                n3ProbabInClicks=EnemyIn[j][i]*0.1;
                                EnemyDied[i]+=n3ProbabInClicks;
                                EnemyIn[j][i]-=n3ProbabInClicks;}}}}

                    if (Artifacts[15]){ //nozhka yzhasa
                        for (int i=0; i<16; i++){
                            if (UnitTypeSoldier[i]==false){
                           for (int j=0; j<3; j++){
                                EnemyIn[j][i]*=0.5;
                                switch(i){
                                case 0: break;
                                case 1: break;
                                case 2: break;
                                case 3: EnemyIn[j][1]+=EnemyIn[j][3]; break;
                                case 4: break;
                                case 5: break;
                                case 6: break;
                                case 7: EnemyIn[j][11]+=EnemyIn[j][7]; break;
                                case 8: break;
                                case 9: break;
                                case 10: break;
                                case 11: break;
                                case 12: EnemyIn[j][9]+=EnemyIn[j][12]; break;
                                case 13: EnemyIn[j][10]+=EnemyIn[j][13]; break;
                                case 14: EnemyIn[j][5]+=EnemyIn[j][14]; break;
                                case 15: EnemyIn[j][6]+=EnemyIn[j][15]; break;
                                }}}}}


                    return;}//end of battle button

            if ((ClickX>=80)&&(ClickX<=177)&&(ClickY>=200)&&(ClickY<=277)){ //+ALL

                    for (int j=0; j<3; j++) {
                        for (int i=0; i<16; i++) {
                        if ((LeftFlangChoosed)&&(MaxInLeft==false)&&(Check1<6)){
                            if (ArmyQuantity[i]>0) {ArmyIn[0][i]+=ArmyQuantity[i]; ArmyQuantity[i]=0; Check1++;}}
                        if ((CenterChoosed)&&(MaxInCenter==false)&&(Check2<6)) {
                            if (ArmyQuantity[i]>0) {ArmyIn[1][i]+=ArmyQuantity[i]; ArmyQuantity[i]=0; Check2++;}}
                        if ((RightFlangChoosed)&&(MaxInRight==false)&&(Check3<6)) {
                            if (ArmyQuantity[i]>0) {ArmyIn[2][i]+=ArmyQuantity[i]; ArmyQuantity[i]=0; Check3++;}}
                    }}}

            if ((LeftFlangChoosed)&&(ClickX>=200)&&(ClickX<=915)&&(ClickY>=150)&&(ClickY<=190)){ //transfer army to left flang
                        ArmyToGoX=((ClickX-200)/45);
                    if (((MaxInLeft)&&(ArmyIn[0][ArmyToGoX]>0))||(MaxInLeft==false)){
                    if (event.mouseButton.button==Mouse::Left) {
                        if (ArmyQuantity[ArmyToGoX]>0) {ArmyIn[0][ArmyToGoX]++; ArmyQuantity[ArmyToGoX]--;}}
                    if (event.mouseButton.button==Mouse::Right) {
                        if ((ArmyQuantity[ArmyToGoX]<10)&&(ArmyQuantity[ArmyToGoX]>0)) {ArmyIn[0][ArmyToGoX]+=ArmyQuantity[ArmyToGoX]; ArmyQuantity[ArmyToGoX]=0;}
                        if (ArmyQuantity[ArmyToGoX]>=10) {ArmyIn[0][ArmyToGoX]+=10; ArmyQuantity[ArmyToGoX]-=10;}}
                    return;}}
            if ((CenterChoosed)&&(ClickX>=200)&&(ClickX<=915)&&(ClickY>=150)&&(ClickY<=190)){ //transfer army to center
                        ArmyToGoX=((ClickX-200)/45);
                    if (((MaxInCenter)&&(ArmyIn[0][ArmyToGoX]>0))||(MaxInCenter==false)){
                    if (event.mouseButton.button==Mouse::Left) {
                        if (ArmyQuantity[ArmyToGoX]>0) {ArmyIn[1][ArmyToGoX]++; ArmyQuantity[ArmyToGoX]--;}}
                    if (event.mouseButton.button==Mouse::Right) {
                        if ((ArmyQuantity[ArmyToGoX]<10)&&(ArmyQuantity[ArmyToGoX]>0)) {ArmyIn[1][ArmyToGoX]+=ArmyQuantity[ArmyToGoX]; ArmyQuantity[ArmyToGoX]=0;}
                        if (ArmyQuantity[ArmyToGoX]>=10) {ArmyIn[1][ArmyToGoX]+=10; ArmyQuantity[ArmyToGoX]-=10;}}
                        return;}}
            if ((RightFlangChoosed)&&(ClickX>=200)&&(ClickX<=915)&&(ClickY>=150)&&(ClickY<=190)){ //transfer army to right
                        ArmyToGoX=((ClickX-200)/45);
                    if (((MaxInRight)&&(ArmyIn[0][ArmyToGoX]>0))||(MaxInRight==false)){
                    if (event.mouseButton.button==Mouse::Left) {
                        if (ArmyQuantity[ArmyToGoX]>0) {ArmyIn[2][ArmyToGoX]++; ArmyQuantity[ArmyToGoX]--;}}
                    if (event.mouseButton.button==Mouse::Right) {
                        if ((ArmyQuantity[ArmyToGoX]<10)&&(ArmyQuantity[ArmyToGoX]>0)) {ArmyIn[0][ArmyToGoX]+=ArmyQuantity[ArmyToGoX]; ArmyQuantity[ArmyToGoX]=0;}
                        if (ArmyQuantity[ArmyToGoX]>=10) {ArmyIn[2][ArmyToGoX]+=10; ArmyQuantity[ArmyToGoX]-=10;}
                        }
                    return;}}

            if ((ClickX>=340)&&(ClickX<=410)&&(ClickY>=245)&&(ClickY<=280)){ //Left flang SBROS
                for (int i=0; i<16; i++){ArmyQuantity[i]+=ArmyIn[0][i]; ArmyIn[0][i]=0; ArmyCountDraw[0]=0; MaxInLeft=false; Check1=0;}
            return;}
            if ((ClickX>=340)&&(ClickX<=410)&&(ClickY>=315)&&(ClickY<=350)){ //Center SBROS
                for (int i=0; i<16; i++){ArmyQuantity[i]+=ArmyIn[1][i]; ArmyIn[1][i]=0; ArmyCountDraw[1]=0; MaxInCenter=false; Check2=0;}
            return;}
            if ((ClickX>=340)&&(ClickX<=410)&&(ClickY>=385)&&(ClickY<=420)){ //Right flang SBROS
                for (int i=0; i<16; i++){ArmyQuantity[i]+=ArmyIn[2][i]; ArmyIn[2][i]=0; ArmyCountDraw[2]=0; MaxInRight=false; Check3=0;}
            return;}

        return;}//end of button menu coord
        }//end of battle start

        if (BattleRound){
             if ((ClickX>=50)&&(ClickX<=945)&&(ClickY>=85)&&(ClickY<=630)){

                if ((ClickX>=70)&&(ClickX<=330)&&(ClickY>=565)&&(ClickY<=620)&&
                    (YouWonBattle==false)&&(YouLostBattle==false)&&(Empate==false)&&(Retreat==false)){ //retreat
                    YouLostBattle=true;
                    for (int i=1; i<16; i++) {n3ProbabInClicks=1+rand()%AllLiveEnemies;
                    if (ResourcesQuantity[i]>=n3ProbabInClicks){ResourcesQuantity[i]-=n3ProbabInClicks;}}
                    if (ResourcesQuantity[0]>=AllLiveEnemies*2){ResourcesQuantity[0]-=AllLiveEnemies*2;}
                    return;}
                if ((ClickX>=70)&&(ClickX<=330)&&(ClickY>=565)&&(ClickY<=620)&&
                    ((YouWonBattle)||(YouLostBattle)||(Empate))){ //Xorosho ploxo posle pobedu/porazhenia

                    if ((MonarchBattleStart)&&(YouLostBattle)) {YouLostGame=true;}
                    if ((MonarchBattleStart)&&(YouWonBattle)) {YouWonGame=true;}
                    if ((SosedBattleStart)&&(YouLostBattle)) {YouLostGame=true;}
                    if ((SosedBattleStart)&&(YouWonBattle)) {YouWonWedding=true;}

                    BattleRound=false; RoundCount=0; BattleSurprise=false; BattleStartChecks=false; BattleSurpriseDraw=false;
                    YouWonBattle=false; YouLostBattle=false; Retreat=false; Empate=false;

                    for (int i=0; i<4; i++) {AttackFromFlangsBool[i]=false;}
                    for (int i=0; i<16; i++) {ArmyIn[1][i]+=ArmyFledFromBattle[i];}

                    for (int i=0; i<16; i++){
                            for (int j=0; j<3; j++){
                                ArmyIn[j][i]-=CityGuards[j][i];//guards from army
                                if (ArmyIn[j][i]<0) {ArmyIn[j][i]=0;}
                                ArmyQuantity[i]+=ArmyIn[j][i]; ArmyIn[j][i]=0;
                                EnemyIn[j][i]=0;}
                                CityGuards[1][i]=0;}

                    if (RobbersBattleCheck){
                    delete City[7][4]; City[7][4] = new EmptyPlace();
                    delete City[8][4]; City[8][4] = new EmptyPlace();
                    delete City[7][5]; City[7][5] = new EmptyPlace();
                    delete City[8][5]; City[8][5] = new EmptyPlace();
                    RobbersBattleCheck=false;}

                    return;}




                if ((ClickX>=670)&&(ClickX<=930)&&(ClickY>=565)&&(ClickY<=620)){ //to battle

                        for (int i=0; i<4; i++) {AttackFromFlangsBool[i]=false;}

                        AllLiveArmy=0; AllLiveEnemies=0;
                        AllDeadArmy=0; AllDeadEnemies=0;

                        for (int i=0; i<16; i++){
                            for (int k=0; k<3; k++){
                                AllAttack[k]=0; AllHP[k][i]=0; AllDef[k][i]=0;
                                AllEnemyAttack[k]=0; AllEnemyHP[k][i]=0; AllEnemyDef[k][i]=0;
                                AllArcherAttack[k]=0; EnemyArcherAttack[k]=0; FeodalKnightsAttack[k]=0; EnemyKnightsAttack[k]=0;}
                            }



                    for (int j=0; j<3; j++){ //calculating full attacks, hp and armor
                         for (int i=0; i<16; i++){
                        WhichSteakToAttack[j][i]=false; WhichEnemySteakToAttack[j][i]=false;
                        AttackRating[j][i]=0; EnemyAttackRating[j][i]=0;

                        AllAttack[j]+=ArmyIn[j][i]*ArmyChars[0][i];
                        AllHP[j][i]=ArmyIn[j][i]*ArmyChars[1][i];
                        AllDef[j][i]=ArmyIn[j][i]*ArmyChars[2][i];
                        AllEnemyAttack[j]+=EnemyIn[j][i]*ArmyChars[0][i];
                        AllEnemyHP[j][i]=EnemyIn[j][i]*ArmyChars[1][i];
                        AllEnemyDef[j][i]=EnemyIn[j][i]*ArmyChars[2][i];

                        AttackRating[j][i]=ArmyIn[j][i]*ArmyChars[0][i];
                        EnemyAttackRating[j][i]=EnemyIn[j][i]*ArmyChars[0][i];

                        AllAttack[1]+=(AttackFromFlangsInt[0]+AttackFromFlangsInt[1])/2;
                        AllEnemyAttack[1]+=(AttackFromFlangsInt[2]+AttackFromFlangsInt[3])/2;
                        for (int z=0; z<4; z++) {//bonus attack from flangs
                            AttackFromFlangsInt[z]=0;}
                    }}

                    for (int j=0; j<3; j++) { //Which steak is more dangerous
                        for (int i=0; i<16; i++){
                            AttackRatingCount=0; EnemyAttackRatingCount=0;
                            for (int k=0; k<16; k++){
                    if ((AttackRating[j][i]>=AttackRating[j][k])&&(AttackRating[j][i]!=0)) { //OUR
                            AttackRatingCount++;
                            if (AttackRatingCount==16){WhichSteakToAttack[j][i]=true;}}
                    if ((EnemyAttackRating[j][i]>=EnemyAttackRating[j][k])&&(EnemyAttackRating[j][i]!=0)) { //ENEMY
                            EnemyAttackRatingCount++;
                            if (EnemyAttackRatingCount==16){WhichEnemySteakToAttack[j][i]=true;}}
                    }}
                    }//end of dangerous steak


                    int FeodalKnightsDecisionToAttack=1+rand()%10; //30% shance to not obey of feodal knights
                    int WhoFeodalKnightsAttack=1+rand()%16;

                    for (int j=0; j<3; j++) { //ATTACKS!
                        for (int i=0; i<16; i++){

                            if (WhichEnemySteakToAttack[j][i]) { //ATTACK ENEMY
                                    FeodalKnightsDecisionToAttack=1+rand()%10;
                                    WhoFeodalKnightsAttack=1+rand()%16;

                                    if (UnitTypeSoldier[i]) { //first shoot
                                        AllArcherAttack[j]+=((ArmyIn[j][0]*ArmyChars[0][0])); //bowman bonus
                                        AllArcherAttack[j]+=((ArmyIn[j][1]*ArmyChars[0][1])); //archer bonus
                                        AllArcherAttack[j]+=((ArmyIn[j][2]*ArmyChars[0][2])); //heavy archer bonus
                                        AllArcherAttack[j]+=((ArmyIn[j][3]*ArmyChars[0][3])); //horse archer bonus
                                        if (WhichEnemySteakToAttack[j][11]) {AllArcherAttack[j]*=2;} //teutonic bonus

                                            if ((AllArcherAttack[j]-AllEnemyDef[j][i])>0){ //shooting
                                            if ((AllArcherAttack[j]-AllEnemyDef[j][i])>AllEnemyHP[j][i]) {EnemyDied[i]+=EnemyIn[j][i]; EnemyIn[j][i]=0;}
                                            else {AllEnemyHP[j][i]-=(AllArcherAttack[j]-AllEnemyDef[j][i]);
                                                EnemyDied[i]+=EnemyIn[j][i]-round(AllEnemyHP[j][i]/ArmyChars[1][i]);
                                                EnemyIn[j][i]=round(AllEnemyHP[j][i]/ArmyChars[1][i]);}
                                            }} //end of shooting

                                    if (UnitTypeSoldier[i]) { // +50% vs pexota
                                        AllAttack[j]+=((ArmyIn[j][12]*ArmyChars[0][12])/2); //light cavalry bonus
                                        AllAttack[j]+=((ArmyIn[j][13]*ArmyChars[0][13])/2); //catafract cavalry bonus
                                    }
                                    if (UnitTypeSoldier[i]==false) { // +50% vs caval
                                        AllAttack[j]+=((ArmyIn[j][4]*ArmyChars[0][4])/2); //peasant bonus
                                        AllAttack[j]+=((ArmyIn[j][5]*ArmyChars[0][5])/2); //spearman bonus
                                        AllAttack[j]+=((ArmyIn[j][6]*ArmyChars[0][6])/2); //alebardman bonus
                                    }

                                    if (RoundCount==0) { //x3 modifier
                                        AllAttack[j]+=((ArmyIn[j][14]*ArmyChars[0][14])*2); //impact cavalry bonus
                                        AllAttack[j]+=((ArmyIn[j][15]*ArmyChars[0][15])*2); //heavy cavalry bonus
                                    }


                                    if (FeodalKnightsDecisionToAttack<=3){ //who attack feodal knights
                                        AllAttack[j]-=((ArmyIn[j][7]*ArmyChars[0][7]));
                                        while ((EnemyIn[j][WhoFeodalKnightsAttack]==0)&&(WhoFeodalKnightsAttack<17)) {WhoFeodalKnightsAttack++;}
                                        if (WhoFeodalKnightsAttack>=17) {WhoFeodalKnightsAttack=0;}
                                        while ((EnemyIn[j][WhoFeodalKnightsAttack]==0)&&(WhoFeodalKnightsAttack<17)) {WhoFeodalKnightsAttack++;}

                                        FeodalKnightsAttack[j]=((ArmyIn[j][7]*ArmyChars[0][7]));

                                            if ((FeodalKnightsAttack[j]-AllEnemyDef[j][WhoFeodalKnightsAttack])>0){ //attack
                                            if ((FeodalKnightsAttack[j]-AllEnemyDef[j][WhoFeodalKnightsAttack])>AllEnemyHP[j][WhoFeodalKnightsAttack]) {
                                                    EnemyDied[WhoFeodalKnightsAttack]+=EnemyIn[j][WhoFeodalKnightsAttack]; EnemyIn[j][WhoFeodalKnightsAttack]=0;}
                                            else {AllEnemyHP[j][WhoFeodalKnightsAttack]-=(FeodalKnightsAttack[j]-AllEnemyDef[j][WhoFeodalKnightsAttack]);
                                                EnemyDied[WhoFeodalKnightsAttack]+=EnemyIn[j][WhoFeodalKnightsAttack]-round(AllEnemyHP[j][WhoFeodalKnightsAttack]/ArmyChars[1][WhoFeodalKnightsAttack]);
                                                EnemyIn[j][WhoFeodalKnightsAttack]=round(AllEnemyHP[j][WhoFeodalKnightsAttack]/ArmyChars[1][WhoFeodalKnightsAttack]);}
                                            }
                                            } //end of attack of feodal knights


                    if ((Artifacts[0])&&(YouWonBattle==false)&&(YouLostBattle==false)&&(Empate==false)&&(Retreat==false)) //sword
                    { AllAttack[1]+=50;}

                    if ((AllAttack[j]-AllEnemyDef[j][i])>0){
                        if ((AllAttack[j]-AllEnemyDef[j][i])>AllEnemyHP[j][i]) {EnemyDied[i]+=EnemyIn[j][i]; EnemyIn[j][i]=0;}
                        else {AllEnemyHP[j][i]-=(AllAttack[j]-AllEnemyDef[j][i]);
                            EnemyDied[i]+=EnemyIn[j][i]-round(AllEnemyHP[j][i]/ArmyChars[1][i]);
                            EnemyIn[j][i]=round(AllEnemyHP[j][i]/ArmyChars[1][i]);}}

                    }//end of enemy attack


                if (WhichSteakToAttack[j][i]) { //ATTACK US
                    FeodalKnightsDecisionToAttack=1+rand()%10;
                    WhoFeodalKnightsAttack=1+rand()%16;

                        if (UnitTypeSoldier[i]) { //first shoot
                            EnemyArcherAttack[j]+=((EnemyIn[j][0]*ArmyChars[0][0])); //bowman bonus
                            EnemyArcherAttack[j]+=((EnemyIn[j][1]*ArmyChars[0][1])); //archer bonus
                            EnemyArcherAttack[j]+=((EnemyIn[j][2]*ArmyChars[0][2])); //heavy archer bonus
                            EnemyArcherAttack[j]+=((EnemyIn[j][3]*ArmyChars[0][3])); //horse archer bonus
                            if (WhichSteakToAttack[j][11]) {EnemyArcherAttack[j]*=2;} //teutonic bonus

                                if ((EnemyArcherAttack[j]-AllDef[j][i])>0){ //shooting
                                if ((EnemyArcherAttack[j]-AllDef[j][i])>AllHP[j][i]) {ArmyDied[i]+=ArmyIn[j][i]; ArmyIn[j][i]=0;}
                                else {AllHP[j][i]-=(EnemyArcherAttack[j]-AllDef[j][i]);
                                    ArmyDied[i]+=ArmyIn[j][i]-round(AllHP[j][i]/ArmyChars[1][i]);
                                    ArmyIn[j][i]=round(AllHP[j][i]/ArmyChars[1][i]);}
                                }} //end of shooting

                        if (UnitTypeSoldier[i]) { // +50% vs pexota
                            AllEnemyAttack[j]+=((EnemyIn[j][12]*ArmyChars[0][12])/2); //light cavalry bonus
                            AllEnemyAttack[j]+=((EnemyIn[j][13]*ArmyChars[0][13])/2); //catafract cavalry bonus
                        }
                        if (UnitTypeSoldier[i]==false) { // +50% vs caval
                            AllEnemyAttack[j]+=((EnemyIn[j][4]*ArmyChars[0][4])/2); //peasant bonus
                            AllEnemyAttack[j]+=((EnemyIn[j][5]*ArmyChars[0][5])/2); //spearman bonus
                            AllEnemyAttack[j]+=((EnemyIn[j][6]*ArmyChars[0][6])/2); //alebardman bonus
                        }

                        if (RoundCount==1) { //x3 modifier
                            AllEnemyAttack[j]+=((EnemyIn[j][14]*ArmyChars[0][14])*2); //impact cavalry bonus
                            AllEnemyAttack[j]+=((EnemyIn[j][15]*ArmyChars[0][15])*2); //heavy cavalry bonus
                        }


                        if (FeodalKnightsDecisionToAttack<=3){ //who attack feodal knights
                            AllEnemyAttack[j]-=((EnemyIn[j][7]*ArmyChars[0][7]));
                            while ((EnemyIn[j][WhoFeodalKnightsAttack]==0)&&(WhoFeodalKnightsAttack<17)) {WhoFeodalKnightsAttack++;}
                            if (WhoFeodalKnightsAttack>=17) {WhoFeodalKnightsAttack=0;}
                            while ((EnemyIn[j][WhoFeodalKnightsAttack]==0)&&(WhoFeodalKnightsAttack<17)) {WhoFeodalKnightsAttack++;}

                            EnemyKnightsAttack[j]=((EnemyIn[j][7]*ArmyChars[0][7]));

                                if ((EnemyKnightsAttack[j]-AllDef[j][WhoFeodalKnightsAttack])>0){ //attack
                                if ((EnemyKnightsAttack[j]-AllDef[j][WhoFeodalKnightsAttack])>AllHP[j][WhoFeodalKnightsAttack]) {
                                        ArmyDied[WhoFeodalKnightsAttack]+=ArmyIn[j][WhoFeodalKnightsAttack]; ArmyIn[j][WhoFeodalKnightsAttack]=0;}
                                else {AllHP[j][WhoFeodalKnightsAttack]-=(EnemyKnightsAttack[j]-AllDef[j][WhoFeodalKnightsAttack]);
                                    ArmyDied[WhoFeodalKnightsAttack]+=ArmyIn[j][WhoFeodalKnightsAttack]-round(AllHP[j][WhoFeodalKnightsAttack]/ArmyChars[1][WhoFeodalKnightsAttack]);
                                    EnemyIn[j][WhoFeodalKnightsAttack]=round(AllEnemyHP[j][WhoFeodalKnightsAttack]/ArmyChars[1][WhoFeodalKnightsAttack]);}
                               }
                                } //end of attack of feodal knights


                    if ((AllEnemyAttack[j]-AllDef[j][i])>0){
                    if ((AllEnemyAttack[j]-AllDef[j][i])>AllHP[j][i]) {ArmyDied[i]+=ArmyIn[j][i]; ArmyIn[j][i]=0;}
                    else {AllHP[j][i]-=(AllEnemyAttack[j]-AllDef[j][i]);
                        ArmyDied[i]+=ArmyIn[j][i]-round(AllHP[j][i]/ArmyChars[1][i]);
                        ArmyIn[j][i]=round(AllHP[j][i]/ArmyChars[1][i]);}
                        }


                        }//end of attacking us
                }} //end of attacks

                if ((YouWonBattle==false)&&(YouLostBattle==false)&&(Empate==false)&&(Retreat==false)){//Moral test

                    for (int z=0; z<16; z++){
                        AllDeadEnemies+=EnemyDied[z];
                        AllDeadArmy+=ArmyDied[z];
                        for (int zk=0; zk<3; zk++){
                        AllLiveEnemies+=EnemyIn[zk][z];
                        AllLiveArmy+=ArmyIn[zk][z];
                        }}


                    if (AllLiveEnemies<AllDeadEnemies){
                        for (int d=0; d<16; d++){
                            for (int zk=0; zk<3; zk++) {
                            MoralTest=1+rand()%10;
                        if (MoralTest>ArmyChars[3][d]) {
                            EnemyFledFromBattle[d]+=EnemyIn[zk][d];
                            EnemyIn[zk][d]=0;}}}}
                    if (AllLiveArmy<AllDeadArmy){
                        for (int d=0; d<16; d++){
                            for (int zk=0; zk<3; zk++) {
                            MoralTest=1+rand()%10;
                        if (MoralTest>ArmyChars[3][d]) {
                            ArmyFledFromBattle[d]+=ArmyIn[zk][d];
                            ArmyIn[zk][d]=0;}}}}
            }//end of Moral test


                if ((EnemyLeft[0]==16)&&(CheckIfEnemyDead[0]==false)) { //moving all to center
                    for (int i=0; i<16; i++){
                    if (ArmyIn[0][i]>0) {AttackFromFlangsInt[0]+=ArmyIn[0][i]*ArmyChars[0][i]; AttackFromFlangsBool[0]=true;}
                    ArmyIn[1][i]+=ArmyIn[0][i]; ArmyIn[0][i]=0; CheckIfEnemyDead[0]=true;}}
                if ((EnemyLeft[2]==16)&&(CheckIfEnemyDead[2]==false)) {
                    for (int i=0; i<16; i++){
                    if (ArmyIn[2][i]>0) {AttackFromFlangsInt[1]+=ArmyIn[2][i]*ArmyChars[0][i]; AttackFromFlangsBool[1]=true;}
                    ArmyIn[1][i]+=ArmyIn[2][i]; ArmyIn[2][i]=0; CheckIfEnemyDead[2]=true;}}

                if ((NobodyLeft[0]==16)&&(CheckIfAllDead[0]==false)) {
                    for (int i=0; i<16; i++){
                    if (EnemyIn[0][i]>0) {AttackFromFlangsInt[2]+=EnemyIn[0][i]*ArmyChars[0][i]; AttackFromFlangsBool[2]=true;}
                    EnemyIn[1][i]+=EnemyIn[0][i]; EnemyIn[0][i]=0; CheckIfAllDead[0]=true;}}
                if ((NobodyLeft[2]==16)&&(CheckIfAllDead[2]==false)) {
                    for (int i=0; i<16; i++){
                    if (EnemyIn[2][i]>0) {AttackFromFlangsInt[3]+=EnemyIn[2][i]*ArmyChars[0][i]; AttackFromFlangsBool[3]=true;}
                    EnemyIn[1][i]+=EnemyIn[2][i]; EnemyIn[2][i]=0; CheckIfAllDead[2]=true;}}



                for (int j=0; j<3; j++) { //check if all dead
                    for (int i=0; i<16; i++){
                    if (ArmyIn[j][i]==0) {if (NobodyLeft[j]>=16) {NobodyLeft[j]=16;} else {NobodyLeft[j]++;}}
                    else {NobodyLeft[j]=0; CheckIfAllDead[j]=false;}
                    if (EnemyIn[j][i]==0) {if (EnemyLeft[j]>=16) {EnemyLeft[j]=16;} else {EnemyLeft[j]++;}}
                    else {EnemyLeft[j]=0; CheckIfEnemyDead[j]=false;}
                    }}

                if ((NobodyLeft[1]==16)&&(CheckIfAllDead[1]==false)) {CheckIfAllDead[1]=true;}
                if ((EnemyLeft[1]==16)&&(CheckIfEnemyDead[1]==false)) {CheckIfEnemyDead[1]=true;}


             //won or not
            if (Retreat) {for (int i=0; i<16; i++) {n3ProbabInClicks=1+rand()%AllLiveEnemies;
                    if (ResourcesQuantity[i]>=n3ProbabInClicks){ResourcesQuantity[i]-=n3ProbabInClicks;}}
                YouLostBattle=true;}

            if ((CheckIfEnemyDead[0])&&(CheckIfEnemyDead[1])&&(CheckIfEnemyDead[2])&&(YouWonBattle==false)&&(YouLostBattle==false)) {
                TrofeyStr=toString((AllDeadEnemies+AllDeadArmy)*2); ResourcesQuantity[0]+=((AllDeadEnemies+AllDeadArmy)*2);
                YouWonBattle=true;}
            if ((CheckIfAllDead[0])&&(CheckIfAllDead[1])&&(CheckIfAllDead[2])&&(YouLostBattle==false)&&(YouWonBattle==false)) {
                for (int i=1; i<16; i++) {n3ProbabInClicks=1+rand()%AllLiveEnemies;
                    if (ResourcesQuantity[i]>=n3ProbabInClicks){ResourcesQuantity[i]-=n3ProbabInClicks;}}
                if (ResourcesQuantity[0]>=AllLiveEnemies*2){ResourcesQuantity[0]-=AllLiveEnemies*2;}
                YouLostBattle=true;}


            if ((RoundCount>=10)&&(YouWonBattle==false)&&(YouLostBattle==false)) {
                Empate=true; YouWonBattle=true; RoundCount=10;
                TrofeyStr=toString((AllDeadEnemies+AllDeadArmy)*2); ResourcesQuantity[0]+=((AllDeadEnemies+AllDeadArmy)*2); }
            //end of battle round check of Win/Loss

            if ((YouLostBattle==false)&&(YouWonBattle==false)&&(Empate==false)&&(Retreat==false)) {RoundCount++;}

                 return;} //end of battle button
             return;}//end of round area
        return;}//end of raund



        if ((Event1Menu)&&(Event2Menu==false)&&(Event3Menu==false)){ //first event buttons and appearance
               if ((ClickX>=780)&&(ClickX<=797)&&(ClickY>=150)&&(ClickY<=165)){
                    EventHided=true; Event1Menu=false; return;}

            if ((ClickX>=225)&&(ClickX<=480)&&(ClickY>=380)&&(ClickY<=435)){
                if (EventChoosed[1]){EventChoosed[1]=false; Event1Menu=false; return;}
                if (EventChoosed[2]){EventChoosed[2]=false; Event1Menu=false; return;}
                if (EventChoosed[3]){PeopleLove++; EventChoosed[3]=false; Event1Menu=false; return;}
                if (EventChoosed[4]){PeopleLove--; EventChoosed[4]=false; Event1Menu=false; return;}
                if (EventChoosed[5]){EventChoosed[5]=false; Event1Menu=false; return;}
                if (EventChoosed[6]){EventChoosed[6]=false; Event1Menu=false; return;}
                if (EventChoosed[7]){ResourcesQuantity[2]+=ResourcesQuantity[9]; ResourcesQuantity[9]=0; EventChoosed[7]=false; Event1Menu=false; return;}
                if (EventChoosed[8]){EventChoosed[8]=false; Event1Menu=false; return;}
                if (EventChoosed[9]){
                    ProbabInClicks=1+rand()%2;
                    if (ProbabInClicks==1) {EventDecided[9][0]=true;
                    EventDecidedStr[9][0]=toString("Слава Аретикусу, Метеорит упал в стороне!");}
                    if (ProbabInClicks==2) {EventDecided[9][1]=true;
                    EventDecidedStr[9][1]=toString("Метеорит упал прямо на город.");
                    for (int i=0; i<3; i++){
                    n2ProbabInClicks=1+rand()%8; n3ProbabInClicks=1+rand()%5;
                    BabaxCoordinates[n2ProbabInClicks][n3ProbabInClicks]=true;
                    if ((City[n2ProbabInClicks][n3ProbabInClicks]->getCost()==1)&&(City[n2ProbabInClicks][n3ProbabInClicks]!=City[1][1])){
                    delete City[n2ProbabInClicks][n3ProbabInClicks];
                    City[n2ProbabInClicks][n3ProbabInClicks] = new EmptyPlace();
                    }}}
                    EventChoosed[9]=false; Event1Menu=false; return;}
                if ((EventChoosed[10])&&(ResourcesQuantity[3]>=50)&&(ResourcesQuantity[4]>=50)) {
                    ResourcesQuantity[3]-=50; ResourcesQuantity[4]-=50;
                    EventChoosed[10]=false; Event1Menu=false; return;}
                if ((EventChoosed[11])&&(ResourcesQuantity[0]>=10)&&(ResourcesQuantity[7]>=10)){
                    ResourcesQuantity[0]-=10; ResourcesQuantity[7]-=10;
                    ProbabInClicks=1+rand()%2;
                    if (ProbabInClicks==1) {EventDecided[11][0]=true;
                    EventDecidedStr[11][0]=toString("Менестрель провел великолепное выступление! \nОн не забыл упомянуть и вас в нём, подняв \nк вам любовь народа, чем привлек \nнемного жителей в город (+5 человек).");
                    PeopleLove+=3; ResourcesQuantity[1]+=5;}
                    if (ProbabInClicks==2) {EventDecided[11][3]=true;
                    EventDecidedStr[11][3]=toString("Менестрель пропил вино и деньги и сбежал. \nЧертов мошенник!");}
                    EventChoosed[11]=false; Event1Menu=false; return;}
                if ((EventChoosed[12])&&(ResourcesQuantity[3]>=30)){
                    ResourcesQuantity[3]-=30;
                    EventDecided[12][0]=true;
                    EventDecidedStr[12][0]=toString("Костры помогли и обошлось без жертв.");
                    EventChoosed[12]=false; Event1Menu=false; return;}
                if (EventChoosed[13]){

                    if (MolitvAretikusu<5){
                    for(int i=0; i<9; i++){
                        for(int j=0; j<6; j++){
                        if (((City[i][j]->typeCheck())==0)&&((City[i][j]->getCost())==1)){ResourcesQuantity[1]+=10;}}}
                    for(int i=0; i<9; i++){
                        for(int j=0; j<6; j++){
                        if ((City[i][j]->typeCheck())==0){delete City[i][j]; City[i][j] = new EmptyPlace();}}}

                    EventDecided[13][0]=true;
                    EventDecidedStr[13][0]=toString("Молитва не помогла. \nВсе фермы были разорены.");
                    MolitvAretikusu++;}
                    else {EventDecided[13][3]=true;
                    EventDecidedStr[13][3]=toString("Великий Аретикус прогнал саранчу! \nПосевы спасены!");}
                    EventChoosed[13]=false; Event1Menu=false; return;}
                if (EventChoosed[14]) {
                    ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventDecided[14][0]=true;
                    EventDecidedStr[14][0]=toString("Крестьяне начали по разному её тестировать \nи таки сломали. Вот раздолбаи!");}
                    if (ProbabInClicks>=2) {EventDecided[14][3]=true;
                    EventDecidedStr[14][3]=toString("Немного повозившись с артефактом, \nони догадались в чем его свойство \nи вернули вам.");
                    n2ProbabInClicks=rand()%20;
                    if (Artifacts[n2ProbabInClicks]) {ResourcesQuantity[0]+=100;}
                    if (Artifacts[n2ProbabInClicks]==false) {Artifacts[n2ProbabInClicks]=true;}}
                    EventChoosed[14]=false; Event1Menu=false; return;}
                if (EventChoosed[15]){ResourcesQuantity[2]=0; ResourcesQuantity[7]=0; EventChoosed[15]=false; Event1Menu=false; return;}
                if (EventChoosed[16]){EventChoosed[16]=false; Event1Menu=false; return;}
                if (EventChoosed[17]){ResourcesQuantity[7]+=10; ResourcesQuantity[9]+=10; EventChoosed[16]=false; Event1Menu=false; return;}
                if (EventChoosed[18]){if (MolitvAretikusu>=10) {
                    EventDecided[18][3]=true;
                    EventDecidedStr[18][3]=toString("Дракон, только приземлившись, осмотрелся, \nнад чем то подумал, и улетел. \nСтранно, конечно, но слава Великому Аретикусу!");
                    EventChoosed[18]=false; Event1Menu=false; return;}
                    else {
                    EventDecided[18][3]=true;
                    EventDecidedStr[18][3]=toString("Дракон не тронул жителей, но сожрал часть \nлошадей и забрал все золото и рубины из \nказны.");
                    ResourcesQuantity[0]=0;
                    ResourcesQuantity[8]=0;
                    if (ResourcesQuantity[9]>=20) {ResourcesQuantity[9]-=20;} else {ResourcesQuantity[9]=0;}
                    EventChoosed[18]=false; Event1Menu=false; return;}}

                if (EventChoosed[19]){
                    EventDecided[19][3]=true;
                    EventDecidedStr[19][3]=toString("Огр вскрыл пару домов, сьел людей которых \nтам нашел, выпил всё вино и угнал десяток \nлошадей, после чего вернулся в холмы.");
                    ResourcesQuantity[7]=0;
                    if (ResourcesQuantity[9]>=10) {ResourcesQuantity[9]-=10;} else {ResourcesQuantity[9]=0;}
                    if (ResourcesQuantity[1]>=10) {ResourcesQuantity[1]-=10;} else {ResourcesQuantity[1]=0;}
                     for (int i=0; i<2; i++){
                    n2ProbabInClicks=1+rand()%8; n3ProbabInClicks=1+rand()%5;
                    BabaxCoordinates[n2ProbabInClicks][n3ProbabInClicks]=true;
                    if ((City[n2ProbabInClicks][n3ProbabInClicks]->getCost()==1)&&(City[n2ProbabInClicks][n3ProbabInClicks]!=City[1][1])){
                    delete City[n2ProbabInClicks][n3ProbabInClicks];
                    City[n2ProbabInClicks][n3ProbabInClicks] = new EmptyPlace();
                    }}
                    EventChoosed[19]=false; Event1Menu=false; return;}


                if (EventChoosed[20]){MolitvAretikusu++;
                    if (MolitvAretikusu>=5) {
                    EventDecided[20][0]=true;
                    EventDecidedStr[20][0]=toString("Молитвы возымели эффект и ураган прошел \nмимо! Слався Аретикус!");
                    EventChoosed[20]=false; Event1Menu=false; return;}
                    else {
                    EventDecided[20][0]=true;
                    EventDecidedStr[20][0]=toString("Молитвы не помогли и ураган прошел через \nгород, вызвав разрушения.");
                     for (int i=0; i<5; i++){
                    n2ProbabInClicks=1+rand()%8; n3ProbabInClicks=1+rand()%5;
                    BabaxCoordinates[n2ProbabInClicks][n3ProbabInClicks]=true;
                    if ((City[n2ProbabInClicks][n3ProbabInClicks]->getCost()==1)&&(City[n2ProbabInClicks][n3ProbabInClicks]!=City[1][1])){
                    delete City[n2ProbabInClicks][n3ProbabInClicks];
                    City[n2ProbabInClicks][n3ProbabInClicks] = new EmptyPlace();
                    }}
                    EventChoosed[20]=false; Event1Menu=false; return;}}

                if (EventChoosed[21]){
                    SosedLove++;
                    EventDecided[21][3]=true;
                    EventDecidedStr[21][3]=toString("Ваш сосед вас поблагодарил и передал вам \n100 монет.");
                    ResourcesQuantity[0]+=100;
                    EventChoosed[21]=false; Event1Menu=false; return;}
                if ((EventChoosed[22])&&(ResourcesQuantity[0]>=100)&&(ResourcesQuantity[1]>=10)&&(ResourcesQuantity[7]>=10)) {
                    PeopleLove--;
                    ResourcesQuantity[0]-=100; ResourcesQuantity[1]-=10; ResourcesQuantity[7]-=10;
                    EventChoosed[22]=false; Event1Menu=false; return;}
                if ((EventChoosed[23])&&(ResourcesQuantity[0]>=100)) {
                    ResourcesQuantity[0]-=100;
                    EventChoosed[23]=false; Event1Menu=false; return;}
                if ((EventChoosed[24])&&(ResourcesQuantity[0]>=50)) {
                    ResourcesQuantity[0]-=50;
                    ProbabInClicks=1+rand()%2;
                    if (ProbabInClicks==1) {EventDecided[24][0]=true;
                    EventDecidedStr[24][0]=toString("Получив такую значительную сумму, \nони согласились пойти к вам на службу.");
                    ArmyQuantity[0]+=1+rand()%5;
                    ArmyQuantity[4]+=1+rand()%5;
                    ArmyQuantity[8]+=1+rand()%5;
                    }
                    if (ProbabInClicks==2) {EventDecided[24][1]=true;
                    EventDecidedStr[24][1]=toString("Получив деньги, новоприобретенные вояки \nушли праздновать и не вернулись. \nМожет оно и к лучшему.");}
                    EventChoosed[24]=false; Event1Menu=false; return;}
                 if (EventChoosed[25]) {EventChoosed[25]=false; Event1Menu=false; return;}

            } //end of left option click

            if ((ClickX>=520)&&(ClickX<=775)&&(ClickY>=380)&&(ClickY<=435)){
                if ((EventChoosed[1])&&(ResourcesQuantity[0]>=30)){
                    ResourcesQuantity[0]-=30; ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventBlocked[1]=true;}
                    EventDecided[1][0]=true;
                    EventDecidedStr[1][0]=toString("Неизвестно, получилось ли. \nОстается лишь ждать что они не вернутся.");
                    EventChoosed[1]=false; Event1Menu=false; return;}
                if ((EventChoosed[2])&&(ResourcesQuantity[0]>=25)){
                    ResourcesQuantity[0]-=25; ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventDecided[2][0]=true;
                    EventDecidedStr[2][0]=toString("Расследование выявило что вы сами \nвиноваты и где-то посеяли эти деньги.");}
                    if (ProbabInClicks==2) {EventDecided[2][1]=true; ResourcesQuantity[0]+=EventInt[2];
                    EventDecidedStr[2][1]=toString("Расследование выявило что виноват \nваш управляющий - он воровал деньги \nиз вашей казны! \nЕго казнили, деньги вернули.");}
                    if (ProbabInClicks==3) {EventDecided[2][2]=true; ResourcesQuantity[1]+=5;
                    EventDecidedStr[2][2]=toString("Мы нашли виновных! Группа пьянчуг \nнашла выроненный вами кошель и не вернула,\n а весь спустила на выпивку и шлюх! \nМы их задержали и определили этих пятерых \nв крепостные.");}
                    EventChoosed[2]=false; Event1Menu=false; return;}
                if (EventChoosed[3]){
                    ResourcesQuantity[0]+=EventInt[3]; PeopleLove-=3;
                    EventChoosed[3]=false; Event1Menu=false; return;}
                if (EventChoosed[4]){ArmyQuantity[8]+=5;
                    EventChoosed[4]=false; Event1Menu=false; return;}
                if (EventChoosed[5]){
                    ProbabInClicks=1+rand()%5;
                    if (ProbabInClicks==5) {EventDecided[5][0]=true; ResourcesQuantity[5]+=10;
                    EventDecidedStr[5][0]=toString("Ваши поданные нашли метеорит и \nпринесли его в город. (+10 железа)");}
                    if ((ProbabInClicks<=2)&&(ResourcesQuantity[1]>=5)) {EventDecided[5][0]=true; ResourcesQuantity[1]-=5;
                    EventDecidedStr[5][0]=toString("Ваши подданные ушли и не вернулись. \n(-5 крестьян)"); WoodStoneWorkers();}
                    else if ((ProbabInClicks==2)&&(ResourcesQuantity[1]<5)&&((ManExWood>=5)||(ManExStone>=5))){
                        if (ManExWood>=5) {ManExWood-=5;} else {ManExStone-=5;}
                        EventDecided[5][0]=true;
                        EventDecidedStr[5][0]=toString("Ваши подданные ушли и не вернулись. \n(-5 крестьян)"); WoodStoneWorkers();}
                    if (ProbabInClicks==3) {EventDecided[5][0]=true; ResourcesQuantity[8]+=5;
                    EventDecidedStr[5][0]=toString("Метеорит был полон драгоценных камней! \n(+5 драг. камней)");}
                    if (ProbabInClicks==4) {EventDecided[5][0]=true; PrincessLove++;
                    EventDecidedStr[5][0]=toString("Метеорит оказался дешевым, но очень \nкрасивым камнем. Хорошей идеей было \nпослать его принцессе, что вы и сделали, \nзаработав её благосклонность.");}
                    EventChoosed[5]=false; Event1Menu=false; return;}
                if (EventChoosed[6]){
                    if ((ArmyQuantity[3]>0)||(ArmyQuantity[7]>0)||(ArmyQuantity[11]>0)||(ArmyQuantity[14]>0)||(ArmyQuantity[15]>0)){
                        EventDecided[6][0]=true;
                        EventDecidedStr[6][0]=toString("Ваш лучший воин победил Великого Вавара! \nОн держит свое слово и дает вам один из \nсвоих артефактов.");
                        ProbabInClicks=rand()%10; //random artifact
                        if (Artifacts[ProbabInClicks]) {ResourcesQuantity[0]+=100;}
                        if (Artifacts[ProbabInClicks]==false) {Artifacts[ProbabInClicks]=true;}}
                    else if ((ArmyQuantity[12]>0)||(ArmyQuantity[13]>0)){
                        EventDecided[6][1]=true; ResourcesQuantity[8]++;
                        EventDecidedStr[6][1]=toString("Ваш лучший воин схлестнулся с Ваваром, \nто нанося точные удары, то парируя его выпады.\
                        \nНо никто не мог взять верх в этом поединке. \nСилы были равны. Не смотря на это, за хороший \nбой, Вавар дал вам в награду Рубин.");}
                    else {
                        EventDecided[6][2]=true; ResourcesQuantity[0]-=30;
                        EventDecidedStr[6][2]=toString("Даже самый лучший из тех, кого вы могли \nвыставить, проиграл Великому Вавару Воину. \
                        \nТот не стал добивать его, но потребовал от \nвас платы. Вам пришлось уступить Великому \nВавару и заплатить ему 30 монет.");}
                       EventChoosed[6]=false; Event1Menu=false; return;}
                if (EventChoosed[7]){ResourcesQuantity[0]+=ResourcesQuantity[9]*(PriceHorses/2); ResourcesQuantity[9]=0; SosedLove--;
                    EventChoosed[7]=false; Event1Menu=false; return;}
                if ((EventChoosed[8])&&(ResourcesQuantity[0]>=150)){
                    ResourcesQuantity[0]-=150; ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventDecided[8][0]=true; EventDecidedStr[8][0]=toString("Это оказался редкий артефакт!");
                    n2ProbabInClicks=rand()%20; //random artifact
                        if (Artifacts[n2ProbabInClicks]) {ResourcesQuantity[0]+=100;}
                        if (Artifacts[n2ProbabInClicks]==false) {Artifacts[n2ProbabInClicks]=true;}}
                    if (ProbabInClicks==2) {EventDecided[8][1]=true; ResourcesQuantity[0]+=150;
                    ResourcesQuantity[8]++; ResourcesQuantity[12]++; ResourcesQuantity[14]++;
                    EventDecidedStr[8][1]=toString("Он вас обманул! Шарлатана схватили, \nденьги вернули, а при себе у него еще оказался \nрубин, меч и доспех!");}
                    if (ProbabInClicks==3) {EventDecided[8][2]=true;
                    EventDecidedStr[8][2]=toString("Предмет оказался пустышкой, а этот \nобманщик успел скрыться, раньше чем \nвы его раскусили! Вот гаденыш!");}
                    EventChoosed[8]=false; Event1Menu=false; return;}
                if (EventChoosed[9]){
                    ProbabInClicks=1+rand()%2; MolitvAretikusu++;
                    if (ProbabInClicks==1) {EventDecided[9][0]=true;
                    EventDecidedStr[9][0]=toString("Слава Аретикусу, Метеорит упал в стороне!");}
                    if (ProbabInClicks==2) {EventDecided[9][1]=true;
                    EventDecidedStr[9][1]=toString("Метеорит упал прямо на город. ");
                    for (int i=0; i<3; i++){
                    n2ProbabInClicks=rand()%8; n3ProbabInClicks=rand()%5;
                    BabaxCoordinates[n2ProbabInClicks][n3ProbabInClicks]=true;
                    if ((City[n2ProbabInClicks][n3ProbabInClicks]->getCost()==1)&&(City[n2ProbabInClicks][n3ProbabInClicks]!=City[1][1])){
                    delete City[n2ProbabInClicks][n3ProbabInClicks];
                    City[n2ProbabInClicks][n3ProbabInClicks] = new EmptyPlace();}}}
                    EventChoosed[9]=false; Event1Menu=false; return;}
                if (EventChoosed[10]) {ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventDecided[10][0]=true;
                    EventDecidedStr[10][0]=toString("Торговцы скинулись и отремонтировали \nдорогу за свои деньги.");}
                    if (ProbabInClicks==2) {EventDecided[10][1]=true;
                    for (int i=3; i<14; i++){PricesResources[i]++;}
                    EventDecidedStr[10][1]=toString("Чтобы компенсировать затраты, \nторговцы подняли цены на продаваемые \nвам ресурсы.");}
                    if (ProbabInClicks==3) {EventDecided[10][2]=true;
                    for (int i=0; i<14; i++){OfferResources[i]/=2; DemandResources[i]/=2;}
                    EventDecidedStr[10][2]=toString("Часть торговцев решила торговать у вашего \nсоседа и ушла с рынка.");}
                    EventChoosed[10]=false; Event1Menu=false; return;}
                if (EventChoosed[11]) {ProbabInClicks=1+rand()%2;
                    if (ProbabInClicks==1) {EventDecided[11][1]=true;
                    EventDecidedStr[11][1]=toString("Менестрель обиделся и на концерте \nпоносил вас последними словами. \nНарод вас невзлюбил.");
                    PeopleLove-=3;}
                    if (ProbabInClicks==2) {EventDecided[11][2]=true;
                    EventDecidedStr[11][2]=toString("Менестрель спокойно воспринял отказ \nи провел выступление без вашей помощи. \nконцерт немного поднял настроение вашим \nгражданам.");
                    PeopleLove++;}
                    EventChoosed[11]=false; Event1Menu=false; return;}
                if (EventChoosed[12]) {ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventDecided[12][1]=true;
                    EventDecidedStr[12][1]=toString("Комары покусали-покусали, да и улетели. \nОбошлось.");}
                    if (ProbabInClicks>=2) {EventDecided[12][2]=true;
                    EventDecidedStr[12][2]=toString("Комары начали терроризировать население и \nзадолбали даже вас. Часть населения \nпокинула город. Ну а комары, напившись \nкрови, улетели сами.");
                    PeopleLove--;
                    if (ManExWood>=10) {ManExWood-=10;}
                    else if (ManExStone>=10) {ManExStone=10;}
                    else if (ResourcesQuantity[1]<=10){ResourcesQuantity[1]=0;} else {ResourcesQuantity[1]-=10;}}
                    EventChoosed[12]=false; Event1Menu=false; return;}
                if ((EventChoosed[13])&&(ResourcesQuantity[0]>=100)) {
                    ResourcesQuantity[0]-=100;
                    ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventDecided[13][1]=true;
                    EventDecidedStr[13][1]=toString("Жрецы распылили какую то дрянь и \nпосевы были спасены - саранча от нее \nумирала сотнями. Но этот яд попал в наши \nамбары и вся еда стала испорчена.");
                    ResourcesQuantity[2]=0;}
                    if (ProbabInClicks>=2) {EventDecided[13][2]=true;
                    EventDecidedStr[13][2]=toString("Жрецы распылили какой то порошок и \nсаранча начала массово помирать. \nФермы спасены!");
                    PeopleLove++;}
                    EventChoosed[13]=false; Event1Menu=false; return;}
                if (EventChoosed[14]) {
                    ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventDecided[14][1]=true;
                    if (CanLovePrincess) {EventDecidedStr[14][1]=toString("Это оказалось «Зелье Смены Пола». \nВы превратились в девушку! \nИ хоть, власти вы не потеряли, \nжениться на принцессе вы уже не сможете.");
                    Artifacts[19]=true; CanLovePrincess=false;}
                    else {EventDecidedStr[14][1]=toString("Это оказалось «Зелье Смены Пола». \nВы превратились обратно в мужчину! \nНу, Слава Аретикусу! \nКак хорошо быть мужиком!");
                    Artifacts[19]=true; CanLovePrincess=true;}}
                    if (ProbabInClicks==2) {EventDecided[14][2]=true;
                    EventDecidedStr[14][2]=toString("Ну уж нет, чего гляди, сопрут или сломают! \nВы сами разобрались как он работает и \nдобавили его в свою коллекцию.");
                    n2ProbabInClicks=rand()%20; //random artifact
                        if (Artifacts[n2ProbabInClicks]) {ResourcesQuantity[0]+=100;}
                        if (Artifacts[n2ProbabInClicks]==false) {Artifacts[n2ProbabInClicks]=true;}}
                    if (ProbabInClicks==3) {EventDecided[14][2]=true;
                    EventDecidedStr[14][2]=toString("Артефакт оказался редким произведением \nискусства, но к сожалению, пустышкой. \nВам оно ни к чему, а вот принцессу порадует \nи вы отправили это во дворец.");
                    PrincessLove++;}
                    EventChoosed[14]=false; Event1Menu=false; return;}
                if ((EventChoosed[15])&&(ResourcesQuantity[0]>=100)) {
                    ResourcesQuantity[0]-=100;
                    EventDecided[15][0]=true;
                    EventDecidedStr[15][0]=toString("Жрецы смогли остановить распространение \nболезни. Обошлось без жертв.");
                    EventChoosed[15]=false; Event1Menu=false; return;}
                if ((EventChoosed[16])&&(ResourcesQuantity[0]>=50)) {
                    ResourcesQuantity[0]-=50;
                    ProbabInClicks=1+rand()%3;
                    if (ProbabInClicks==1) {EventDecided[16][0]=true; ArmyQuantity[1]+=10;
                    EventDecidedStr[16][0]=toString("10 лучников присоеденилось к вашей армии.");}
                    if (ProbabInClicks==2) {EventDecided[16][1]=true; ArmyQuantity[5]+=10;
                    EventDecidedStr[16][1]=toString("10 копейщиков присоеденилось к вашей армии.");}
                    if (ProbabInClicks==3) {EventDecided[16][2]=true; ArmyQuantity[9]+=10;
                    EventDecidedStr[16][2]=toString("10 мечников присоеденилось к вашей армии.");}
                    EventChoosed[16]=false; Event1Menu=false; return;}
                if ((EventChoosed[17])&&(ResourcesQuantity[0]>=100)) {
                    ResourcesQuantity[0]-=100;
                    ResourcesQuantity[7]+=10; ResourcesQuantity[9]+=10;
                    SosedLove++;
                    EventChoosed[17]=false; Event1Menu=false; return;}
                if (EventChoosed[18]) {ProbabInClicks=0;

                         for (int i=0; i<16; i++){
                            ProbabInClicks+=ArmyQuantity[i]*ArmyChars[0][i];}

                    if (Artifacts[7]){EventDecided[18][0]=true;
                    EventDecidedStr[18][0]=toString("Взяв свой волшебный щит, вы не побоялись \nбросить вызов самому дракону! \nТот, едва заметив щит, испуганно заревел \nи улетел прочь! \nЧистая, бескровная победа!");
                    PeopleLove+=2; EventBlocked[18]=true;
                    EventChoosed[18]=false; Event1Menu=false; return;}
                    else if (ProbabInClicks>=500) {EventDecided[18][1]=true;
                    EventDecidedStr[18][1]=toString("Вы вывели всю свою армию на бой с драконом!\n Бой был страшный, вы растеряли половину \nвойска, но убили таки Дракона! \nА саму тушу удалось продать за 500 золотых!");
                    ResourcesQuantity[0]+=500;
                    PrincessLove++;
                    for (int i=0; i<16; i++){
                            ArmyQuantity[i]=ArmyQuantity[i]/2;}
                    EventBlocked[18]=true;
                    EventChoosed[18]=false; Event1Menu=false; return;}
                    else {EventDecided[18][2]=true;
                    EventDecidedStr[18][2]=toString("Вы вывели всю свою армию на бой с \nчудовищем, но ваших сил не хватило чтобы \nодолеть его. Нажравшись мяса ваших солдат, \nоно вскрыло казну, забрало все золото \nи рубины и улетело.");
                    ResourcesQuantity[0]=0;
                    ResourcesQuantity[8]=0;
                    for (int i=0; i<16; i++){
                            ArmyQuantity[i]=0;}
                    EventChoosed[18]=false; Event1Menu=false; return;}}

                if (EventChoosed[19]) {ProbabInClicks=0;

                         for (int i=0; i<16; i++){
                            ProbabInClicks+=ArmyQuantity[i]*ArmyChars[0][i];}

                    if (Artifacts[7]){EventDecided[19][0]=true;
                    EventDecidedStr[19][0]=toString("Вы взяли свой магический щит и бросились \nв битву с огром! \
 Тот пытался вас размазать \nсвоей огромной дубиной, но вы ловко уходили \nот атак, делая выпады в ответ. \nСпустя 10 минут боя, вы вышли победителем! \nЖители ликуют, туша продана за 200 монет!");
                    PeopleLove+=1; PrincessLove++; ResourcesQuantity[0]+=200;
                    EventChoosed[19]=false; Event1Menu=false; return;}
                    else if (ProbabInClicks>=250) {EventDecided[19][1]=true;
                    EventDecidedStr[19][1]=toString("Вы вывели своих солдат на бой с огром! \nБой был страшный, но вам удалось одолеть \nчудовище, пусть и потерей нескольких солдат. \nЖители празднуют победу, а тушу удалось \nпродать за 200 монет!");
                    ResourcesQuantity[0]+=200; PrincessLove++;
                    for (int i=0; i<16; i++){
                            ArmyQuantity[i]=ArmyQuantity[i]*0.8;}
                    EventChoosed[19]=false; Event1Menu=false; return;}
                    else {EventDecided[19][2]=true;
                    EventDecidedStr[19][2]=toString("Вы вывели свою армию на бой с огром, но тот \nоказался сильнее и разбил ваше войско! \nНаевшись трупов ваших солдат, он выпил всё \nвино что нашел и ушел, забрав десяток \nлошадей с собой.");
                    ResourcesQuantity[7]=0;
                    if (ResourcesQuantity[9]>=10) {ResourcesQuantity[9]-=10;} else {ResourcesQuantity[9]=0;}
                    for (int i=0; i<16; i++){
                            ArmyQuantity[i]=0;}
                    EventChoosed[19]=false; Event1Menu=false; return;}}

                if (EventChoosed[20]){MolitvAretikusu--;
                    ProbabInClicks=1+rand()%2;
                    if (ProbabInClicks==1) {
                    EventDecided[20][0]=true;
                    EventDecidedStr[20][0]=toString("Молитвы возымели эффект и ураган прошел \nмимо! Слава богам!");
                    EventChoosed[20]=false; Event1Menu=false; return;}
                    if (ProbabInClicks==2) {
                    EventDecided[20][0]=true;
                    EventDecidedStr[20][0]=toString("Молитвы не помогли и ураган прошел через \nгород, вызвав разрушения.");
                    for (int i=0; i<5; i++){
                    n2ProbabInClicks=1+rand()%8; n3ProbabInClicks=1+rand()%5;
                    BabaxCoordinates[n2ProbabInClicks][n3ProbabInClicks]=true;
                    if ((City[n2ProbabInClicks][n3ProbabInClicks]->getCost()==1)&&(City[n2ProbabInClicks][n3ProbabInClicks]!=City[1][1])){
                    delete City[n2ProbabInClicks][n3ProbabInClicks];
                    City[n2ProbabInClicks][n3ProbabInClicks] = new EmptyPlace();
                    }}
                    EventChoosed[20]=false; Event1Menu=false; return;}}

                 if (EventChoosed[21]) {
                    SosedLove--;
                    ProbabInClicks=1+rand()%5;
                    if (ProbabInClicks==1) {EventDecided[21][0]=true;
                    EventDecidedStr[21][0]=toString("В сундуке оказались личные вещи ваши соседа, \nчереп собаки и портрет с его отцом, когда \nтот был жив. Вы передали их вашему соседу, \nно было видно что тот недоволен.");}
                    if (ProbabInClicks==2) {EventDecided[21][1]=true;
                    n2ProbabInClicks=1+rand()%500; if (Artifacts[1]){n2ProbabInClicks+=100;} ResourcesQuantity[0]+=n2ProbabInClicks;
                    string n2ProbabInClicksStr; n2ProbabInClicksStr=toString(n2ProbabInClicks);
                    EventDecidedStr[21][1]=toString("Сундук оказался полон золота и серебра! \nВы стале богаче на "+n2ProbabInClicksStr+" монет!");}
                    if (ProbabInClicks==3) {EventDecided[21][2]=true;
                    ResourcesQuantity[8]++; ResourcesQuantity[12]+=12;
                    EventDecidedStr[21][2]=toString("В сундуке нашлось десяток мечей, рубин \nи письмо, в котором некто советовал \nувеличить армию вашего соседа с 80 до \n100 человек, наняв еще десяток пехотинцев.");}
                    if (ProbabInClicks==4) {EventDecided[21][2]=true;
                    ResourcesQuantity[0]+=50;
                    EventDecidedStr[21][2]=toString("В сундуке нашелся мешочек с 50 монетами \nи доклад королевского советника о увеличении \nФеодальных Рыцарей в армии короля до 20, \nпехотинцев до 30 и выдачей кольчуг всем \nлучникам.");}
                    if (ProbabInClicks==5) {EventDecided[21][2]=true;
                    PrincessLove++;
                    EventDecidedStr[21][2]=toString("В сундуке был комплект королевских женских \nплатьев и туфель. Видимо, подарки принцессе.\
 \nВы их прикарманили и послали во дворец уже \nот своего имени, нечего вашему соседу на \nкоролевскую дочь засматриваться!");}
                    EventChoosed[21]=false; Event1Menu=false; return;}

                if (EventChoosed[22]) {
                    PirateBattle=true;
                    EventChoosed[22]=false; Event1Menu=false; return;}
                if (EventChoosed[23]) {
                    RobbersBattle=true;
                    EventChoosed[23]=false; Event1Menu=false; return;}
                if (EventChoosed[24]) {
                    BanditBattle=true;
                    EventChoosed[24]=false; Event1Menu=false; return;}
                if ((EventChoosed[25])&&(ResourcesQuantity[1]>=10)) {
                    ResourcesQuantity[1]-=10;
                    ProbabInClicks=1+rand()%2;
                    if (ProbabInClicks==1) {EventDecided[25][0]=true;
                    EventDecidedStr[25][0]=toString("Этот человек оказался работорговцем \nи сбежал из города вместе с девушками! \nНарод негодует и во всем винит вас!");
                    PeopleLove-=2;}
                    if (ProbabInClicks==2) {EventDecided[25][1]=true;
                    EventDecidedStr[25][1]=toString("Сутенер оказался честным человеком и все \nорганизовал как надо. Ну а вы получаете \nтеперь свою долю в доходах и можете \nбесплатно посещать сие заведение.");
                    BordelOpened++;}
                    EventChoosed[25]=false; Event1Menu=false; return;}

        return;} //end of right option click
        }//end of all buttons in event clicks

        if ((Event2Menu)&&(Event3Menu==false)){ //second event buttons and appearance
            if ((ClickX>=275)&&(ClickX<=530)&&(ClickY>=430)&&(ClickY<=485)){
                Event2Menu=false;
                return;}
            if ((ClickX>=570)&&(ClickX<=825)&&(ClickY>=430)&&(ClickY<=485)){
                Event2Menu=false;
                return;}
        }

        if (Event3Menu){ //third event buttons and appearance
            if ((ClickX>=275+50)&&(ClickX<=430+50)&&(ClickY>=430+50)&&(ClickY<=485+50)){
                Event3Menu=false;
                return;}
            if ((ClickX>=570+50)&&(ClickX<=825+50)&&(ClickY>=430+50)&&(ClickY<=485+50)){
                Event3Menu=false;
                return;}
        }

        for (int i=0; i<=TotalPossibleEvents; i++) //drawing responces for events
        {for (int j=0; j<4; j++)
            {if ((EventDecided[i][j])||(SosedLoveWarning)||(ponyal)||(neponyal)||(DificultyIncrease)){ //responce to event buttons and appearance
            if ((ClickX>=225)&&(ClickX<=480)&&(ClickY>=380)&&(ClickY<=435)){
                EventDecided[i][j]=false;
                GoodBadEventDraw=false;
                SosedLoveWarning=false; SosedLoveWarningDone=true; ponyal=false; neponyal=false; DificultyIncrease=false;
                return;}
            if ((ClickX>=520)&&(ClickX<=775)&&(ClickY>=380)&&(ClickY<=435)){
                EventDecided[i][j]=false;
                GoodBadEventDraw=false;
                SosedLoveWarning=false; SosedLoveWarningDone=true; ponyal=false; neponyal=false; DificultyIncrease=false;
                return;}
        }}}

         if (StartTextView){
            if ((ClickX>=235)&&(ClickX<=490)&&(ClickY>=530)&&(ClickY<=585)){
                StartTextView=false; ponyal=true; ResourcesQuantity[0]++;}
            if ((ClickX>=530)&&(ClickX<=790)&&(ClickY>=530)&&(ClickY<=585)){
                StartTextView=false; neponyal=true;}
         }

         if (VictoryStatus){
            if ((ClickX>=235)&&(ClickX<=490)&&(ClickY>=530)&&(ClickY<=585)){
                VictoryStatus=false; FinalDecisions=true;}
            if ((ClickX>=530)&&(ClickX<=790)&&(ClickY>=530)&&(ClickY<=585)){
                VictoryStatus=false; FinalDecisions=true;}
            return;
         }

         if (FinalDecisions){
            if ((ClickX>=210)&&(ClickX<=810)&&(ClickY>=118)&&(ClickY<=190)){
                if ((CanLovePrincess)&&(WeddingPoints==2)){
                YouWonWedding=true; FinalDecisions=false;} return;}
            if ((ClickX>=210)&&(ClickX<=810)&&(ClickY>=195)&&(ClickY<=265)){
                if ((WeddingPoints<=1)&&(CanLovePrincess)){SosedLove=0; SosedBattleStart=true; FinalDecisions=false;} return;}
            if ((ClickX>=210)&&(ClickX<=810)&&(ClickY>=273)&&(ClickY<=340)){
                MonarchLove=0; FinalDecisions=false; NoMore=true; return;}
            if ((ClickX>=210)&&(ClickX<=810)&&(ClickY>=352)&&(ClickY<=415)){
                if (Artifacts[18]){Artifacts[18]=false; n2ProbabInClicks=rand()%2;
                if (n2ProbabInClicks==0) {FinalStr=toString("Принцесса выпила зелье и влюбилась в вас, \nизменив свое решение в вашу пользу.");
                PrincessLove=10; FinalOption=true;}
                if (n2ProbabInClicks==1) {FinalStr=toString("Вроде все удалось провернуть, но никаких \nсподвижек\
 со стороны принцессы замечено \nне было. Однако, вы были вызваны во дворец к \nкоролю, он очень сильно желает вас видеть.");
                RiskyFinal=true;}
                FinalDecisions=false; } return;}
            if ((ClickX>=210)&&(ClickX<=810)&&(ClickY>=431)&&(ClickY<=490)){
                if ((MolitvAretikusu>=10)&&(FinalMolitvaDone==false)){n2ProbabInClicks=rand()%4;
                if ((n2ProbabInClicks==3)&&(CanLovePrincess==false)) {FinalStr=toString("Аретикус снизошел до ваших проблем и вернул \nвам ваш мужской пол,\
 заодно кой чего \nподправив во внешности, чтобы вы нравились \nженщинам побольше.");
                CanLovePrincess=true; PrincessLove+=2; FinalOption=true;} else {n2ProbabInClicks=rand()%3;}
                if (n2ProbabInClicks==0) {FinalStr=toString("Аретикус решил снизойти к своему адепту и, \nлегкая точечная амнезия изменила отношение \nкороля к вам.");
                n3ProbabInClicks=1+rand()%2; MonarchLove+=n3ProbabInClicks; if (MonarchLove>5){MonarchLove=5;} FinalOption=true; }
                if (n2ProbabInClicks==1) {FinalStr=toString("Аретикус явил чудо и даровал вам сундук с \n1000 монет."); ResourcesQuantity[0]+=1000; FinalOption=true;}
                if (n2ProbabInClicks==2) {FinalStr=toString("Аретикус не смог повлиять на решения \nкоролевской семьи, но,\
 оставил вам в \nуслужение 20 тевтонских рыцарей, дабы вы \nмогли противостоять королю."); ArmyQuantity[11]+=20; FinalOption=true;}

                FinalDecisions=false; FinalMolitvaDone=true;}  return;
                }
            if ((ClickX>=210)&&(ClickX<=810)&&(ClickY>=510)&&(ClickY<=565)){
                FinalDecisions=false; return;}
            }

        if ((FinalOption)||(RiskyFinal)){
//            if ((ClickX>=780)&&(ClickX<=797)&&(ClickY>=150)&&(ClickY<=165)){
//                FinalOption=false; return;}
            if ((ClickX>=225)&&(ClickX<=480)&&(ClickY>=380)&&(ClickY<=435)){
                if (FinalOption) {FinalOption=false;
                    if (SecretFinal[0]){YouLostGame=true;}
                    if (SecretFinal[1]){YouLostGame=true;}
                    if (SecretFinal[2]){YouWonGame=true;}
                    if ((SecretFinal[0]==false)&&(SecretFinal[1]==false)&&(SecretFinal[2]==false)){
                    VictoryStatus=true;}}
                if (RiskyFinal) {n3ProbabInClicks=rand()%2;
                    if (n3ProbabInClicks==0) {
                        RiskyFinal=false; FinalOption=true; FinalStr=toString("Ваша диверсия была раскрыта и, приехав в \nстолицу,\
 вы тут же очутились в темнице, \nа потом и на плахе. \nУвы, это конец. \n\nВы проиграли.");
                    SecretFinal[0]=true;}
                    if ((n3ProbabInClicks==1)&&(CanLovePrincess)) {
                        RiskyFinal=false; FinalOption=true; FinalStr=toString("Приехал в столицу, вы тут же очутились в \nтемнице\
 по приказу короля. Вы провели в неве-\nдении сутки, пока, глубокой ночью, вас не \nпосетил сам монарх, с горящими от любви \nглазами и немым\
 слугой. Похоже, у короля был \nплан как воплотить свои желания и не дать \nпоползти слухам о мужеложстве... ");
                    SecretFinal[1]=true;}
                    if ((n3ProbabInClicks==1)&&(CanLovePrincess==false)) {
                        RiskyFinal=false; FinalOption=true; FinalStr=toString("По приезду в столицу вы тут же были приглашены\
 \nв покои короля, где тот, с горящими от любви \nглазами, предложил вам стать его женой. \nОт такого предложения нельзя отказаться,\
 \nи, хотелось вам или нет, вы стали Королевой. \nПоздравляем! Вы нашли секретную победу! :D");
                    SecretFinal[2]=true;}
                }
                return;}
            if ((ClickX>=520)&&(ClickX<=775)&&(ClickY>=380)&&(ClickY<=435)){
                if (FinalOption) {FinalOption=false;
                    if (SecretFinal[0]){YouLostGame=true;}
                    if (SecretFinal[1]){YouLostGame=true;}
                    if (SecretFinal[2]){YouWonGame=true;}
                    if ((SecretFinal[0]==false)&&(SecretFinal[1]==false)&&(SecretFinal[2]==false)){
                    VictoryStatus=true;}}
                if (RiskyFinal) {RiskyFinal=false; VictoryStatus=true;}
                return;}
        }


         if ((DrawBuildingArea==false)&&(DrawDestroyArea==false)&&(ForgeChoosed==false)&&(Event1Menu==false)&&(Event2Menu==false)&&(Event3Menu==false)
            &&(GoodBadEventDraw==false)&&(InterfaceInteraction[0]==false)&&(InterfaceInteraction[1]==false)&&(InterfaceInteraction[2]==false)
             &&(InterfaceInteraction[3]==false)&&(InterfaceInteraction[4]==false)&&(InterfaceInteraction[5]==false)) { //Finding forge in the map and deactivation of buildings
                if ((ClickX<=1000)&&(ClickY>=40)&&(ClickY<650)){
            ForgeX = 1+ClickX/125;
            ForgeY = 1+(ClickY-40)/125;
            if ((City [ForgeX][ForgeY]->typeCheck())==11){ForgeChoosed=true;}
            else if (event.mouseButton.button==Mouse::Right) {DeactivatedByUser[ForgeX][ForgeY]=!DeactivatedByUser[ForgeX][ForgeY];}
            return;}
        return;}



        if (ForgeChoosed){
            if ((ClickX>=500)&&(ClickX<=755)&&(ClickY>=210)&&(ClickY<265)){ //bows
                for (int i=0; i<5; i++) {ForgeMood[ForgeX][ForgeY][i]=false;}
                ForgeMood[ForgeX][ForgeY][1]=true;}
            if ((ClickX>=500)&&(ClickX<=755)&&(ClickY>=280)&&(ClickY<335)){ //spears
                for (int i=0; i<5; i++) {ForgeMood[ForgeX][ForgeY][i]=false;}
                ForgeMood[ForgeX][ForgeY][2]=true;}
            if ((ClickX>=500)&&(ClickX<=755)&&(ClickY>=350)&&(ClickY<405)){ //swords
                for (int i=0; i<5; i++) {ForgeMood[ForgeX][ForgeY][i]=false;}
                ForgeMood[ForgeX][ForgeY][3]=true;}
            if ((ClickX>=500)&&(ClickX<=755)&&(ClickY>=420)&&(ClickY<475)){ //armor
                for (int i=0; i<5; i++) {ForgeMood[ForgeX][ForgeY][i]=false;}
                ForgeMood[ForgeX][ForgeY][4]=true;}
            if ((ClickX>=150)&&(ClickX<=400)&&(ClickY>=525)&&(ClickY<580)){ //NOTHING
                for (int i=0; i<5; i++) {ForgeMood[ForgeX][ForgeY][i]=false;}
                ForgeMood[ForgeX][ForgeY][0]=true; ForgeChoosed=false;}
            if ((ClickX>=500)&&(ClickX<=755)&&(ClickY>=525)&&(ClickY<580)){ //finish button
                ForgeChoosed=false;}
        return;} //end of forge menu clicks





    } //end mouse click






} // end function

void ObrabotkaCoordinatMoved (Event event){
    float ClickX = event.mouseMove.x;
    float ClickY = event.mouseMove.y;
    ClickX=ClickX/WindowWidthMoved*1300;
    ClickY=ClickY/WindowHeightMoved*700;
    TestMoved=false;
    for (int i=0; i<9; i++){
        for (int j=0; j<4; j++){
            ResourceMoved[i][j]=false;
        }

    if (InterfaceInteraction[2]){ //Economy menu interaction
        if ((ClickX>=0)&&(ClickX<=900)&&(ClickY>=85)&&(ClickY<265)){ //whole menu area
            MovedCoordX = ClickX/100;
            MovedCoordY = (ClickY-85)/45;
            ResourceMoved[MovedCoordX][MovedCoordY]=true;
            TestMoved=true;
        }}


    }
} //end of MovedFunction

/*


*/
