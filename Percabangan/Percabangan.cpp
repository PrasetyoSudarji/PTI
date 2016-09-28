#include <iostream>

using namespace std;;

int main(){
    // kamus
    int pil;

    //algoritma
    mainmenu :
    cout<<"Main Menu\n";
    cout<<"1. Jenis Tanaman\n";
    cout<<"2. Jenis Hewan\n";
    cout<<"3. Jenis Penyakit\n";
    cout<<" Masukkan pilihan anda : ";
    cin>>pil;

    switch(pil){
        case 1:
            cout<<"1. Jenis Akar\n";
            cout<<"2. Jenis Daun\n";
            cout<<"3. Go to Mainmenu\n";
            cout<<"Masukkan pilihan anda : ";
            cin>>pil;

            switch(pil){
                case 1 : cout<<"1. Akar Tunggang\n";
                        cout<<"2. Akar Serabut\n";
                        cout<<"3. Goto Mainmenu\n";
                        cout<<"Masukkan pilihan anda : ";
                        cin>>pil;
                        switch(pil){
                            case 1 : cout<<"kelapa\n";
                                    break;
                            case 2 : cout<<"pisang\n";
                                    break;
                            case 3 : goto mainmenu;
                                    break;
                            default : cout<<"Wrong Input\n please try again\n";
                                    break;
                        }
                case 2 : cout<<"1. sejajar\n";
                        cout<<"2. menjari\n";
                        cout<<"3. Goto Mainmenu\n";
                        cout<<"Masukkan pilihan anda : ";
                        cin>>pil;
                        switch(pil){
                            case 1 : cout<<"daun sejajar\n";
                                    break;
                            case 2 : cout<<"daun menjari\n";
                                    break;
                            case 3 : goto mainmenu;
                                    break;
                            default : cout<<"Wrong Input\n please try again\n";
                                    break;
                        }
                case 3 :goto mainmenu;
                        break;
                default :cout<<"Wrong Input\n please try again\n";
                        break;
            }
            break;

        case 2:
            cout<<"1. Omnivora\n";
            cout<<"2. Herbivora\n";
            cout<<"3. Karnivore\n";
            cout<<"4. Go to Mainmenu\n";
            cout<<"Masukkan pilihan anda : ";
            cin>>pil;

            switch(pil){
                case 1 :cout<<"Kucing\n";
                        break;
                case 2 :cout<<"Kambing\n";
                        break;
                case 3 :cout<<"Anjing\n";
                        break;
                case 4 :goto mainmenu;
                        break;
                default :cout<<"Wrong Input\n please try again\n";
                        break;
            }
            break;

        case 3:
            cout<<"1. Panas\n";
            cout<<"2. Pusing\n";
            cout<<"3. Sakit Perut\n";
            cout<<"4. Go to Mainmenu \n";
            cout<<"Masukkan pilihan anda : ";
            cin>>pil;

            switch(pil){
                case 1 :cout<<"1. Panas Tinggi 1 hari\n";
                        cout<<"2. Panas Tinggi +-3 hari berturut turut\n";
                        cout<<"3. Go to Mainmenu\n";
                        cout<<"Masukkan pilihan anda : ";
                        cin>>pil;

                        switch(pil){
                            case 1 :cout<<"DBD\n";
                                    break;
                            case 2 :cout<<"Malaria\n";
                                    break;
                            case 3 :goto mainmenu;
                                    break;
                            default:cout<<"Wrong Input\n please try again\n";
                                    break;
                        }
                        break;
                case 2 :cout<<"1. pusing sebagian\n";
                        cout<<"2. Pusing semua\n";
                        cout<<"3. Go to Mainmenu\n";
                        cout<<"Masukkan pilihan anda : ";
                        cin>>pil;

                        switch(pil){
                            case 1 :cout<<"Migran\n";
                                    break;
                            case 2 :cout<<"Puyeng\n";
                                    break;
                            case 3 :goto mainmenu;
                            default:cout<<"Wrong Input\n please try again\n";
                                    break;
                        }
                        break;
                case 3 :cout<<"1. bagian kiri\n";
                        cout<<"2. bagian kanan\n";
                        cout<<"3. Go to Mainmenu\n";
                        cout<<"Masukkan pilihan anda : ";
                        cin>>pil;

                        switch(pil){
                            case 1 :cout<<"Magh\n";
                                    break;
                            case 2 :cout<<"Ginjal\n";
                                    break;
                            case 3 :goto mainmenu;
                                    break;
                            default :cout<<"Wrong Input\n please try again\n";
                                    break;
                        }
                        break;
                case 4 :goto mainmenu;
                        break;
                default : cout<<"Wrong Input\n please try again\n";
                        break;
            }
    }

}
