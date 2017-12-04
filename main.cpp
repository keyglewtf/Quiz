#include <iostream>
#include "Questions.h"
#include <cstdlib>
#include <ctime>
#include <windows.h>



Questions q[400]; //[400] = amount of questions q = question

void SetAllValues();

int main()
{
      SetAllValues();
      srand(time(NULL));
      while(!GetAsyncKeyState(VK_DELETE))
      {
          q[(std::rand() % 18 ) + 0].askQuestions();
      }

    return 0;
}
void SetAllValues()
{
       q[0].setValues("Ktory z ponizszych elementow nie jest elementem plyty glownej?",
        "Procesor lub gniazdo do jego instalacji ",
        "Pendrive lub karta SD ",
        "Pamiec operacyjna lub gniazdo do jej instalacji ",
        "Gniazdo do dysku twardego ",
        'b');
       q[1].setValues("Ktore z ponizszych zdan nie charakteryzuje procesora?",
        "Procesor to zlozony element elektroniczny, zdolny do wykonywania operacji matematycznych wedlug dostarczonych mu instrukcji.",
        "Procesor nazywany jest rowniez centralna jednostka obliczeniowa (CPU, ang. Central Processing Unit). ",
        "Czestotliwosc taktowania procesora wyraza sie w voltach",
        "Czestotliwosc taktowania moze sie zmieniac w trakcie pracy procesora",
        'c');
       q[2].setValues("Ktory z ponizszych elementow nie jest karta rozszerzen?",
        "Karta modemu wewnetrznego.",
        "Karta sieciowa",
        "Karta pamieci",
        "Karta dzwiekowa ",
        'c');
       q[3].setValues("Co jest najmniejsza jednostka informacji?",
        "1 bajt",
        "1 mit",
        "1 pit",
        "1 bit",
        'd');
       q[4].setValues("Do pamieci wewnetrznych nie nalezy:",
        "Floppy disk",
        "Read Only Memory",
        "Random Access Memory ",
        "Nie ma poprawnej odpowiedzi",
        'a');
       q[5].setValues("Ktore z ponizszych zdan nie charakteryzuje pamieci ROM?",
        "ROM jest to pamiec tylko do odczytu.",
        "Dane zapisane w ROM sa ulotne i gina, gdy tylko zasilanie jest wylaczone.",
        "ROM umozliwia rozpoczecie pracy komputera, rozruch poszczegolnyc podzespolow i wspolprace mikroprocesora z pozostalymi czesciami zestawukomputerowego. ",
        "Zawartosc pamieci ROM nie zalezy od uzytkownika.",
        'a');
       q[6].setValues("Ktore z ponizszych zdan nie charakteryzuje pamieci RAM?",
        "RAM to pamiec o dostepie swobodnym.",
        "Procesor wczytuje do niej program przed jego wykonaniem oraz przechowuje wyniki swoich obliczen.",
        "Pamiec ta przechowuje informacje nawet po wylaczeniu pradu.",
        "Nie ma poprawnej odpowiedzi",
        'c');
       q[7].setValues("Szybkosc 128 B/s to inaczej?",
        "1024 b/s",
        "8 kB/s",
        "1024 kB/s",
        "128 b/s ",
        'a');
       q[8].setValues("Ktore z ponizszych zdan nie charakteryzuje dysku twardego?",
        "Dysk twardy inaczej Hard Disk Drive - HDD.",
        "Dysk twardy sluzy do przechowywania programow, danych i wynikow pracy komputera.",
        "Dyski moga byc montowane tylko wewnatrz komputera. ",
        "Zawartosc dysku twardego nie znika po wylaczeniu zasilania",
        'c');
       q[9].setValues("Ktory z ponizszych nosnikow nie jest napedem optycznym?",
        "DVD DL",
        "DVD TL",
        "CD-RW",
        "BD",
        'b');
       q[10].setValues("Ktore z ponizszych zdan nie charakteryzuje urzadzenia peryferyjnego?",
        "Urzadzenie peryferyjne to urzadzenie znajdujace sie poza obudowa komputera.",
        "Urzadzenie peryferyjne to urzadzenie znajdujace sie wewnatrz komputera.",
        "Urzadzenie to umozliwia wspolprace miedzy uzytkownikiem a komputerem,zwlaszcza w zakresie wprowadzania, przetwarzania i modyfikacji danych",
        "Nie ma prawidlowej odpowiedzi",
        'b');
       q[11].setValues("Ktore z ponizszych zdan nie charakteryzuje sterownika?",
        "Sterownik danego urzadzenia nalezy zainstalowac zaraz po pierwszym uzyciu tego urzadzenia.",
        "Sterownik to z jezyka angielskiego driver",
        "Sterownik to program odpowiedzialny za prawidlowe funkcjonowanie urzadzen komputera.",
        "Nie ma prawidlowej odpowiedzi",
        'a');
       q[12].setValues("Ktore z ponizszych urzadzen peryferyjnych jest urzadzeniem wejsciowym",
        "Monitor",
        "Skaner",
        "Ploter",
        "Nie ma prawidlowej odpowiedzi",
        'b');
       q[13].setValues("Interfejsem do podlaczania dysku twardego nie jest:",
        "SATA",
        "ATA",
        "USB",
        "RS-232C",
        'd');
       q[14].setValues("Myszki nie podlaczysz do portu:",
        "PS/2",
        "USB",
        "LPT",
        "Nie ma prawidlowej odpowiedzi",
        'c');
       q[15].setValues("Ktore z ponizszych zdan nie charakteryzuje systemu operacyjnego?",
        "System operacyjny nie organizuje sposobu zapisu i odczytu plikow na dysku",
        "System operacyjny zapewnia obsluge urzadzen peryferyjnych",
        "System operacyjny steruje instalowaniem i uruchamianiem innych programow.",
        "Nie ma prawidlowej odpowiedzi",
        'a');
       q[16].setValues("Ktore z ponizszych zdan nie charakteryzuje pliku?",
        "Plik to zapisany w pamieci masowej komputera zbior danych o okreslonym rozmiarze i stanowiacym logiczna calosc.",
        "Każdy plik musi mieć niepowtarzalną nazwę w danym komputerze.",
        "Plikiem jest zarowno dokument tekstowy, jak i graficzny.",
        "Nie ma prawidlowej odpowiedzi",
        'b');
       q[17].setValues("Ktore z ponizszych zdań nie charakteryzuje folderu?",
        "Folder mozemy inaczej nazywac katalogiem.",
        "Folder to pewien logiczny obiekt, ulatwiajacy organizacje plikow na nosnikach pamieci.",
        "Folder moze zawierac tylko pliki",
        "Nie ma prawidlowej odpowiedzi",
        'c');
       q[17].setValues("Ktore z ponizszych zdań nie charakteryzuje folderu?",
        "Folder mozemy inaczej nazywac katalogiem.",
        "Folder to pewien logiczny obiekt, ulatwiajacy organizacje plikow na nosnikach pamieci.",
        "Folder moze zawierac tylko pliki",
        "Nie ma prawidlowej odpowiedzi",
        'c');
      q[18].setValues("Ktore z ponizszych zdan nie charakteryzuje folderu?",
        "Folder mozemy inaczej nazywac katalogiem.",
        "Folder to pewien logiczny obiekt, ulatwiajacy organizacje plikow na nosnikach pamieci",
        "Folder moze zawierac tylko pliki.",
        "---brak-----",
        'c');
    q[19].setValues("Ile liczba 1010101(2) zapisana w systemie dwojkowym, wynosi w systemie dziesietnym?",
        "85",
        "87",
        "84",
        "82",
        'a');
    q[20].setValues("Ile liczba 125(10) zapisana w systemie dziesietnym, wynosi w systemie dwojkowym?",
        "1111101",
        "1011101",
        "1110101",
        "1111110",
        'a');
    q[21].setValues("Ktore z ponizszych zdan nie charakteryzuje edytora tekstow? ",
        "Za pomoca edytora tekstu mozna kopiowac oraz wycinac i wklejac wybrane fragmenty dokumentu. ",
        "Za pomoca edytora tekstu mozna odzyskiwac usuniete dokumenty tekstowe.",
        "Za pomoca edytora tekstu mozna wyszukiwac i automatycznie zmieniac fragmenty tekstu. ",
        "---brak----",
        'b');
    q[22].setValues("Ktory z ponizszych programow nie jest edytorem tekstu?",
        "MS Word",
        "OpenOffice Writer ",
        "TextAbi ",
        "---brak----",
        'c');
    q[23].setValues("Ktory z ponizszych formatow, nie jest formatem edytora tekstu?",
        "DOC",
        "RTS",
        "RTF",
        "TXT",
        'b');
    q[24].setValues("Ktore z ponizszych zdan nie charakteryzuje akapitu?",
        "Akapit musi zawierac co najmniej kilka zdan. ",
        "Akapit to fragment tekstu pomiedzy kolejnymi nacisnieciami klawisza Enter.",
        "Akapit zazwyczaj zawiera jedna mysl i stanowi logiczna calosc",
        "",
        'a');
    q[25].setValues("Ktore z ponizszych zdan nie charakteryzuje szeryfow?",
        "Szeryfy to ozdobne, krotkie kreski stosowane w krojach pisma o stalej szerokosci",
        "Szeryfy to ozdobne, krotkie kreski stosowane w wielu krojach pisma do zwiekszenia dekoracyjnosci i czytelnosci pisma.",
        "Szeryfy sa ornamentami, jakie zdobia konce linii tworzacych litery",
        "---brak----",
        'a');
    q[26].setValues("Ktore z ponizszych zdan charakteryzuje sekcje w dokumencie tekstowym?",
        "Sekcja jest to czesc dokumentu tekstowego, w obrebie ktorego mozna stosowac odrebne formatowanie. ",
        "Sekcja jest to czesc dokumentu tekstowego znajdujaca sie w gornej czesci strony",
        "Teksty umieszczone w sekcji ukazuja sie na kolejnych stronach dokumentu",
        "--brak---",
        'a');
    q[27].setValues("Ktore z ponizszych zdan nie charakteryzuje naglowka w dokumencie tekstowym?",
        "Naglowek jest to czesc dokumentu tekstowego znajdujaca sie w gornej czesci strony",
        "Naglowek jest to czesc dokumentu tekstowego, w obrebie ktorego mozna stosowac odrebne formatowanie",
        "Teksty umieszczone w naglowku ukazuja sie na kolejnych stronach sekcji dokumentu.",
        "---brak---",
        'b');
    q[28].setValues("Ktore z ponizszych zdan nie charakteryzuje tabulacji w edytorze tekstu?",
        "Tabulacja to mechanizm wbudowany w edytor tekstu, pozwalajacy wplywac na polozenie fragmentu tekstu w wierszu. ",
        "Mechanizm tabulacji nie zadziala prawidlowo, jezeli liczba znacznikow na linijce nie bedzie rowna liczbie znakow tabulacji w wierszu.",
        "Mechanizm tabulacji zadziala prawidlowo, jezeli liczba znacznikow na linijce nie bedzie rowna liczbie znakow tabulacji w wierszu. ",
        "---brak---",
        'c');
    q[29].setValues("Ktore z ponizszych zdan nie charakteryzuje mechanizmu OLE w edytorze tekstu?",
        "Mechanizm OLE (z ang. Object Linking and Embedding) jest to mechanizm polaczenia miedzy dokumentami",
        "Dzieki mechanizmowi OLE mozna pracowac z dwoma dokumentami jednoczesnie. ",
        "Dzieki mechanizmowi OLE mozna pracowac z dokumentem i jednoczesnie poprawiac w nim wszystkie osadzone obiekty, mimo, ze zostaly utworzone w innych programach.",
        "---brak---",
        'b');
    q[30].setValues("Ktore z ponizszych zdan nie charakteryzuje korespondencji seryjnej w edytorze tekstu",
        "Korespondencja seryjna to technika tworzenia w edytorze tekstu jednobrzmiacych dokumentow, rozniacych sie jedynie zawartoscia kluczowych pol dokumentu, ktore sa automatycznie wypelniane trescia pol pobieranych z zewnetrznej bazy danych",
        "Korespondencja seryjna moze sluzyc do tworzenia np. listow, etykiet czy kopert",
        "Aby skorzystac z korespondencji seryjnej w dokumencie tekstowym nalezy najpierw scalic dokument glowny ze zrodlem danych, nastepnie przygotowac tresc dokumentu glownego, a na koncu stworzyc zrodlo danych",
        "---brak---",
        'c');
    q[31].setValues("Ktory z ponizszych programow nie jest arkuszem kalkulacyjnym?",
        "MS Excel",
        "CalcAbi",
        "OpenOffice Calc ",
        "---brak---",
        'b');
    q[32].setValues("Ktory z ponizszych formatow, nie jest formatem arkusza kalkulacyjnego?",
        "XLS",
        "ODT",
        "ODS",
        "XLM",
        'b');
    q[33].setValues("Ktore z ponizszych zdan nie charakteryzuje komorki arkusza kalkulacyjnego?",
        "Adres komorki to numer kolumny i litera wiersza. ",
        "Komorka jest podstawowym elementem arkusza kalkulacyjnego. ",
        "Kazda komorka w arkuszu ma swoj wlasny, niepowtarzalny adres",
        "---brak----",
        'a');
    q[34].setValues("Adres bezwzgledny dla komorki A1 to: ?",
        "$A1",
        "$A$1 ",
        "A$1 ",
        "$A1$ ",
        'b');
    q[35].setValues("Co to jest adresowanie wzgledne w arkuszu kalkulacyjnym? ",
        "Adresowanie pozwala arkuszowi na automatyczna zmiane adresow komorek wystepujacych w formule kopiowanej do inne miejsce arkusza. ",
        "Adresowanie zabrania arkuszowi, by po skopiowaniu formuly w inne miejsce, adresy wystepujace w formule zostaly zmienione",
        "Adresowanie zezwala arkuszowi na zmiane jedynie czesci adresu wystepujacego w formule kopiowanej w inne miejsce arkusza",
        "---brak----",
        'a');
    q[36].setValues("Aby zsumowac komorki z zakresu od A1 do A12, jaka formule wpiszesz?",
        "Suma(A1:A12)",
        "=Suma(A1:A12)",
        "Suma(A1-A12)",
        "=Suma(A1-A12)",
        'b');
    q[37].setValues("Aby automatycznie wyliczyc dodatek stazowy, uzalezniony od ilosci przepracowanych lat nalezy zastosowac: ",
        "Funkcje jezeli",
        "Funkcje licz.jezeli",
        "Funkcje licz.puste",
        "----braq----",
        'a');
    q[38].setValues("Ciag znakow ###### wyswietlony w komorce arkusza oznacza?",
        "Blad w formule.",
        "Niemieszczaca sie zawartosc. ",
        "Poprawnosc wprowadzonej formuly. ",
        "idk",
        'b');
    q[39].setValues("Zakres komorek to obszar obejmujacy prostokatny zbior komorek lezacych obok siebie. W jaki sposob okresla sie taki zakres?",
        "A1:A12",
        "A1-A12",
        "A1;A12",
        "A1_A12",
        'a');
    q[40].setValues("Aby automatycznie wyliczyc ile razy wstepuje imie Jakub w kolumnie z imionami uczniow Twojej szkoly, nalezy zastosowac:",
        "Funkcje jezeli",
        "Funkcje licz.jezeli",
        "Funkcje suma.jezeli ",
        "-----brak---",
        'b');
    q[41].setValues("Domain Name System (DNS) jest to usluga, ktora umozliwia",
        "tlumaczenie adresow internetowych na adresy zrozumiale przez siec komputerowa ",
        "systemowe odtworzenie ustawien",
        "domenowe nazewnictwo w systemie",
        "polaczenie z siecia",
        'a');        
    q[42].setValues("Ktory z plikow jest biblioteka systemowa (biblioteka dolaczana dynamicznie)? ",
        "z rozszerzeniem INI",
        "z rozszerzeniem DLL",
        "z rozszerzeniem MPG ",
        "z rozszerzeniem VOB",
        'b');        
    q[43].setValues("Ktora z ponizszych nazw plikow jest niepoprawna?",
        "plik_tekstowy.txt",
        "czy_to_plik?",
        "czy_to_plik.txt",
        "plik.tekstowy.txt",
        'b');        
    q[44].setValues("'GIMNAZJUM zaszyfrowane 2 razy szyfrem cezara o wartociu klucza 13 w 26 literowym alfabecie to:'",
        "HJNOBAKVN ",
        "FHLMZYITL ",
        "BLAHGWHWD ",
        "GIMNAZJUM ",
        'd');        
    q[45].setValues("Kto jest uwazany za tworce koncepcji funkcjonowania wspolczesnego komputera?",
        "George Lucas",
        "Steve Jobs",
        "John von Neumann",
        "Bill Gates ",
        'c');        
    q[46].setValues("Jednostka uzywana do wyznaczania wydajnoci jednostki centralnej komputera, ktora okrela liczbe milionow instrukcji wykonywanych w ciagu jednej sekundy jest",
        "GB ",
        "GHz ",
        "MIPS ",
        "FLOPS ",
        'c');        
    q[47].setValues("Co nie jest elementem wchodzacym w sklad komputera PC?",
        "RAM",
        "wobulator",
        "chipset",
        "karta graficzna",
        'b');        
    q[48].setValues("Co zostanie wywietlone w komorce, do ktorej wpisano nastepujaca formule: =SUMA(1;3;7;10)",
        "blad – nie podano komorek do zsumowania",
        "4",
        "21",
        "blad – bledny zakres ",
        'c');        
    q[49].setValues("Urzadzenie sluzace do zapisu i odczytu danych wykorzystujace nonik magnetyczny to: ",
        "pamiec SDRAM ",
        "karta pamieci SD",
        "twardy dysk HDD ",
        "twardy dysk SSD",
        'c');        
    q[50].setValues("Zarzadzanie procesami, pamiecia i wejciem/wyjciem to:",
        "zadania wykonywane przez system operacyjny ",
        "zadania wykonywane przez pamiec cache ",
        "zadania wykonywane przez pamiec operacyjna",
        "zadania wykonywane przez oprogramowanie biurowe ",
        'a');        
    q[51].setValues("Ktory z ponizszych jest adresem wersji 4 protokolu IP?",
        "b8:27:eb:95:29:8f",
        "8086:0212",
        "192.168.265.11",
        "192.168.12.11",
        'd');        
    q[52].setValues("Plik tekstowy z programem zapisanym w pewnym jezyku programowania to: ",
        "kod maszynowy",
        "kod wynikowy",
        "kod wykonywalny",
        "kod zrodlowy ",
        'd');        
    q[53].setValues("Co wykorzystuje do swego dzialania monitor LCD? ",
        "lampe kineskopowa",
        "ciekle krysztaly",
        "komory z plazma ",
        "laser polprzewodnikowy",
        'b');        
    q[54].setValues("ROM to:",
        "czas reakcji na zadanie odczytu z pamieci – skrot od Reaction Of Memory",
        "pamiec stala komputera – skrot od Read Only Memory",
        "iloc wolnego miejsca w pamieci – skrot od Room Of Memory ",
        "pamiec operacyjna komputera – skrot od Random Only Memory ",
        'b');        
    q[55].setValues("W programie Microsoft Excel kombinacja klawiszy sluzaca do utworzenia nowego wiersza w tej samej komorce (wprowadzenia "entera" do komorki) to: ",
        "Alt + Enter",
        "Ctrl + Enter",
        "Spacja ",
        "Shift + Enter",
        'a');        
    q[56].setValues("Dyskowym systemem plikow nie jest: ",
        "NTFS",
        "EEPROM",
        "FAT32",
        "ext4",
        'b');        
    q[57].setValues("Wartoc liczby 1101(3) po przeliczaniu na system dziesietny wynosi?",
        "37 ",
        "49",
        "13",
        "25 ",
        'a');        
    q[58].setValues("Blok wejcia/wyjcia danych na schemacie blokowym algorytmu jest w ksztalcie: ",
        "kola",
        "owalu",
        "rownolegloboku ",
        "trojkata prostokatnego ",
        'c');        
    q[59].setValues("Jak sie nazywa program lub urzadzenie komputerowe sluzace do zabezpieczenia polaczenia z Internetem poprzez blokowanie komunikacji w przypadku wykrycia prob wlamania?",
        "firewall",
        "antyspam ",
        "ad-blocker",
        "antywirus",
        'a');        
    q[60].setValues("k = random (od 1 do 100)->n=in->while(true){if(n!=k){do{n=in}wihle(n>k)}else{wygrales break;}} ",
        "az poda liczbe n rowna k",
        "az poda liczbe k rowna n",
        "n razy ",
        "k razy ",
        'a');        
    q[61].setValues("ile razy wypisze SUPER jeli a=21 b=2?---- a=in; b=in; if(a<=b){koniec}else{a--;while(a>5 || b<2){a=a/2; SUPER;} BRAWO",
        "2",
        "1",
        "3",
        "0",
        'a');        
    q[62].setValues("Kod BCD umozliwia binarny zapis liczb:",
        "osemkowych",
        "dwojkowych ",
        "heksadecymalnych",
        "dziesietnych",
        'd');        
    q[63].setValues("Co nie jest urzadzeniem wyjciowym komputera? ",
        "ploter",
        "drukarka",
        "skaner ",
        "monitor LCD",
        'c');        
    q[64].setValues("W tym zadaniu byl algorytm ktorego nie chcialo mi sie robic",
        "ic stond",
        "dalej",
        "dobra odpowiedz",
        "no kliknij c",
        'c');        
    q[65].setValues("Komorke sformatowano jako wartoc liczbowa z dwoma miejscami dziesietnymi. W jaki sposob zostanie wywietlona jej zawartoc, gdy wpiszemy tam 1,2? ",
        "1,2",
        "1/2",
        "1,20",
        "1",
        'c');        
    q[66].setValues("k=3; p=1;  while(k>1){k=out; k--; p=p*k}  p=out",
        "3 2 2",
        "3 2 1",
        "3 1 1 ",
        "3 2 3",
        'a');        
    q[67].setValues("Urzadzenie, ktore usprawnia wymiane danych pomiedzy procesorem a pamiecia RAM to:",
        "koprocesor ",
        "EPROM",
        "ROM",
        "cache",
        'd');        
    q[68].setValues("Interfejs to:",
        "program sluzacy do przechwytywania prywatnych wiadomoci uzytkownikow portalu Facebook ",
        "proces ksztaltowania cyfrowego modelu twarzy za pomoca interpolacj",
        "urzadzenie pozwalajace na polaczenie ze soba dwoch innych urzadzen, ktore bez niego nie moga ze soba wspolpracowac ",
        "urzadzenie komputerowe do badania zjawiska interferencji fal elektromagnetycznych ",
        'c');        
    q[69].setValues("Jaka wartoc bedzie miala liczba A1(16) po przeliczeniu na system binarny? ",
        "10100001",
        "10110000",
        "00011100",
        "10010001",
        'a');        
    q[70].setValues("Co bedzie wypisane w ponizszym arkuszu w komorce B6 po skopiowaniu do niej zawartoci komorki B2, w ktorej znajduje sie nastepujaca formula: =JEZELI(A2>A9;"tak";"nie") ",
        "0",
        "nie",
        "tak poprawna odp",
        "komorka pozostanie pusta",
        'c');

}

