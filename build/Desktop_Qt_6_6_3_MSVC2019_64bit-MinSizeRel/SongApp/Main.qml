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

       TextButton{
           anchors {
               right: parent.right
               verticalCenter: parent.verticalCenter
               rightMargin: 20
             }
           width: 32
           height: 32
           source: "assets/icons/menu_icon.png"
           onClicked: {
               playlistPanel.hidden = !playlistPanel.hidden
             }

       }

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
           id:thirdSong
           anchors{
               verticalCenter: parent.verticalCenter
               left:parent.left
               right: parent.right
               margins:20
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
      enabled: !!PlayerController.currentSong

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

    PlaylistPanel{
       id:playlistPanel

       anchors {
             top: topbar.bottom
           }
     x: hidden ? parent.width : parent.width - width
    }

}
