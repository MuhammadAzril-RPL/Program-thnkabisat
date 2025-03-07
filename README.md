# Program Menentukan Tahun Kabisat

## Deskripsi
Program ini digunakan untuk menentukan apakah suatu tahun merupakan tahun kabisat atau bukan. Tahun kabisat adalah tahun yang dapat dibagi dengan 4, namun tidak dapat dibagi dengan 100, kecuali jika dapat dibagi dengan 400. Program ini meminta input tahun dari pengguna dan menampilkan apakah tahun tersebut adalah tahun kabisat atau bukan.

## Fitur
- Meminta input tahun dari pengguna.
- Menentukan apakah tahun yang dimasukkan merupakan tahun kabisat atau bukan.
- Menampilkan hasilnya ke layar.

## Cara Penggunaan
1. Jalankan program.
2. Program akan meminta Anda untuk memasukkan tahun.
3. Setelah Anda memasukkan tahun, program akan menentukan apakah tahun tersebut adalah tahun kabisat atau bukan.
4. Hasil akan ditampilkan di layar.

## Algoritma
Program ini menggunakan rumus sebagai berikut untuk menentukan apakah suatu tahun adalah tahun kabisat:
1. Tahun harus bisa dibagi dengan 4.
2. Namun, jika tahun bisa dibagi dengan 100, maka harus bisa dibagi juga dengan 400 agar menjadi tahun kabisat.

Jika tahun memenuhi kondisi tersebut, maka tahun tersebut adalah tahun kabisat.

## Struktur Program
1. Program meminta input tahun dari pengguna.
2. Program memeriksa kondisi tahun kabisat menggunakan rumus:
   - Tahun harus habis dibagi 4, tetapi tidak habis dibagi 100, atau jika habis dibagi 400.
3. Program mencetak hasilnya ke layar:
   - Jika tahun adalah tahun kabisat, program akan mencetak "[tahun] Adalah Tahun Kabisat".
   - Jika bukan, program akan mencetak "[tahun] Bukan Tahun Kabisat".

## Persyaratan
- Program ini ditulis dalam bahasa pemrograman C++.
- Anda membutuhkan compiler C++ (seperti `g++`) yang terpasang untuk menjalankan program.

## Catatan
- Program ini menggunakan fungsi `getch()` dari library `<conio.h>` untuk menunggu inputan sebelum program selesai, sehingga program tidak langsung menutup setelah memberikan output.
- Jika Anda menggunakan compiler modern yang tidak mendukung `<conio.h>`, Anda bisa mengganti `getch()` dengan cara lain untuk menunggu inputan, misalnya menggunakan `cin.get()`.

Terima kasih telah menggunakan Program Menentukan Tahun Kabisat!

