import QtQuick
import QtMultimedia

import PlayerController
import AudioInfo

Rectangle {
    id:root

    readonly property AudioInfo infoProvider:AudioInfo{}

    visible: false//PlayerController.currentSongIndex === infoProvider.songIndex

    property bool playStop: PlayerController.playing;


    Image{
       id:albumImage
       visible: videoStatus ? false:true

       anchors{
          verticalCenter: parent.verticalCenter
          left:parent.left
       }
       width: 150
       height: 150


       source:infoProvider.imageSource

       fillMode: Image.PreserveAspectFit


    }

    Video{
        id:albumVideo

        anchors{
           verticalCenter: parent.verticalCenter
           left:parent.left
        }
        width: 150
        height: 150

        loops: MediaPlayer.Infinite
        volume: 70
        source:infoProvider.videoSource
    }
    Text{
       id:titleText

       anchors{
           bottom:parent.verticalCenter
           left:albumImage.right
           margins:20
           right: parent.right
       }

       color:"white"
       wrapMode: Text.WrapAtWordBoundaryOrAnywhere

       text: infoProvider.title

       font{
         pixelSize: 20
         bold:true
       }


    }

    Text{
       id:authorText

       anchors{
           top:parent.verticalCenter
           left:titleText.left
           topMargin:5
           right: parent.right
       }

       color:"gray"
       wrapMode: Text.WrapAtWordBoundaryOrAnywhere
        text: infoProvider.authorName
       font{
         pixelSize: 20
         bold:true
       }


    }

    onVisibleChanged: {
       if(visible && playStop){
          albumVideo.play()
           console.log("asdas" + playStop)
           PlayerController.changeAudioSource(infoProvider.audioSource)
       } else{
           albumVideo.seek(0)
           albumVideo.stop()
       }

    }

    Component.onCompleted: {
       if(PlayerController.currentSongIndex === infoProvider.songIndex){
        PlayerController.changeAudioSource(infoProvider.audioSource)
       }
    }
}
