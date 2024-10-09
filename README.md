This example shows how to use pointers to modify variables and apply conditional assignments using the ternary operator. It also demonstrates basic string manipulation in C++.

Bu örnek, pointer'larla değişkenlerin nasıl değiştirileceğini ve üçlü operatör kullanarak koşullu atamaların nasıl yapılacağını gösterir. Ayrıca, C++'ta temel string manipülasyonu da açıklanmaktadır.


Bu kodda ne yapılmaktadır ?

```foo()``` fonksiyonu iki tane pointer alıyor: ```p ve q```.

bu adreslerdeki değerler 1 yapılıp toplanıyor. (1 + 1 = 2)

sonrasında a ve b değişkenlerine sırasıyla 3 ve 4 atanmaktadır.

ardından hem p hem q üzerinden fonksiyonda a nın değeri değiştirilerek
1 yapılıyor.

alttaki  ```(c == a + b ? a : b) = 5;``` ifadesine gelirsek, bu bir
koşul ifadesi. Eğer ```c = a + b``` doğruysa ```a```, yanlışsa ```b``` değiştirilecek.

```c == 1 + 1``` ve ```a + b = 1 + 4 = 5``` olduğundan yanlış. b nin değeri 5 olacak.

sonuç olarak ilk çıktı ```a = 1 b = 5``` olarak yazılır.

ikinci kısım str bölümü

burada ```i[str + 2]``` ifadesi aslında ```*(str+2+i)``` anlamındadır.
Bu da str[2] ifadesidir. 0123 teki 2 ye denk gelir. sonuç olarak
str nin sıfırıncı indeksindeki 0 yerine str nin ikinci indeksindeki 2 
değeri atanır.





