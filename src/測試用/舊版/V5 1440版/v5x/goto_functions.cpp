#include <Arduino.h>
#include "mouse.h"

void Aden1_3F(int place){ //<<<<<<<<<<<<<<<<<<<<<<  1 <= place <= 3
  Mouse mouse;
  mouse.reset_mouse();
  delay(1000); // 點按叫出儲存的東西
  mouse.move(114, 4, 30); //列表圖案
  delay(100);
  mouse.click(1);

  mouse.reset_mouse();

  delay(1000); // 選擇地監選項
  mouse.move(110, 15, 30); //列表圖案
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000); 
  mouse.move(15, 35, 30); //選擇龍谷地監 *改
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000);
  mouse.move(72, 24 + 4*place, 30); // 選幾層
  delay(random(750, 1250));
  mouse.click(1);

  mouse.reset_mouse();

  
  delay(1000);
  mouse.move(62, 38, 30); //確認 
  delay(1250);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000); //<<<<<<<<<<<<<<<
  mouse.move(111, 46, 30); //自動練功
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();
}

void Dragon_Vally_Dungeon1_3F(int place){ //<<<<<<<<<<<<<<<<<<<<<< 1 <= place <= 3
  Mouse mouse;
  mouse.reset_mouse();
  delay(1000); // 點按叫出儲存的東西
  mouse.move(114, 4, 30); //列表圖案
  delay(100);
  mouse.click(1);

  mouse.reset_mouse();

  delay(1000); // 選擇地監選項
  mouse.move(110, 15, 30); //列表圖案
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000); 
  mouse.move(110, 35, 30); //選擇龍谷地監 *改
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000);
  mouse.move(72, 24 + 4*place, 30); // 選幾層
  delay(random(750, 1250));
  mouse.click(1);

  mouse.reset_mouse();

  
  delay(1000);
  mouse.move(62, 38, 30); //確認 
  delay(1250);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000); //<<<<<<<<<<<<<<<
  mouse.move(111, 46, 30); //自動練功
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();
}

void Dragon_Vally_Dungeon4_6F(int place){ //<<<<<<<<<<<<<<<<<<<<<< 4 <= place <= 6
  Mouse mouse;
  mouse.reset_mouse();
  delay(1000); // 點按叫出儲存的東西
  mouse.move(114, 4, 30); //列表圖案
  delay(100);
  mouse.click(1);

  mouse.reset_mouse();

  delay(1000); // 選擇地監選項
  mouse.move(110, 15, 30); //列表圖案
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000); 
  mouse.move(110, 35, 30); //選擇龍谷地監 *改
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000);
  mouse.move(70, 36, 30); // 往上拉
  delay(random(750, 1250));
  
  mouse.slide(0, -5, 30);
  
  delay(500);
  
  mouse.reset_mouse();
  
  delay(1000);
  mouse.move(72, 34 + 4*place, 30); // 選幾層
  delay(random(750, 1250));
  mouse.click(1);
  
  mouse.reset_mouse();

  
  delay(1000);
  mouse.move(62, 38, 30); //確認 
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();

  delay(1000); //<<<<<<<<<<<<<<<
  mouse.move(111, 46, 30); //自動練功
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();
}

void Dragon_Vally_Dungeon5_7F(int place){ //<<<<<<<<<<<<<<<<<<<<<<
  Mouse mouse;
  mouse.reset_mouse();
  delay(1000); // 點按叫出儲存的東西
  mouse.move(114, 4, 30); //列表圖案
  delay(100);
  mouse.click(1);

  mouse.reset_mouse();

  delay(1000); // 選擇地監選項
  mouse.move(110, 15, 30); //列表圖案
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();
  
  delay(1000); 
  mouse.move(110, 35, 30); //選擇龍谷地監 *改
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000);
  mouse.move(70, 36, 30); // 往上拉
  delay(random(750, 1250));
  
  mouse.slide(0, -5, 30);
  
  delay(500);
  
  mouse.reset_mouse();
  
  delay(1000);
  mouse.move(72, 39 + 4*place, 30); // 選幾層
  delay(random(750, 1250));
  mouse.click(1);
  
  mouse.reset_mouse();

  
  delay(1000);
  mouse.move(62, 38, 30); //確認 
  delay(1250);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000); //<<<<<<<<<<<<<<<
  mouse.move(111, 46, 30); //自動練功
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();
}

