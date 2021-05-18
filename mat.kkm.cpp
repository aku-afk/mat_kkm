/*

   tugas ini dibuat dengan doa dan usaha yang besar
   oleh : rahmat_k

*/

#include <iostream>
#include <conio.h>

using namespace std;

   string stop;
   int menu=0;
   int tkt=0;
   int jmls=0;
   int jml[]=
           {
            0,
            0,
            0
           };

// POIN-POIN
   int po[]=
          {
           5  /* level 1 */,
           25 /* level 2 */,
           50 /* level 3 */
          };


// KOREKSI LV1
   string ssjlv1;

   int ijlv1[]=
          {
           0
          };

   string jslv1[]=
          {
           "cokelat",
           "Cokelat",
           "COKELAT"
          };

   int klv1[]=
          {
           6
          };

// KOREKSI LV2
   string sjlv2[]=
          {
           ""
          };
   int jlv2[]=
          {
           0
          };

   int klv2[]=
          {
           2
          };


// KOREKSI LV3
   int jlv3[]=
          {
           0,
           0
          };
   string ssjlv3;
   string jslv3[]=
          {
           "membayangkan",
           "membayangkan",
           "MEMBAYANGKAN",
           "berkhayal",
           "Berkhayal",
           "BERKHAYAL"
          };

   int klv3[]=
          {
           2,
           2
          };



// JUDUL
void jdl()
{
   cout << "   ---------------------------------------------------- \n";
   cout << "          KUIS KUIS MUDAH\n";
   cout << "          by : rahmat_k\n";
   cout << "   ---------------------------------------------------- \n";
}

// OPSI
int olv()
{
   int olv=0;

   cout << "   PILIH TINGKATAN :\n";
   cout << "     + 1 TINGKAT 1\n";
   cout << "     | 2 TINGKAT 2\n";
   cout << "     | 3 TINGKAT 3\n";
   cout << "     +----------------------- \n\n";
   cout << "     > ";
    cin >> olv;

   return olv;
}

void jeda()
{
  cout << "   NEXT : ";
  cin >> stop;
}

// SCRORING
int jwb(int p, int j, int k, int t)
{
   if(j == k)
   {
    t = t + p;
   }
   return t;
}


// TINGKAT

// 1
void lv1(int sld)
{
switch(sld)
{
case 1:
 clrscr();
 clrscr();

 jdl();

 cout << endl;
 cout << "   PERTANYAAN :\n";
 cout << "      Cokelat adalah.... \n";
 cout << "      A. Rasa \n";
 cout << "      B. Buah \n";
 cout << "      C. Warna \n";
 cout << "      D. Biji \n";
 cout << "      E. Tananman \n";
 cout << "      F. Lainnya... \n";
 cout << endl;
 cout << "   JAWABAN (huruf) : ";
  cin >> ssjlv1;

 if((ssjlv1 == "F") || (ssjlv1 == "f"))
 {
  cout << "   TULIS JAWABANMMU \n";
  cout << "   ATURAN PENULISAN : \n";
  cout << "    - satu kata \n";
  cout << "    - huruf kecil ('CAPS LOCK' off) \n";
  cout << "    - sesuai EYD \n\n";
  cout << "   > ";
   cin >> ssjlv1;
 }

 for(int cck=0; cck < 3;)
 {
  if(ssjlv1 == jslv1[cck]){
    ijlv1[0]=6;
    cck=3;
  }else{
    ijlv1[0]=0;
  }
  cck++;
 }

  cout << endl;
  cout << "   +--------------------------------------------------- \n";

 if(ijlv1[0] == klv1[0])
 {
  cout << "   | JAWABANMU BENAR \t\t\t POIN +" << po[0] << " \n";
 }else{
  cout << "   | JAWABANMU SALAH \t\t\t POIN +0 \n";
 }

  cout << "   +--------------------------------------------------- \n";
  cout << "   | PENJELASAN : \n";
  cout << "   | \n";
  cout << "   |     Cokelat Ya Cokelat \n";
  cout << "   +--------------------------------------------------- \n";

 jml[0] = jwb(po[0],ijlv1[0],klv1[0],jml[0]);
 jeda();
 break;

}
}

