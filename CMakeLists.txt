# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(sensor-esp32)
target_add_binary_data(sensor-esp32.elf "./certs/mqttsslcert.pem" TEXT)
target_add_binary_data(sensor-esp32.elf "./components/oap-common/default_config.json" TEXT)
target_add_binary_data(sensor-esp32.elf "./components/oap-aws/verisign_root_ca.pem" TEXT)
target_add_binary_data(sensor-esp32.elf "./components/oap-ota/comodo_ca.pem" TEXT)
target_add_binary_data(sensor-esp32.elf "./components/oap-wifi/index.html" TEXT)