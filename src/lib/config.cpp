#include "config.hpp"

using namespace suanzi;

void suanzi::to_json(json &j, const UserConfig &c) {
  SAVE_JSON_TO(j, "blacklist_policy", c.blacklist_policy);
  SAVE_JSON_TO(j, "liveness_policy", c.liveness_policy);
  SAVE_JSON_TO(j, "detect_level", c.detect_level);
  SAVE_JSON_TO(j, "extract_level", c.extract_level);
  SAVE_JSON_TO(j, "liveness_level", c.liveness_level);
  SAVE_JSON_TO(j, "duplication_interval", c.duplication_interval);
}

void suanzi::from_json(const json &j, UserConfig &c) {
  LOAD_JSON_TO(j, "blacklist_policy", c.blacklist_policy);
  LOAD_JSON_TO(j, "liveness_policy", c.liveness_policy);
  LOAD_JSON_TO(j, "detect_level", c.detect_level);
  LOAD_JSON_TO(j, "extract_level", c.extract_level);
  LOAD_JSON_TO(j, "liveness_level", c.liveness_level);
  LOAD_JSON_TO(j, "duplication_interval", c.duplication_interval);
}

void suanzi::to_json(json &j, const AppConfig &c) {
  SAVE_JSON_TO(j, "recognize_tip_top_percent", c.recognize_tip_top_percent);
  SAVE_JSON_TO(j, "server_port", c.server_port);
  SAVE_JSON_TO(j, "server_host", c.server_host);
  SAVE_JSON_TO(j, "image_store_path", c.image_store_path);
  SAVE_JSON_TO(j, "person_service_base_url", c.person_service_base_url);
  SAVE_JSON_TO(j, "enable_anti_spoofing", c.enable_anti_spoofing);
  SAVE_JSON_TO(j, "show_infrared_window", c.show_infrared_window);
  SAVE_JSON_TO(j, "record_infraraed_faces", c.record_infraraed_faces);
  SAVE_JSON_TO(j, "infraraed_faces_store_path", c.infraraed_faces_store_path);
}

void suanzi::from_json(const json &j, AppConfig &c) {
  LOAD_JSON_TO(j, "recognize_tip_top_percent", c.recognize_tip_top_percent);
  LOAD_JSON_TO(j, "server_port", c.server_port);
  LOAD_JSON_TO(j, "server_host", c.server_host);
  LOAD_JSON_TO(j, "image_store_path", c.image_store_path);
  LOAD_JSON_TO(j, "person_service_base_url", c.person_service_base_url);
  LOAD_JSON_TO(j, "enable_anti_spoofing", c.enable_anti_spoofing);
  LOAD_JSON_TO(j, "show_infrared_window", c.show_infrared_window);
  LOAD_JSON_TO(j, "record_infraraed_faces", c.record_infraraed_faces);
  LOAD_JSON_TO(j, "infraraed_faces_store_path", c.infraraed_faces_store_path);
}

void suanzi::to_json(json &j, const QufaceConfig &c) {
  SAVE_JSON_TO(j, "product_key", c.product_key);
  SAVE_JSON_TO(j, "device_name", c.device_name);
  SAVE_JSON_TO(j, "device_secret", c.device_secret);
  SAVE_JSON_TO(j, "client_id", c.client_id);
  SAVE_JSON_TO(j, "db_name", c.db_name);
  SAVE_JSON_TO(j, "model_file_path", c.model_file_path);
  SAVE_JSON_TO(j, "license_filename", c.license_filename);
}

void suanzi::from_json(const json &j, QufaceConfig &c) {
  LOAD_JSON_TO(j, "product_key", c.product_key);
  LOAD_JSON_TO(j, "device_name", c.device_name);
  LOAD_JSON_TO(j, "device_secret", c.device_secret);
  LOAD_JSON_TO(j, "client_id", c.client_id);
  LOAD_JSON_TO(j, "db_name", c.db_name);
  LOAD_JSON_TO(j, "model_file_path", c.model_file_path);
  LOAD_JSON_TO(j, "license_filename", c.license_filename);
}

void suanzi::to_json(json &j, const CameraConfig &c) {
  SAVE_JSON_TO(j, "index", c.index);
  SAVE_JSON_TO(j, "rotate", c.rotate);
  SAVE_JSON_TO(j, "flip", c.flip);
  SAVE_JSON_TO(j, "min_face_height", c.min_face_height);
  SAVE_JSON_TO(j, "min_face_width", c.min_face_width);
  SAVE_JSON_TO(j, "max_window_height", c.max_window_height);
  SAVE_JSON_TO(j, "max_window_width", c.max_window_width);
  SAVE_JSON_TO(j, "target_area_width_percent", c.target_area_width_percent);
  SAVE_JSON_TO(j, "target_area_height_percent", c.target_area_height_percent);
}