// 2
void lv2(int sld)
{
switch(sld)
{
case 1:
 clrscr();
 clrscr();

 jdl();

 cout << endl;
 cout << "   PERTANYAAN : \n";
 cout << "      Lengkapi kalimat langsung berikut ! \n";
 cout << "      Guru  : Kata 'What' dalam Bahasa Indonesia \n";
 cout << "              memiliki arti... \n";
 cout << endl;
 cout << "   TULIS JAWABANMMU \n";
 cout << "   CLUE : \n";
 cout << "    - sesuai EYD \n\n";
 cout << "   > ";
  cin >> sjlv2[0];

 if(sjlv2[0] == "?")
 {
  jlv2[0]=2;
 }else{
  jlv2[0]=0;
 }

  cout << endl;
  cout << "   +--------------------------------------------------- \n";

 if(jlv2[0] == klv2[0])
 {
  cout << "   | JAWABANMU BENAR \t\t\t POIN +" << po[1] << " \n";
 }else{
  cout << "   | JAWABANMU SALAH \t\t\t POIN +0 \n";
 }

  cout << "   +--------------------------------------------------- \n";
  cout << "   | PENJELASAN : \n";
  cout << "   | \n";
  cout << "   |     Dalam EYD kalimat tanya semestinya \n";
  cout << "   |     diakhiri dengan tanda '?' (tanya) \n";
  cout << "   +--------------------------------------------------- \n";

 jml[1] = jwb(po[1],jlv2[0],klv2[0],jml[1]);
 jeda();
 break;
}
}

// 3
void lv3(int sld)
{
switch(sld)
{
case 1:
 clrscr();
 clrscr();

 jdl();

 cout << endl;
 cout << "   PERTANYAAN : \n";
 cout << "      Dalam satu ruangan menyala 7 lilin. \n";
 cout << "      Tiba-tiba berhembus angin kencang yang \n";
 cout << "      membuat 2 lilin menjadi padam. Sisa \n";
 cout << "      semua lilin yaitu.... \n";
 cout << endl;
 cout << "   JAWABAN (angka) : ";
  cin >> jlv3[0];

 cout << endl;

  cout << "   +--------------------------------------------------- \n";

 if(jlv3[0] == klv3[0])
 {
  cout << "   | JAWABANMU BENAR \t\t\t POIN +" << po[2] << " \n";
 }else{
  cout << "   | JAWABANMU SALAH \t\t\t POIN +0 \n";
 }

  cout << "   +--------------------------------------------------- \n";
  cout << "   | PENJELASAN : \n";
  cout << "   | \n";
  cout << "   |     Awalnya ada 7 lilin, lalu padam 2, \n";
  cout << "   |     maka yang masih menyala ada 5 lilin. \n";
  cout << "   |     5 lilin tersebut akan habis terbakar \n";
  cout << "   |     atatu meleleh dan tak tersisa, sehingga \n";
  cout << "   |     lilin yang telah padam masih utuh atau \n";
  cout << "   |     tak mengalami pelelehan atau tersisa. \n";
  cout << "   +--------------------------------------------------- \n";

 jml[2] = jwb(po[2],jlv3[0],klv3[0],jml[2]);
 jeda();
 break;

case 2:
 clrscr();
 clrscr();

 jdl();
 cout << endl;
 cout << "   PERTANYAAN :\n";
 cout << "      Coba anda sekalian atau kalian atau kamu bayangkan, \n";
 cout << "      apa jadinya bila kamu hidup dan bersosial dekat \n";
 cout << "      dengan seorang pemimpin negara maupun kerajaan. \n";
 cout << "      Hidupmu telah terjamin baik dari sisi ekonomi, maupun \n";
 cout << "      keamanan keluarga. Dan tugasmu begitu membutuhkan \n";
 cout << "      kinerja otak tinggi, karena tugasmu adalah sebagai \n";
 cout << "      intel negara atau kerajaan. Dari sini kisahmu akan \n";
 cout << "      dimulai   ---------------------------------------- \n\n";
 jeda();

 clrscr();
 clrscr();

 jdl();
 cout << endl;
 cout << "   PERTANYAAN :\n";
 cout << "      Suatu ketika raja atau pemimpinmu melihat rekap \n";
 cout << "      keuangan setahun terakhir. Namun sang raja atau \n";
 cout << "      pemimpinmu melihat ada kejanggalan di dalamnya. \n";
 cout << "      Sang raja atau pemimpinmu menaruh curiga dengan \n";
 cout << "      salah satu menterinya. Lalu kamu dipanggil sang raja \n";
 cout << "      atau pemimpinmu itu untuk membantunya menyelesaikan \n";
 cout << "      masalah negara yang mengkhawatirkan ini. Kamu harus \n";
 cout << "      mencari tahu siapa menteri yang sekiranya suka berbuat \n";
 cout << "      curang dengan anggaran negara, serta kamu diberi waktu \n";
 cout << "      sampai besok pukul 12.00, sedangkan sekarang pukul 20.45, \n";
 cout << "      dan bila anda sampai salah orang maka anda akan dijatuhi \n";
 cout << "      hukuman mati karena telah memfitnah orang lain serta \n";
 cout << "      dianggap memiliki andil dalam proses korupsi tersebut. \n";
 cout << "      Setelah kamu melakukan penelitan dan riset untuk \n";
 cout << "      mencari tahu siapa dalang dibalik korupsi di negaramu, \n";
 cout << "      negaramu, kamu menyampaika pendapatmu dan kamu telah \n";
 cout << "      menyimpulkan pelakunya. Namun saat di interogasi, \n";
 cout << "      sang menteri memiliki argumen yang lebih kuat darimu \n";
 cout << "      sehingga argumen dan kesimpulanmu terpatahkan olehnya. \n";
 cout << "      Sialnya lagi sang raja berhasil terbujuk dengan argumen \n";
 cout << "      sang menteri yang seakan tak dapat dipatahkan. Di sini \n";
 cout << "      nyawamu sangat terancam, karena argumen dan pendapatmu \n";
 cout << "      salah atau terpatahkan oleh sang menteri yang lebih ahli \n";
 cout << "      dalam bidang debat. \n\n";
 jeda();

 clrscr();
 clrscr();

 jdl();
 cout << endl;
 cout << "   PERTANYAAN :\n";
 cout << "      SEKARANG SELAMATKAN NYAWAMU \n";
 cout << "      Jika untuk menyelamatkan nyawamu kamu hanya dapat berhenti, \n";
 cout << "      maka kamu akan berhenti....\n\n";
 cout << endl;

 cout << "   TULIS JAWABANMMU \n";
 cout << "   CLUE : \n";
 cout << "    - satu kata \n";
 cout << "    - sesuai EYD \n\n";
 cout << "   > ";

  cin >> ssjlv3;

 for(int cck=0; cck < 6;)
 {
  if(ssjlv3 == jslv3[cck]){
    jlv3[1]=2;
    cck=6;
  }else{
    jlv3[1]=0;
  }
  cck++;
 }

  cout << endl;
  cout << "   +--------------------------------------------------- \n";

 if(jlv3[1] == klv3[1])
 {
  cout << "   | JAWABANMU BENAR \t\t\t POIN +" << po[2] << " \n";
 }else{
  cout << "   | JAWABANMU SALAH \t\t\t POIN +0 \n";
 }

  cout << "   +--------------------------------------------------- \n";
  cout << "   | PENJELASAN : \n";
  cout << "   | \n";
  cout << "   |     Karena masalah hanya di dunia khayalan, maka \n";
  cout << "   |     BERHENTILAH BERKHAYAL \n";
  cout << "   +--------------------------------------------------- \n";

 jml[2] = jwb(po[2],jlv3[1],klv3[1],jml[2]);

 jeda();

 break;

}
}




