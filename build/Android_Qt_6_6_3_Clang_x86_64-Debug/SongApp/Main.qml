import QtQuick

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

           songIndex: 0
           title:"Eine Kleine Nachtmusik"
           authorName:"Wolfgang Amadeus Mozart"
           imageSource:"assets/ab67616d0000b27325cd7dfef168e72ac4555a1c.jpeg"
           videoSource: "qrc:/SongApp/assets/f1.mp4"
           videoStatus:playerController.playing
       }

       AudioInfoBox{
           id:secondSong
           anchors{
               verticalCenter: parent.verticalCenter
               left:parent.left
               right: parent.right
               margins:20
           }

           songIndex: 1
           title:"Kötü insanları tanıma senesi"
           authorName:"Sagopa Kajmer"
           imageSource:"assets/Kötü_insanları_tanıma_senesi.jpg"
           videoSource: "qrc:/SongApp/assets/f1.mp4"
           videoStatus:playerController.playing

       }


       AudioInfoBox{
           id:thirdSong
           anchors{
               verticalCenter: parent.verticalCenter
               left:parent.left
               right: parent.right
               margins:20
           }

           songIndex: 2
           title:"Ben Hüsrana Komşuyum"
           authorName:"Sagopa Kajmer"
           imageSource:"assets/Kötü_insanları_tanıma_senesi.jpg"
           videoSource: "qrc:/SongApp/assets/f1.mp4"
           videoStatus:playerController.playing
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
           onClicked: playerController.switchToPreviousSong()

        }

        TextButton{
           id: playPauseButton
           width: 50
           height: 50
           source: playerController.playing ? "assets/stop.png" : "assets/play.png"
           onClicked: playerController.playPause()

        }

        TextButton{
           id: nextButton
           width: 50
           height: 50
           source:"assets/angle-right.png"
           onClicked: playerController.switchToNextSong()

        }

      }


    }

    QtObject{
       id:playerController

       property int currentSongIndex : 0
       property int songCount : 3
       property bool playing : false


       function playPause(){
           playing = !playing
       }

       function switchToPreviousSong(){
           if(currentSongIndex > 0 ){
               currentSongIndex --
           }
           else{
           currentSongIndex = songCount - 1
           }

       }

       function switchToNextSong(){
           if(currentSongIndex < songCount - 1 ){
               currentSongIndex ++
           }
           else{
           currentSongIndex = 0
           }

       }
    }
}
