#include <iostream>
using namespace std;

struct Song
{
    string title;
    Song *next;
};

void addTop(Song *&song, string title)
{
    Song *newSong = new Song();
    newSong->title = title;
    newSong->next = song;

    song = newSong;
}

void addBottom(Song *&song, string title)
{
    Song *newSong = new Song();
    newSong->title = title;

    if (song == nullptr)
    {
        song = newSong;
        return;
    }

    Song *temp = song;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newSong;
}

void addAfter(Song *&song, string target, string title)
{
    Song *newSong = new Song();
    newSong->title = title;

    Song *currentSong = song;
    while (currentSong != nullptr && currentSong->title != target)
        currentSong = currentSong->next;

    if (currentSong == nullptr)
        return;

    Song *nextSong = currentSong->next;
    currentSong->next = newSong;
    newSong->next = nextSong;
}

void deleteWhereTitle(Song *&song, string title)
{
    if (song == nullptr)
        return;

    if (song->title == title)
    {
        Song *topSong = song;
        song = topSong->next;
        delete topSong;
        return;
    }

    Song *currentSong = song;
    while (currentSong->next != nullptr && currentSong->next->title != title)
        currentSong = currentSong->next;

    if (currentSong->next == nullptr)
        return;

    Song *songToDelete = currentSong->next;
    currentSong->next = currentSong->next->next;
    delete songToDelete;
}

Song *searchWhereTitle(Song *&song, string title)
{
    Song *currentSong = song;
    while (currentSong != nullptr)
    {
        if (currentSong->title == title)
            return currentSong;
        currentSong = currentSong->next;
    }
    return nullptr;
}

void showPlaylist(Song *song)
{
    Song *next = song;
    while (next != nullptr)
    {
        cout << "\x1b[35m" << next->title << "\x1b[0m" << endl;
        next = next->next;
    }
    cout << "\x1b[36mEND\x1b[0m" << endl;
}

int main()
{
    Song *song = nullptr;
    bool play = true;

    while (play)
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Tampilkan daftar lagu" << endl;
        cout << "2. Tambah lagu di paling atas" << endl;
        cout << "3. Tambah lagu di paling bawah" << endl;
        cout << "4. Tambah lagu di posisi tertentu" << endl;
        cout << "5. Hapus lagu" << endl;
        cout << "6. Cari lagu" << endl;
        cout << "0. Keluar" << endl;

        int inp;
        cout << "Masukkan pilihan Anda: ";
        cin >> inp;

        if (inp == 1)
        {
            showPlaylist(song);
        }
        else if (inp == 2)
        {
            string title;
            cout << "Masukkan judul baru: ";
            cin >> title;

            addTop(song, title);
            showPlaylist(song);
        }
        else if (inp == 3)
        {
            string title;
            cout << "Masukkan judul baru: ";
            cin >> title;

            addBottom(song, title);
            showPlaylist(song);
        }
        else if (inp == 4)
        {
            string target, title;
            cout << "Masukkan judul yang sudah ada: ";
            cin >> target;
            cout << "Masukkan judul baru: ";
            cin >> title;

            addAfter(song, target, title);
            showPlaylist(song);
        }
        else if (inp == 5)
        {
            string title;
            cout << "Masukkan judul: ";
            cin >> title;

            deleteWhereTitle(song, title);
            showPlaylist(song);
        }
        else if (inp == 6)
        {
            string title;
            cout << "Masukkan judul: ";
            cin >> title;

            Song *found = searchWhereTitle(song, title);
            if (found != nullptr)
                cout << "\x1b[32mLagu " << title << " ada dalam playlist!\x1b[0m" << endl;
            else
                cout << "\x1b[31mLagu " << title << " tidak ditemukan dalam playlist!\x1b[0m" << endl;
        }
        else if (inp == 0)
        {
            play = false;
            cout << "\x1b[32mTerima kasih!\x1b[0m";
        }
        else
        {
            cout << "\x1b[31mPilihan tidak valid!\x1b[0m";
        }
    }

    cout << endl;
    return 0;
}