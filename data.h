#ifndef DATA_H
#define DATA_H

#include <QVector>

#include <fstream>
#include <iostream>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include "user.h"
#include "team.h"
#include "organization.h"

using namespace std;


class Data
{

private:
    static QVector<user>::iterator it;
    static QVector<user> members;
    static QVector<team> teams;
    static QVector<organization> organs;
public:
    static void set_iterator(QVector<user>::iterator _it){ it=_it; }

    static QVector<user>::iterator& get_iterator(){ return it; }

    static void set_players(QVector<user>& _players){ members=_players; }

    static QVector<user>& get_players() { return members ; }


    /*
public:
    static void set_iterator(QVector<Player>::iterator _it){ it=_it; }

    static QVector<Player>::iterator& get_iterator(){ return it; }

    static void set_players(QVector<Player>& _players){ players=_players; }

    static QVector<Player>& get_players() { return players; }


    static void write_on_file() {
        QFile f("Players.json");
        f.open(QIODevice::ReadOnly);
        QJsonDocument d = QJsonDocument::fromJson(f.readAll());
        f.close();
        QJsonObject o = d.object();
        QJsonObject temp = o[get_iterator()->get_username()].toObject();
        temp["Name"] = get_iterator()->get_name();
        temp["Username"] = get_iterator()->get_username();
        temp["Password"] = get_iterator()->get_password();
        temp["Email"] = get_iterator()->get_email();
        temp["Coin"] = get_iterator()->get_coin();
        temp["Level"] = get_iterator()->get_level();
        temp["Experience"] = get_iterator()->get_experience();
        temp["Experience required for levelUp"] = get_iterator()->get_experience_required_for_levelUp();
        temp["SignUp time"] = get_iterator()->get_farm().Get_MyThread().Get_time_login();
        temp["last_time_set"] = get_iterator()->get_farm().Get_MyThread().Get_last_time_set();
        temp["upgrade_Storage time"] = get_iterator()->get_farm().Get_MyThread().Get_upgrade_Storage();
        temp["upgrade_Siloo time"] = get_iterator()->get_farm().Get_MyThread().Get_upgrade_Siloo();
        QJsonArray arr;
        for (int i = 0; i < get_iterator()->get_farm().Get_MyThread().Get_Buy_Milk().size(); i++) {
            arr.push_back(get_iterator()->get_farm().Get_MyThread().Get_Buy_Milk()[i]);
        }
        temp["buy_Milk time"] = arr;
        temp["ChickenHome is build"] = get_iterator()->get_farm().get_chickenHome().get_is_build();
        temp["CowHome is build"] = get_iterator()->get_farm().get_cowHome().get_is_build();
        temp["SheepHome is build"] = get_iterator()->get_farm().get_sheepHome().get_is_build();
        temp["YonjehFarm is build"] = get_iterator()->get_farm().get_yonjeFarm().get_is_build();
        temp["YonjehFarm is plantable"] = get_iterator()->get_farm().get_yonjeFarm().get_is_plantable();
        temp["upgrade_ChickenHome time"] = get_iterator()->get_farm().Get_MyThread().Get_upgrade_ChickenHome();
        temp["build_ChickenHome time"] = get_iterator()->get_farm().Get_MyThread().Get_build_ChickenHome();
        temp["feed_time_chicken"] = get_iterator()->get_farm().Get_MyThread().Get_feed_time_chicken();
        temp["upgrade_CowHome time"] = get_iterator()->get_farm().Get_MyThread().Get_upgrade_CowHome();
        temp["build_CowHome time"] = get_iterator()->get_farm().Get_MyThread().Get_build_CowHome();
        temp["feed_time_cow"] = get_iterator()->get_farm().Get_MyThread().Get_feed_time_cow();
        temp["upgrade_SheepHome time"] = get_iterator()->get_farm().Get_MyThread().Get_upgrade_SheepHome();
        temp["build_SheepHome time"] = get_iterator()->get_farm().Get_MyThread().Get_build_SheepHome();
        temp["feed_time_sheep"] = get_iterator()->get_farm().Get_MyThread().Get_feed_time_sheep();
        temp["upgrade_Gandomfarm time"] = get_iterator()->get_farm().Get_MyThread().Get_upgrade_Gandomfarm();
        temp["Collect_from_GandomFarm time"] = get_iterator()->get_farm().Get_MyThread().Get_Collect_from_GandomFarm();
        temp["Planting_from_GandomFarm time"] = get_iterator()->get_farm().Get_MyThread().Get_planting_Gandomfarm();
        temp["Planting_from_YonjeFarm time"] = get_iterator()->get_farm().Get_MyThread().Get_planting_YonjeFarm();
        temp["upgrade_Yonjehfarm time"] = get_iterator()->get_farm().Get_MyThread().Get_upgrade_Yonjehfarm();
        temp["Collect_from_YonjehFarm time"] = get_iterator()->get_farm().Get_MyThread().Get_Collect_from_YonjehFarm();
        temp["Build_YonjehFarm time"] = get_iterator()->get_farm().Get_MyThread().Get_Build_YonjehFarm();
        temp["Plow_YonjehFarm time"] = get_iterator()->get_farm().Get_MyThread().Get_Plow_YonjehFarm();
        temp["Mikh number"] = get_iterator()->get_farm().get_storage().Get_mikh().Get_Number();

        qDebug() << "AAA" << get_iterator()->get_farm().get_storage().Get_mikh().Get_Number();


        temp["Bill number"] = get_iterator()->get_farm().get_storage().Get_bill().Get_Number();
        temp["Yonjeh number"] = get_iterator()->get_farm().get_storage().Get_yonjeh().Get_Number();
        temp["Egg number"] = get_iterator()->get_farm().get_storage().Get_egg().Get_Number();
        temp["Milk number"] = get_iterator()->get_farm().get_storage().Get_milk().Get_Number();
        temp["Pashm number"] = get_iterator()->get_farm().get_storage().Get_pashm().Get_Number();
        temp["Storage capacity"] = get_iterator()->get_farm().get_storage().GetCapasity();
        temp["Storage level"] = get_iterator()->get_farm().get_storage().Get_Buliding_Level();
        temp["Storage occupied capacity"] = get_iterator()->get_farm().get_storage().Get_Occupied_Capacity();
        temp["Gandom number"] = get_iterator()->get_farm().get_siloo().Get_gandom().Get_Number();
        temp["Siloo capacity"] = get_iterator()->get_farm().get_siloo().GetCapasity();
        temp["Siloo level"] = get_iterator()->get_farm().get_siloo().Get_Buliding_Level();
        temp["Siloo occupied capacity"] = get_iterator()->get_farm().get_siloo().Get_Occupied_Capacity();
        temp["ChickenHome capacity"] = get_iterator()->get_farm().get_chickenHome().get_capacity();
        temp["ChickenHome level"] = get_iterator()->get_farm().get_chickenHome().get_level_habitat();
        temp["ChickenHome stock"] = get_iterator()->get_farm().get_chickenHome().get_stock_animal();
        temp["CowHome capacity"] = get_iterator()->get_farm().get_cowHome().get_capacity();
        temp["CowHome level"] = get_iterator()->get_farm().get_cowHome().get_level_habitat();
        temp["CowHome stock"] = get_iterator()->get_farm().get_cowHome().get_stock_animal();
        temp["SheepHome capacity"] = get_iterator()->get_farm().get_sheepHome().get_capacity();
        temp["SheepHome level"] = get_iterator()->get_farm().get_sheepHome().get_level_habitat();
        temp["SheepHome stock"] = get_iterator()->get_farm().get_sheepHome().get_stock_animal();
        temp["GandomFarm area"] = get_iterator()->get_farm().get_gandomFarm().getarea();
        temp["GandomFarm level"] = get_iterator()->get_farm().get_gandomFarm().get_level();
        temp["YonjehFarm area"] = get_iterator()->get_farm().get_yonjeFarm().getarea();
        temp["YonjehFarm level"] = get_iterator()->get_farm().get_yonjeFarm().get_level();
        o[get_iterator()->get_username()] = temp;
        d.setObject(o);
        f.open(QIODevice::WriteOnly);
        f.write(d.toJson());
        f.close();

   }
   */
};

#endif // DATA_H
