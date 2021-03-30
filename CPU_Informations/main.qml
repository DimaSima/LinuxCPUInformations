import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12


ApplicationWindow {
    id: mainwindow
    visible: true
    width: 740
    height: 580
    title: qsTr("Linux CPU Informations")
    Loader {id: displayloader}
    color: "#3c3c3c"

    Text {
        height: 26
        text: qsTr("Welcome to the platform for the presentation of CPU information")
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenterOffset: -50
        anchors.verticalCenter: parent.verticalCenter
        font.pixelSize: 22
        font.italic: true
        anchors.margins: 40
        color: "white"
    }

    Button {
        id: btnid
        background: Rectangle {
            color: "#f0e68c"
            border.width: 1
            border.color: "black"
            radius: 20
        }
        text: "Read in the CPU Information"
        font.pixelSize: 22
        font.italic: true
        anchors.centerIn: parent
        onClicked: {
            displayloader.source = "DisplayPage.qml"

        }
    }
}