// UTAMA
int main()
{

while(menu < 4)
{
clrscr();
clrscr();

jdl();

cout << "    1  PILIH TINGKATAN \n";
cout << "    2  LIHAT PAPAN SKOR \n";
cout << "    3  RESET PEROLEHAN SKOR \n";
cout << "    4  EXIT \n";
cout << "   ---------------------------------------------------- \n";
cout << endl;
cout << "    PILIHAN :  ";
 cin >> menu;

 if(menu == 1)
 {
   // LAYOUT OPTION
   clrscr();
   clrscr();
   jdl();
   tkt = olv();

   // START GAME
   switch(tkt)
   {
     case 1:
      lv1(1);
      break;
     case 2:
      lv2(1);
      break;
     case 3:
      lv3(1);
      lv3(2);
      break;
   }
 }else if(menu == 2)
 {
  clrscr();
  clrscr();
  jdl();
  cout << "       PEROLEHAN SKOR \n";
  cout << "   ---------------------------------------------------- \n";
  cout << "     > TINGKAT 1  =  " << jml[0] << " \n";
  cout << "     > TINGKAT 2  =  " << jml[1] << " \n";
  cout << "     > TINGKAT 3  =  " << jml[2] << " \n";
  cout << "                  ---------------  + \n";

  // TOTAL SEMUA
     jmls = jml[0] + jml[1] + jml[2];

  cout << "            TOTAL =  " << jmls << " \n";
  cout << "   ---------------------------------------------------- \n\n";
  cout << "   NEXT : ";
   cin >> stop;
 }else if(menu == 3)
 {
  clrscr();
  clrscr();
  jdl();
  cout << "   MENGATUR ULANG PEROLEHAN SKOR SELESAI \n";
  for(int reset=0; reset < 3;)
  {
   jml[reset]=0;
   reset++;
  }
  cout << "   NEXT : ";
   cin >> stop;
 }
}

clrscr();
clrscr();

jdl();
cout << endl;
cout << "     TERIMAKASIH DAN \n";
cout << "     SELAMAT BERISTIRAHAT \n\n";
cout << "   ---------------------------------------------------- \n\n";

return 0;

}
