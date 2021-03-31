import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls 1.4 as C1
import QtGraphicalEffects 1.0


Item {
    id: element

    Window {
        id: displaywindow
        width: mainwindow.width
        height: mainwindow.height
        visible: true

        LinearGradient {
            anchors.fill: parent
            gradient: Gradient {
                GradientStop {position: 0.5; color: "#5f9ea0" }
                GradientStop {position: 1.0; color: "#2f4f4f" }
            }
        }

        C1.SplitView {
            id: splitview
            anchors.fill: parent
            Repeater {
                model: my_cores.setNumberCpuCores();        // determine the numbers of cores
                Item {                                      // create for each core an item
                    width: parent.width/my_cores.setNumberCpuCores()
                    anchors.margins: 10
                    Column {
                        Text { text: "Prozessor: "+my_cores.setProcessor(index); color: "white"; font.family: "Arial" }
                        Text { text: "Vendor id: "+my_cores.setvendorId(index); color: "white"; font.family: "Arial"  }
                        Text { text: "CPU Family: "+my_cores.setcpuFamily(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Model: "+my_cores.setmodel(index); color: "white"; font.family: "Arial" }
                        Text { text: "Model Name: "+my_cores.setmodelName(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Stepping: "+my_cores.setstepping(index); color: "white"; font.family: "Arial"  }
                        Text { text: "CPU MHz: "+my_cores.setcpuMhz(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Cache Size: "+my_cores.setcacheSize(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Physical ID: "+my_cores.setphysicalId(index); color: "white"; font.family: "Arial" }
                        Text { text: "Siblings: "+my_cores.setsiblings(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Core ID: "+my_cores.setcoreId(index); color: "white"; font.family: "Arial"  }
                        Text { text: "CPU Cores: "+my_cores.setcpuCores(index); color: "white"; font.family: "Arial" }
                        Text { text: "APICID: "+my_cores.setapicid(index); color: "white"; font.family: "Arial" }
                        Text { text: "Init APICID: "+my_cores.setinitApicid(index); color: "white"; font.family: "Arial"  }
                        Text { text: "FPU: "+my_cores.setfpu(index); color: "white"; font.family: "Arial"  }
                        Text { text: "FPU Exceptions: "+my_cores.setfpuExceptions(index); color: "white"; font.family: "Arial"  }
                        Text { text: "CPUid level: "+my_cores.setcpuid_level(index); color: "white"; font.family: "Arial"  }
                        Text { text: "WP: "+my_cores.setwp(index); color: "white"; font.family: "Arial" }
                        Text { text: "Bogomips: "+my_cores.setbogomips(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Clflush Size: "+my_cores.setclflushSize(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Cache Alignment: "+my_cores.setcacheAlignment(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Address Size: "+my_cores.setaddressSizes(index); color: "white"; font.family: "Arial"  }
                        Text { text: "Power Managment: "+my_cores.setpowerManagment(index); color: "white"; font.family: "Arial" }
                    }
                }
            }
        }
    }
}

