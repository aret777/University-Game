


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
    StartTextStr=toString("Вам предстоит взять на себя управление городом, развивать\
    \nего и обеспечивать его защиту, чтобы, спустя 100 ходов, полу-\nчить трон, разгромив монарха в бою или стать наследником,\
    \nженившись на его дочери. Но вы так же можете и проиграть, \nесли в течении 5 ходов вы не выйдете из минуса по золоту или\
    \nпотерпите поражение в королевской битве. \nНюансы игры: \
    \n1. работники что заняты производством, не платят налоги. \
    \n2. Если вы будете вести себя плохо по отношению к крестьянам, \nсоседям и монарху, они вас атакуют. \
    \n3. Битва: Если вас застали врасплох, вы несете 20% потери и \nначинается бой. Далее вы распределяете войска по 3 сторонам \
    \n(левый фланг, правый фланг и центр). Каждый раунд все войска \
    \nатакуют отряд с наибольшей силой атаки. Если враги кончи-\nлись, отряды перемещаются в центр. Если в центре были враги, \
    \nим наносится атака с фланга, равная половине атаки всех \nпереходящих отрядов. Если после атаки остался недобитый \
    \nюнит, он восстанавливает здоровье. Если в течении 10 ходов \nне будет победителя - объявляется ничья в вашу пользу.");
    string MenuButStr[6] = {"   Здания", "    Войска", "Экономика", "  Торговля ", "    Квесты ", " Артефакты"};
    MenuButText.setCharacterSize(20);
    MenuButText.setColor(sf::Color::Black);
    MenuButText.setStyle(sf::Text::Bold);
    string MenuFinalButStr[9] = {"Построить", "Снести", "Нанять", "Уволить", "Купить", "Продать", "Выполнено", "Отказаться", "Продать за 100"};
    string MenuTextStr[6] = {"Постройка зданий", "Армия и оружие", "Доходы и расходы",
    "       Продажа              Спрос             Покупка       Предложение", "Полученные задания", " Найденные Артефакты"};
    string BuildingCountStr = "Застроено " +BuildingsBuiltStr+ " полей. Свободно " +FreeSpaceStr+ " полей";
    string BuildingsNamesStr[20] = {"Ферма", "Дом охотника", "Шахта", "Мельница", "Дом рыбака",
    "Казармы", "Гвардейские Казармы", "Вышка", "Башня", "Башня Стражи",
    "Дубильня", "Кузница", "Винодельня", "Таверна", "Конюшня",
    "Порт", "Магический Kруг", "Висельница", "Золотая Статуя", "Родовое Поместье"};
    string ForgeTextStr[7] = {"Что производить?", "Луки", "Копья", "Мечи", "Доспехи", "Ничего не \nпроизводить", "Готово"};
    string BuildingDescriptionStr[20] = {
    "Обычная ферма. \n10 крестьян обеспечат \nпропитанием себя и еще \nчетыре десятка работников.",
    "Дом, где охотники хранят \nснаряжение и разделывают \nдобычу. \nСтроится только в Лесу.",
    "Тяжелый труд и высокие \nрасходы на инструменты \nсоздают большую цену на \nжелезо. 10% шанс/ход найти \nДрагоценный Камень. \nСтроится только на Холмах.",
    "Мельница перерабатывает \nзлаковые в муку, из которой \nлегко печь хлеб. \nСтроится только на Холмах.",
    "Здесь рыбаки выгружают и \nсортируют улов. \nСтроится только на берегу.",
    "Место для обучения и \nтренировок воинов. \nТренируют до 10 бойцов/ход.",
    "Маленькая крепость, где \nобучаются лучшие из лучших. \nТренируют до 20 бойцов/ход.",
    "Вышка даст 20% шанс не \nзастать врагам город \nврасплох. \n+5 стрелков для обороны \nгорода.",
    "Дает 30% шанс не застать \nврагам город врасплох.\n+5 лучников при обороне \nгорода.",
    "Дает 50% шанс не застать \nврагам город врасплох.\n+10 копейщиков при обороне \nгорода и не дает \nпроисходить преступлениям.",
    "Здесь шкуры превращают в \nкожу, из которой потом \nделают кожаную броню.",
    "Работает в 4 режимах: \nпроизводит луки, копья, \nмечи или железную броню.",
    "Здесь собранный хмель и \nвиноград превращают в \nвеликолепное пиво и вино!",
    "Место для отдыха после \nтяжелого рабочего дня.",
    "Здесь размножают и \nсодержат лошадей.",
    "Порты не только дают больше \nместа для торговых кораблей, \nувеличивая возможности \nрынка, но и возможность \nдля торговых сборов.\nСтроится только на берегу.",
    "Круг из магических камней и \nстранной пентаграммы, \nмистическим образом даст \nвам случайный артефакт. \nНо жители их не любят.",
    "Эти холопы лентяйничают и \nбунтуют?! Пара висельниц \nостудит их пыл!",
    "Статуя нашего монарха, \nвыполненная в благородном \nметалле, не только поднимет \nвашу репутацию в его глазах, \nно и привлечет новых жителей.",
    "Ваше родовое поместье. \nТут вы живете и оттуда \nраздаете свои указания. \nНельзя построить или снести."};
    string ArtifactsNameStr[20] = {"Меч Падшего Воина", "Шлем Повелителя Рек", "Кираса Хорошей Погоды", "Пчелиное Копье",
    "Лук Приятных Снов", "Пояс Жеребца", "Ботинки Короля Петухов", "Щит Убийцы Гигантов", "Перчатки \n  Сборщика Налогов",
    "Бесконечные Стрелы", "Бесконечные дрова", "«Душа Кузнеца»", "«Горные Слезы»", "Кольцо Приключений",
    "Кольцо Лекаря", "Ножка Лошадиного \n            Ужаса", "«Книга о соблазнении \n     девичьих сердец»",
    "«Книга 1001 рецепта \n     вкусной еды»", "Зелье Любви", "Зелье Смены Пола"};
    string ArtifactDescriptionStr[20]={"Каждый раунд боя наносит \n50 урона случайному отряду \nпротивника. \nПредпочитает сражаться в \nцентре поля брани.",
    "Увеличивает прибыль с Портов \nи Рыбацких Домов на 5, \nа также улучшает события \nсвязанные с рекой.",
    "Климатические катастрофы \nбудут обходить ваш город \nстороной. \nУвеличивает доход ферм на 5.",
    "Рой разъяренных пчел перед \nбоем выведет из строя до 10% \nврага.",
    "Лук дает приятные сны не \nтолько владельцу, но и всем \nжителям города, увеличивая \nприрост жителей на 1 \nи делает их довольнее.",
    "Нося этот пояс, вы подаете \nпример всем жеребцам, \nа кобылицы начинают к вам \nластиться. \nУвеличивает прирост лошадей.",
    "Верные своему королю петухи, \nвсегда будут неусыпно бдеть, \nна страже вашего города",
    "Даже в одиночку, вы убьете \nхоть великана, хоть дракона!",
    "Перчатки показывают где \nхолопы прячут золотишко, \nпозволяя собирать больше \nзолота в казну.",
    "Когда у тебя есть колчан с \nбесконечными стрелами, то \nстоимость содержания \nлучника значительно падает.",
    "Бесплатные дрова - \n-это всегда хорошо! \n+20 дерева/ход",
    "Этот молот помогает \nстроить здания в городе, \nобеспечивая постоянную \nскидку в 20-25% на цену \nпостроек в дереве и камне.",
    "Этот кристалл буквально \n«плачет» рубинами...\n+1 рубин/ход",
    "О, это кольцо обещает вам \nнасыщенную событиями \nжизнь, полную приключений!",
    "Лечит не только прыщи да \nбородавки, но и чуму!",
    "Достаточно помахать этой \nногой перед мордой лошади, \nкак та в страхе убежит, \nсбросив своего наездника. \nПревращает половину \nкавалерии врага в пехоту",
    "Название говорит само за \nсебя... С этой книгой, в \nнужный момент, вы сможете \nпоказать себя в лучшем свете \nперед Принцессой!",
    "С этой книгой, спрос на \nвашу еду подскочит до небес!",
    "Одна капля, и вас полюбит \nдаже мужчина...",
    "Хм. Интересно, и зачем же \nоно мне?",};

    string ArmyNameStr[16] = {"Стрелки", "Лучники", "Тяжелые Лучники", "Конные Лучники",
    "Крестьяне", "Копейщики", "Алебардисты", "Феодальные Рыцари",
    "Ополченцы", "Мечники", "Пехотинцы", "Тевтонские Рыцари",
    "Легкая Кавалерия", "Катафракты", "Ударная Кавалерия", "Тяжелая Кавалерия"};
    for (int i=0;i<16;i++){
        ArmySalaryStr[i]=toString(ArmyChars[4][i]);
        for (int j=0;j<7;j++){
        if (ArmyCosts[j][i]!=0){ArmyCostsStr[j][i]=toString(ArmyCosts[j][i]);}}
    }
    string ArmyDescriptionStr[16]={
    "Дешевые и бестолковые. \nНедавние крестьяне, \nкоторым в руки дали лук. \nМожно нанимать \nнеограниченно.\n\nСтоимость: \nПлата: "+ArmySalaryStr[0]+"    /ход",
    "Обычные лучники. \nНе самые большие затраты, \nно и не самый сильный\nэффект.\n\nСтоимость: \nПлата: "+ArmySalaryStr[1]+"    /ход\nНужна Казарма.",
    "Если на лучников нацепить \nкольчуги, то получатся \nтяжелые лучники.\n\nСтоимость: \nПлата: "+ArmySalaryStr[2]+"    /ход\nНужна Казарма.",
    "Стреляющая кавалерия. \nДорогие, однако весьма \nполезные.\n\nСтоимость: \nПлата: "+ArmySalaryStr[3]+"    /ход\nНужна Казарма.",
    "Все те мужики, что \nнедавно пахали поля, с \nкосами и вилами. Можно \nнанимать неограниченно.\n\nСтоимость: бесплатно\nПлата: "+ArmySalaryStr[4]+"    /ход",
    "Простые воины с копьями \nи в кожаной броне. \nДешево и сердито.\n\nСтоимость: \nПлата: "+ArmySalaryStr[5]+"    /ход\nНужна Казарма.",
    "Вооружены не только более \nмощными алебардами, \nно и имеют железную броню.\nСтрах кавалерии.\n\nСтоимость: \nПлата: "+ArmySalaryStr[6]+"    /ход\nНужна Гвард. Казарма.",
    "Мощнейший удар и самая \nтяжелая броня сочетаются \nне только с отличным \nбоевым духом, но и с тягой\nк самовольным действиям.\n\nСтоимость: \nПлата: "+ArmySalaryStr[7]+"    /ход\nНужна Гвард. Казарма.",
    "Нет оружия, но срочно \nнужны войска? \nПолучите-распишитесь. \nМожно нанимать \nнеограниченно.\n\nСтоимость: \nПлата: "+ArmySalaryStr[8]+"    /ход",
    "Дешевые войска, которые \nне разбегутся в бою и даже \nсмогут принести пользу.\n\nСтоимость: \nПлата: "+ArmySalaryStr[9]+"    /ход\nНужна Казарма.",
    "Серьезные бронированные \nмечники. Вполне достойные \nкандидаты на место в \nвойске.\n\nСтоимость: \nПлата: "+ArmySalaryStr[10]+"    /ход\nНужна Гвард. Казарма.",
    "Самая мощная, хотя и \nсамая медленная пехота. \nИ еще у них отлично \nс боевым духом.\n\nСтоимость: \nПлата: "+ArmySalaryStr[11]+"    /ход\nНужна Гвард. Казарма.",
    "Стандартный конный отряд\n\nСтоимость: \nПлата: "+ArmySalaryStr[12]+"    /ход\nНужна Казарма.",
    "Крепости, которые \nдвижутся сами по себе. \nМощный удар и \nтяжелейшая броня.\n\nСтоимость: \nПлата: "+ArmySalaryStr[13]+"    /ход\nНужна Гвард. Казарма.",
    "Легкие кавалеристы \nс копьями. Неплохо и \nнедорого.\n\nСтоимость: \nПлата: "+ArmySalaryStr[14]+"    /ход\nНужна Казарма.",
    "Конные копейщики, \nвполне достойные того, \nчтобы их считали тяжелой \nкавалерией, и которые \nпрорвут любую оборону.\n\nСтоимость: \nПлата: "+ArmySalaryStr[15]+"    /ход\nНужна Гвард. Казарма."};
    string ArmySpecialRulesStr[16] = {
    "Первая атака.", "Первая атака.", "Первая атака.", "Первая атака. \nИгнор первой атаки.",
    "+50% к урону против \nкавалерии.","+50% к урону против \nкавалерии.","+50% к урону против \nкавалерии.",
    "30% шанс на атаку \nслучайной цели.",
    " ", " ", " ", "Получают две первых \nатаки от стрелков.",
    "Игнор Первой Атаки. \n+50% против пехоты.","Игнор Первой Атаки. \n+50% против пехоты.",
    "Игнор Первой Атаки. \nx3 урон в 1-ом раунде.","Игнор Первой Атаки. \nx3 урон в 1-ом раунде." };

    string BattleMenuStr[11] = {"Битва!", "Доступные \n    войска:", "Вас застали врасплох! \nВойска понесли потери!", "Вы были готовы к битве",
    "Левый Фланг", "Центр", "Правый Фланг", "Сброс", "Сбежали с поля боя:", "Отступить.", "В бой!"};
    string RoundMenuStr[10] = {"Раунд", "На левом фланге", "В центре", "На правом фланге", "Ваши войска", "Противник", "Сбежавшие:", "Убитые:", "Бежать!", "Продолжать бой!"};

    string KingsQuestsStr[10] ={
    "Своим королевским указом, Монарх \nприказывает вам подготовить обозы с \nпровизией для амбаров королевства, \nна случай войны и осады. \nТребуется 300 пищи.",
    "Для проведения рыцарского турнира в \nстолице, требуется еда и выпивка! \nКороль хочет обоз с 100 еды и 50 выпивки!",
    "Монарх хочет украсить свои регалии \nлучшими рубинами королевства! \nОн требует от вас прислать ему 10 самых \nлучших ваших драгоценных камней!",
    "Монарх хочет укрепить оборону столицы \nи требует от вас солдат. \nЕму нужно 5 лучников и 5 копейщиков.",
    "Монарх планирует разводить элитную \nпороду лошадей. Ему требуются самые \nпородистые лошади королевства! \nПредоставьте табун в 20 голов Королю.",
    "Король запланировал возведение \nсовременных укреплений в столице. \nУвеличить высоту стен и башен, расширить \nров. Ему нужны стройматериалы. \n250 дерева и 250 камня будут в самый раз.",
    "Для королевских оружейных требуется \nоружие! \nПредоставьте монарху 30 луков и 30 копий!",
    "У короля скоро день рождения! \nОн хочет чего нибудь любопытного, \nнеобычного... какого нибудь артефакта, \nкоторый он выберет сам. \nВыслать ему описание нашей коллекции?",
    "Принцесса хочет построить в \nкоролевском саду зверинец, но ей не \nхватает животных. Мы могли бы купить, \nчерез наши торговые связи, диковинного \nЛистенка! Но обойдется он в 300 монет... ",
    "Принцесса была на приеме в \nсоседнем королевстве, и ей очень понра-\nвилась коллекция туфель той принцессы. \nОна хочет её заполучить. Мы можем ей \nпомочь и послать воинов украсть сундук \nс туфлями. \nНужно 20 кавалеристов."};

    string MonarchRepStr[6] = {"       Не любит вас", "  Недолюбливает вас", "   Нейтрален к вам", " Симпатизирует вам","    Гордится вами"};
    string TurnsLeftForMonarchBattleStr=toString(TurnsLeftForMonarchBattle);
    MonarchRepText.setCharacterSize(22);
    MonarchRepText.setStyle(sf::Text::Bold);
    MonarchRepText.setColor(sf::Color::Black);
    MonarchRepText.setPosition(1000, 40);

    string EconomyMenuTextStr[15] = {"Производство", "Потребление", "Итого", "Налоги", "+10%", "-10%", "Уровень\nналогов",
    "+1", "+10", "-1", "-10", "Добывает дерево ", "Добывает камень ", "Будет добыто ", "Доход:"};
    EconomyMenuNumbersText.setCharacterSize(36);
    EconomyMenuNumbersText.setStyle(sf::Text::Bold);
    EconomyMenuNumbersText.setColor(sf::Color::Black);


    string TurnStr=toString(Turn); //counter in right upper corner
    CountTurnText.setCharacterSize(22);
    CountTurnText.setStyle(sf::Text::Bold);
    CountTurnText.setColor(sf::Color::Black);
    CountTurnText.setPosition(1100, 0);

    string AutoStr=toString("авто");







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

