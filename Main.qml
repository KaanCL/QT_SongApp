import QtQuick

import PlayerController
import AudioSearchModel


Window {

    id:root
    width: 640
    height: 480
    visible: true
    title: qsTr("Song Player")


    property int widthsize : Screen.width
    property int heightsize : Screen.height



    Rectangle{
       id:topbar
       anchors{
           top:parent.top
           left:parent.left
           right:parent.right
       }

       height: 50
       color:"#5F8575"


       SearchField{
           id:searchField
         anchors{
           left:parent.left
          right:closeSearchButton.left
           verticalCenter:parent.verticalCenter
           margins:10
         }

         height: 30

         visible:!SearchPanel.hidden
         enabled: !AudioSearchModel.isSearching
         onAccepted: value => {
                            AudioSearchModel.searchSong(value)
                            topbar.forceActiveFocus()
                          }

       }


       TextButton{
           id:playlistIcon
           anchors {
               left:searchField.right
               verticalCenter: parent.verticalCenter
               leftMargin: 10
             }
           width: 32
           height: 32
           source: "assets/menu-burger.png"
           visible: searchPanel.hidden
           onClicked: {
               playlistPanel.hidden = !playlistPanel.hidden
             }
       }


    TextButton{
        id: closeSearchButton

        anchors {
        right: parent.right
        verticalCenter: parent.verticalCenter
        rightMargin: 10
            }

        height: 32
        width: 32

       source:"assets/stop.png"
        visible: !searchPanel.hidden

        onClicked: {
            searchPanel.hidden = true
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
           height: width
           source: "assets/angle-left.png"
           onClicked: PlayerController.switchToPreviousSong()
            width : (widthsize > heightsize ? widthsize : heightsize) * 0.05
        }

        TextButton{
           id: playPauseButton
           width: (widthsize > heightsize ? widthsize : heightsize) * 0.05
           height: width
           source: PlayerController.playing ? "assets/stop.png" : "assets/play.png"
           onClicked: {PlayerController.playPause()
               console.log(PlayerController.playing)
           }

        }

        TextButton{
           id: nextButton
           width: (widthsize > heightsize ? widthsize : heightsize) * 0.05
           height: width
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

     onSearchRequested: {
         searchPanel.hidden = false
     }

    }

    SearchPanel {
       id: searchPanel

       anchors {
         left: parent.left
         right: parent.right
       }

       height: mainSection.height + bottombar.height

       y: hidden ? parent.height : topbar.height
     }

}
