


    AllMusic.openFromFile("intro.ogg");
    AllMusic.play();

    Font FontInsula;
    Font FontLisa;
    FontInsula.loadFromFile("ttf/insula.ttf");
    FontLisa.loadFromFile("ttf/lllisa.ttf");
    Text GlobalText;
    Text GlobalInterfaceText;
    Text GlobalDescriptionText;
    Text ResourcesQText;
    Text ArmyQText;
    Text MonarchRepText;
    Text MenuButText;
    Text MenuFinalButText;
    Text CountTurnText;
    Text EconomyMenuText;
    Text EconomyMenuNumbersText;
    Text SmallText;



    GlobalText.setFont(FontInsula); //basic shrift for normal frases
    GlobalText.setCharacterSize(22);
    GlobalText.setStyle(sf::Text::Bold);
    GlobalText.setColor(sf::Color::Black);
    GlobalInterfaceText.setFont(FontLisa); //global text for Lisa letters in buttons
    GlobalInterfaceText.setCharacterSize(22);
    GlobalInterfaceText.setStyle(sf::Text::Bold);
    GlobalInterfaceText.setColor(sf::Color::Black);
    GlobalDescriptionText.setFont(FontInsula); //basic shrift for description text
    GlobalDescriptionText.setCharacterSize(18);
    GlobalDescriptionText.setStyle(sf::Text::Bold);
    GlobalDescriptionText.setColor(sf::Color::Black);
    ResourcesQText.setFont(FontInsula); //global basic shrift for numbers
    ResourcesQText.setCharacterSize(22);
    ResourcesQText.setColor(sf::Color::Black);
    SmallText.setFont(FontInsula); //basic shrift for description text
    SmallText.setCharacterSize(14);
    SmallText.setStyle(sf::Text::Bold);
    SmallText.setColor(sf::Color::Black);

    MenuButText.setFont(FontLisa);
    MenuFinalButText.setFont(FontLisa);
    EconomyMenuText.setFont(FontLisa);
    EconomyMenuNumbersText.setFont(FontLisa);

    ArmyQText.setFont(FontInsula);
    MonarchRepText.setFont(FontInsula);
    CountTurnText.setFont(FontInsula);

    Text FindingCoordinatesText; // for test
    FindingCoordinatesText.setFont(FontInsula); //for tests
    FindingCoordinatesText.setCharacterSize(22);
    FindingCoordinatesText.setColor(sf::Color::Black);
    FindingCoordinatesText.setStyle(sf::Text::Bold);


    string StartTextStr;
    StartTextStr=toString("��� ��������� ����� �� ���� ���������� �������, ���������\
    \n��� � ������������ ��� ������, �����, ������ 100 �����, ����-\n���� ����, ��������� ������� � ��� ��� ����� �����������,\
    \n��������� �� ��� ������. �� �� ��� �� ������ � ���������, \n���� � ������� 5 ����� �� �� ������� �� ������ �� ������ ���\
    \n��������� ��������� � ����������� �����. \n������ ����: \
    \n1. ��������� ��� ������ �������������, �� ������ ������. \
    \n2. ���� �� ������ ����� ���� ����� �� ��������� � ����������, \n������� � �������, ��� ��� �������. \
    \n3. �����: ���� ��� ������� ��������, �� ������ 20% ������ � \n���������� ���. ����� �� ������������� ������ �� 3 �������� \
    \n(����� �����, ������ ����� � �����). ������ ����� ��� ������ \
    \n������� ����� � ���������� ����� �����. ���� ����� �����-\n����, ������ ������������ � �����. ���� � ������ ���� �����, \
    \n�� ��������� ����� � ������, ������ �������� ����� ���� \n����������� �������. ���� ����� ����� ������� ��������� \
    \n����, �� ��������������� ��������. ���� � ������� 10 ����� \n�� ����� ���������� - ����������� ����� � ���� ������.");
    string MenuButStr[6] = {"   ������", "    ������", "���������", "  �������� ", "    ������ ", " ���������"};
    MenuButText.setCharacterSize(20);
    MenuButText.setColor(sf::Color::Black);
    MenuButText.setStyle(sf::Text::Bold);
    string MenuFinalButStr[9] = {"���������", "������", "������", "�������", "������", "�������", "���������", "����������", "������� �� 100"};
    string MenuTextStr[6] = {"��������� ������", "����� � ������", "������ � �������",
    "       �������              �����             �������       �����������", "���������� �������", " ��������� ���������"};
    string BuildingCountStr = "��������� " +BuildingsBuiltStr+ " �����. �������� " +FreeSpaceStr+ " �����";
    string BuildingsNamesStr[20] = {"�����", "��� ��������", "�����", "��������", "��� ������",
    "�������", "����������� �������", "�����", "�����", "����� ������",
    "��������", "�������", "����������", "�������", "�������",
    "����", "���������� K���", "����������", "������� ������", "������� ��������"};
    string ForgeTextStr[7] = {"��� �����������?", "����", "�����", "����", "�������", "������ �� \n�����������", "������"};
    string BuildingDescriptionStr[20] = {
    "������� �����. \n10 �������� ��������� \n����������� ���� � ��� \n������ ������� ����������.",
    "���, ��� �������� ������ \n���������� � ����������� \n������. \n�������� ������ � ����.",
    "������� ���� � ������� \n������� �� ����������� \n������� ������� ���� �� \n������. 10% ����/��� ����� \n����������� ������. \n�������� ������ �� ������.",
    "�������� �������������� \n�������� � ����, �� ������� \n����� ���� ����. \n�������� ������ �� ������.",
    "����� ������ ��������� � \n��������� ����. \n�������� ������ �� ������.",
    "����� ��� �������� � \n���������� ������. \n��������� �� 10 ������/���.",
    "��������� ��������, ��� \n��������� ������ �� ������. \n��������� �� 20 ������/���.",
    "����� ���� 20% ���� �� \n������� ������ ����� \n��������. \n+5 �������� ��� ������� \n������.",
    "���� 30% ���� �� ������� \n������ ����� ��������.\n+5 �������� ��� ������� \n������.",
    "���� 50% ���� �� ������� \n������ ����� ��������.\n+10 ���������� ��� ������� \n������ � �� ���� \n����������� �������������.",
    "����� ����� ���������� � \n����, �� ������� ����� \n������ ������� �����.",
    "�������� � 4 �������: \n���������� ����, �����, \n���� ��� �������� �����.",
    "����� ��������� ����� � \n�������� ���������� � \n������������ ���� � ����!",
    "����� ��� ������ ����� \n�������� �������� ���.",
    "����� ���������� � \n�������� �������.",
    "����� �� ������ ���� ������ \n����� ��� �������� ��������, \n���������� ����������� \n�����, �� � ����������� \n��� �������� ������.\n�������� ������ �� ������.",
    "���� �� ���������� ������ � \n�������� �����������, \n����������� ������� ���� \n��� ��������� ��������. \n�� ������ �� �� �����.",
    "��� ������ ������������ � \n�������?! ���� ��������� \n������� �� ���!",
    "������ ������ �������, \n����������� � ����������� \n�������, �� ������ �������� \n���� ��������� � ��� ������, \n�� � ��������� ����� �������.",
    "���� ������� ��������. \n��� �� ������ � ������ \n�������� ���� ��������. \n������ ��������� ��� ������."};
    string ArtifactsNameStr[20] = {"��� ������� �����", "���� ���������� ���", "������ ������� ������", "�������� �����",
    "��� �������� ����", "���� �������", "������� ������ �������", "��� ������ ��������", "�������� \n  �������� �������",
    "����������� ������", "����������� �����", "����� �������", "������� ������", "������ �����������",
    "������ ������", "����� ���������� \n            �����", "������ � ����������� \n     �������� �������",
    "������ 1001 ������� \n     ������� ����", "����� �����", "����� ����� ����"};
    string ArtifactDescriptionStr[20]={"������ ����� ��� ������� \n50 ����� ���������� ������ \n����������. \n������������ ��������� � \n������ ���� �����.",
    "����������� ������� � ������ \n� �������� ����� �� 5, \n� ����� �������� ������� \n��������� � �����.",
    "������������� ���������� \n����� �������� ��� ����� \n��������. \n����������� ����� ���� �� 5.",
    "��� ����������� ���� ����� \n���� ������� �� ����� �� 10% \n�����.",
    "��� ���� �������� ��� �� \n������ ���������, �� � ���� \n������� ������, ���������� \n������� ������� �� 1 \n� ������ �� ���������.",
    "���� ���� ����, �� ������� \n������ ���� ��������, \n� �������� �������� � ��� \n���������. \n����������� ������� �������.",
    "������ ������ ������ ������, \n������ ����� �������� �����, \n�� ������ ������ ������",
    "���� � ��������, �� ������ \n���� ��������, ���� �������!",
    "�������� ���������� ��� \n������ ������ ���������, \n�������� �������� ������ \n������ � �����.",
    "����� � ���� ���� ������ � \n������������ ��������, �� \n��������� ���������� \n������� ����������� ������.",
    "���������� ����� - \n-��� ������ ������! \n+20 ������/���",
    "���� ����� �������� \n������� ������ � ������, \n����������� ���������� \n������ � 20-25% �� ���� \n�������� � ������ � �����.",
    "���� �������� ��������� \n������� ��������...\n+1 �����/���",
    "�, ��� ������ ������� ��� \n���������� ��������� \n�����, ������ �����������!",
    "����� �� ������ ����� �� \n���������, �� � ����!",
    "���������� �������� ���� \n����� ����� ������ ������, \n��� �� � ������ ������, \n������� ������ ���������. \n���������� �������� \n��������� ����� � ������",
    "�������� ������� ���� �� \n����... � ���� ������, � \n������ ������, �� ������� \n�������� ���� � ������ ����� \n����� ����������!",
    "� ���� ������, ����� �� \n���� ��� ��������� �� �����!",
    "���� �����, � ��� ������� \n���� �������...",
    "��. ���������, � ����� �� \n��� ���?",};

    string ArmyNameStr[16] = {"�������", "�������", "������� �������", "������ �������",
    "���������", "���������", "�����������", "���������� ������",
    "���������", "�������", "���������", "���������� ������",
    "������ ���������", "����������", "������� ���������", "������� ���������"};
    for (int i=0;i<16;i++){
        ArmySalaryStr[i]=toString(ArmyChars[4][i]);
        for (int j=0;j<7;j++){
        if (ArmyCosts[j][i]!=0){ArmyCostsStr[j][i]=toString(ArmyCosts[j][i]);}}
    }
    string ArmyDescriptionStr[16]={
    "������� � �����������. \n�������� ���������, \n������� � ���� ���� ���. \n����� �������� \n�������������.\n\n���������: \n�����: "+ArmySalaryStr[0]+"    /���",
    "������� �������. \n�� ����� ������� �������, \n�� � �� ����� �������\n������.\n\n���������: \n�����: "+ArmySalaryStr[1]+"    /���\n����� �������.",
    "���� �� �������� �������� \n��������, �� ��������� \n������� �������.\n\n���������: \n�����: "+ArmySalaryStr[2]+"    /���\n����� �������.",
    "���������� ���������. \n�������, ������ ������ \n��������.\n\n���������: \n�����: "+ArmySalaryStr[3]+"    /���\n����� �������.",
    "��� �� ������, ��� \n������� ������ ����, � \n������ � ������. ����� \n�������� �������������.\n\n���������: ���������\n�����: "+ArmySalaryStr[4]+"    /���",
    "������� ����� � ������� \n� � ������� �����. \n������ � �������.\n\n���������: \n�����: "+ArmySalaryStr[5]+"    /���\n����� �������.",
    "��������� �� ������ ����� \n������� ����������, \n�� � ����� �������� �����.\n����� ���������.\n\n���������: \n�����: "+ArmySalaryStr[6]+"    /���\n����� �����. �������.",
    "��������� ���� � ����� \n������� ����� ���������� \n�� ������ � �������� \n������ �����, �� � � �����\n� ����������� ���������.\n\n���������: \n�����: "+ArmySalaryStr[7]+"    /���\n����� �����. �������.",
    "��� ������, �� ������ \n����� ������? \n��������-�����������. \n����� �������� \n�������������.\n\n���������: \n�����: "+ArmySalaryStr[8]+"    /���",
    "������� ������, ������� \n�� ���������� � ��� � ���� \n������ �������� ������.\n\n���������: \n�����: "+ArmySalaryStr[9]+"    /���\n����� �������.",
    "��������� ������������� \n�������. ������ ��������� \n��������� �� ����� � \n������.\n\n���������: \n�����: "+ArmySalaryStr[10]+"    /���\n����� �����. �������.",
    "����� ������, ���� � \n����� ��������� ������. \n� ��� � ��� ������� \n� ������ �����.\n\n���������: \n�����: "+ArmySalaryStr[11]+"    /���\n����� �����. �������.",
    "����������� ������ �����\n\n���������: \n�����: "+ArmySalaryStr[12]+"    /���\n����� �������.",
    "��������, ������� \n�������� ���� �� ����. \n������ ���� � \n���������� �����.\n\n���������: \n�����: "+ArmySalaryStr[13]+"    /���\n����� �����. �������.",
    "������ ����������� \n� �������. ������� � \n��������.\n\n���������: \n�����: "+ArmySalaryStr[14]+"    /���\n����� �������.",
    "������ ���������, \n������ ��������� ����, \n����� �� ������� ������� \n����������, � ������� \n������� ����� �������.\n\n���������: \n�����: "+ArmySalaryStr[15]+"    /���\n����� �����. �������."};
    string ArmySpecialRulesStr[16] = {
    "������ �����.", "������ �����.", "������ �����.", "������ �����. \n����� ������ �����.",
    "+50% � ����� ������ \n���������.","+50% � ����� ������ \n���������.","+50% � ����� ������ \n���������.",
    "30% ���� �� ����� \n��������� ����.",
    " ", " ", " ", "�������� ��� ������ \n����� �� ��������.",
    "����� ������ �����. \n+50% ������ ������.","����� ������ �����. \n+50% ������ ������.",
    "����� ������ �����. \nx3 ���� � 1-�� ������.","����� ������ �����. \nx3 ���� � 1-�� ������." };

    string BattleMenuStr[11] = {"�����!", "��������� \n    ������:", "��� ������� ��������! \n������ ������� ������!", "�� ���� ������ � �����",
    "����� �����", "�����", "������ �����", "�����", "������� � ���� ���:", "���������.", "� ���!"};
    string RoundMenuStr[10] = {"�����", "�� ����� ������", "� ������", "�� ������ ������", "���� ������", "���������", "���������:", "������:", "������!", "���������� ���!"};

    string KingsQuestsStr[10] ={
    "����� ����������� ������, ������ \n����������� ��� ����������� ����� � \n��������� ��� ������� �����������, \n�� ������ ����� � �����. \n��������� 300 ����.",
    "��� ���������� ���������� ������� � \n�������, ��������� ��� � �������! \n������ ����� ���� � 100 ��� � 50 �������!",
    "������ ����� �������� ���� ������� \n������� �������� �����������! \n�� ������� �� ��� �������� ��� 10 ����� \n������ ����� ����������� ������!",
    "������ ����� �������� ������� ������� \n� ������� �� ��� ������. \n��� ����� 5 �������� � 5 ����������.",
    "������ ��������� ��������� ������� \n������ �������. ��� ��������� ����� \n���������� ������ �����������! \n������������ ����� � 20 ����� ������.",
    "������ ������������ ���������� \n����������� ���������� � �������. \n��������� ������ ���� � �����, ��������� \n���. ��� ����� ��������������. \n250 ������ � 250 ����� ����� � ����� ���.",
    "��� ����������� ��������� ��������� \n������! \n������������ ������� 30 ����� � 30 �����!",
    "� ������ ����� ���� ��������! \n�� ����� ���� ������ �����������, \n����������... ������ ������ ���������, \n������� �� ������� ���. \n������� ��� �������� ����� ���������?",
    "��������� ����� ��������� � \n����������� ���� ��������, �� �� �� \n������� ��������. �� ����� �� ������, \n����� ���� �������� �����, ����������� \n��������! �� ��������� �� � 300 �����... ",
    "��������� ���� �� ������ � \n�������� �����������, � �� ����� �����-\n������ ��������� ������ ��� ���������. \n��� ����� � ����������. �� ����� �� \n������ � ������� ������ ������� ������ \n� �������. \n����� 20 ������������."};

    string MonarchRepStr[6] = {"       �� ����� ���", "  ������������� ���", "   ��������� � ���", " ������������� ���","    �������� ����"};
    string TurnsLeftForMonarchBattleStr=toString(TurnsLeftForMonarchBattle);
    MonarchRepText.setCharacterSize(22);
    MonarchRepText.setStyle(sf::Text::Bold);
    MonarchRepText.setColor(sf::Color::Black);
    MonarchRepText.setPosition(1000, 40);

    string EconomyMenuTextStr[15] = {"������������", "�����������", "�����", "������", "+10%", "-10%", "�������\n�������",
    "+1", "+10", "-1", "-10", "�������� ������ ", "�������� ������ ", "����� ������ ", "�����:"};
    EconomyMenuNumbersText.setCharacterSize(36);
    EconomyMenuNumbersText.setStyle(sf::Text::Bold);
    EconomyMenuNumbersText.setColor(sf::Color::Black);


    string TurnStr=toString(Turn); //counter in right upper corner
    CountTurnText.setCharacterSize(22);
    CountTurnText.setStyle(sf::Text::Bold);
    CountTurnText.setColor(sf::Color::Black);
    CountTurnText.setPosition(1100, 0);

    string AutoStr=toString("����");







