#include<iostream>
#include<ctime>
#include<iomanip>
#define	Idely_4_pieces 40
#define	Dosa 50
#define	Vada 20
#define Pongal 40
#define Poori  40
#define Masala_Dosa 50
#define Rava_Kesari  30
#define Lemon_Rice  35
#define Ven_Pongal  40
#define Medhu_Vadai 15
#define Rava_Upma  35
#define Tomato_Uttapam  35
#define Kothu_Parotta 45
#define Thengai_Paal 30
#define Sambar_Rice  35
#define Lemon_Rice  35
#define Tomato_Rice 35
#define Curd_Rice 35
#define Vegetable_Biryani 40
#define Chicken_Biryani 120
#define Mutton_Biryani  180
#define Fish_Curry_with_Rice  150
#define Chicken_Curry_with_Rice 150
#define Mutton_Curry_with_Rice 180
#define Parotta_with_Chicken_Curry_or_Veg_Kurma 20
#define Egg_Curry_with_Rice 80
#define Paneer_Butter_Masala_with_Roti_or_Naan 60
#define Avial_with_Rice 50
#define Rasam_with_Rice 60
#define Kootu_with_Rice 60
class Room_Booking{
	int Total_Room=50;
	int Order_Room=0;
	protected:
	 int Get_Room;
	 int Total;
	public:
		void  Room_Book();
		void Get_Room_Details();
		void Menu_Card();
};
void Room_Booking::Room_Book()
{
    if(Total_Room>Order_Room)
    {
	std::cout<<"  Enter How Many Room You Want :"<<std::endl;
	std::cin>>Get_Room;
    Order_Room=Order_Room+Get_Room;


}
else{
	std::cout<<"Sorry For The Messege All Books Are Booked "<<std::endl;
}
}
void Room_Booking::Get_Room_Details(){
	std::cout<<Total_Room-Order_Room<<" Are Available "<<std::endl;
}
// display menu card functions
class Menu_Card:public Room_Booking{
    int i=0;
    int Lists[100];
    int Total_Iteam;
    int price[30]={40,50,20,40,40,50,30,35,40,15,35,35,45,30,35,35,35,35,40,120,180,150,150,180,20,80,60,50,60,60};
	int total_price;
	int Iteam_No;
	int count=1;
  public:
  	void Display_Menu_Card(void);
  	void get_Food_List(void);
  	void Display_Bill(void);
};
// menu card function
void Menu_Card::Display_Menu_Card(){
	std::cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	std::cout<<"*                              Welcome To Programming Food Hotel                                      *\n";
	std::cout<<"*     FOOD ITEAM LIST                                                                                 *\n";
	std::cout<<"*  Food Iteams          Price "<<"    Food Iteams           Price "<<" Food Iteams                Price       *\n ";
    std::cout<<"* 1.Idely_4_pieces       "<<Idely_4_pieces<<" $  "<<"11.Rava Upma            "<<Rava_Upma<<" $  "<<" 21.Mutton Biryani           "<<Mutton_Biryani<<" $      *\n";
 	std::cout<<"*  2.Dosa                 "<<Dosa<<" $  " <<"12.Tomato Uttapam       "<<Tomato_Uttapam<<" $  "<<"22.Parotta_with_Chicken       "<<Parotta_with_Chicken_Curry_or_Veg_Kurma<<" $      *\n";
 	std::cout<<"*  3.Vada                 "<<Vada<<" $  "<<"13.Kothu Parotta        "<<Kothu_Parotta<<" $  "<<"23.Fish Curry with Rice      "<<Fish_Curry_with_Rice<<" $      *\n";
	std::cout<<"*  4.Pongal               "<<Pongal<<" $  "<<"14.Thengai Paal         "<<Thengai_Paal <<" $  "<<"24.Chicken Curry with Rice   "<<Chicken_Curry_with_Rice<<" $      *\n";
 	std::cout<<"*  5.Poori                "<<Poori<<" $  "<<"15.Sambar Rice          "<<Sambar_Rice<<" $ "<<" 25.Mutton Curry with Rice    "<<Mutton_Curry_with_Rice<<" $      *\n";
 	std::cout<<"*  6.Masala Dosa          "<<Masala_Dosa<<" $  "<<"16.Lemon Rice           "<<Lemon_Rice<<" $  "<<"26.Egg Curry with  Rice       "<<Egg_Curry_with_Rice<<" $      *\n";
 	std::cout<<"*  7.Rava Kesari          "<< Rava_Kesari<<" $  "<<"17.Tomato  Rice         "<<Tomato_Rice<<" $  "<<"27.Panee Butter Masala        "<<Paneer_Butter_Masala_with_Roti_or_Naan<<" $      *\n";
 	std::cout<<"*  8.Lemon Rice           "<<Lemon_Rice<<" $  "<<"18.Curd Rice            "<<Curd_Rice<<" $  "<<"28.Avial with Rice            "<<Avial_with_Rice<<" $      *\n";
 	std::cout<<"*  9.Ven Pongal           "<<Ven_Pongal<<" $  "<<"19.Vegetable Biryani    "<<Vegetable_Biryani<<" $"<<"  29.Rasam with  Rice           "<<Rasam_with_Rice<<" $      *\n";
 	std::cout<<"* 10.Medhu Vadai          "<<Medhu_Vadai<<" $  "<<"20.Chicken Biryani     "<<Chicken_Biryani<<" $  "<<"30.Kootu with Rice            "<<Kootu_with_Rice<<" $      *\n";
 	std::cout<<"*                                                                                                     *\n";
 	std::cout<<"*                                                                                                     *\n";
 	std::cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n\n";
 	get_Food_List();
}
// get food iteam function
void Menu_Card::get_Food_List()
{

	std::cout<<"\tEnter Food Iteams  \t\t\t\t Press 0 For Exit \n";


	do{

	std::cin>>Iteam_No;
	Lists[i]=Iteam_No;
	total_price=total_price+price[Iteam_No-1];
	count++;
	i++;


}while(Iteam_No!=0);
	Display_Bill();
}
//menucard display function
void Menu_Card::Display_Bill(){
	system("cls");
	 time_t now = time(0);
    tm* localTime = localtime(&now);
	std::cout<<"Your Bill : \n"<<std::endl;
	std::cout<<"Time :"<<std::put_time(localTime, "%d/%m/%Y")<<"\t"<<"Date :"<<std::put_time(localTime, "%H:%M:%S") <<std::endl;
std::cout<<"--------------------------------------\n";

	std::cout<<" ITEAM LIST                PRICES"<<std::endl;
std::cout<<"--------------------------------------\n";
	Total=Get_Room*1500;
	std::cout<<" No of Rooms Booked :    "<<Get_Room<<"  "<<Total<<"  $ \n\n"<<std::endl;
	std::cout<<"--------------------------------------\n";
	std::cout<<" FOOD ITEAM                  "<<std::endl;
	std::cout<<"--------------------------------------\n\n";

for(i=0;i<count;i++){
	switch(Lists[i])
	{
		    case 1:
			std::cout<<i+1<<".Idely 4 pieces            "<<Idely_4_pieces<<" $ \n"<<std::endl;
			break;
			case 2:
			std::cout<<i+1<<" .Dosa                     "<<Dosa<<" $\n"<<std::endl;
			break;
		    case 3:
			std::cout<<i+1<<" .Vada                     "<<Vada<<" $ \n"<<std::endl;
			break;
			case 4:
			std::cout<<i+1<<" .Pongal                   "<<Pongal<<"$\n"<<std::endl;
			break;
			case 5:
			std::cout<<i+1<<" .Poori                    "<<Poori<<" $\n"<<std::endl;
			break;
			case 6:
			std::cout<<i+1<<" .Masala Dosa              "<<Masala_Dosa<<" $\n"<<std::endl;
			break;
			case 7:
			std::cout<<i+1<<" .Rava Kesari              "<< Rava_Kesari<<" $\n"<<std::endl;
			break;
			case 8:
			std::cout<<i+1<<".Lemon Rice                "<<Lemon_Rice<<" $\n"<<std::endl;
			break;
			case 9:
			std::cout<<i+1<<" .Ven Pongal               "<<Ven_Pongal<<" $\n"<<std::endl;
			break;
			case 10:
			std::cout<<i+1<<" .Medhu Vadai              "<<Medhu_Vadai<<" $\n"<<std::endl;
			break;
			case 11:
			std::cout<<i+1<<".Rava Upma                 "<<Rava_Upma<<" $\n"<<std::endl;
			break;
			case 12:
			std::cout<<i+1<<".Tomato Uttapam            "<<Tomato_Uttapam<<" $\n"<<std::endl;
			break;
			case 13:
			std::cout<<i+1<<" .Kothu Parotta            "<<Kothu_Parotta<<" $\n"<<std::endl;
			break;
			case 14:
			std::cout<<i+1<<" .Thengai Paal             "<<Thengai_Paal<<" $\n"<<std::endl;
			break;
			case 15:
			std::cout<<i+1<<" .Sambar Rice              "<<Sambar_Rice<<" $\n"<<std::endl;
			break;
			case 16:
			std::cout<<i+1<<" .Lemon Rice               "<<Lemon_Rice<<" $\n"<<std::endl;
			break;
			case 17:
			std::cout<<i+1<<" .Tomato  Rice             "<<Tomato_Rice<<" $\n"<<std::endl;
			break ;
			case 18:
			std::cout<<i+1<<" .Curd Rice                "<<Curd_Rice<<" $\n"<<std::endl;
			break;
			case 19:
			std::cout<<i+1<<".Vegetable Biryani         "<<Vegetable_Biryani<<" $\n"<<std::endl;
			break;
			case 20:
			std::cout<<i+1<<" .Chicken Biryani          "<<Chicken_Biryani<<" $\n"<<std::endl;
			break;
			case 21:
			std::cout<<i+1<<" .Mutton Biryani           "<<Mutton_Biryani<<" $\n"<<std::endl;
			break;
			case 22:
			std::cout<<i+1<<" .Parotta with Chicken     "<<Parotta_with_Chicken_Curry_or_Veg_Kurma<<" $\n"<<std::endl;
			break;
			case 23:
			std::cout<<i+1<<" .Fish Curry with Rice     "<<Fish_Curry_with_Rice<<" $\n"<<std::endl;
			break;
			case 24:
			std::cout<<i+1<<" .Chicken Curry with Rice  "<<Chicken_Curry_with_Rice<<" $\n"<<std::endl;
			break;
			case 25:
			std::cout<<i+1<<" .Mutton Curry with Rice   "<<Mutton_Curry_with_Rice<<" $\n"<<std::endl;
			break;
			case 26:
			std::cout<<i+1<<" .Egg Curry with  Rice     "<<Egg_Curry_with_Rice<<" $\n"<<std::endl;
			break;
			case 27:
			std::cout<<i+1<<".Panee Butter Masala       "<<Paneer_Butter_Masala_with_Roti_or_Naan<<" $\n"<<std::endl;
			break;
			case 28:
			std::cout<<i+1<<".Avial with Rice           "<<Avial_with_Rice<<" $\n"<<std::endl;
			break;
			case 29:
			std::cout<<i+1<<" .Rasam with  Rice         "<<Rasam_with_Rice<<" $\n"<<std::endl;
			break;
			case 30:
			std::cout<<i+1<<" .Kootu with Rice          "<<Kootu_with_Rice<<" $\n"<<std::endl;
			break;
	}

}
	std::cout<<"--------------------------------------\n";
	std::cout<<" Total Amount                "<<total_price+Total<<"  $ "<<std::endl;
	std::cout<<"--------------------------------------\n";
}
// room bill function
int main()
{
	 Menu_Card obj;
int option;
std::cout<<"\t*************************************************************************************************\n";
std::cout<<"\t*\t\t\t\t\tProgramming Restaurant\t\t\t\t\t*"<<std::endl;
std::cout<<"\t*************************************************************************************************\n\n\n";
std::cout<<"\t\t\t   \t\tWELCOME TO PROGRAMMING RESTAURANT\t\t\t \n\n"<<std::endl;
std::cout<<" \t Enter Your Options :  \n\n\n\n\t\t\t 1. Room Booking  \n\n\t\t\t 2. Food Order  \n\n\t\t\t 3. Exit"<<std::endl;
std::cin>>option;

if(option==1)
{
	system("cls");
	obj.Room_Book();
	system("cls");
	std::cout<<" Do You Want To Order Food :  \n  1 . Yes \n  2. No "<<std::endl;
	std::cin>>option;
	if(option==1)
	{
		system("cls");
		obj.Display_Menu_Card();

	}
	else if(option==2){
	obj.Display_Bill();

	}
	else{
        std::cout<<"THANKS FOR YOUR TIME "<<std::endl;
	}
}
else{
obj.Display_Menu_Card();
obj.get_Food_List();
obj.Display_Bill();
}


}

