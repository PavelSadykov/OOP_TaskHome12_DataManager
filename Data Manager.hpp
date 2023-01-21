//
//  Data Manager.hpp
//  OOP ДЗ 12 Менеджер Данных
//
//  Created by Павел on 17.01.2023.
//

#ifndef Data_Manager_hpp
#define Data_Manager_hpp
#include <iostream>
#include <stdio.h>
#include <string>
#include <forward_list>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>

template<typename T>
class DataManager{
public:
    
   DataManager(): iDcounter(0){}
    
   void setData(T &data){
        mapData.insert({iDcounter,data});
       _keys.push_back(iDcounter);
        iDcounter++;
    }
    
   void eraseData(int iDcounter){
       _keys.push_back(iDcounter);
       mapData.erase(iDcounter);
    }
    
    void exchangeData(int iDcounter, T & data){
        if (mapData.find(iDcounter) != mapData.end()) {
        _keys.push_back(iDcounter);
         mapData.erase(iDcounter);
         mapData.insert({iDcounter,data});
        }else{
         std::cout<<"МОДИФИКАЦИЯ НЕВОЗМОЖНА"<<'\n';
        }}
    
   
    void showData(){
      for( const auto &[iDcounter, value]   :   mapData){
     std::cout<< iDcounter << "    "<< value<<"\n";
      }
       std::cout<<"========="<<std::endl;
        
  }
    
   void findData(int iDcounter){
        _keys.push_back(iDcounter);
        auto item = mapData.find(iDcounter);
            if (item != mapData.end()) {
                std::cout << "Данные найдены!  -  {" <<
                    item->first << ";" << item->second << "}\n";
            } else {
                std::cout << "Такой ключ отсутствует!" << std::endl;
            }
        std::cout<<"========="<<std::endl;
       
    }
    
    void showVector(){
        std::cout<<"{";
        for (std::vector<int>::iterator it = _keys.begin() ; it!=_keys.end() ; ++it)
                        std::cout<<*it<<"   ";
        std::cout<<"} ";
        
    }
    // мапа это ключ и значение. Чтобы обратиться к ключу или значению, то мы обращаемся через итератор key == it->first, value== it->second
    int mostSearchedKey(){//ищем самое встречающееся значение в векторе
    std::unordered_map<int, int>keyAmount;
    for(size_t i=0;i<_keys.size(); i++){
    const auto & [it, isInserted] = keyAmount.insert({_keys[i],1});//начиная с 0 элемента,
          //  достаем из вектора ключ и  пытаемся делать вставку.insert возвращает пару 
            //   const auto& [it,- это итератор , он указывает на тот элемент(пару) который мы вставили или указывает на элемент который мы не смогли вставить. isInserted -вставили или нет (булеан)]
            if(!isInserted){// если вставка не произошла, то
                 int value =it->second;// там уже лежит 1 и мы это значение мапы достаем
                value++;// увеличили значение , чтобы
                keyAmount[_keys[i]] = value;// складываем обратно по этому адресу, квадратные скобки гарантированно сделают вставку
            }
        
    }
        std::pair<int,int>key_biggestValue = {0,0};// пара которая будет хранить ключ и самое большое значение
for(std::unordered_map<int,int>::const_iterator it=keyAmount.begin();it!= keyAmount.end(); it++){//ищем самый большой элемент
    if(key_biggestValue.second <it->second){
    key_biggestValue=std::make_pair(it->first,it->second);
        }
    }
        return key_biggestValue.first;
    }
private:
   std::map<int,T>mapData;
                 T _data;
    int iDcounter;
std::vector<int> _keys;
};






#endif /* Data_Manager_hpp */




 
