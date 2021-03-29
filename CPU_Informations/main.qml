import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

Window {
    id: mainwindow
    visible: true
    width: 740
    height: 580
    title: qsTr("Linux CPU Informations")
    Loader {id: displayloader}
    color: "dodgerblue"

    Label {
        text: qsTr("Welcome to the platform for the presentation of CPU information")
        font.pixelSize: 22
        font.italic: true
        anchors.bottom: btnid.top
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 40
    }


    Button {
        id: btnid
        background: Rectangle {
            color: "red"
            border.width: 1
            border.color: "black"
            radius: 20
        }
        text: "Read in the CPU Informations"
        font.pixelSize: 22
        font.italic: true
        anchors.centerIn: parent
        onClicked: {
            displayloader.source = "DisplayPage.qml"
        }
    }
}