void Gludio5_7F(int place){ //<<<<<<<<<<<<<<<<<<<<<<
  Mouse mouse;
  mouse.reset_mouse();
  delay(1000); // 點按叫出儲存的東西
  mouse.move(114, 4, 30); //列表圖案
  delay(100);
  mouse.click(1);

  mouse.reset_mouse();

  delay(1000); // 選擇地監選項
  mouse.move(110, 15, 30); //列表圖案
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000); 
  mouse.move(62, 38, 30); //選古丁谷地監 *改
  delay(100);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000);
  mouse.move(70, 36, 30); // 往上拉
  delay(random(750, 1250));
  
  mouse.slide(0, -5, 30);
  
  delay(500);
  
  mouse.reset_mouse();
  
  delay(1000);
  mouse.move(72, 39 + 4*place, 30); // 選幾層
  delay(random(750, 1250));
  mouse.click(1);
  
  mouse.reset_mouse();
  delay(1000);
  mouse.move(62, 38, 30); //確認 
  delay(1250);
  mouse.click(1);
  
  mouse.reset_mouse();

  delay(1000); //<<<<<<<<<<<<<<<
  mouse.move(111, 46, 30); //自動練功
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();
}

void marked_locations(int place){ //<<<<<<<<<<<<
  Mouse mouse;
  mouse.reset_mouse();
  delay(1000); // 點按叫出儲存的東西
  mouse.move(113, 11, 30); //列表圖案
  delay(100);
  mouse.click(1);
  mouse.click(1);

  // 選圖
  mouse.reset_mouse();
  delay(1000);
  mouse.move(15, 27 + 3*place, 30);
  delay(random(750, 1250));
  mouse.click(1);


  delay(1000);
  
  // 點按傳送
  mouse.move(3, 4, 30);
  delay(random(750, 1250));
  mouse.click(1);
  delay(1000);

  // 自動
  mouse.reset_mouse();

  delay(1000); //<<<<<<<<<
  mouse.move(111, 46, 30); //自動練功
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();
}

void Favorites_Tag1(int place){ //<<<<<<<<<<<< 不加標誌
  Mouse mouse;
  mouse.reset_mouse();
  delay(1000);
  mouse.move(80, 11, 30); //點地圖
  delay(100);
  mouse.click(1);
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(7, 14, 30); //點書籤
  delay(100);
  mouse.click(1);

  // 選圖
  mouse.reset_mouse();
  delay(1000);
  mouse.move(7, 19 + 2*place, 30); //選擇書籤順序
  delay(random(750, 1250));
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(82, 50, 30); //金幣傳送
  delay(1000);
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(49, 32, 30); //確認 
  delay(1250);
  mouse.click(1);

  // 自動
  mouse.reset_mouse();

  delay(1000); //<<<<<<<<<
  mouse.move(82, 39, 30); //自動練功
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();
}

void Favorites_Tag2(int place){ //<<<<<<<<<<<<加入標誌
  Mouse mouse;
  mouse.reset_mouse();
  delay(1000);
  mouse.move(110, 11, 30); //點地圖
  delay(100);
  mouse.click(1);
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(15, 18, 30); //點書籤
  delay(100);
  mouse.click(1);

  // 選圖
  mouse.reset_mouse();
  delay(1000);
  mouse.move(15, 22 + 3*place, 30); //選擇書籤順序
  delay(random(750, 1250));
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(110, 61, 30); //金幣傳送
  delay(1000);
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(62, 38, 30); //確認 
  delay(1250);
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(110, 11, 30); //點地圖
  delay(100);
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(11, 36, 30); //點標誌
  delay(200);
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(15, 39 + 3*place, 30); //選擇標誌順序
  delay(1000);
  mouse.click(1);

  mouse.reset_mouse();
  delay(1000);
  mouse.move(65, 35, 30); //移動
  delay(1250);
  mouse.click(1);
  delay(20000);
  
  // 自動
  mouse.reset_mouse();

  delay(1000); //<<<<<<<<<
  mouse.move(111, 46, 30); //自動練功
  delay(1250);
  mouse.click(1);
  mouse.reset_mouse();
}
  
  
