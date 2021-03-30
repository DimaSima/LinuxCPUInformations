import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls 1.4 as C1


Item {
    id: element

    Window {
        id: displaywindow
        width: mainwindow.width
        height: mainwindow.height
        color: "#3c3c3c"
        visible: true

        C1.SplitView {
            id: splitview
            anchors.fill: parent
            Repeater {
                model: my_cores.setNumberCpuCores();
                Item {
                    width: parent.width/my_cores.setNumberCpuCores()
                    anchors.margins: 10
                    Column {
                        Text { text: "Prozessor: "+my_cores.setProcessor(index); color: "#f0e68c" }
                        Text { text: "Vendor id: "+my_cores.setvendorId(index); color: "#f0e68c" }
                        Text { text: "CPU Family: "+my_cores.setcpuFamily(index); color: "#f0e68c" }
                        Text { text: "Model: "+my_cores.setmodel(index); color: "#f0e68c" }
                        Text { text: "Model Name: "+my_cores.setmodelName(index); color: "#f0e68c" }
                        Text { text: "Stepping: "+my_cores.setstepping(index); color: "#f0e68c" }
                        Text { text: "CPU MHz: "+my_cores.setcpuMhz(index); color: "#f0e68c" }
                        Text { text: "Cache Size: "+my_cores.setcacheSize(index); color: "#f0e68c" }
                        Text { text: "Physical ID: "+my_cores.setphysicalId(index); color: "#f0e68c" }
                        Text { text: "Siblings: "+my_cores.setsiblings(index); color: "#f0e68c" }
                        Text { text: "Core ID: "+my_cores.setcoreId(index); color: "#f0e68c" }
                        Text { text: "CPU Cores: "+my_cores.setcpuCores(index); color: "#f0e68c" }
                        Text { text: "APICID: "+my_cores.setapicid(index); color: "#f0e68c" }
                        Text { text: "Init APICID: "+my_cores.setinitApicid(index); color: "#f0e68c" }
                        Text { text: "FPU: "+my_cores.setfpu(index); color: "#f0e68c" }
                        Text { text: "FPU Exceptions: "+my_cores.setfpuExceptions(index); color: "#f0e68c" }
                        Text { text: "CPUid level: "+my_cores.setcpuid_level(index); color: "#f0e68c" }
                        Text { text: "WP: "+my_cores.setwp(index); color: "#f0e68c" }
                        Text { text: "Bogomips: "+my_cores.setbogomips(index); color: "#f0e68c" }
                        Text { text: "Clflush Size: "+my_cores.setclflushSize(index); color: "#f0e68c" }
                        Text { text: "Cache Alignment: "+my_cores.setcacheAlignment(index); color: "#f0e68c" }
                        Text { text: "Address Size: "+my_cores.setaddressSizes(index); color: "#f0e68c" }
                        Text { text: "Power Managment: "+my_cores.setpowerManagment(index); color: "#f0e68c" }
                    }
                }
            }
        }
    }
}