void suanzi::from_json(const json &j, CameraConfig &c) {
  LOAD_JSON_TO(j, "index", c.index);
  LOAD_JSON_TO(j, "rotate", c.rotate);
  LOAD_JSON_TO(j, "flip", c.flip);
  LOAD_JSON_TO(j, "min_face_height", c.min_face_height);
  LOAD_JSON_TO(j, "min_face_width", c.min_face_width);
  LOAD_JSON_TO(j, "max_window_height", c.max_window_height);
  LOAD_JSON_TO(j, "max_window_width", c.max_window_width);
  LOAD_JSON_TO(j, "target_area_width_percent", c.target_area_width_percent);
  LOAD_JSON_TO(j, "target_area_height_percent", c.target_area_height_percent);
}

void suanzi::to_json(json &j, const DetectConfig &c) {
  SAVE_JSON_TO(j, "threshold", c.threshold);
  SAVE_JSON_TO(j, "min_face_size", c.min_face_size);
  SAVE_JSON_TO(j, "max_yaw", c.max_yaw);
  SAVE_JSON_TO(j, "min_yaw", c.min_yaw);
  SAVE_JSON_TO(j, "max_pitch", c.max_pitch);
  SAVE_JSON_TO(j, "min_pitch", c.min_pitch);
  SAVE_JSON_TO(j, "max_roll", c.max_roll);
  SAVE_JSON_TO(j, "min_roll", c.min_roll);
  SAVE_JSON_TO(j, "min_tracking_iou", c.min_tracking_iou);
  SAVE_JSON_TO(j, "min_tracking_number", c.min_tracking_number);
}

void suanzi::from_json(const json &j, DetectConfig &c) {
  LOAD_JSON_TO(j, "threshold", c.threshold);
  LOAD_JSON_TO(j, "min_face_size", c.min_face_size);
  LOAD_JSON_TO(j, "max_yaw", c.max_yaw);
  LOAD_JSON_TO(j, "min_yaw", c.min_yaw);
  LOAD_JSON_TO(j, "max_pitch", c.max_pitch);
  LOAD_JSON_TO(j, "min_pitch", c.min_pitch);
  LOAD_JSON_TO(j, "max_roll", c.max_roll);
  LOAD_JSON_TO(j, "min_roll", c.min_roll);
  LOAD_JSON_TO(j, "min_tracking_iou", c.min_tracking_iou);
  LOAD_JSON_TO(j, "min_tracking_number", c.min_tracking_number);
}

void suanzi::to_json(json &j, const ExtractConfig &c) {
  SAVE_JSON_TO(j, "history_size", c.history_size);
  SAVE_JSON_TO(j, "min_recognize_count", c.min_recognize_count);
  SAVE_JSON_TO(j, "min_recognize_score", c.min_recognize_score);
  SAVE_JSON_TO(j, "min_accumulate_score", c.min_accumulate_score);
  SAVE_JSON_TO(j, "max_lost_age", c.max_lost_age);
}

void suanzi::from_json(const json &j, ExtractConfig &c) {
  LOAD_JSON_TO(j, "history_size", c.history_size);
  LOAD_JSON_TO(j, "min_recognize_count", c.min_recognize_count);
  LOAD_JSON_TO(j, "min_recognize_score", c.min_recognize_score);
  LOAD_JSON_TO(j, "min_accumulate_score", c.min_accumulate_score);
  LOAD_JSON_TO(j, "max_lost_age", c.max_lost_age);
}

void suanzi::to_json(json &j, const LivenessConfig &c) {
  SAVE_JSON_TO(j, "history_size", c.history_size);
  SAVE_JSON_TO(j, "min_alive_count", c.min_alive_count);
  SAVE_JSON_TO(j, "continuous_max_lost_count", c.continuous_max_lost_count);
  SAVE_JSON_TO(j, "min_iou_between_bgr", c.min_iou_between_bgr);
  SAVE_JSON_TO(j, "min_width_ratio_between_bgr", c.min_width_ratio_between_bgr);
  SAVE_JSON_TO(j, "max_width_ratio_between_bgr", c.max_width_ratio_between_bgr);
  SAVE_JSON_TO(j, "min_height_ratio_between_bgr",
               c.min_height_ratio_between_bgr);
  SAVE_JSON_TO(j, "max_height_ratio_between_bgr",
               c.max_height_ratio_between_bgr);
}

