import QtQuick
import QtMultimedia

import PlayerController
import AudioInfo

Rectangle {
    id:root


    visible: !!PlayerController.currentSong


    Image{
       id:albumImage
       visible: videoStatus ? false:true

       anchors{
          verticalCenter: parent.verticalCenter
          left:parent.left
       }
       width: 150
       height: 150


       source:!!PlayerController.currentSong ? PlayerController.currentSong.imageSource : ""

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
        source:!!PlayerController.currentSong ? PlayerController.currentSong.videoSource : ""

        onSourceChanged: {
            if(source !=""){
               play()
            }else{
              stop()
            }

        }
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

       text:!!PlayerController.currentSong ? PlayerController.currentSong.title : ""

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
        text: !!PlayerController.currentSong ? PlayerController.currentSong.authorName : ""
       font{
         pixelSize: 20
         bold:true
       }


    }

    onVisibleChanged: {
       if(visible){
          albumVideo.play()
       } else{
           albumVideo.seek(0)
           albumVideo.stop()
       }

    }

}