//INTERFACE TEXTURES

Texture TxCoins;
TxCoins.loadFromFile("interface/coins.png", sf::IntRect(0, 0, 0, 0));
Sprite SpCoins;
SpCoins.setTexture(TxCoins);
SpCoins.setScale(0.8, 0.8);

Texture TxCherta;
TxCherta.loadFromFile("interface/cherta.png", sf::IntRect(0, 0, 0, 0));
Sprite SpCherta;
SpCherta.setTexture(TxCherta);

Texture TxGalka;
TxGalka.loadFromFile("interface/galka.png", sf::IntRect(0, 0, 0, 0));
Sprite SpGalka;
SpGalka.setTexture(TxGalka);

Texture TxBabax;
TxBabax.loadFromFile("interface/babax.png", sf::IntRect(0, 0, 0, 0));
Sprite SpBabax;
SpBabax.setTexture(TxBabax);

Texture TxCancel;
TxCancel.loadFromFile("interface/cancel.png", sf::IntRect(0, 0, 0, 0));
Sprite SpCancel;
SpCancel.setTexture(TxCancel);

Texture TxCancel2;
TxCancel2.loadFromFile("interface/cancel2.png", sf::IntRect(0, 0, 0, 0));
Sprite SpCancel2;
SpCancel2.setTexture(TxCancel2);