void suanzi::from_json(const json &j, LivenessConfig &c) {
  LOAD_JSON_TO(j, "history_size", c.history_size);
  LOAD_JSON_TO(j, "min_alive_count", c.min_alive_count);
  LOAD_JSON_TO(j, "continuous_max_lost_count", c.continuous_max_lost_count);
  LOAD_JSON_TO(j, "min_iou_between_bgr", c.min_iou_between_bgr);
  LOAD_JSON_TO(j, "min_width_ratio_between_bgr", c.min_width_ratio_between_bgr);
  LOAD_JSON_TO(j, "max_width_ratio_between_bgr", c.max_width_ratio_between_bgr);
  LOAD_JSON_TO(j, "min_height_ratio_between_bgr",
               c.min_height_ratio_between_bgr);
  LOAD_JSON_TO(j, "max_height_ratio_between_bgr",
               c.max_height_ratio_between_bgr);
}

void suanzi::from_json(const json &j, Config &c) {
  LOAD_JSON_TO(j, "user", c.user);
  LOAD_JSON_TO(j, "app", c.app);
  LOAD_JSON_TO(j, "quface", c.quface);

  if (j.contains("cameras")) {
    LOAD_JSON_TO(j.at("cameras"), "normal", c.normal);
    LOAD_JSON_TO(j.at("cameras"), "infrared", c.infrared);
  }

  if (j.contains("pro")) {
    LOAD_JSON_TO(j.at("pro"), "detect_levels", c.detect_levels_);
    LOAD_JSON_TO(j.at("pro"), "extract_levels", c.extract_levels_);
    LOAD_JSON_TO(j.at("pro"), "liveness_levels", c.liveness_levels_);
  }
}

void suanzi::to_json(json &j, const Config &c) {
  SAVE_JSON_TO(j, "user", c.user);
  SAVE_JSON_TO(j, "app", c.app);
  SAVE_JSON_TO(j, "quface", c.quface);

  json cameras;
  SAVE_JSON_TO(cameras, "normal", c.normal);
  SAVE_JSON_TO(cameras, "infrared", c.infrared);
  SAVE_JSON_TO(j, "cameras", cameras);

  json pro;
  SAVE_JSON_TO(pro, "detect_levels", c.detect_levels_);
  SAVE_JSON_TO(pro, "extract_levels", c.extract_levels_);
  SAVE_JSON_TO(pro, "liveness_levels", c.liveness_levels_);
  SAVE_JSON_TO(j, "pro", pro);
}

Config Config::instance_;

Config::ptr Config::get_instance() { return Config::ptr(&instance_); }

void Config::load_defaults() {
  app = {
      .recognize_tip_top_percent = 78,
      .server_port = 8010,
      .server_host = "127.0.0.1",
      .image_store_path = "/user/quface-app/var/db/upload/",
      .person_service_base_url = "http://127.0.0.1",
      .enable_anti_spoofing = false,
      .show_infrared_window = false,
      .record_infraraed_faces = false,
      .infraraed_faces_store_path = "/user/quface-app/var/face-terminal/ir-faces/",
  };

  user = {
      .blacklist_policy = "alarm",
      .liveness_policy = "alarm",
      .detect_level = "medium",
      .extract_level = "medium",
      .liveness_level = "medium",
      .duplication_interval = 60,
  };

  quface = {
      .product_key = "",
      .device_name = "",
      .device_secret = "",
      .client_id = "face-service",
      .db_name = "quface",
      .model_file_path = "facemodel.bin",
      .license_filename = "license.json",
  };

  normal = {
      .index = 1,
      .rotate = 0,
      .flip = -2,
      .min_face_height = 100,
      .min_face_width = 100,
      .max_window_height = 800,
      .max_window_width = 600,
      .target_area_width_percent = 60,
      .target_area_height_percent = 60,
  };

  infrared = {
      .index = 1,
      .rotate = 0,
      .flip = -2,
      .min_face_height = 100,
      .min_face_width = 100,
      .max_window_height = 800,
      .max_window_width = 600,
      .target_area_width_percent = 60,
      .target_area_height_percent = 60,
  };

  detect_levels_ = {
      .high =
          {
              .threshold = 0.4f,
              .min_face_size = 40,
              .max_yaw = 10,
              .min_yaw = -10,
              .max_pitch = 10,   // disable max pitch
              .min_pitch = -10,  // disable min pitch
              .min_roll = -10,
              .max_roll = 10,
              .min_tracking_iou = 0.9,
              .min_tracking_number = 3
          },
      .medium =
          {
              .threshold = 0.4f,
              .min_face_size = 30,
              .max_yaw = 15,
              .min_yaw = -15,
              .max_pitch = 15,   // disable max pitch
              .min_pitch = -15,  // disable min pitch
              .min_roll = -15,
              .max_roll = 15,
              .min_tracking_iou = 0.9,
              .min_tracking_number = 3
          },
      .low =
          {
              .threshold = 0.4f,
              .min_face_size = 30,
              .max_yaw = 15,
              .min_yaw = -15,
              .max_pitch = 15,   // disable max pitch
              .min_pitch = -15,  // disable min pitch
              .min_roll = -15,
              .max_roll = 15,
              .min_tracking_iou = 0.85,
              .min_tracking_number = 2
          },
  };

  extract_levels_ = {
      .high =
          {
              .history_size = 2,
              .min_recognize_count = 2,
              .min_recognize_score = .8f,
              .min_accumulate_score = 1.6f,
              .max_lost_age = 20,
          },
      .medium =
          {
              .history_size = 1,
              .min_recognize_count = 1,
              .min_recognize_score = .8f,
              .min_accumulate_score = .8f,
              .max_lost_age = 20,
          },
      .low =
          {
              .history_size = 1,
              .min_recognize_count = 1,
              .min_recognize_score = .775f,
              .min_accumulate_score = .775f,
              .max_lost_age = 20,
          },
  };

  liveness_levels_ = {
      .high =
          {
              .history_size = 5,
              .min_alive_count = 2,
              .continuous_max_lost_count = 3,
              .min_iou_between_bgr = 0.1,
              .min_width_ratio_between_bgr = .5f,
              .max_width_ratio_between_bgr = 2.f,
              .min_height_ratio_between_bgr = .5f,
              .max_height_ratio_between_bgr = 2.f,
          },
      .medium =
          {
              .history_size = 3,
              .min_alive_count = 1,
              .continuous_max_lost_count = 3,
              .min_iou_between_bgr = 0.1,
              .min_width_ratio_between_bgr = .5f,
              .max_width_ratio_between_bgr = 2.f,
              .min_height_ratio_between_bgr = .5f,
              .max_height_ratio_between_bgr = 2.f,
          },
      .low =
          {
              .history_size = 5,
              .min_alive_count = 1,
              .continuous_max_lost_count = 2,
              .min_iou_between_bgr = 0.1,
              .min_width_ratio_between_bgr = .5f,
              .max_width_ratio_between_bgr = 2.f,
              .min_height_ratio_between_bgr = .5f,
              .max_height_ratio_between_bgr = 2.f,
          },
  };
}

