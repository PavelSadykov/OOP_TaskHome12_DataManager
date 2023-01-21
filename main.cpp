//
//  main.cpp
//  OOP ДЗ 12 Менеджер Данных
//
//  Created by Павел on 17.01.2023.
//

#include "Data Manager.hpp"
#include <iostream>
#include <string>
#include <forward_list>
#include <vector>
#include <list>
#include <map>
// решение по дз
//leetcode.com
//



int main(int argc, const char * argv[]) {
    int id, X, Y=0;
    do{
    std::cout<<"Выберете тип данных элемента STL MAP : \n1 - int   \n2 - double \n3 - std::string \n4 - Завершение работы  \n--> ";
    std::cin>>X;
    switch (X) {
        case 1: {
            std::cout<<"\nТип данных int."<<'\n';
            int data, Z, W=0;
            DataManager<int> A;
            do{
            std::cout<<"\nВыберете действие: \n1 - Ввод данных   \n2 - Поиск данных \n3 - Модификация данных \n4 - Удаление данных  \n5 - Просмотр наиболее популярного поиска \n6 - Завершение работы  \n-->";
            std::cin>>Z;
                switch (Z) {
                    case 1:{
                        std::cout<<"ВВОД ДАННЫХ"<<std::endl;
                        std::cout<<"Введите значение  int элемента STL MAP \n-> ";
                        std::cin>>data;
                        A.setData(data);
                        std::cout<<"\nСписок данных : \n";
                        A.showData();
                    }
                        break;
                
             
                    case 2:{
                        std::cout<<"ПОИСК ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"\nВведите id для поиска данных -> ";
                        std::cin>>id;
                        A.findData(id);
                    }
                        break;
                
                
                    case 3:{
                        std::cout<<"МОДИФИКАЦИЯ ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"Введите id для замены значения  map-> ";
                        std::cin>>id;
                        std::cout<<"Введите новое  значение  map-> ";
                        std::cin>>data;
                        A.exchangeData(id, data);
                        std::cout<<"\nСписок данных : \n";
                        A.showData();
                    }
                        break;
                
              
                    case 4:{
                        std::cout<<"УДАЛЕНИЕ ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"Введите id для удаления  значения  map-> ";
                        std::cin>>id;
                        A.eraseData(id);
                        std::cout<<"\nСписок данных : \n";
                        A.showData();
                    }
                        break;
                
                
                    case 5:{
                        std::cout<<"ПОПУЛЯРНЫЙ ПОИСК"<<'\n';
                        std::cout<<"Вывод на экран vector _keys : "<<'\n';
                        A.showVector();
                        std::cout<<"\nНаиболее популярный ключ для поиска :"<<'\n';
                        std::cout<<A.mostSearchedKey()<<std::endl;
                        }
                        break;
                
               
                    case 6:{
                        std::cout<<" Работа завершена "<<std::endl;
                        exit(0);
                    }
                        break;
                
                
               
                default:
                std::cout<<"Ошибка ввода, задайте корректные параметры "<<std::endl;
                break;
                }
    
        } while (W!=5);
        }
            break;
    
        
            case 2:{
            std::cout<<"\nТип данных double."<<'\n';
            int Z, W=0;
            double data;
            DataManager<double>A;
            do{
            std::cout<<"Выберете действие: \n1 - Ввод данных   \n2 - Поиск данных \n3 - Модификация данных \n4 - Удаление данных  \n5 - Просмотр наиболее популярного поиска \n6 - Завершение работы  \n-->";
            std::cin>>Z;
                switch (Z) {
                    case 1:{
                        std::cout<<"ВВОД ДАННЫХ"<<std::endl;
                        std::cout<<"Введите значение double элемента STL MAP \n--> ";
                        std::cin>>data;
                        A.setData(data);
                        std::cout<<"\nСписок данных : \n";
                        A.showData();
                    }
                        break;
                
               
                    case 2:{
                        std::cout<<"ПОИСК ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"\nВведите id для поиска данных -> ";
                        std::cin>>id;
                        A.findData(id);
                    }
                        break;
                
               
                    case 3:{
                        std::cout<<"МОДИФИКАЦИЯ ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"Введите id для замены значения  map-> ";
                        std::cin>>id;
                        std::cout<<"Введите новое  значение  map-> ";
                        std::cin>>data;
                        A.exchangeData(id, data);
                        std::cout<<"\nСписок данных : \n";
                        A.showData();
                    }
                        break;
                
                
                    case 4:{
                        std::cout<<"УДАЛЕНИЕ ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"Введите id для удаления  значения  map-> ";
                        std::cin>>id;
                        A.eraseData(id);
                        std::cout<<"\nСписок данных : \n";
                        A.showData();
                    }
                        break;
                
               
                    case 5:{
                        std::cout<<"ПОПУЛЯРНЫЙ ПОИСК"<<'\n';
                        std::cout<<"Вывод на экран vector _keys : "<<'\n';
                        A.showVector();
                        std::cout<<"\nНаиболее популярный ключ для поиска :"<<'\n';
                        std::cout<<A.mostSearchedKey()<<std::endl;
                    }
                        break;
                
                
                    case 6:{
                        std::cout<<" Работа завершена "<<std::endl;
                        exit(0);
                    }
                        break;
                
                
                default:
                std::cout<<"Ошибка ввода, задайте корректные параметры "<<std::endl;
                break;
            
                }
            }while (W!=5);
            }
                break;
           
            case 3:{
                std::cout<<"Тип данных  std::string ."<<'\n';
            int Z, W=0;
            std::string data;
            DataManager<std::string>A;
            do{
            std::cout<<"Выберете действие: \n1 - Ввод данных   \n2 - Поиск данных \n3 - Модификация данных \n4 - Удаление данных  \n5 - Просмотр наиболее популярного поиска \n6 - Завершение работы  \n-->";
            std::cin>>Z;
                switch (Z){
                    case 1:{
                        std::cout<<"ВВОД ДАННЫХ"<<std::endl;
                        std::cout<<"\nВведите значение std::string элемента STL MAP \n--> ";
                        std::cin>>data;
                        A.setData(data);
                        std::cout<<"\nСписок данных : \n";
                       A.showData();
                    }
                        break;
                
                
                    case 2:{
                        std::cout<<"ПОИСК ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"\nВведите id для поиска данных -> ";
                        std::cin>>id;
                        A.findData(id);
                    }
                        break;
                
                
                    case 3:{
                        std::cout<<"МОДИФИКАЦИЯ ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"Введите id для замены значения  map-> ";
                        std::cin>>id;
                        std::cout<<"Введите новое  значение  map-> ";
                        std::cin>>data;
                        A.exchangeData(id, data);
                        std::cout<<"\nСписок данных : \n";
                        A.showData();
                    }
                        break;
                
               
                    case 4:{
                        std::cout<<"УДАЛЕНИЕ ДАННЫХ"<<std::endl;
                        std::cout<<"Список данных : \n";
                        A.showData();
                        std::cout<<"\nВведите id для удаления  значения  map-> ";
                        std::cin>>id;
                        A.eraseData(id);
                        std::cout<<"\nСписок данных : \n";
                        A.showData();
                    }
                        break;
                
                
                    case 5:{
                        std::cout<<"ПОПУЛЯРНЫЙ ПОИСК"<<'\n';
                        std::cout<<"Вывод на экран vector _keys : "<<'\n';
                        A.showVector();
                        std::cout<<"\nНаиболее популярный ключ для поиска :"<<'\n';
                        std::cout<<A.mostSearchedKey()<<std::endl;
                    }
                        break;
                
                
                    case 6:{
                        std::cout<<" Работа завершена "<<std::endl;
                        exit(0);
                    }
                        break;
                
                
                default:
                std::cout<<"Ошибка ввода, задайте корректные параметры "<<std::endl;
                break;
            
                }
            } while (W!=5);
            }
                break;
            
    
        case 4:{
        std::cout<<" Работа завершена "<<std::endl;
        exit(0);
        }
        break;
            
    
        default:
        std::cout<<"Ошибка ввода, задайте корректные параметры "<<std::endl;
    
            break;
        
    
    }

    }while (Y!=5);
   


   
    
    
    return 0;
}
