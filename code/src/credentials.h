#pragma once

auto WIFI_SSID =  "the robot network";
auto WIFI_PASSWORD ="isaacasimov";

auto MQTT_SERVER = "robotmqtt";

auto MQTT_CLIENTID = "ESP32-CAM";
auto MQTT_USERNAME = "public";
auto MQTT_KEY = "public";

auto MQTT_FRAMES_TOPIC = "esp32-cam/frames";
auto MQTT_IP_TOPIC = "esp32-cam/ip";

auto MQTT_URL_TOPIC = "esp32-cam/url";
auto MQTT_COCOSSD_TOPIC = "esp32-cam/url/cocossd";
auto MQTT_FULLSCREEN_TOPIC = "esp32-cam/url/fullscreen";

auto MQTT_INFO_TOPIC = "esp32-cam/info";
auto MQTT_ERROR_TOPIC = "esp32-cam/error";
auto MQTT_FPS_TOPIC = "esp32-cam/fps";

auto MQTT_WS_TOPIC = "esp32-cam/ws/connections";