SZ_RETCODE Config::load_from_file(const std::string &config_file,
                                  const std::string &config_override_file) {
  config_file_ = config_file;
  config_override_file_ = config_override_file;
  reload();
}

SZ_RETCODE Config::load_from_json(const json &j) {
  try {
    j.get_to(*this);
  } catch (const std::exception &exc) {
    SZ_LOG_ERROR("load_from_json: {}", exc.what());
    return SZ_RETCODE_FAILED;
  }
  return SZ_RETCODE_OK;
}

SZ_RETCODE Config::reload() {
  try {
    std::ifstream config_fd(config_file_);
    if (!config_fd.is_open()) {
      SZ_LOG_WARN("{} not present, will using defaults", config_file_);
      return SZ_RETCODE_OK;
    }

    json config;
    config_fd >> config;

    config.get_to(*this);

    std::ifstream override_fd(config_override_file_);
    if (override_fd.is_open()) {
      SZ_LOG_INFO("Override config from {}", config_override_file_);
      json override_config;
      override_fd >> override_config;

      override_config.get_to(*this);
    }
  } catch (std::exception &exc) {
    SZ_LOG_ERROR("Load error, will using defaults: {}", exc.what());
  }

  return SZ_RETCODE_OK;
}

SZ_RETCODE Config::save() {
  json config = json(*this);

  std::ofstream o(config_override_file_);
  if (!o.is_open()) {
    SZ_LOG_WARN("Open {} failed, can't save", config_override_file_);
    return SZ_RETCODE_FAILED;
  }

  o << config.dump(2);

  return SZ_RETCODE_OK;
}

SZ_RETCODE Config::reset() {
  json config = json(*this);

  SZ_LOG_INFO("Clear everything in {} ...", config_override_file_);
  std::ofstream o(config_override_file_);
  if (!o.is_open()) {
    SZ_LOG_WARN("Open {} failed, can't save", config_override_file_);
    return SZ_RETCODE_FAILED;
  }

  o << "{}";

  SZ_LOG_INFO("Load defaults ...");
  load_defaults();

  SZ_LOG_INFO("Load from files ...");
  return reload();
}

const UserConfig &Config::get_user() { return instance_.user; }

const AppConfig &Config::get_app() { return instance_.app; }

const QufaceConfig &Config::get_quface() { return instance_.quface; }

const DetectConfig &Config::get_detect() {
  auto &i = instance_;
  return i.detect_levels_.get(i.user.detect_level);
}

const ExtractConfig &Config::get_extract() {
  auto &i = instance_;
  return i.extract_levels_.get(i.user.extract_level);
}

const LivenessConfig &Config::get_liveness() {
  auto &i = instance_;
  return i.liveness_levels_.get(i.user.liveness_level);
}

bool Config::enable_anti_spoofing() {
  return instance_.app.enable_anti_spoofing;
}
