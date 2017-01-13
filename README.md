# SerialCharParse

Kütüphane amacı referans değeri ile uart üzerinden gönderdiğiniz değerin rahat ayrılmasını sağlamak ,
header dosyasını .ino uzantılı proje dosyanızla aynı klasör içinde olursa sıkıntı yaşamazsınız.

Diyelim ki uart üzerinden A25B250C12D5 diye 5 servo için açıları c# üzerinden serialport nesnesiyle
gönderdin , 

veriayir('A',buffer,buffer_size) şeklinde verileri ayırabilirsiniz.
Örneği incelemenizde fayda var.
