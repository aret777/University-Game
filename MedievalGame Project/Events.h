



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
EventTextStr[EventCount123]=toString("���� ������� ������! \n���� ������� "+EventStr+" ���!");
ResourcesQuantity[2]-=EventInt[1];
EventButtonsTextStr[EventCount123][0]=toString("����!");
EventButtonsTextStr[EventCount123][1]=toString("����������� ������� \n�����. (30 �����)");
break;
case 2:
EventInt[2]=(1+rand()%ResourcesQuantity[0]); EventStr=toString(EventInt[2]);
EventTextStr[EventCount123]=toString("������� "+EventStr+" �����.");
ResourcesQuantity[0]-=EventInt[2];
EventButtonsTextStr[EventCount123][0]=toString("������ ���� ����.");
EventButtonsTextStr[EventCount123][1]=toString("����� � ������� \n��������! (25 �����)");
break;
case 3:
EventInt[3]=2*(1+rand()%Turn); EventStr=toString(EventInt[3]);
EventTextStr[EventCount123]=toString("���� ���������� ����� ����! \n�� "+EventStr+" �����! ��� ����� ������?");
EventButtonsTextStr[EventCount123][0]=toString("����� ��������, ��� \n������ �� ����.");
EventButtonsTextStr[EventCount123][1]=toString("������� ��� ����!");
break;
case 4:
EventTextStr[EventCount123]=toString("��� ������� �������� ��������� ������ \n� ����� ������������� �����. \n��� �������?");
EventButtonsTextStr[EventCount123][0]=toString("�������, �� ����.");
EventButtonsTextStr[EventCount123][1]=toString("�������� � �����.\n(+5 ����������)");
break;
case 5: EventTextStr[EventCount123]=toString("�������� �� ������ ���� ��������.");
EventButtonsTextStr[EventCount123][0]=toString("�� ���� � ����. \n����� ��������.");
EventButtonsTextStr[EventCount123][1]=toString("������� ����������.");
break;
case 6:
EventTextStr[EventCount123]=toString("� ��� � ����� ������ ������� ����� ����. \
\n�� �������� ������� ������ ����� �� ��� \n� ���� �� �������, �� �������� ��� ������� \
\n�� ����� � ����� ������. (30 �����) \n���� �������� ��, �� ���� ��� ���� �� ����� \n����������. ��� �������?");
EventButtonsTextStr[EventCount123][0]=toString("���, �������.");
EventButtonsTextStr[EventCount123][1]=toString("�����. ��������� \n������� �����!");
break;
case 7: EventTextStr[EventCount123]=toString("� ������ ����� �����! \n������� ���� ������ � ������! \n���� ���-�� �����������!");
EventButtonsTextStr[EventCount123][0]=toString("������ ������� \n��������. (+���)");
EventButtonsTextStr[EventCount123][1]=toString("������� ���� ���� \n������ �� �������.");
break;
case 8: EventTextStr[EventCount123]=toString("� ��� ������ ��������� �����. ���������� \n������ ������ ���������. \
�������, ��� \n�������� ����������� ����������.");
EventButtonsTextStr[EventCount123][0]=toString("���, �������.");
EventButtonsTextStr[EventCount123][1]=toString("���������� �� \n������ (150 �����)");
break;
case 9: EventTextStr[EventCount123]=toString("� ��� �������� ��������, \n�������, �� ����� ����� ������ ��������!");
EventButtonsTextStr[EventCount123][0]=toString("����. ��������� \n������������.");
EventButtonsTextStr[EventCount123][1]=toString("�������� ���������.");
break;
case 10: EventTextStr[EventCount123]=toString("������� ������ ������� �� ��� �������� \n������, ������� ������� �������.");
EventButtonsTextStr[EventCount123][0]=toString("��������. (-50 ������ \n� �����)");
EventButtonsTextStr[EventCount123][1]=toString("����� ���������, \n����� ���� � �����.");
break;
case 11: EventTextStr[EventCount123]=toString("� ����� ������ ��������� ����������. \n�� ����� ����� �� �������� ��� ���������� \n� �����������. ������ �� ��� ���������.");
EventButtonsTextStr[EventCount123][0]=toString("�����������. \n(-10 �����, -10 ����)");
EventButtonsTextStr[EventCount123][1]=toString("������ ������� \n�������. ");
break;
case 12: EventTextStr[EventCount123]=toString("� ������ �������� �������� ������! \n��� �� ���� �����, ����� ����� � \n������ �����! ���� ��� �� �������!");
EventButtonsTextStr[EventCount123][0]=toString("������ ���� ������ \n(-30 ������)");
EventButtonsTextStr[EventCount123][1]=toString("�������� �������� �� \n������. ���� ������.");
break;
case 13: EventTextStr[EventCount123]=toString("����� �������! ��� ��������� ���� \n���� � ������! ���� ������ �� �������, \n��� ����� ����� ���������!");
EventButtonsTextStr[EventCount123][0]=toString("�������� ���������!");
EventButtonsTextStr[EventCount123][1]=toString("���������� � ������ \n(-100 �����)");
break;
case 14: EventTextStr[EventCount123]=toString("���� ��������� ����� ��������� ���� \n� �������� � ���! \n��� �������� ����� �� ��������!");
EventButtonsTextStr[EventCount123][0]=toString("���� ������� \n�������� ����������.");
EventButtonsTextStr[EventCount123][1]=toString("������ ��� �� \n�������� ������.");
break;
case 15: EventTextStr[EventCount123]=toString("� ������ �������� ����.");
EventButtonsTextStr[EventCount123][0]=toString("��������� ��� ��� \n� ����.");
EventButtonsTextStr[EventCount123][1]=toString("���������� � ������ \n(-100 �����)");
break;
case 16: EventTextStr[EventCount123]=toString("� ��� ����� ������ ����� ��������� \n(10 ������� � ������� �����). \n������ �� �� ������?");
EventButtonsTextStr[EventCount123][0]=toString("����������.");
EventButtonsTextStr[EventCount123][1]=toString("������ (-50 �����)");
break;
case 17: EventTextStr[EventCount123]=toString("�������� ������ ������� ��� ����: \n10 ����� ���� � 10 �������. ");
EventButtonsTextStr[EventCount123][0]=toString("�������������.");
EventButtonsTextStr[EventCount123][1]=toString("������� ���� � �����.\n(-100 �����)");
break;
case 18: EventTextStr[EventCount123]=toString("�� ����� ����� ������!");
EventButtonsTextStr[EventCount123][0]=toString("���������� � �����.");
EventButtonsTextStr[EventCount123][1]=toString("����� ��������!");
EventBlocked[1]=false;
break;
case 19: EventTextStr[EventCount123]=toString("�� ����� ����� ���!");
EventButtonsTextStr[EventCount123][0]=toString("���������� � �����.");
EventButtonsTextStr[EventCount123][1]=toString("����� ��������!");
break;
case 20: EventTextStr[EventCount123]=toString("� ������ ������������ ������ ������! \n��� ��� ������?");
EventButtonsTextStr[EventCount123][0]=toString("�������� ���������.");
EventButtonsTextStr[EventCount123][1]=toString("�������� ���� ���� \n�����!");
break;
case 21: EventTextStr[EventCount123]=toString("� ������ ������� ������� ������� � ����� \n�� ������. ��� �����-������ ������� ��� \n��� ��� ������ � ������ ��� ��� �������. \n��� ����� ������?");
EventButtonsTextStr[EventCount123][0]=toString("�������.");
EventButtonsTextStr[EventCount123][1]=toString("�������.");
break;
case 22: EventTextStr[EventCount123]=toString("� ����� ������� ������� ��������� �������! \n��� ������� 10 ���, 10 ����� ���� � 100 �������,\n����� ��� ������� ��� �����, � ���� ������! \n������� �������, ������� �� 30.");
EventButtonsTextStr[EventCount123][0]=toString("������ �� ���������.");
EventButtonsTextStr[EventCount123][1]=toString("����� ��������!");
break;
case 23: EventTextStr[EventCount123]=toString("� ���� ������������ ����� �����������! \n��� ������ ��� ������ ������, ���� �� �� \n��������� �� 100 �����! �� ����� ��������, \n����� ����� 10 �������, �� ��� ������ �����-\n���� � �� ����������� ��������. ");
EventButtonsTextStr[EventCount123][0]=toString("���������.");
EventButtonsTextStr[EventCount123][1]=toString("����� �� � ��������!");
break;
case 24: EventTextStr[EventCount123]=toString("� ������ �������� ����� ��������! \n��� ������ ������� � ������ �������� ������ \n�� ������ ������. ��� ��� ������ ����� \n�������� �� �������! ��� ����� ������? \n(� �������� ��� ������ ����� �� ���������.)");
EventButtonsTextStr[EventCount123][0]=toString("���������� �������-\n����. (50 �����)");
EventButtonsTextStr[EventCount123][1]=toString("����� ������� \n��������.");
for (int i=0; i<3; i++){
ProbabInClicks=2+rand()%14;
n2ProbabInClicks=5+rand()%10;
if(ResourcesQuantity[ProbabInClicks]>=n2ProbabInClicks){ResourcesQuantity[ProbabInClicks]-=n2ProbabInClicks;}}
break;
case 25: EventTextStr[EventCount123]=toString("� ��� ������ �������, � �������� ������� \n������� � ����� ������. ���� �� �����������, \n�� ����� ����������� ��� ����� ������� \n(10 �����), �� ��� ����� ����� ������� � \n������� ����� ����� ���������. ��� �������?");
EventButtonsTextStr[EventCount123][0]=toString("��������.");
EventButtonsTextStr[EventCount123][1]=toString("����������.");
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