Texture TxMilitaryIcons;
TxMilitaryIcons.loadFromFile("interface/militaryicons.png", sf::IntRect(0, 0, 0, 0));
Sprite SpMilitaryIcons;
SpMilitaryIcons.setTexture(TxMilitaryIcons);

Texture TxEventMenu;
TxEventMenu.loadFromFile("interface/EventMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpEventMenu;
SpEventMenu.setTexture(TxEventMenu);

Texture TxForgeMenu;
TxForgeMenu.loadFromFile("interface/ForgeMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpForgeMenu;
SpForgeMenu.setTexture(TxForgeMenu);

Texture TxBattleMenu;
TxBattleMenu.loadFromFile("interface/BattleMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpBattleMenu;
SpBattleMenu.setTexture(TxBattleMenu);

Texture TxRoundMenu;
TxRoundMenu.loadFromFile("interface/RoundMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpRoundMenu;
SpRoundMenu.setTexture(TxRoundMenu);

Texture TxMonarchRep;
TxMonarchRep.loadFromFile("interface/MonarchReputation.png", sf::IntRect(0, 0, 0, 0));
Sprite SpMonarchRep;
SpMonarchRep.setTexture(TxMonarchRep);
SpMonarchRep.setPosition(1000, 70);

Texture TxMenuBut;
TxMenuBut.loadFromFile("interface/MenuButtons.png", sf::IntRect(0, 0, 0, 0));
Sprite SpMenuBut;
SpMenuBut.setTexture(TxMenuBut);
SpMenuBut.setPosition(1000, 31);

Texture TxColorMenu;
TxColorMenu.loadFromFile("interface/ColorMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpColorMenu;
SpColorMenu.setTexture(TxColorMenu);
SpColorMenu.setPosition(1015, 670);

Texture TxBuildingMenu;
TxBuildingMenu.loadFromFile("interface/BuildingMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpBuildingMenu;
SpBuildingMenu.setTexture(TxBuildingMenu);
SpBuildingMenu.setPosition(0, 35);

Texture TxArmyMenu;
TxArmyMenu.loadFromFile("interface/ArmyMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpArmyMenu;
SpArmyMenu.setTexture(TxArmyMenu);
SpArmyMenu.setPosition(0, 35);

Texture TxArtifactMenu;
TxArtifactMenu.loadFromFile("interface/ArtifactMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpArtifactMenu;
SpArtifactMenu.setTexture(TxArtifactMenu);
SpArtifactMenu.setPosition(0, 35);

Texture TxEconomyMenu;
TxEconomyMenu.loadFromFile("interface/EconomyMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpEconomyMenu;
SpEconomyMenu.setTexture(TxEconomyMenu);
SpEconomyMenu.setPosition(0, 35);

Texture TxTradeMenu;
TxTradeMenu.loadFromFile("interface/TradeMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpTradeMenu;
SpTradeMenu.setTexture(TxTradeMenu);
SpTradeMenu.setPosition(0, 35);

Texture TxQuestMenu;
TxQuestMenu.loadFromFile("interface/QuestMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpQuestMenu;
SpQuestMenu.setTexture(TxQuestMenu);
SpQuestMenu.setPosition(370, 35);

Texture TxBuildingArea;
TxBuildingArea.loadFromFile("interface/BuildingArea.png", sf::IntRect(0, 0, 0, 0));
Sprite SpBuildingArea;
SpBuildingArea.setTexture(TxBuildingArea);
SpBuildingArea.setPosition(0, 33);

Texture TxSettingsMenu;
TxSettingsMenu.loadFromFile("interface/SettingsMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpSettingsMenu;
SpSettingsMenu.setTexture(TxSettingsMenu);
SpSettingsMenu.setPosition(370, 220);

Texture TxFinalMenu;
TxFinalMenu.loadFromFile("interface/FinalMenu.png", sf::IntRect(0, 0, 0, 0));
Sprite SpFinalMenu;
SpFinalMenu.setTexture(TxFinalMenu);
SpFinalMenu.setPosition(370, 220);

// TERRAIN TEXTURES
Texture TxGrass;
TxGrass.loadFromFile("terrain/grass1000-700.30transp22.png", sf::IntRect(0, 0, 0, 0));
Sprite SpGrass;
SpGrass.setTexture(TxGrass);
//SpForest.setScale(1.5, 1.5);


Texture TxBuildingLine;
TxBuildingLine.loadFromFile("terrain/buildings/buildingline2.png", sf::IntRect(0, 0, 0, 0));
GlobalBuildingPointer = &TxBuildingLine;
Sprite SpBuildingLine;
SpBuildingLine.setTexture(TxBuildingLine);


Texture TxForest;
TxForest.loadFromFile("terrain/treepack.png", sf::IntRect(0, 0, 0, 0));
Sprite SpForest;
SpForest.setTexture(TxForest);

Texture TxHills;
TxHills.loadFromFile("terrain/hillpack.png", sf::IntRect(0, 0, 0, 0));
Sprite SpHills;
SpHills.setTexture(TxHills);


// OTHER IMAGES TEXTURES
Texture TxResourcesSheet;
TxResourcesSheet.loadFromFile("interface/resourcesheet.png", sf::IntRect(0, 0, 0, 0));
Sprite SpResourcesSheet;
SpResourcesSheet.setTexture(TxResourcesSheet);

Texture TxArmySheet;
TxArmySheet.loadFromFile("interface/armysheet.png", sf::IntRect(0, 0, 0, 0));
Sprite SpArmySheet;
SpArmySheet.setTexture(TxArmySheet);
//SpArmySheet.setScale(0.4, 0.4);

Texture TxSmallArmySheet;
TxSmallArmySheet.loadFromFile("interface/smallarmysheet.png", sf::IntRect(0, 0, 0, 0));
Sprite SpSmallArmySheet;
SpSmallArmySheet.setTexture(TxSmallArmySheet);


Texture TxArtifactSheet;
TxArtifactSheet.loadFromFile("interface/artifactsheet.png", sf::IntRect(0, 0, 0, 0));
Sprite SpArtifactSheet;
SpArtifactSheet.setTexture(TxArtifactSheet);

Texture TxEndTurnButton;
TxEndTurnButton.loadFromFile("interface/EndTurnButton.png", sf::IntRect(0, 0, 0, 0));
Sprite SpEndTurnButton;
SpEndTurnButton.setTexture(TxEndTurnButton);

RectangleShape rectangle1; //for end turn button

RectangleShape rectangle2; //for end turn button

RectangleShape rectangle3; //for end turn button

RectangleShape rectangle4; //for end turn button

RectangleShape rectangleMain;

RectangleShape EconomyRectangle;

