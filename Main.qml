import QtQuick

import PlayerController

Window {

    id:root
    width: 640
    height: 480
    visible: true
    title: qsTr("Song Player")


    Rectangle{
       id:topbar
       anchors{
           top:parent.top
           left:parent.left
           right:parent.right
       }

       height: 50
       color:"#5F8575"
    }
    Rectangle{
       id:mainSection

       anchors{
         top:topbar.bottom
         bottom:bottombar.top
         left:parent.left
         right: parent.right
       }

       color:"#1e1e1e"

       AudioInfoBox{
           id:firstSong
           anchors{
             verticalCenter: parent.verticalCenter
               left:parent.left
               right: parent.right
               margins:20
           }

           infoProvider {
           songIndex: 0
           title:"Eine Kleine Nachtmusik"
           authorName:"Wolfgang Amadeus Mozart"
           imageSource:"assets/ab67616d0000b27325cd7dfef168e72ac4555a1c.jpeg"
           videoSource: "qrc:/SongApp/assets/bir-sana-yandım-ben.mp4"
           }

       }

       AudioInfoBox{
           id:secondSong
           anchors{
               verticalCenter: parent.verticalCenter
               left:parent.left
               right: parent.right
               margins:20
           }
           infoProvider{

           songIndex: 1
           title:"Kötü insanları tanıma senesi"
           authorName:"Sagopa Kajmer"
           imageSource:"assets/Kötü_insanları_tanıma_senesi.jpg"
           videoSource: "qrc:/SongApp/assets/Kötü-İnsanları-Tanıma-Senesi.mp3"
           }

       }


       AudioInfoBox{
           id:thirdSong
           anchors{
               verticalCenter: parent.verticalCenter
               left:parent.left
               right: parent.right
               margins:20
           }
           infoProvider {
           songIndex: 2
           title:"Ben Hüsrana Komşuyum"
           authorName:"Sagopa Kajmer"
           imageSource:"assets/Kötü_insanları_tanıma_senesi.jpg"
           videoSource: "qrc:/SongApp/assets/Ben-Hüsrana-Komşuyum.mp3"
           }

       }



    }

    Rectangle{
      id:bottombar

      anchors{
          bottom:parent.bottom
          left:parent.left
          right:parent.right
      }

      height: 100
      color:"#333333"

      Row{
        anchors.centerIn:parent

        spacing: 20

        TextButton{
           id:previousButton

           width: 50
           height: 50
           source: "assets/angle-left.png"
           onClicked: PlayerController.switchToPreviousSong()

        }

        TextButton{
           id: playPauseButton
           width: 50
           height: 50
           source: PlayerController.playing ? "assets/stop.png" : "assets/play.png"
           onClicked: {PlayerController.playPause()
               console.log(PlayerController.playing)
           }

        }

        TextButton{
           id: nextButton
           width: 50
           height: 50
           source:"assets/angle-right.png"
           onClicked: PlayerController.switchToNextSong()

        }

      }


    }

}
