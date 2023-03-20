



void FindingEventsFun(int WhichEvent, int EventCount123){
if (Artifacts[14]){EventBlocked[7]=true; EventBlocked[15]=true;} //kolco lekarya
if (Artifacts[2]){} //kirasa pogodu
while (EventBlocked[WhichEvent]) {WhichEvent=1+rand()%TotalPossibleEvents;}
if ((Turn<50)&&(WhichEvent==18)) {WhichEvent=1+rand()%TotalPossibleEvents;}
EventChoosed[WhichEvent]=true;


switch (WhichEvent){
case 0: break;
case 1:
EventInt[1]=2*(1+rand()%Turn); EventStr=toString(EventInt[1]);
EventTextStr[EventCount123]=toString("Мыши пожрали запасы! \nБыло съедено "+EventStr+" еды!");
ResourcesQuantity[2]-=EventInt[1];
EventButtonsTextStr[EventCount123][0]=toString("Черт!");
EventButtonsTextStr[EventCount123][1]=toString("Попробовать вывести \nмышей. (30 монет)");
break;
case 2:
EventInt[2]=(1+rand()%ResourcesQuantity[0]); EventStr=toString(EventInt[2]);
EventTextStr[EventCount123]=toString("Пропало "+EventStr+" монет.");
ResourcesQuantity[0]-=EventInt[2];
EventButtonsTextStr[EventCount123][0]=toString("Меньше пить надо.");
EventButtonsTextStr[EventCount123][1]=toString("Найти и казнить \nвиновных! (25 монет)");
break;
case 3:
EventInt[3]=2*(1+rand()%Turn); EventStr=toString(EventInt[3]);
EventTextStr[EventCount123]=toString("Один крестьянин нашел клад! \nАж "+EventStr+" монет! Что будем делать?");
EventButtonsTextStr[EventCount123][0]=toString("Пусть радуется, мне \nчужого не надо.");
EventButtonsTextStr[EventCount123][1]=toString("Забрать все себе!");
break;
case 4:
EventTextStr[EventCount123]=toString("Пол десятка крестьян раздобыли оружие \nи хотят патрулировать город. \nЧто скажете?");
EventButtonsTextStr[EventCount123][0]=toString("Спасибо, не надо.");
EventButtonsTextStr[EventCount123][1]=toString("Записать в армию.\n(+5 Ополченцев)");
break;
case 5: EventTextStr[EventCount123]=toString("Недалеко от города упал метеорит.");
EventButtonsTextStr[EventCount123][0]=toString("Ну упал и упал. \nПусть валяется.");
EventButtonsTextStr[EventCount123][1]=toString("Сходить посмотреть.");
break;
case 6:
EventTextStr[EventCount123]=toString("К вам в город пришел Великий Вавар Воин. \
\nОн вызывает лучшего вашего бойца на бой \nи если он победит, вы оплатите его расходы \
\nна отдых в вашем городе. (30 монет) \nЕсли победите вы, он даст вам один из своих \nартефактов. Что скажете?");
EventButtonsTextStr[EventCount123][0]=toString("Нет, спасибо.");
EventButtonsTextStr[EventCount123][1]=toString("Ладно. Выставить \nлучшего воина!");
break;
case 7: EventTextStr[EventCount123]=toString("В городе падеж скота! \nМассово мрут коровы и лошади! \nНадо что-то предпринять!");
EventButtonsTextStr[EventCount123][0]=toString("Забить больных \nживотных. (+Еда)");
EventButtonsTextStr[EventCount123][1]=toString("Продать весь скот \nсоседу за полцены.");
break;
case 8: EventTextStr[EventCount123]=toString("К вам пришел известный купец. Предлагает \nкупить редкую диковинку. \
Говорит, она \nобладает магическими свойствами.");
EventButtonsTextStr[EventCount123][0]=toString("Нет, спасибо.");
EventButtonsTextStr[EventCount123][1]=toString("Согласится на \nсделку (150 монет)");
break;
case 9: EventTextStr[EventCount123]=toString("К вам прибежал астроном, \nговорит, на город скоро упадет метеорит!");
EventButtonsTextStr[EventCount123][0]=toString("Пффф. Опасность \nпреувеличена.");
EventButtonsTextStr[EventCount123][1]=toString("Молиться Аретикусу.");
break;
case 10: EventTextStr[EventCount123]=toString("Гильдия Купцов требует от вас починить \nдороги, которые размыло дождями.");
EventButtonsTextStr[EventCount123][0]=toString("Починить. (-50 дерева \nи камня)");
EventButtonsTextStr[EventCount123][1]=toString("Хотят торговать, \nпусть сами и чинят.");
break;
case 11: EventTextStr[EventCount123]=toString("В город пришел известный менестрель. \nОн хочет чтобы вы оплатили его проживание \nи выступление. Взамен он вас прославит.");
EventButtonsTextStr[EventCount123][0]=toString("Согласиться. \n(-10 монет, -10 вина)");
EventButtonsTextStr[EventCount123][1]=toString("Нечего кормить \nбездаря. ");
break;
case 12: EventTextStr[EventCount123]=toString("В городе завелись огромные комары! \nОни не дают спать, сосут кровь и \nпугают детей! Надо что то сделать!");
EventButtonsTextStr[EventCount123][0]=toString("Начать жечь костры \n(-30 дерева)");
EventButtonsTextStr[EventCount123][1]=toString("Высосали проблему из \nпальца. Сами улетят.");
break;
case 13: EventTextStr[EventCount123]=toString("Налет саранчи! Эти насекомые жрут \nполя и посевы! Если ничего не сделать, \nвсе фермы будут разрушены!");
EventButtonsTextStr[EventCount123][0]=toString("Молиться Аретикусу!");
EventButtonsTextStr[EventCount123][1]=toString("Обратиться к жрецам \n(-100 монет)");
break;
case 14: EventTextStr[EventCount123]=toString("Ваши подданные нашли необычную вещь \nи принесли её вам! \nЭто оказался какой то артефакт!");
EventButtonsTextStr[EventCount123][0]=toString("Дать сначала \nиспытать крестьянам.");
EventButtonsTextStr[EventCount123][1]=toString("Узнать как он \nработает самому.");
break;
case 15: EventTextStr[EventCount123]=toString("В городе эпидемия тифа.");
EventButtonsTextStr[EventCount123][0]=toString("Выбросить всю еду \nи вино.");
EventButtonsTextStr[EventCount123][1]=toString("Обратиться к жрецам \n(-100 монет)");
break;
case 16: EventTextStr[EventCount123]=toString("В ваш город пришел отряд наемников \n(10 человек в кожаной броне). \nНанять их на службу?");
EventButtonsTextStr[EventCount123][0]=toString("Отказаться.");
EventButtonsTextStr[EventCount123][1]=toString("Нанять (-50 монет)");
break;
case 17: EventTextStr[EventCount123]=toString("Соседний феодал прислал вам дары: \n10 бочек вина и 10 лошадей. ");
EventButtonsTextStr[EventCount123][0]=toString("Поблагодарить.");
EventButtonsTextStr[EventCount123][1]=toString("Послать дары в ответ.\n(-100 монет)");
break;
case 18: EventTextStr[EventCount123]=toString("На город напал Дракон!");
EventButtonsTextStr[EventCount123][0]=toString("Отсидеться в домах.");
EventButtonsTextStr[EventCount123][1]=toString("Убить чудовище!");
EventBlocked[1]=false;
break;
case 19: EventTextStr[EventCount123]=toString("На город напал огр!");
EventButtonsTextStr[EventCount123][0]=toString("Отсидеться в домах.");
EventButtonsTextStr[EventCount123][1]=toString("Убить чудовище!");
break;
case 20: EventTextStr[EventCount123]=toString("К городу приближается мощный ураган! \nЧто нам делать?");
EventButtonsTextStr[EventCount123][0]=toString("Молиться Аретикусу.");
EventButtonsTextStr[EventCount123][1]=toString("Молиться всем кому \nможно!");
break;
case 21: EventTextStr[EventCount123]=toString("К берегу прибило обломки корабля и какой \nто сундук. Ваш сосед-феодал говорит что \nэто его сундук и просит вас его вернуть. \nЧто будем делать?");
EventButtonsTextStr[EventCount123][0]=toString("Вернуть.");
EventButtonsTextStr[EventCount123][1]=toString("Вскрыть.");
break;
case 22: EventTextStr[EventCount123]=toString("К вашим берегам приплыл пиратский корабль! \nОни требуют 10 баб, 10 бочек вина и 100 золотых,\nиначе они заберут все силой, и даже больше! \nКорабль большой, человек на 30.");
EventButtonsTextStr[EventCount123][0]=toString("Отдать им требуемое.");
EventButtonsTextStr[EventCount123][1]=toString("Убить негодяев!");
break;
case 23: EventTextStr[EventCount123]=toString("В лесу обосновалась банда разбойников! \nОни пожгут все лесные здания, если вы не \nвыплатите им 100 монет! Их шайка невелика, \nвсего около 10 человек, но они хорошо воору-\nжены и их возглавляет тевтонец. ");
EventButtonsTextStr[EventCount123][0]=toString("Заплатить.");
EventButtonsTextStr[EventCount123][1]=toString("Найти их и вырезать!");
break;
case 24: EventTextStr[EventCount123]=toString("В городе завелась шайка бандитов! \nОни грабят горожан и рисуют похабные органы \nна стенах зданий. Они уже украли часть \nресурсов со складов! Что будем делать? \n(В основном это всякая пьянь да тунедядцы.)");
EventButtonsTextStr[EventCount123][0]=toString("Попытаться завербо-\nвать. (50 монет)");
EventButtonsTextStr[EventCount123][1]=toString("Пусть солдаты \nзаймутся.");
for (int i=0; i<3; i++){
ProbabInClicks=2+rand()%14;
n2ProbabInClicks=5+rand()%10;
if(ResourcesQuantity[ProbabInClicks]>=n2ProbabInClicks){ResourcesQuantity[ProbabInClicks]-=n2ProbabInClicks;}}
break;
case 25: EventTextStr[EventCount123]=toString("К вам пришел мужчина, с просьбой открыть \nбордель в вашем городе. Если вы согласитесь, \nон будет выплачивать вам часть доходов \n(10 монет), но ему нужно будет выбрать с \nдесяток девиц среди населения. Что скажете?");
EventButtonsTextStr[EventCount123][0]=toString("Отказать.");
EventButtonsTextStr[EventCount123][1]=toString("Согласится.");
break;

}//end of switch


}//end of function


void Luck (){
EventsProbability=1+rand()%100;
if (Artifacts[13]) {EventsProbability=100;}
if (EventsProbability<=10) {WhichEvent1=0;}
if ((EventsProbability>10)&&(EventsProbability<=33)) {WhichEvent1=0;}
if ((EventsProbability>33)&&(EventsProbability<=90)) {WhichEvent1=1+rand()%TotalPossibleEvents; Event1Menu=true;}
if (EventsProbability>90) {WhichEvent1=1+rand()%TotalPossibleEvents; Event1Menu=true;}

//NumberOfEvents=0; //for tests
FindingEventsFun(WhichEvent1, 0);

}//end of deciding of events function

