import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0


ApplicationWindow {
    id: mainwindow
    visible: true
    width: 740
    height: 580
    title: qsTr("Linux CPU Informations")
    Loader {id: displayloader}
    //color: "#3c3c3c"

    LinearGradient {
        anchors.fill: parent
        gradient: Gradient {
            GradientStop {position: 0.5; color: "#5f9ea0" }
            GradientStop {position: 1.0; color: "#2f4f4f" }
        }
    }


    Text {
        height: 26
        text: qsTr("Welcome to the platform for the\n presentation of CPU information")
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenterOffset: -100
        anchors.verticalCenter: parent.verticalCenter
        font.pixelSize: 22
        font.family: "Arial"
        anchors.margins: 40
        color: "white"
    }

    Button {
        id: btnid
        background: Rectangle {
            //color: "#f0e68c"
            color: "transparent"
            border.width: 1
            border.color: "white"
            radius: 20
        }
        text: "<font color='white'>"+"Start"+"</font>"
        font.pixelSize: 22
        //font.italic: true
        font.family: "Arial"
        anchors.centerIn: parent
        onClicked: {
            displayloader.source = "DisplayPage.qml"

        }
    }
}

