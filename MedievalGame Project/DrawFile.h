
 window.clear(Color(ColorR,ColorG,ColorB));






        //TERRAIN DRAW
    window.draw(SpGrass);

    for (int i=0; i<4; i++){ //creating Forests, to review in the end
        switch (i){
                case 0:
                for (int j=0; j<5; j++){
                SpForest.setPosition(830+j*25, 510);
                SpForest.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;
                case 1:
                for (int j=0; j<5; j++){
                SpForest.setPosition(700+j*25, 510);
                SpForest.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;
                case 2:
                for (int j=0; j<5; j++){
                SpForest.setPosition(830+j*25, 390);
                SpForest.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;
                case 3:
                for (int j=0; j<5; j++){
                SpForest.setPosition(700+j*25, 390);
                SpForest.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;
//                case 4:
//                for (int j=0; j<5; j++){
//                SpForest.setPosition(570+j*25, 510);
//                SpForest.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
//                window.draw(SpForest);}
//                break;}
                }
            }

    for (int i=0; i<4; i++){ //creating Hills, to review in the end
        switch (i){
                case 0:
                for (int j=0; j<2; j++){
                SpHills.setPosition(870, 0+j*20);
                SpHills.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
                window.draw(SpHills);}
                break;
                case 1:
                for (int j=0; j<2; j++){
                SpHills.setPosition(745, 0+j*20);
                SpHills.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
                window.draw(SpHills);}
                break;
                case 2:
                for (int j=0; j<2; j++){
                SpHills.setPosition(870, 150+j*20);
                SpHills.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
                window.draw(SpHills);}
                break;
                case 3:
                for (int j=0; j<2; j++){
                SpHills.setPosition(745, 150+j*20);
                SpHills.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
                window.draw(SpHills);}
                break;
//                case 4:
//                for (int j=0; j<2; j++){
//                SpHills.setPosition(620, 0+j*20);
//                SpHills.setTextureRect(sf::IntRect(0+j*125, 0, 125, 128));
//                window.draw(SpHills);}
//                break;
                }

            }

    for(int i=1; i<9; i++){  //WHOLE CITY DRAW
        for(int j=1; j<6; j++){
        City[i][j]->setPosition(0+125*(i-1), 40+125*(j-1));
        if (City[i][j]->typeCheck()==15){City[i][j]->setPosition(0+125*(i-1), 80+125*(j-1));}
        window.draw(*City[i][j]);}}

 for (int i=0; i<9; i++){
        for (int j=0; j<6; j++){
            if (BabaxCoordinates[i][j]){
                    if (BabaxCoordinates[1][1]) {break;}
                    SpBabax.setPosition(40+(i*125)-125, 70+(j*125)-125);
                    window.draw(SpBabax);}
            if (CancelCoordinates[i][j]){
                SpCancel.setPosition(30+(i*125)-125, 50+(j*125)-125);
                window.draw(SpCancel);}

            if (DeactivatedByUser[i][j]){
                SpCancel2.setPosition(30+(i*125)-125, 50+(j*125)-125);
                window.draw(SpCancel2);}
            }
        }




    SpBuildingLine.setPosition(50, 525);//crossroad draw
    SpBuildingLine.setTextureRect(sf::IntRect(3000, 0, 100, 128));
    window.draw(SpBuildingLine);



    for (int i=0; i<ForestNumber; i++){ //Forest above buildings
        switch (i){
                case 0:
                SpForest.setPosition(830, 510);
                SpForest.setTextureRect(sf::IntRect(0, 0, 125, 128));
                window.draw(SpForest);
                for (int j=0; j<2; j++){
                SpForest.setPosition(905+j*25, 510);
                SpForest.setTextureRect(sf::IntRect(375+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;
                case 1:
                SpForest.setPosition(700, 510);
                SpForest.setTextureRect(sf::IntRect(0, 0, 125, 128));
                window.draw(SpForest);
                for (int j=0; j<2; j++){
                SpForest.setPosition(775+j*25, 510);
                SpForest.setTextureRect(sf::IntRect(375+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;
                case 2:
                SpForest.setPosition(830, 390);
                SpForest.setTextureRect(sf::IntRect(0, 0, 125, 128));
                window.draw(SpForest);
                for (int j=0; j<2; j++){
                SpForest.setPosition(905+j*25, 390);
                SpForest.setTextureRect(sf::IntRect(375+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;
                case 3:
                SpForest.setPosition(700, 390);
                SpForest.setTextureRect(sf::IntRect(0, 0, 125, 128));
                window.draw(SpForest);
                for (int j=0; j<2; j++){
                SpForest.setPosition(775+j*25, 390);
                SpForest.setTextureRect(sf::IntRect(375+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;
                case 4:
                SpForest.setPosition(830, 270);
                SpForest.setTextureRect(sf::IntRect(0, 0, 125, 128));
                window.draw(SpForest);
                for (int j=0; j<2; j++){
                SpForest.setPosition(905+j*25, 270);
                SpForest.setTextureRect(sf::IntRect(375+j*125, 0, 125, 128));
                window.draw(SpForest);}
                break;}

            }



        // INTERFACE DRAW


    for (int i=0; i<10; i++){ //basic resources quantity draw
        ResourcesQText.setString(ResourcesQuantityStr[i]);
        ResourcesQText.setPosition(40+100*i, 0);
        window.draw(ResourcesQText);
        }



    for (int i=0; i<6; i++){ //Text in interface menu buttons draw
        MenuButText.setString(MenuButStr[i]);
        switch (i){
            case 0: MenuButText.setPosition(1008, 160);
            break;
            case 1: MenuButText.setPosition(1155, 160);
            break;
            case 2: MenuButText.setPosition(1008, 220);
            break;
            case 3: MenuButText.setPosition(1155, 220);
            break;
            case 4: MenuButText.setPosition(1002, 280);
            break;
            case 5: MenuButText.setPosition(1155, 280);
            break;
            }

        window.draw(MenuButText);
        }


    window.draw(SpMonarchRep);
    window.draw(MonarchRepText);
    window.draw(SpMenuBut);
    window.draw(SpColorMenu);
//    SpEndTurnButton.setPosition(1015, 600);
//    window.draw(SpEndTurnButton);

    rectangle1.setSize(sf::Vector2f(270, ((1.01f-AllTime.asSeconds()+CountedTime.asSeconds())*1/2*60)));
    rectangle1.setOutlineThickness(0);
    rectangle1.setFillColor(Color(127,127,127));
    rectangle1.setPosition(1015, 600);
    if (((AllTime-CountedTime)<=seconds(1.01f))){window.draw(rectangle1);}

    rectangle2.setSize(sf::Vector2f(270, ((1.01f-AllTime.asSeconds()+CountedTime.asSeconds())*1/2*60)));
    rectangle2.setOutlineThickness(0);
    rectangle2.setFillColor(Color(127,127,127));
    rectangle2.setPosition(1015, 660-rectangle2.getSize().y);
    if (((AllTime-CountedTime)<=seconds(1.01f))){window.draw(rectangle2);}

    rectangle3.setSize(sf::Vector2f(((1.01f-AllTime.asSeconds()+CountedTime.asSeconds())*1/2*270), 60));
    rectangle3.setOutlineThickness(0);
    rectangle3.setFillColor(Color(127,127,127));
    rectangle3.setPosition(1015, 600);
    if (((AllTime-CountedTime)<=seconds(1.01f))){window.draw(rectangle3);}

    rectangle4.setSize(sf::Vector2f(((1.01f-AllTime.asSeconds()+CountedTime.asSeconds())*1/2*270), 60));
    rectangle4.setOutlineThickness(0);
    rectangle4.setFillColor(Color(127,127,127));
    rectangle4.setPosition(1285-rectangle4.getSize().x, 600);
    if (((AllTime-CountedTime)<=seconds(1.01f))){window.draw(rectangle4);}

    rectangleMain.setSize(sf::Vector2f(270, 60));
    rectangleMain.setOutlineColor(sf::Color::Black);
    rectangleMain.setFillColor(sf::Color::Transparent);
    rectangleMain.setOutlineThickness(3);
    rectangleMain.setPosition(1015, 600);
    window.draw(rectangleMain);

    GlobalText.setString("Конец хода");//end turn menu button
    GlobalText.setPosition(1070, 615);
    window.draw(GlobalText);
    window.draw(CountTurnText);

    if(DrawBuildingArea){window.draw(SpBuildingArea);}
    if (DrawDestroyArea){window.draw(SpBuildingArea);}

    if (ForgeChoosed){
        SpForgeMenu.setPosition(150, 150);
        window.draw(SpForgeMenu);
        GlobalText.setString(ForgeTextStr[0]);
        GlobalText.setPosition(160, 165);
        window.draw(GlobalText);
        GlobalText.setString("10      + 5       = 10"); //bows price
        GlobalText.setPosition(160, 230);
        window.draw(GlobalText);
        GlobalText.setString("10      + 5       = 10"); //spear price
        GlobalText.setPosition(160, 300);
        window.draw(GlobalText);
        GlobalText.setString("0       + 20      = 10"); //sword price
        GlobalText.setPosition(160, 370);
        window.draw(GlobalText);
        GlobalText.setString("0       + 40     = 10"); //metal armor price
        GlobalText.setPosition(160, 440);
        window.draw(GlobalText);
        for (int i=0; i<4; i++) { //drawing metal and wood and weapons
        SpResourcesSheet.setTextureRect(sf::IntRect(96, 0, 32, 32));
        SpResourcesSheet.setPosition(195, 230+i*70);
        window.draw(SpResourcesSheet);
        SpResourcesSheet.setTextureRect(sf::IntRect(160, 0, 32, 32));
        SpResourcesSheet.setPosition(285, 230+i*70);
        window.draw(SpResourcesSheet);
        SpResourcesSheet.setTextureRect(sf::IntRect(320+32*i, 0, 32, 32));
        if (i==3) {SpResourcesSheet.setTextureRect(sf::IntRect(448, 0, 32, 32));}
        SpResourcesSheet.setPosition(385, 230+i*70);
        window.draw(SpResourcesSheet);}


        for (int i=1; i<7; i++){
            GlobalDescriptionText.setString(ForgeTextStr[i]);
            if (i==5) {GlobalDescriptionText.setPosition(210, 530);}
            else if (i==6) {GlobalDescriptionText.setPosition(580, 545);}
            else {GlobalDescriptionText.setPosition(580, 230+70*(i-1));}
            window.draw(GlobalDescriptionText);


            if (ForgeMood[ForgeX][ForgeY][i]) {
                GlobalDescriptionText.setString("<===");
                GlobalDescriptionText.setPosition(700, 230+70*(i-1));}
                window.draw(GlobalDescriptionText);
            }

            if (ForgeMood[ForgeX][ForgeY][0]){
                GlobalDescriptionText.setString("<===");
                GlobalDescriptionText.setPosition(330, 530);
                window.draw(GlobalDescriptionText);
            }

        }//end drawing forge

    if(InterfaceInteraction[0]) {window.draw(SpBuildingMenu); //Buildings menu draw
        GlobalText.setString(MenuTextStr[0]);
        GlobalText.setPosition(20, 45);
        window.draw(GlobalText);
        GlobalText.setString(BuildingCountStr);
        GlobalText.setPosition(450, 45);
        window.draw(GlobalText);
        //building names and images in menu draw
        GlobalText.setString(BuildingsNamesStr[ChoosedBuildingInMenu]);
        GlobalText.setPosition(635, 90);
        window.draw(GlobalText);
        SpBuildingLine.setPosition(645, 150);
        if (ChoosedBuildingInMenu!=19){
        SpBuildingLine.setTextureRect(sf::IntRect(150+ChoosedBuildingInMenu*150, 0, 145, 128));}
        else {SpBuildingLine.setTextureRect(sf::IntRect(0, 0, 145, 128));}
        window.draw(SpBuildingLine);
        GlobalDescriptionText.setString("Стоимость:");
        GlobalDescriptionText.setPosition(790, 125);
        window.draw(GlobalDescriptionText);
        GlobalDescriptionText.setString("Доходы:");
        GlobalDescriptionText.setPosition(790, 190);
        window.draw(GlobalDescriptionText);
        GlobalDescriptionText.setString("Расходы:");
        GlobalDescriptionText.setPosition(790, 255);
        window.draw(GlobalDescriptionText);
        GlobalText.setString("Свойства");
        GlobalText.setPosition(640, 285);
        window.draw(GlobalText);
        GlobalDescriptionText.setString(BuildingDescriptionStr[ChoosedBuildingInMenu]);
        GlobalDescriptionText.setPosition(640, 320);
        window.draw(GlobalDescriptionText);


        //receiving info about building chars
        for (int i=0; i<15; i++){BuildingCost[i]=0; BuildingCostStr[i]="";}
        BuildingCost[0] = GlobalCityInfo[ChoosedBuildingInMenu]->payMoney();
        BuildingCost[1] = GlobalCityInfo[ChoosedBuildingInMenu]->payMan();
        BuildingCost[2] = GlobalCityInfo[ChoosedBuildingInMenu]->payFood();
        BuildingCost[3] = GlobalCityInfo[ChoosedBuildingInMenu]->payWood();
        BuildingCost[4] = GlobalCityInfo[ChoosedBuildingInMenu]->payStone();
        BuildingCost[5] = GlobalCityInfo[ChoosedBuildingInMenu]->payIron();
        BuildingCost[6] = GlobalCityInfo[ChoosedBuildingInMenu]->payLeather();
        BuildingCost[7] = GlobalCityInfo[ChoosedBuildingInMenu]->payWine();
        BuildingCost[8] = GlobalCityInfo[ChoosedBuildingInMenu]->payDiamonds();
        BuildingCost[9] = GlobalCityInfo[ChoosedBuildingInMenu]->payHorses();
        BuildingCost[10] = GlobalCityInfo[ChoosedBuildingInMenu]->payBow();
        BuildingCost[11] = GlobalCityInfo[ChoosedBuildingInMenu]->paySpear();
        BuildingCost[12] = GlobalCityInfo[ChoosedBuildingInMenu]->paySword();
        BuildingCost[13] = GlobalCityInfo[ChoosedBuildingInMenu]->payLeatherArmor();
        BuildingCost[14] = GlobalCityInfo[ChoosedBuildingInMenu]->payMetalArmor();

        for (int i=0; i<15; i++){BuildingIncome[i]=0; BuildingIncomeStr[i]="";}
        BuildingIncome[0] = GlobalCityInfo[ChoosedBuildingInMenu]->getMoney();
        BuildingIncome[1] = GlobalCityInfo[ChoosedBuildingInMenu]->getMan();
        BuildingIncome[2] = GlobalCityInfo[ChoosedBuildingInMenu]->getFood();
        BuildingIncome[3] = GlobalCityInfo[ChoosedBuildingInMenu]->getWood();
        BuildingIncome[4] = GlobalCityInfo[ChoosedBuildingInMenu]->getStone();
        BuildingIncome[5] = GlobalCityInfo[ChoosedBuildingInMenu]->getIron();
        BuildingIncome[6] = GlobalCityInfo[ChoosedBuildingInMenu]->getLeather();
        BuildingIncome[7] = GlobalCityInfo[ChoosedBuildingInMenu]->getWine();
        BuildingIncome[8] = 0; //chance for diamonds
        BuildingIncome[9] = GlobalCityInfo[ChoosedBuildingInMenu]->getHorses();
        BuildingIncome[10] = GlobalCityInfo[ChoosedBuildingInMenu]->getBow();
        BuildingIncome[11] = GlobalCityInfo[ChoosedBuildingInMenu]->getSpear();
        BuildingIncome[12] = GlobalCityInfo[ChoosedBuildingInMenu]->getSword();
        BuildingIncome[13] = GlobalCityInfo[ChoosedBuildingInMenu]->getLeatherArmor();
        BuildingIncome[14] = GlobalCityInfo[ChoosedBuildingInMenu]->getMetalArmor();

        for (int i=0; i<15; i++){BuildingExpenses[i]=0; BuildingExpensesStr[i]="";}
        BuildingExpenses[0] = GlobalCityInfo[ChoosedBuildingInMenu]->takeMoney();
        BuildingExpenses[1] = GlobalCityInfo[ChoosedBuildingInMenu]->takeMan();
        BuildingExpenses[2] = GlobalCityInfo[ChoosedBuildingInMenu]->takeFood();
        BuildingExpenses[3] = GlobalCityInfo[ChoosedBuildingInMenu]->takeWood();
        BuildingExpenses[4] = GlobalCityInfo[ChoosedBuildingInMenu]->takeStone();
        BuildingExpenses[5] = GlobalCityInfo[ChoosedBuildingInMenu]->takeIron();
        BuildingExpenses[6] = GlobalCityInfo[ChoosedBuildingInMenu]->takeLeather();
        BuildingExpenses[7] = GlobalCityInfo[ChoosedBuildingInMenu]->takeWine();
        BuildingExpenses[8] = GlobalCityInfo[ChoosedBuildingInMenu]->takeDiamonds();
        BuildingExpenses[9] = GlobalCityInfo[ChoosedBuildingInMenu]->takeHorses();
        BuildingExpenses[10] = GlobalCityInfo[ChoosedBuildingInMenu]->takeBow();
        BuildingExpenses[11] = GlobalCityInfo[ChoosedBuildingInMenu]->takeSpear();
        BuildingExpenses[12] = GlobalCityInfo[ChoosedBuildingInMenu]->takeSword();
        BuildingExpenses[13] = GlobalCityInfo[ChoosedBuildingInMenu]->takeLeatherArmor();
        BuildingExpenses[14] = GlobalCityInfo[ChoosedBuildingInMenu]->takeMetalArmor();


        int ResCount1=0, ResCount2=0, ResCount3=0;
        for (int i=0; i<15; i++){
        if (BuildingCost[i]>0){ //building costs
        BuildingCostStr[i] = toString(BuildingCost[i]); ResCount1++;
        GlobalText.setString(BuildingCostStr[i]);
        GlobalText.setPosition(720+ResCount1*70, 150);
        window.draw(GlobalText);
        SpResourcesSheet.setTextureRect(sf::IntRect(0+i*32, 0, 32, 32));
        SpResourcesSheet.setPosition(750+ResCount1*70, 150);
        if (BuildingCost[i]>=100){SpResourcesSheet.setPosition(760+ResCount1*69, 150);}
        window.draw(SpResourcesSheet);}}
        for (int i=0; i<15; i++){ //building incomes
        if (BuildingIncome[i]>0){
        BuildingIncomeStr[i] = toString(BuildingIncome[i]); ResCount2++;
        GlobalText.setString(BuildingIncomeStr[i]);
        GlobalText.setPosition(720+ResCount2*70, 215);
        window.draw(GlobalText);
        SpResourcesSheet.setTextureRect(sf::IntRect(0+i*32, 0, 32, 32));
        SpResourcesSheet.setPosition(750+ResCount2*70, 215);
        if (BuildingIncome[i]>=100){SpResourcesSheet.setPosition(750+ResCount2*80, 215);} //for tavern +100
        window.draw(SpResourcesSheet);}}
        for (int i=0; i<15; i++){ //building expenses
        if (BuildingExpenses[i]>0){
        BuildingExpensesStr[i] = toString(BuildingExpenses[i]); ResCount3++;
        GlobalText.setString(BuildingExpensesStr[i]);
        GlobalText.setPosition(720+ResCount3*70, 280);
        window.draw(GlobalText);
        SpResourcesSheet.setTextureRect(sf::IntRect(0+i*32, 0, 32, 32));
        SpResourcesSheet.setPosition(750+ResCount3*70, 280);
        window.draw(SpResourcesSheet);}}



        //final buttons draw
        GlobalInterfaceText.setString(MenuFinalButStr[0]);
        GlobalInterfaceText.setPosition(655, 515);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(MenuFinalButStr[1]);
        GlobalInterfaceText.setPosition(840, 515);
        window.draw(GlobalInterfaceText);
        }

    if(InterfaceInteraction[1]) {window.draw(SpArmyMenu); //Army menu draw
        GlobalText.setString(MenuTextStr[1]);
        GlobalText.setPosition(20, 45);
        window.draw(GlobalText);
        MaxHiredStr=toString(MaxHired);
        AlreadyHiredStr=toString(AlreadyHired);
        GlobalDescriptionText.setString("Max");
        GlobalDescriptionText.setPosition(790, 45);
        window.draw(GlobalDescriptionText);
        GlobalDescriptionText.setString(AlreadyHiredStr+"/"+MaxHiredStr);
        GlobalDescriptionText.setPosition(790, 65);
        window.draw(GlobalDescriptionText);
    for (int i=0; i<5; i++){ //advanced resources quantity draw
        ResourcesQText.setString(ResourcesQuantityStr[10+i]);
        ResourcesQText.setPosition(340+100*i, 42);
        window.draw(ResourcesQText);
        }
     for (int i=0; i<16; i++){ //army quantity draw
        ArmyQText.setString(ArmyQuantityStr[i]);
        ArmyQText.setCharacterSize(36);
        ArmyQText.setStyle(sf::Text::Bold);
        ArmyQText.setColor(sf::Color::White);
        if (i<4) {ArmyQText.setPosition(60+i*125, 170);}
        if ((i>=4)&&(i<=7)){ArmyQText.setPosition(60+(i-4)*125, 295);}
        if ((i>=8)&&(i<=11)){ArmyQText.setPosition(60+(i-8)*125, 420);}
        if ((i>=12)&&(i<=15)){ArmyQText.setPosition(60+(i-12)*125, 545);}
        window.draw(ArmyQText);
        }

        GlobalText.setString(ArmyNameStr[ChoosedArmyInMenu]); //choosed name
        GlobalText.setPosition(515, 90);
        window.draw(GlobalText);
        SpArmySheet.setTextureRect(sf::IntRect(0+ChoosedArmyInMenu*124, 0, 124, 120)); //choosed image
        SpArmySheet.setPosition(515, 120);
        window.draw(SpArmySheet);

        GlobalDescriptionText.setString(ArmyDescriptionStr[ChoosedArmyInMenu]); //choosed description
        if (Artifacts[9]){
            if (ChoosedArmyInMenu==1) {GlobalDescriptionText.setString("Обычные лучники. \
            \nНе самые большие затраты, \nно и не самый сильный\nэффект.\n\nСтоимость: \nПлата: 2    /ход\nНужна Казарма.");}
            if (ChoosedArmyInMenu==2) {GlobalDescriptionText.setString("Если на лучников нацепить \
            \nкольчуги, то получатся \nтяжелые лучники.\n\nСтоимость: \nПлата: 2    /ход\nНужна Казарма.");}
            if (ChoosedArmyInMenu==3) {GlobalDescriptionText.setString("Стреляющая кавалерия. \
            \nДорогие, однако весьма \nполезные.\n\nСтоимость: \nПлата: 2    /ход\nНужна Казарма.");}
        }
        GlobalDescriptionText.setPosition(515, 250);
        window.draw(GlobalDescriptionText);



        for (int i=0; i<2; i++){ //display of icons of chars of army
        SpMilitaryIcons.setTextureRect(sf::IntRect(0+i*33, 0, 33, 32));
        SpMilitaryIcons.setPosition(640, 120+i*40);
        window.draw(SpMilitaryIcons);}
        for (int i=0; i<2; i++){ //display of icons of chars of army n2
        SpMilitaryIcons.setTextureRect(sf::IntRect(66+i*33, 0, 33, 32));
        SpMilitaryIcons.setPosition(740-i*5, 120+i*40);
        window.draw(SpMilitaryIcons);}


         //army chars in menu
        AttackStr = toString(ArmyChars[0][ChoosedArmyInMenu]);
        HealthStr = toString(ArmyChars[1][ChoosedArmyInMenu]);
        ArmorStr = toString(ArmyChars[2][ChoosedArmyInMenu]);
        MoralStr = toString(ArmyChars[3][ChoosedArmyInMenu]);

        ResourcesQText.setString(AttackStr);
        ResourcesQText.setPosition(680, 120);
        window.draw(ResourcesQText);
        ResourcesQText.setString(HealthStr);
        ResourcesQText.setPosition(680, 160);
        window.draw(ResourcesQText);
        ResourcesQText.setString(ArmorStr);
        ResourcesQText.setPosition(780, 120);
        window.draw(ResourcesQText);
        ResourcesQText.setString(MoralStr);
        ResourcesQText.setPosition(780, 160);
        window.draw(ResourcesQText);
        SmallText.setString(ArmySpecialRulesStr[ChoosedArmyInMenu]); //choosed specialities
        SmallText.setPosition(640, 200);
        window.draw(SmallText);

        switch (ChoosedArmyInMenu){ //Army costs and payment
        case 0: //bowman0
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 416); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 410);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 446); window.draw(SpCoins); break;
        case 1: //bowman1
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 388); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 383);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 418); if (Artifacts[9]){SpCoins.setPosition(610, 418);} window.draw(SpCoins); break;
        case 2://heavy bowman
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 360); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 355);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 390); if (Artifacts[9]){SpCoins.setPosition(610, 390);} window.draw(SpCoins); break;
        case 3: //horse archer
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 360); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 355);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 390); if (Artifacts[9]){SpCoins.setPosition(610, 390);} window.draw(SpCoins); break;
        case 4: //peasant
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 360); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 355);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 418); window.draw(SpCoins); break;
        case 5://spearman
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 360); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 355);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 390); window.draw(SpCoins); break;
        case 6: //alebardman
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 388); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 383);
        window.draw(SpResourcesSheet);}}
         SpCoins.setPosition(610, 418); window.draw(SpCoins); break;
        case 7: //feodal knights
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(600+50*ArmyResQ, 416); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(610+50*ArmyResQ, 410);
        window.draw(SpResourcesSheet);}}
         SpCoins.setPosition(615, 446); window.draw(SpCoins); break;
        case 8: //militia
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==0){SpResourcesSheet.setTextureRect(sf::IntRect(0, 0, 32, 32));} //giving him just money in costs
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 416); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(620+50*ArmyResQ, 410);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 446); window.draw(SpCoins); break;
        case 9: //swordman
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 360); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 355);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 390); window.draw(SpCoins); break;
        case 10: //pexota
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 388); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 383);
        window.draw(SpResourcesSheet);}}
         SpCoins.setPosition(610, 418); window.draw(SpCoins); break;
        case 11: //teutonic
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 388); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 383);
        window.draw(SpResourcesSheet);}}
         SpCoins.setPosition(615, 418); window.draw(SpCoins); break;
        case 12:
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 304); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 299);
        window.draw(SpResourcesSheet);}}
         SpCoins.setPosition(610, 334); window.draw(SpCoins); break;
        case 13: //ctafracts
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 388); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 383);
        window.draw(SpResourcesSheet);}}
         SpCoins.setPosition(615, 418); window.draw(SpCoins); break;
        case 14: //shock cavalry
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 360); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 355);
        window.draw(SpResourcesSheet);}}
        SpCoins.setPosition(610, 390); window.draw(SpCoins); break;
        case 15: //heavycalary
            ArmyResQ=0;
        for (int i=0;i<7;i++){
        GlobalDescriptionText.setString(ArmyCostsStr[i][ChoosedArmyInMenu]);
        if (ArmyCosts[i][ChoosedArmyInMenu]!=0){ArmyResQ++;
        if (i==1){SpResourcesSheet.setTextureRect(sf::IntRect(288, 0, 32, 32));}
        else {SpResourcesSheet.setTextureRect(sf::IntRect(256+i*32, 0, 32, 32));}
        GlobalDescriptionText.setPosition(605+50*ArmyResQ, 416); window.draw(GlobalDescriptionText);
        SpResourcesSheet.setPosition(615+50*ArmyResQ, 410);
        window.draw(SpResourcesSheet);}}
         SpCoins.setPosition(615, 446); window.draw(SpCoins); break;
        }

        GlobalInterfaceText.setString(MenuFinalButStr[2]);
        GlobalInterfaceText.setPosition(540, 510);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(MenuFinalButStr[3]);
        GlobalInterfaceText.setPosition(700, 510);
        window.draw(GlobalInterfaceText);
        SmallText.setString("+1 ЛКМ/+10 ПКМ");
        SmallText.setPosition(520, 550);
        window.draw(SmallText);
        SmallText.setString("-1 ЛКМ/-10 ПКМ");
        SmallText.setPosition(690, 550);
        window.draw(SmallText);
    }

    if(InterfaceInteraction[2]) {window.draw(SpEconomyMenu); //Economy menu draw
        GlobalText.setString(MenuTextStr[2]);
        GlobalText.setPosition(10, 50);
        window.draw(GlobalText);

        for (int i=0; i<3; i++){ //normal text
        GlobalInterfaceText.setString(EconomyMenuTextStr[i]);
        GlobalInterfaceText.setPosition(20, 90+i*90);
        window.draw(GlobalInterfaceText);}

        for (int i=0; i<15; i++){ //income numbers
        if (ResourcesIncome[i]==0){ResourcesQText.setString("-");}
        else {ResourcesQText.setString("+"+ResourcesIncomeStr[i]);}
        ResourcesQText.setPosition(40+100*i, 95);
        if (i<3) {ResourcesQText.setPosition(40+100*i, 140);}
        if (i==9){ResourcesQText.setPosition(40+800, 140);}
        if (i>=10){ResourcesQText.setPosition(340+100*(i-10), 140);}
        window.draw(ResourcesQText);
        }

        for (int i=0; i<15; i++){ //expenses numbers
        if (ResourcesExpenses[i]==0){ResourcesQText.setString("-");}
        else {ResourcesQText.setString("-"+ResourcesExpensesStr[i]);}
        ResourcesQText.setPosition(40+100*i, 180);
        if (i<3) {ResourcesQText.setPosition(40+100*i, 225);}
        if (i==9){ResourcesQText.setPosition(40+800, 225);}
        if (i>=10){ResourcesQText.setPosition(340+100*(i-10), 225);}
        window.draw(ResourcesQText);
        }

        for (int i=0; i<15; i++){ //total numbers
        if (ResourcesTotal[i]>0){ResourcesQText.setString("+"+ResourcesTotalStr[i]);}
        if (ResourcesTotal[i]==0){ResourcesQText.setString("-");}
        if (ResourcesTotal[i]<0){ResourcesQText.setString(ResourcesTotalStr[i]);}
        ResourcesQText.setPosition(40+100*i, 270);
        if (i<3) {ResourcesQText.setPosition(40+100*i, 315);}
        if (i==9){ResourcesQText.setPosition(40+800, 315);}
        if (i>=10){ResourcesQText.setPosition(340+100*(i-10), 315);}
        window.draw(ResourcesQText);
        }

        GlobalInterfaceText.setString(EconomyMenuTextStr[3]); //imposts
        GlobalInterfaceText.setPosition(75, 380);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[4]); //+5%
        GlobalInterfaceText.setPosition(60, 420);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[5]); //-5%
        GlobalInterfaceText.setPosition(160, 420);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[6]); //imposts result
        GlobalInterfaceText.setPosition(35, 455);
        window.draw(GlobalInterfaceText);
        EconomyMenuNumbersText.setString(EconomyMenuNumbersStr[4]); //imposts numbers
        if (Taxes>=0){EconomyMenuNumbersText.setPosition(160, 455);}
        else {EconomyMenuNumbersText.setPosition(140, 455);}
        window.draw(EconomyMenuNumbersText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[14]+"   "+TaxesInGoldStr); //imposts result
        GlobalInterfaceText.setPosition(35, 510);
        window.draw(GlobalInterfaceText);
        if ((TaxesInGold>=0)&&(TaxesInGold<=99)){SpCoins.setPosition(170, 510);}
        else {SpCoins.setPosition(190, 510);}
        window.draw(SpCoins);

        GlobalInterfaceText.setString(EconomyMenuTextStr[11]); //wood extract
        GlobalInterfaceText.setPosition(370, 383);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[12]); //stone extract
        GlobalInterfaceText.setPosition(370, 485);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[13]); //will be extracted
        GlobalInterfaceText.setPosition(370, 423);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setPosition(370, 525);
        window.draw(GlobalInterfaceText);


        GlobalInterfaceText.setString(EconomyMenuTextStr[7]); //+1
        GlobalInterfaceText.setPosition(265, 380);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setPosition(265, 480);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[8]); //+10
        GlobalInterfaceText.setPosition(310, 380);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setPosition(310, 480);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[9]); //-1
        GlobalInterfaceText.setPosition(265, 420);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setPosition(265, 520);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(EconomyMenuTextStr[10]); //-10
        GlobalInterfaceText.setPosition(310, 420);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setPosition(310, 520);
        window.draw(GlobalInterfaceText);

        GlobalInterfaceText.setString("Все"); //Extract All
        GlobalInterfaceText.setPosition(845, 380);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setPosition(845, 482);
        window.draw(GlobalInterfaceText);

        for (int i=0; i<4; i++){ //quantity of wood/stone extracted
            EconomyMenuNumbersText.setString(EconomyMenuNumbersStr[i]);
            if (i<2) {EconomyMenuNumbersText.setPosition(650, 370+i*40);
            window.draw(EconomyMenuNumbersText);}
            else if (i>=2) {EconomyMenuNumbersText.setPosition(650, 392+i*40);
            window.draw(EconomyMenuNumbersText);}
        }

        //risovka galochek v avtomatizme
            if (AutoAllExWood){SpGalka.setPosition(814, 382); window.draw(SpGalka); }
            if (AutoAllExStone) {SpGalka.setPosition(814, 484); window.draw(SpGalka); }

        for (int i=0; i<9; i++){
            for (int j=0; j<4; j++){
                IncMovedStr="";
                if ((ResourceMoved[i][j])&&(ResourceMoved[0][0]==false)&&(ResourceMoved[1][0]==false)&&(ResourceMoved[2][0]==false)
                    &&(ResourceMoved[0][2]==false)&&(ResourceMoved[1][2]==false)&&(ResourceMoved[2][2]==false)
                    &&(ResourceMoved[3][1]==false)&&(ResourceMoved[4][1]==false)&&(ResourceMoved[5][1]==false)
                    &&(ResourceMoved[6][1]==false)&&(ResourceMoved[7][1]==false)&&(ResourceMoved[8][1]==false)
                    &&(ResourceMoved[3][3]==false)&&(ResourceMoved[4][3]==false)&&(ResourceMoved[5][3]==false)
                    &&(ResourceMoved[6][3]==false)&&(ResourceMoved[7][3]==false)&&(ResourceMoved[8][3]==false)
                    ){
                    EconomyRectangle.setSize(sf::Vector2f(200, 120));
                    EconomyRectangle.setOutlineColor(sf::Color::Black);
                    EconomyRectangle.setFillColor(sf::Color::White);
                    EconomyRectangle.setOutlineThickness(2);
                    EconomyRectangle.setPosition(100+MovedCoordX*100, (MovedCoordY*45)+85);
                    window.draw(EconomyRectangle);
                    if (((i>=3)&&(i<9)&&(ResourceMoved[i][0]))||
                        ((i<3)&&(ResourceMoved[i][1]))
                        ){
                        for (int k=0; k<31; k++){
                            if (BMI[k][i]!=0) {
                                if (k==0) {IncMovedStr+=BMIstr[k][i]+" от Ферм"+"\n";}
                                if (k==1) {IncMovedStr+=BMIstr[k][i]+" от Охотников"+"\n";}
                                if (k==2) {IncMovedStr+=BMIstr[k][i]+" от Шахт"+"\n";}
                                if (k==3) {IncMovedStr+=BMIstr[k][i]+" от Мельниц"+"\n";}
                                if (k==4) {IncMovedStr+=BMIstr[k][i]+" от Рыбаков"+"\n";}
                                if (k==5) {IncMovedStr+=BMIstr[k][i]+" от Казарм"+"\n";}
                                if (k==6) {IncMovedStr+=BMIstr[k][i]+" от Гв.Казарм"+"\n";}
                                if (k==7) {IncMovedStr+=BMIstr[k][i]+" от Вышек"+"\n";}
                                if (k==8) {IncMovedStr+=BMIstr[k][i]+" от Башен"+"\n";}
                                if (k==9) {IncMovedStr+=BMIstr[k][i]+" от Стражи"+"\n";}
                                if (k==10) {IncMovedStr+=BMIstr[k][i]+" от Дубилен"+"\n";}
                                if (k==11) {IncMovedStr+=BMIstr[k][i]+" от Кузниц"+"\n";}
                                if (k==12) {IncMovedStr+=BMIstr[k][i]+" от Виноделен"+"\n";}
                                if (k==13) {IncMovedStr+=BMIstr[k][i]+" от Таверн"+"\n";}
                                if (k==14) {IncMovedStr+=BMIstr[k][i]+" от Конюшен"+"\n";}
                                if (k==15) {IncMovedStr+=BMIstr[k][i]+" от Портов"+"\n";}
                                if (k==18) {IncMovedStr+=BMIstr[k][i]+" от Статуй"+"\n";}
                                if (k==20) {IncMovedStr+=BMIstr[k][i]+" от Поместья"+"\n";}
                                if (k==21) {IncMovedStr+=BMIstr[k][i]+" от налогов"+"\n";}
                                if (k==22) {IncMovedStr+=BMIstr[k][i]+" от Борделей"+"\n";}
                                if (k==23) {IncMovedStr+=BMIstr[k][i]+" от Лука Снов"+"\n";}
                                if (k==24) {IncMovedStr+=BMIstr[k][i]+" от Дров"+"\n";}
                                if (k==25) {IncMovedStr+=BMIstr[k][i]+" от Горных Слез"+"\n";}
                                if (k==29) {IncMovedStr+=BMIstr[k][i]+" от добычи"+"\n";}
                                if (k==30) {IncMovedStr+=BMIstr[k][i]+" от добычи"+"\n";}
//                                else {IncMovedStr+=BMIstr[k][0]+"\n";}
                                }
                        }}
//                    if (((i==8)||(i==6))&&(ResourceMoved[i][1])){
//                        if (BMI[10][14]!=0) {IncMovedStr+=BMIstr[10][14]+" от Дубилен"+"\n";}
//                        if (BMI[14][12]!=0) {IncMovedStr+=BMIstr[14][12]+" от Конюшен"+"\n";}
//                        }
                    if (((i>=3)&&(i<9)&&(ResourceMoved[i][2]))||
                        ((i<3)&&(ResourceMoved[i][3]))
                        ){
                        for (int k=0; k<30; k++){
                            if (BME[k][i]!=0) {
                                if (k==0) {IncMovedStr+=BMEstr[k][i]+" от Ферм"+"\n";}
                                if (k==1) {IncMovedStr+=BMEstr[k][i]+" от Охотников"+"\n";}
                                if (k==2) {IncMovedStr+=BMEstr[k][i]+" от Шахт"+"\n";}
                                if (k==3) {IncMovedStr+=BMEstr[k][i]+" от Мельниц"+"\n";}
                                if (k==4) {IncMovedStr+=BMEstr[k][i]+" от Рыбаков"+"\n";}
                                if (k==5) {IncMovedStr+=BMEstr[k][i]+" от Казарм"+"\n";}
                                if (k==6) {IncMovedStr+=BMEstr[k][i]+" от Гв.Казарм"+"\n";}
                                if (k==7) {IncMovedStr+=BMEstr[k][i]+" от Вышек"+"\n";}
                                if (k==8) {IncMovedStr+=BMEstr[k][i]+" от Башен"+"\n";}
                                if (k==9) {IncMovedStr+=BMEstr[k][i]+" от Стражи"+"\n";}
                                if (k==10) {IncMovedStr+=BMEstr[k][i]+" от Дубилен"+"\n";}
                                if (k==11) {IncMovedStr+=BMEstr[k][i]+" от Кузниц"+"\n";}
                                if (k==12) {IncMovedStr+=BMEstr[k][i]+" от Виноделен"+"\n";}
                                if (k==13) {IncMovedStr+=BMEstr[k][i]+" от Таверн"+"\n";}
                                if (k==14) {IncMovedStr+=BMEstr[k][i]+" от Конюшен"+"\n";}
                                if (k==15) {IncMovedStr+=BMEstr[k][i]+" от Портов"+"\n";}
                                if (k==18) {IncMovedStr+=BMEstr[k][i]+" от Статуй"+"\n";}
                                if (k==20) {IncMovedStr+=BMEstr[k][i]+" от Поместья"+"\n";}
                                if (k==21) {IncMovedStr+=BMEstr[k][i]+" от налогов"+"\n";}
                                if (k==22) {IncMovedStr+=BMEstr[k][i]+" от Борделей"+"\n";}
                                if (k==23) {IncMovedStr+=BMEstr[k][i]+" от Лука Снов"+"\n";}
                                if (k==24) {IncMovedStr+=BMEstr[k][i]+" от Дров"+"\n";}
                                if (k==25) {IncMovedStr+=BMEstr[k][i]+" от Горных Слез"+"\n";}
                                if (k==26) {IncMovedStr+=BMEstr[k][i]+" дань королю"+"\n";}
                                if (k==27) {IncMovedStr+=BMEstr[k][i]+" плата войскам"+"\n";}
                                if (k==28) {IncMovedStr+=BMEstr[k][i]+" еда работникам"+"\n";}
//                                else {IncMovedStr+=BMIstr[k][0]+"\n";}
                                }
                        }}
            SmallText.setString(IncMovedStr);
            SmallText.setPosition(110+MovedCoordX*100, (MovedCoordY*45)+90);
            window.draw(SmallText);
            }}
                    }//end drawing podskazki

    }//end economy menu

    if(InterfaceInteraction[3]) {window.draw(SpTradeMenu); //Trade menu draw
        GlobalText.setString(MenuTextStr[3]);
        GlobalText.setPosition(10, 50);
        window.draw(GlobalText);

        for (int i=0; i<13; i++){
            GlobalDescriptionText.setString(AutoStr);
            GlobalDescriptionText.setPosition(165, 95+41*i);
            window.draw(GlobalDescriptionText);
            GlobalDescriptionText.setString(AutoStr);
            GlobalDescriptionText.setPosition(605, 95+41*i);
            window.draw(GlobalDescriptionText);
            SellResourcesStr[i]=toString(SellResources[i]);
            BuyResourcesStr[i]=toString(BuyResources[i]);
            OfferResourcesStr[i]=toString(OfferResources[i]);
            DemandResourcesStr[i]=toString(DemandResources[i]);
            PricesResourcesStr[i]=toString(PricesResources[i]);
            ResourcesQText.setString(SellResourcesStr[i]);
            ResourcesQText.setPosition(60, 100+40*i);
            window.draw(ResourcesQText);
            ResourcesQText.setString(BuyResourcesStr[i]);
            ResourcesQText.setPosition(505, 100+40*i);
            window.draw(ResourcesQText);
            ResourcesQText.setString(DemandResourcesStr[i]);
            ResourcesQText.setPosition(290, 100+40*i);
            window.draw(ResourcesQText);
            ResourcesQText.setString(OfferResourcesStr[i]);
            ResourcesQText.setPosition(750, 100+40*i);
            window.draw(ResourcesQText);
            ResourcesQText.setString("за " + PricesResourcesStr[i]);
            ResourcesQText.setPosition(330, 100+40*i);
            window.draw(ResourcesQText);
            ResourcesQText.setString("за " + PricesResourcesStr[i]);
            ResourcesQText.setPosition(790, 100+40*i);
            window.draw(ResourcesQText);
            SpCoins.setPosition(400, 100+40*i);
            window.draw(SpCoins);
            SpCoins.setPosition(860, 100+40*i);
            window.draw(SpCoins);
        }


        GlobalInterfaceText.setString(MenuFinalButStr[4]);
        GlobalInterfaceText.setPosition(530, 632);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(MenuFinalButStr[5]);
        GlobalInterfaceText.setPosition(80, 632);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString("Сброс");
        GlobalInterfaceText.setPosition(730, 632);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setPosition(280, 632);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString("ЛКМ +1\nПКМ +10");
        GlobalInterfaceText.setPosition(405, 620);
        window.draw(GlobalInterfaceText);

        for (int j=0; j<13; j++){ //risovka galochek v avtomatizme
            if (AutoSell[j]){SpGalka.setPosition(133, 93+j*41); window.draw(SpGalka); }
            if (AutoBuy[j]) {SpGalka.setPosition(575, 93+j*41); window.draw(SpGalka); }
                }

            }//end trade menu

    if(InterfaceInteraction[4]) { //Quest menu draw
        SpQuestMenu.setPosition(370, 35);
        window.draw(SpQuestMenu); //Quest menu draw
        GlobalText.setString(MenuTextStr[4]);
        GlobalText.setPosition(380, 50);
        window.draw(GlobalText);

        if (NewQuestRequest){
        GlobalText.setString(KingsQuestsStr[QuestChoice]+"\n\nДо конца срока:  "+QuestsTimeStr+" ходов.");
        GlobalText.setPosition(380, 100);
        window.draw(GlobalText);}

        //final buttons draw
        GlobalInterfaceText.setString(MenuFinalButStr[6]);
       GlobalInterfaceText.setPosition(450, 525);
        window.draw(GlobalInterfaceText);
        GlobalInterfaceText.setString(MenuFinalButStr[7]);
       GlobalInterfaceText.setPosition(750, 525);
        window.draw(GlobalInterfaceText);}

    if(InterfaceInteraction[5]) {window.draw(SpArtifactMenu);//Artifact menu draw
        GlobalText.setString(MenuTextStr[5]);
        GlobalText.setPosition(10, 45);
        window.draw(GlobalText);
        for (int i=0; i<20; i++){ //drawing artifacts
            if (Artifacts[i] == true){
        SpArtifactSheet.setTextureRect(sf::IntRect(0+i*125, 0, 125, 128));
        if (i<5) {SpArtifactSheet.setPosition(5+i*125, 88);}
        if ((i>=5)&&(i<=10)){SpArtifactSheet.setPosition(5+(i-5)*125, 213);}
        if ((i>=10)&&(i<=15)){SpArtifactSheet.setPosition(5+(i-10)*125, 338);}
        if ((i>=15)&&(i<=20)){SpArtifactSheet.setPosition(5+(i-15)*125, 463);}
        SpArtifactSheet.setScale(0.97, 0.97);
        window.draw(SpArtifactSheet);}}

        if (Artifacts[ChoosedArtifactInMenu]){
        GlobalText.setString(ArtifactsNameStr[ChoosedArtifactInMenu]);
        GlobalText.setPosition(640, 90);
        window.draw(GlobalText);

        SpArtifactSheet.setTextureRect(sf::IntRect(0+ChoosedArtifactInMenu*124, 0, 124, 120));
        if ((ChoosedArtifactInMenu==8)||(ChoosedArtifactInMenu==15)||(ChoosedArtifactInMenu==16)||(ChoosedArtifactInMenu==17)){
        SpArtifactSheet.setPosition(640, 160);}
        else {SpArtifactSheet.setPosition(640, 120);}
        window.draw(SpArtifactSheet);

        GlobalDescriptionText.setString(ArtifactDescriptionStr[ChoosedArtifactInMenu]);
        if ((ChoosedArtifactInMenu==8)||(ChoosedArtifactInMenu==15)||(ChoosedArtifactInMenu==16)||(ChoosedArtifactInMenu==17)){
        GlobalDescriptionText.setPosition(640, 290);}
        else {GlobalDescriptionText.setPosition(640, 250);}
        window.draw(GlobalDescriptionText);
        } //end of check if artifact exist

        //final buttons draw
        GlobalInterfaceText.setString(MenuFinalButStr[8]);
       GlobalInterfaceText.setPosition(700, 500);
        window.draw(GlobalInterfaceText);
        SpCoins.setPosition(890, 500);
        window.draw(SpCoins);
    }


    if (Event1Menu){
    SpEventMenu.setPosition(200, 150);
    window.draw(SpEventMenu);
    GlobalDescriptionText.setString(EventTextStr[0]);
    GlobalDescriptionText.setPosition(240, 190);
    window.draw(GlobalDescriptionText);
    for (int i=0; i<2; i++){
    GlobalDescriptionText.setString(EventButtonsTextStr[0][i]);
    GlobalDescriptionText.setPosition(225+300*i, 385);
    window.draw(GlobalDescriptionText);}
    }

