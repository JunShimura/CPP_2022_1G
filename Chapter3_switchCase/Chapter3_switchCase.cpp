#include <iostream>
#include <string>
using namespace std;

int main() {
    int channel;		// チャンネルの番号
    string stationName;	// テレビ局名

  


    // キー入力をchannelに格納する
    cout << "チャンネル番号を入力してください：";
    cin >> channel;
    // テレビ局名をstationNameに格納する
    switch(channel) {
    case 1:
        stationName = "東北放送";
        break;
    case 2:
        stationName = "NHK教育";
        break;
    case 3:
        stationName = "NHK総合";
        break;
    case 4:
        stationName = "ミヤギテレビ";
        break;
    case 5:
        stationName = "東日本放送";
        break;
   case 8:
        stationName = "仙台放送";
        break;
   default:
       stationName = "割り当てなし";
       break;
    }
    switch (channel) {
    case 2:
    case 3:
        stationName += "公共放送";
        break;
    case 1:
    case 4:
    case 5:
    case 6:
    case 8:
        stationName += "民間放送";
        break;
    default:
        stationName = "割り当てなし";
        break;
    }
    switch (channel)
    {
    case 1:
        stationName += "めちゃめちゃ";
    case 2:
        stationName += "大好き";
    default:
        break;
    }
    /*
    if (channel == 1) {
        stationName += "めちゃめちゃ大好き";
    }
    else if (channel == 2) {
        stationName += "大好き";
    }
    */




    /* ifの例

    // テレビ局名をstationNameに格納する
    if (channel == 1) {
        stationName = "東北放送";
    }
    else if (channel == 2) {
        stationName = "NHK教育";
    }
    else if (channel == 3) {
        stationName = "NHK総合";
    }
    else if (channel == 4) {
        stationName = "ミヤギテレビ";
    }
    else if (channel == 5) {
        stationName = "東日本放送";
    }
    else if (channel == 8) {
        stationName = "仙台放送";
    }
    else {
        stationName = "割り当てなし";
    }
    */

    // テレビ局名を表示する
    cout << stationName << endl;

    return 0;
}
