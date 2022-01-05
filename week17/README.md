1. step01-1_老師要教「剝皮法」把數字的每一位數都拆出來,使用除法的餘數,得到個位數。使用除法,來讓數字慢慢變小。請用 CodeBlocks實作, 截圖上傳。

2. step01-2_剝皮法 通常會配合 while(迴圈),才能輕鬆的一直剝,直到剝光光為止。請用 CodeBlocks實作, 截圖上傳。

3. step01-3_有一題CPE大學程式能力檢定(題庫)的簡單題 summing digits把每一位數加起來。老師先在CodeBlocks裡,利用while(迴圈)配合剝皮法(除法的餘數),把每一位數都加起來。請用 CodeBlocks實作, 截圖上傳。

4. step02-1_今天最後一個程式,利用剝皮法,解出 UVA11332 Summing Digits每一位數都加起來。有6個步驟。每一個步驟都簡單,但是每一步驟都容易出錯,所以背程式碼就會出錯,可能錯誤率98%以上。因此,程式碼不能從第一行背,而是要有能力,把每一個步驟 都個自熟練, 需要時寫出來不會錯。請用瘋狂程設-CPE顆星廣場-一顆星-UVA11332 Summing Digits 練習模式寫出來, 截圖上傳。

5. 今天的第5個作業, 不用寫程式, 將 GitHub 帳號的 打卡graph 截圖上傳 (要有網址, 老師要去巡)

6. 試著複習上週的git 指令, 將你的 github 倉庫clone複製下來, 將今天的程式 week17-1.cpp, week17-2.cpp, week17-3.cpp, week17-4.cpp, week17-5.cpp week17-6.cpp 放到 倉庫的 week17 的資料夾中、修正你的 README.md (介紹你的每週目錄), 整理你的 GitHub 倉庫的目錄, 使用 add(加入你的修正) 及 commit(確認你的修正並附上訊息), push(推上雲端), 再截圖上傳





======我是快樂的分隔線======我是快樂的分隔線======我是快樂的分隔線==



1. Chrome設定,變成預設Browser, 再登入GitHub

2. 安裝 Git for Windows 軟體



3. 開啟 Git Bash 小黑視窗

3.1. cd desktop 走到桌面

3.2. 把雲端的倉庫 複製 下來

     git clone https://github.com/你的帳號/2021cce

3.3. 把你的 week13 在 2021cce目錄裡裝好裝滿, 接著, 修改「加進去」倉庫管理的.git

     cd 2021cce 進入你的倉庫

     git add . 都加進去

3.4. git commit -m "這次我更新 week13 哦!"

     簽名,說你要怎麼上傳。不過第1次上傳出錯,因為要說明「你是誰」

     下面只做一次

          git config --global user.email "jsyeh@mail.mcu.edu.tw"

          git config --global user.name "jsyeh"

3.5. 最後,把它推送到雲端

     git push (第一次推送時,會需要browser進行登入的認證)