//    if (Event2Menu){
//    SpEventMenu.setPosition(250, 200);
//    window.draw(SpEventMenu);
//    GlobalDescriptionText.setString(EventTextStr[1]);
//    GlobalDescriptionText.setPosition(290, 240);
//    window.draw(GlobalDescriptionText);
//    for (int i=0; i<2; i++){
//    GlobalDescriptionText.setString(EventButtonsTextStr[1][i]);
//    GlobalDescriptionText.setPosition(275+300*i, 435);
//    window.draw(GlobalDescriptionText);}
//    }

//    if (Event3Menu){
//    SpEventMenu.setPosition(300, 250);
//    window.draw(SpEventMenu);
//    GlobalDescriptionText.setString(EventTextStr[2]);
//    GlobalDescriptionText.setPosition(340, 290);
//    window.draw(GlobalDescriptionText);
//    for (int i=0; i<2; i++){
//    GlobalDescriptionText.setString(EventButtonsTextStr[2][i]);
//    GlobalDescriptionText.setPosition(315+300*i, 485);
//    window.draw(GlobalDescriptionText);}
//    }

    if ((EventHided)&&(Event1Menu==false)){ //hided event button
    SpCherta.setPosition(778, 150);
    window.draw(SpCherta);
    }

        for (int i=0; i<=TotalPossibleEvents; i++) //drawing responces for events
        {for (int j=0; j<4; j++)
            {if ((EventDecided[i][j])&&(Event1Menu==false)) {
                SpEventMenu.setPosition(200, 150);
                window.draw(SpEventMenu);
                GlobalDescriptionText.setString(EventDecidedStr[i][j]); //
                GlobalDescriptionText.setPosition(240, 190);
                window.draw(GlobalDescriptionText);
                GoodBadEventDraw=true;
                for (int k=0; k<2; k++){ // xorosho i ploxo
                GlobalDescriptionText.setString(GoodBadEventStr[k]);
                GlobalDescriptionText.setPosition(295+300*k, 400);
                window.draw(GlobalDescriptionText);} //end xorosho ploxo

                }}} //end event decided



        if (SosedLoveWarning){
            SpEventMenu.setPosition(200, 150);
            window.draw(SpEventMenu);
            GlobalText.setString("Ваш сосед-феодал очень зол на вас. \nЕсли вы еще раз его оскорбите, он без \nпромедления атакует. Осторожно!");
            GlobalText.setPosition(230, 190);
            window.draw(GlobalText);
            GoodBadEventDraw=true;
            for (int k=0; k<2; k++){ // xorosho i ploxo
            GlobalDescriptionText.setString(GoodBadEventStr[k]);
            GlobalDescriptionText.setPosition(295+300*k, 400);
            window.draw(GlobalDescriptionText);} //end xorosho ploxo
            } //end event decided

        if (DificultyIncrease){
            SpEventMenu.setPosition(200, 150);
            window.draw(SpEventMenu);
            if (Turn<70) {GlobalText.setString("Ваш Монарх рад вашим успехам в \nразвитии города и поднимает свои \nтребования. \
 Так же, дополнительно, \nон облагает вас налогом в 50 монет.");}
            else if (Turn>=70) {GlobalText.setString("Ваш Монарх рад вашим успехам в \nразвитии города и поднимает свои \nтребования.\
 Так же, дополнительно, \nон облагает вас налогом в 200 монет.");}
            GlobalText.setPosition(230, 190);
            window.draw(GlobalText);
            GoodBadEventDraw=true;
            for (int k=0; k<2; k++){ // xorosho i ploxo
            GlobalDescriptionText.setString(GoodBadEventStr[k]);
            GlobalDescriptionText.setPosition(295+300*k, 400);
            window.draw(GlobalDescriptionText);} //end xorosho ploxo
            } //end event decided

        if (VictoryStatus){
            SpQuestMenu.setPosition(200, 50);
            window.draw(SpQuestMenu);
            GlobalText.setString("Финал");
            GlobalText.setPosition(460, 60);
            window.draw(GlobalText);
            GlobalDescriptionText.setString("Король решил наконец найти жениха для своей \nдочери и начал оценку кандидатов.");
            GlobalDescriptionText.setPosition(220, 110);
            window.draw(GlobalDescriptionText);

            ResultStr1=toString(MonarchRepStr[MonarchLove-1]);
            ResultStr2=toString(PrincessLove);
            ResultStr3=toString(ResourcesQuantity[0]+(PricesResources[6]*ResourcesQuantity[7]));
            GlobalDescriptionText.setString("\nОтношение короля:"+ResultStr1+"\nЛюбовь Принцессы: "+ResultStr2+" очков.\nВаше богатство: "+ResultStr3+" монет в золоте и \nдрагоценностях." );
            GlobalDescriptionText.setPosition(220, 170);
            window.draw(GlobalDescriptionText);

            if (MonarchLove>=5) {GlobalDescriptionText.setString("Монарх будет рад видеть вас своим зятем!" ); WeddingPoints=1;}
            if ((MonarchLove>=2)&&(MonarchLove<=4)){GlobalDescriptionText.setString("Монарх решил посмотреть на другие показатели." );}
            if (MonarchLove<2) {GlobalDescriptionText.setString("Король однозначно против!" ); WeddingStatus=false;}
            GlobalDescriptionText.setPosition(220, 340);
            window.draw(GlobalDescriptionText);

            if (PrincessLove<=3) {GlobalDescriptionText.setString("Принцесса низачто не выйдет за вас замуж!" ); WeddingStatus=false;}
            if ((PrincessLove>=4)&&(MonarchLove<=6)){GlobalDescriptionText.setString("Принцесса готова рассмотреть вашу кандидатуру." );}
            if (PrincessLove>=7) {GlobalDescriptionText.setString("Принцесса хочет только вас!" ); if (WeddingPoints==0) {WeddingPoints=1;} else {WeddingPoints=2;}}
            GlobalDescriptionText.setPosition(220, 370);
            window.draw(GlobalDescriptionText);

            if ((ResourcesQuantity[0]+(PricesResources[6]*ResourcesQuantity[7]))<2000)
                {GlobalDescriptionText.setString("Вы слишком бедны для королевского рода." ); WeddingStatus=false;}
            if (((ResourcesQuantity[0]+(PricesResources[6]*ResourcesQuantity[7]))>=2000)&&((ResourcesQuantity[0]+(PricesResources[6]*ResourcesQuantity[7]))<10000))
                {GlobalDescriptionText.setString("Вы достаточно обеспечены для свадьбы." );}
            if ((ResourcesQuantity[0]+(PricesResources[6]*ResourcesQuantity[7]))>=5000)
                {GlobalDescriptionText.setString("Вы очень завидный жених!"); if (WeddingPoints==0) {WeddingPoints=1;} else {WeddingPoints=2;}}
            GlobalDescriptionText.setPosition(220, 400);
            window.draw(GlobalDescriptionText);

            if ((WeddingStatus==false)&&(WeddingPoints!=2)) {GlobalDescriptionText.setString("Итого: \nВаша кандидатура даже не рассматривается. ");}
            else if ((WeddingPoints<=1)&&(CanLovePrincess)) {GlobalDescriptionText.setString("Итого: Королевская семья готова вас принять, но \nу вас есть соперник, ваш сосед, и вы должны \nпобедить его в битве.");}
            else if ((WeddingPoints==2)&&(CanLovePrincess)) {GlobalDescriptionText.setString("Итого: Вы однозначный победитель! \nХотите сделать предложение принцессе?");}
            else if (CanLovePrincess==false) {GlobalDescriptionText.setString("Итого: Постойте! Да ты же женщина!  \nА ну пошла вон, ты баба совсем рехнулась?! ");}
            GlobalDescriptionText.setPosition(220, 445);
            window.draw(GlobalDescriptionText);

            GlobalText.setString("Хорошо");
            GlobalText.setPosition(290, 545);
            window.draw(GlobalText);
            GlobalText.setString("Плохо");
            GlobalText.setPosition(610, 545);
            window.draw(GlobalText);
        }

        if (FinalDecisions){
            SpFinalMenu.setPosition(200, 50);
            window.draw(SpFinalMenu);
            GlobalText.setString("Ваши действия?");
            GlobalText.setPosition(370, 60);
            window.draw(GlobalText);
            if ((CanLovePrincess)&&(WeddingPoints==2)){
            GlobalDescriptionText.setString("Сделать предложение руки и сердца.");} else {
            GlobalDescriptionText.setString("---Недоступно---");}
            GlobalDescriptionText.setPosition(230, 130);
            window.draw(GlobalDescriptionText);
            if ((WeddingPoints<=1)&&(CanLovePrincess)){
            GlobalDescriptionText.setString("Потребовать руки принцессы по праву сильнейшего! \n(Начнется битва с вашим соперником-феодалом)");} else {
            GlobalDescriptionText.setString("---Недоступно---");}
            GlobalDescriptionText.setPosition(225, 209);
            window.draw(GlobalDescriptionText);
            GlobalDescriptionText.setString("Бросить вызов королю.");
            GlobalDescriptionText.setPosition(230, 288);
            window.draw(GlobalDescriptionText);
            if (Artifacts[18]){
            GlobalDescriptionText.setString("Подлить зелье любви принцессе.");} else {
            GlobalDescriptionText.setString("---Недоступно---");}
            GlobalDescriptionText.setPosition(230, 367);
            window.draw(GlobalDescriptionText);
            if ((MolitvAretikusu>=10)&&(FinalMolitvaDone==false)){
            GlobalDescriptionText.setString("Молить всемогущего Аретикуса о Чуде!");} else {
            GlobalDescriptionText.setString("---Недоступно---");}
            GlobalDescriptionText.setPosition(230, 446);
            window.draw(GlobalDescriptionText);
            GlobalDescriptionText.setString("Мне своих борделей хватает. (Продолжить игру)");
            GlobalDescriptionText.setPosition(230, 525);
            window.draw(GlobalDescriptionText);
        }

        if (StartTextView){
            SpQuestMenu.setPosition(200, 50);
            window.draw(SpQuestMenu);
            GlobalText.setString("Добро пожаловать в игру «Феодал»!");
            GlobalText.setPosition(260, 60);
            window.draw(GlobalText);
            SmallText.setString(StartTextStr);
            SmallText.setPosition(210, 110);
            window.draw(SmallText);
            GlobalText.setString("Все понял");
            GlobalText.setPosition(290, 545);
            window.draw(GlobalText);
            GlobalText.setString("Ничо не понял");
            GlobalText.setPosition(560, 545);
            window.draw(GlobalText);
        }

        if ((ponyal)||(neponyal)){ //start text button options
            SpEventMenu.setPosition(200, 150);
            window.draw(SpEventMenu);
            if (ponyal) {GlobalDescriptionText.setString("Держи монетку за понятливость. Удачи!");}
            if (neponyal) {GlobalDescriptionText.setString("Стучитесь в личку, отвечу на любой вопрос. \nУспехов)");}
            GlobalDescriptionText.setPosition(240, 190);
            window.draw(GlobalDescriptionText);
            for (int k=0; k<2; k++){ // xorosho i ploxo
            GlobalDescriptionText.setString(GoodBadEventStr[k]);
            GlobalDescriptionText.setPosition(295+300*k, 400);
            window.draw(GlobalDescriptionText);} //end xorosho ploxo
        }

        if (TurnsToLoseWithoutMoney<5){
            TurnsToLoseWithoutMoneyStr=toString(TurnsToLoseWithoutMoney);
            if (TurnsToLoseWithoutMoney>1){GlobalText.setString("Вы проиграете через \n"+TurnsToLoseWithoutMoneyStr+" хода");}
            if (TurnsToLoseWithoutMoney==1) {GlobalText.setString("Вы проиграете через \n"+TurnsToLoseWithoutMoneyStr+" ход");}
            if (TurnsToLoseWithoutMoney==0) {GlobalText.setString("Вы проиграете через \n"+TurnsToLoseWithoutMoneyStr+" ходов");}
            GlobalText.setPosition(1010, 490);
            window.draw(GlobalText);}



        if (YouWonWedding) {
            SpQuestMenu.setPosition(200, 50);
            window.draw(SpQuestMenu);
            GlobalText.setString("Финал");
            GlobalText.setPosition(460, 60);
            window.draw(GlobalText);
            GlobalDescriptionText.setString("Между вами и принцессой была сыграна пышная \nсвадьба!\
 Все королевство праздновало целую \nнеделю, выкатили все бочонки вина из погребов, \nа еду\
 раздавали бесплатно на главной площади \nстолицы. Ну а вы заняли свое место рядом с \nтроном\
 короля, ожидая пока он оставит вам \nсвой трон... \n\n...или нет?");
            GlobalDescriptionText.setPosition(230, 130);
            window.draw(GlobalDescriptionText);
            ResultStr1=toString(PeopleLove);
            ResultStr2=toString(PrincessLove);
            ResultStr3=toString(MolitvAretikusu);
            GlobalDescriptionText.setString("Результат: \nЛюбовь народа "+ResultStr1+"\nЛюбовь Принцессы "+ResultStr2+" \nВера в Аретикуса: "+ResultStr3);
            GlobalDescriptionText.setPosition(230, 400);
            window.draw(GlobalDescriptionText);
            GlobalText.setString("Ура!");
            GlobalText.setPosition(330, 545);
            window.draw(GlobalText);
            GlobalText.setString("Фух, наконец-то!");
            GlobalText.setPosition(540, 545);
            window.draw(GlobalText);
           }

        if (YouWonGame) {
            SpQuestMenu.setPosition(200, 50);
            window.draw(SpQuestMenu);
            GlobalText.setString("Финал");
            GlobalText.setPosition(460, 60);
            window.draw(GlobalText);
            GlobalDescriptionText.setString("Вы разбили королевское войско, а его самого \nобезглавили.\
 Принцесса сбежала и столица сда-\nлась без боя. Отныне вы единственный правитель \nэтих земель и\
 никакая свадьба вам уже не нужна. \n\nПоздравляю, вы одержали самую сложную победу. \nВы молодец.");
            if (SecretFinal[2]) {GlobalDescriptionText.setString("И жили вы долго и счастливо)");}
            GlobalDescriptionText.setPosition(225, 130);
            window.draw(GlobalDescriptionText);
            ResultStr1=toString(PeopleLove);
            ResultStr2=toString(PrincessLove);
            ResultStr3=toString(MolitvAretikusu);
            GlobalDescriptionText.setString("Результат: \nЛюбовь народа "+ResultStr1+"\nЛюбовь Принцессы "+ResultStr2+" \nВера в Аретикуса "+ResultStr3);
            GlobalDescriptionText.setPosition(230, 400);
            window.draw(GlobalDescriptionText);
            GlobalText.setString("Ура!");
            GlobalText.setPosition(330, 545);
            window.draw(GlobalText);
            GlobalText.setString("Фух, наконец-то!");
            GlobalText.setPosition(540, 545);
            window.draw(GlobalText);
           }

        if (FinalOption) {
            SpEventMenu.setPosition(200, 150);
            window.draw(SpEventMenu);
            GlobalDescriptionText.setString(FinalStr);
            GlobalDescriptionText.setPosition(220, 170);
            window.draw(GlobalDescriptionText);
            for (int k=0; k<2; k++){ // xorosho i ploxo
            GlobalDescriptionText.setString(GoodBadEventStr[k]);
            GlobalDescriptionText.setPosition(295+300*k, 400);
            window.draw(GlobalDescriptionText);} //end xorosho ploxo
        }

        if (RiskyFinal) {
            SpEventMenu.setPosition(200, 150);
            window.draw(SpEventMenu);
            GlobalDescriptionText.setString(FinalStr);
            GlobalDescriptionText.setPosition(240, 190);
            window.draw(GlobalDescriptionText);
            GlobalText.setString("Ехать.");
            GlobalText.setPosition(290, 400);
            window.draw(GlobalText);
            GlobalText.setString("Не ехать.");
            GlobalText.setPosition(580, 400);
            window.draw(GlobalText);
        }

        if (YouLostGame){
            SpEventMenu.setPosition(200, 150);
            window.draw(SpEventMenu);
            GlobalText.setString("Вы проиграли");
            GlobalText.setPosition(410, 190);
            window.draw(GlobalText);
            GoodBadEventDraw=true;
            for (int k=0; k<2; k++){ // xorosho i ploxo
            GlobalText.setString(GoodBadEventStr[k]);
            GlobalText.setPosition(295+300*k, 400);
            window.draw(GlobalText);}
            ResultStr1=toString(PeopleLove);
            ResultStr2=toString(PrincessLove);
            ResultStr3=toString(MolitvAretikusu);
            GlobalDescriptionText.setString("Результат: \nЛюбовь народа "+ResultStr1+"\nЛюбовь Принцессы "+ResultStr2+" \nВера в Аретикуса: "+ResultStr3);
            GlobalDescriptionText.setPosition(230, 230);
            window.draw(GlobalDescriptionText);
        }

        if (BattleStart){
            SpBattleMenu.setPosition(50, 85);
            window.draw(SpBattleMenu);
            GlobalText.setString(BattleMenuStr[0]);
            GlobalText.setPosition(450, 95);
            window.draw(GlobalText);
            GlobalDescriptionText.setString(BattleMenuStr[1]);
            GlobalDescriptionText.setPosition(60, 145);
            window.draw(GlobalDescriptionText);
            GlobalDescriptionText.setString("+Всех");
            GlobalDescriptionText.setPosition(90, 205);
            window.draw(GlobalDescriptionText);
            for (int i=0; i<16; i++){ //drawing army
                SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                SpSmallArmySheet.setPosition(200+i*45, 150);
                window.draw(SpSmallArmySheet);
            if (ArmyQuantity[i]==0){
                GlobalText.setString("-");}
                else {GlobalText.setString(ArmyQuantityStr[i]);}
                if (ArmyQuantity[i]>=100){GlobalText.setPosition(205+i*45, 200);}
                else {GlobalText.setPosition(210+i*45, 200);}
                window.draw(GlobalText);}

            if (BattleSurpriseDraw) {GlobalDescriptionText.setString(BattleMenuStr[2]);} //surprise
            else {GlobalDescriptionText.setString(BattleMenuStr[3]);}
            GlobalDescriptionText.setPosition(375, 565);
            window.draw(GlobalDescriptionText);
            for (int i=0; i<3; i++){ //flangs and center and sbros
                GlobalText.setString(BattleMenuStr[4+i]);
                GlobalText.setPosition(90, 250+i*70);
                window.draw(GlobalText);
                SmallText.setString(BattleMenuStr[7]);
                SmallText.setPosition(350, 255+i*70);
                window.draw(SmallText);}
//            GlobalText.setString(BattleMenuStr[8]); //ybezhavshie
//            GlobalText.setPosition(70, 450);
//            window.draw(GlobalText);
            GlobalText.setString(BattleMenuStr[9]); //retreat
            GlobalText.setPosition(120, 575);
            window.draw(GlobalText);
            GlobalText.setString(BattleMenuStr[10]); //to battle
            GlobalText.setPosition(750, 575);
            window.draw(GlobalText);
            GlobalDescriptionText.setString("<===");
            if (LeftFlangChoosed) {GlobalDescriptionText.setPosition(285, 250);}
            if (CenterChoosed) {GlobalDescriptionText.setPosition(285, 320);}
            if (RightFlangChoosed) {GlobalDescriptionText.setPosition(285, 390);}
            window.draw(GlobalDescriptionText);

            for (int j=0; j<3; j++){ //drawing army disposal
                for (int i=0; i<16; i++){
                    if (ArmyIn[j][i]>0){
                        SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                        SpSmallArmySheet.setPosition(415+ArmyCountDraw[j]*45, 245+j*70);
                        window.draw(SpSmallArmySheet);
                        ArmyInStr[j][i]=toString(ArmyIn[j][i]);
                        GlobalDescriptionText.setString(ArmyInStr[j][i]);
                        if (ArmyIn[j][i]>=100){GlobalDescriptionText.setPosition(415+ArmyCountDraw[j]*45, 290+j*70);}
                        else {GlobalDescriptionText.setPosition(415+ArmyCountDraw[j]*45, 290+j*70);}
                        window.draw(GlobalDescriptionText);
                        ArmyCountDraw[j]++;
                        if (ArmyCountDraw[0]==6){MaxInLeft=true;}
                        if (ArmyCountDraw[1]==6){MaxInCenter=true;}
                        if (ArmyCountDraw[2]==6){MaxInRight=true;}
                    } //end of ArmyIn if
                    if (EnemyIn[j][i]>0){
                        SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                        SpSmallArmySheet.setPosition(700+EnemyCountDraw[j]*45, 245+j*70);
                        window.draw(SpSmallArmySheet);

                        if (EnemyIn[j][i]<10){EnemyInStr[j][i]=toString(EnemyIn[j][i]);}
                        if ((EnemyIn[j][i]>=10)&&(EnemyIn[j][i]<20)){EnemyInStr[j][i]=toString("10-20");}
                        if ((EnemyIn[j][i]>=20)&&(EnemyIn[j][i]<30)){EnemyInStr[j][i]=toString("20-30");}
                        if ((EnemyIn[j][i]>=30)&&(EnemyIn[j][i]<=50)){EnemyInStr[j][i]=toString("30-50");}
                        if ((EnemyIn[j][i]>50)&&(EnemyIn[j][i]<100)){EnemyInStr[j][i]=toString(">50");}
                        if (EnemyIn[j][i]>=100){EnemyInStr[j][i]=toString(">100");}
                        SmallText.setString(EnemyInStr[j][i]);
                        if (EnemyIn[j][i]>=100){SmallText.setPosition(700+EnemyCountDraw[j]*45, 290+j*70);}
                        else {SmallText.setPosition(700+EnemyCountDraw[j]*45, 290+j*70);}
                        window.draw(SmallText);
                        EnemyCountDraw[j]++;
                    }
                }ArmyCountDraw[j]=0; EnemyCountDraw[j]=0;}



        } //end of battle start

        if (BattleRound){
            SpRoundMenu.setPosition(50, 85);
            window.draw(SpRoundMenu);
            RoundCountStr=toString(RoundCount);
            GlobalText.setString(RoundMenuStr[0]+" "+RoundCountStr);
            GlobalText.setPosition(450, 95);
            window.draw(GlobalText);
            GlobalDescriptionText.setString(RoundMenuStr[4]); //our army
            GlobalDescriptionText.setPosition(385, 150);
            window.draw(GlobalDescriptionText);
            GlobalDescriptionText.setString(RoundMenuStr[5]); //enemy army
            GlobalDescriptionText.setPosition(725, 150);
            window.draw(GlobalDescriptionText);

            for (int i=0; i<3; i++){ //flangs and center and sbros
                GlobalText.setString(RoundMenuStr[i+1]);
                GlobalText.setPosition(75, 180+i*70);
                window.draw(GlobalText);}
            GlobalText.setString(RoundMenuStr[6]); //Ybezhavshie
            GlobalText.setPosition(70, 370);
            window.draw(GlobalText);
            GlobalText.setString(RoundMenuStr[7]); //Died
            GlobalText.setPosition(70, 465);
            window.draw(GlobalText);
            if ((YouWonBattle==false)&&(YouLostBattle==false)&&(Empate==false)&&(Retreat==false)){
            GlobalText.setString(RoundMenuStr[8]); //retreat!
            GlobalText.setPosition(140, 575);
            window.draw(GlobalText);}
            GlobalText.setString(RoundMenuStr[9]); //Round battle!
            GlobalText.setPosition(680, 575);
            window.draw(GlobalText);

            for (int j=0; j<3; j++){ //drawing army disposal
                for (int i=0; i<16; i++){
                    if (ArmyIn[j][i]>0){
                        SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                        SpSmallArmySheet.setPosition(375+ArmyCountDraw[j]*45, 175+j*70);
                        window.draw(SpSmallArmySheet);
                        ArmyInStr[j][i]=toString(ArmyIn[j][i]);
                        GlobalDescriptionText.setString(ArmyInStr[j][i]);
                        if (ArmyIn[j][i]>=100){GlobalDescriptionText.setPosition(375+ArmyCountDraw[j]*45, 215+j*70);}
                        else {GlobalDescriptionText.setPosition(375+ArmyCountDraw[j]*45, 215+j*70);}
                        window.draw(GlobalDescriptionText);
                        ArmyCountDraw[j]++;
                    } //end of ArmyIn if
                    if (EnemyIn[j][i]>0){
                        SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                        SpSmallArmySheet.setPosition(660+EnemyCountDraw[j]*45, 175+j*70);
                        window.draw(SpSmallArmySheet);

                        if (EnemyIn[j][i]<10){EnemyInStr[j][i]=toString(EnemyIn[j][i]);}
                        if ((EnemyIn[j][i]>=10)&&(EnemyIn[j][i]<20)){EnemyInStr[j][i]=toString("10-20");}
                        if ((EnemyIn[j][i]>=20)&&(EnemyIn[j][i]<30)){EnemyInStr[j][i]=toString("20-30");}
                        if ((EnemyIn[j][i]>=30)&&(EnemyIn[j][i]<=50)){EnemyInStr[j][i]=toString("30-50");}
                        if ((EnemyIn[j][i]>50)&&(EnemyIn[j][i]<100)){EnemyInStr[j][i]=toString(">50");}
                        if (EnemyIn[j][i]>=100){EnemyInStr[j][i]=toString(">100");}
                        SmallText.setString(EnemyInStr[j][i]);
                        if (EnemyIn[j][i]>=100){SmallText.setPosition(660+EnemyCountDraw[j]*45, 215+j*70);}
                        else {SmallText.setPosition(660+EnemyCountDraw[j]*45, 215+j*70);}
                        window.draw(SmallText);
                        EnemyCountDraw[j]++;
                    }
                }ArmyCountDraw[j]=0; EnemyCountDraw[j]=0;}//end of drawing army disposal

            for (int i=0; i<16; i++){ //drawing Dead
               if (ArmyDied[i]>0){
                        SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                        SpSmallArmySheet.setPosition(70+DeadArmyCountDraw*45, 495);
                        window.draw(SpSmallArmySheet);
                        DeadArmyStr[i]=toString(ArmyDied[i]);
                        GlobalDescriptionText.setString(DeadArmyStr[i]);
                        if (ArmyDied[i]>=100){GlobalDescriptionText.setPosition(70+DeadArmyCountDraw*45, 540);}
                        else {GlobalDescriptionText.setPosition(70+DeadArmyCountDraw*45, 540);}
                        window.draw(GlobalDescriptionText);
                        DeadArmyCountDraw++;
            }
            if (EnemyDied[i]>0){
                        SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                        SpSmallArmySheet.setPosition(660+DeadEnemyCountDraw*45, 495);
                        window.draw(SpSmallArmySheet);
                        DeadEnemyStr[i]=toString(EnemyDied[i]);
                        GlobalDescriptionText.setString(DeadEnemyStr[i]);
                        if (EnemyDied[i]>=100){GlobalDescriptionText.setPosition(660+DeadEnemyCountDraw*45, 540);}
                        else {GlobalDescriptionText.setPosition(660+DeadEnemyCountDraw*45, 540);}
                        window.draw(GlobalDescriptionText);
                        DeadEnemyCountDraw++;
            }
            }//end of dead draw
            DeadArmyCountDraw=0; DeadEnemyCountDraw=0;

            for (int i=0; i<16; i++){ //drawing paniced
               if (ArmyFledFromBattle[i]>0){
                        SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                        SpSmallArmySheet.setPosition(70+FledArmyCount*45, 400);
                        window.draw(SpSmallArmySheet);
                        DeadArmyStr[i]=toString(ArmyFledFromBattle[i]);
                        GlobalDescriptionText.setString(DeadArmyStr[i]);
                        if (ArmyFledFromBattle[i]>=100){GlobalDescriptionText.setPosition(70+FledArmyCount*45, 445);}
                        else {GlobalDescriptionText.setPosition(70+FledArmyCount*45, 445);}
                        window.draw(GlobalDescriptionText);
                        FledArmyCount++;
            }
            if (EnemyFledFromBattle[i]>0){
                        SpSmallArmySheet.setTextureRect(sf::IntRect(0+i*41, 0, 41, 41));
                        SpSmallArmySheet.setPosition(660+FledEnemyCount*45, 400);
                        window.draw(SpSmallArmySheet);
                        DeadEnemyStr[i]=toString(EnemyFledFromBattle[i]);
                        GlobalDescriptionText.setString(DeadEnemyStr[i]);
                        if (EnemyFledFromBattle[i]>=100){GlobalDescriptionText.setPosition(660+FledEnemyCount*45, 445);}
                        else {GlobalDescriptionText.setPosition(660+FledEnemyCount*45, 445);}
                        window.draw(GlobalDescriptionText);
                        FledEnemyCount++;
            }
            }//end of dead draw
            FledArmyCount=0; FledEnemyCount=0;

        for (int i=0; i<4; i++) {
            if ((AttackFromFlangsBool[i])&&(YouWonBattle==false)&&(YouLostBattle==false)&&(Empate==false)&&(Retreat==false)){
            switch (i){
            case 0:
            GlobalDescriptionText.setString("Вы атаковали слева!");
            GlobalDescriptionText.setPosition(360, 565);
            window.draw(GlobalDescriptionText);
            break;
            case 1:
            GlobalDescriptionText.setString("Вы атаковали справа!");
            GlobalDescriptionText.setPosition(360, 595);
            window.draw(GlobalDescriptionText);
            break;
            case 2:
            GlobalDescriptionText.setString("Вас атаковали слева!");
            GlobalDescriptionText.setPosition(360, 565);
            window.draw(GlobalDescriptionText);
            break;
            case 3:
            GlobalDescriptionText.setString("Вас атаковали справа!");
            GlobalDescriptionText.setPosition(360, 595);
            window.draw(GlobalDescriptionText);
            break;}
            }}


        if (YouWonBattle) {
            GlobalDescriptionText.setString("Вы выиграли битву!");
            GlobalDescriptionText.setPosition(375, 565);
            window.draw(GlobalDescriptionText);
            GlobalText.setString("Хорошо"); //Round battle!
            GlobalText.setPosition(140, 575);
            window.draw(GlobalText);

            GlobalDescriptionText.setString("Награда: "+TrofeyStr);
            GlobalDescriptionText.setPosition(375, 595);
            window.draw(GlobalDescriptionText);
            SpCoins.setPosition(520, 595); window.draw(SpCoins);
        }
        if (YouLostBattle) {
            GlobalDescriptionText.setString("Вы проиграли битву!");
            GlobalDescriptionText.setPosition(375, 565);
            window.draw(GlobalDescriptionText);
            GlobalText.setString("Плохо"); //Round battle!
            GlobalText.setPosition(150, 575);
            window.draw(GlobalText);
        }

//        if (Empate) {
//            GlobalDescriptionText.setString("Ничья! Враг отступает!");
//            GlobalDescriptionText.setPosition(375, 565);
//            window.draw(GlobalDescriptionText);
//            GlobalText.setString("Хорошо"); //Round battle!
//            GlobalText.setPosition(150, 575);
//            window.draw(GlobalText);
//        }


        if (Retreat) {
            GlobalDescriptionText.setString("Вы сбежали с поля боя.");
            GlobalDescriptionText.setPosition(375, 565);
            if (YouLostBattle) {GlobalDescriptionText.setPosition(375, 595);}
            window.draw(GlobalDescriptionText);
            GlobalText.setString("Плохо"); //Round battle!
            GlobalText.setPosition(150, 575);
            window.draw(GlobalText);
            }
        }//End of raund drawing



    if (SettingsMenu) {window.draw(SpSettingsMenu);}

//    string TestStr, TestStr1, TestStr2;
//    TestStr=toString(MovedCoordX); //EnemyLeft[0]+EnemyLeft[1]+EnemyLeft[2]
//     TestStr1=toString(MovedCoordY); //EnemyLeft[0]+EnemyLeft[1]+EnemyLeft[2]
//     TestStr2=toString(BME[27][0]); //EnemyLeft[0]+EnemyLeft[1]+EnemyLeft[2]
////    FindingCoordinatesText.setString(TurnsLeftForMonarchBattleStr);
// FindingCoordinatesText.setString(TestStr+ " " +TestStr1 + " " +TestStr2 + " " + ClickXStr + "x" + ClickYStr); //Finding coordinates for TESTS
//    FindingCoordinatesText.setPosition(150, 650);
//    window.draw(FindingCoordinatesText);
