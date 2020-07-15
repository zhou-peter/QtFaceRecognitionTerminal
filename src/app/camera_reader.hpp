#ifndef CAMERA_READER_H
#define CAMERA_READER_H

#include <QImage>
#include <QSharedPointer>
#include <QThread>
#include <chrono>

#include "config.hpp"
#include "image_package.h"
#include "pingpang_buffer.h"
#include "vi.h"
#include "vi_vpss.h"
#include "vi_vpss_vo.h"
#include "vo.h"
#include "vpss.h"

namespace suanzi {

class CameraReader : QThread {
  Q_OBJECT
 public:
  CameraReader(Config::ptr config, QObject *parent = nullptr);
  ~CameraReader();
  void start_sample();

 private:
  void run();
  bool capture_frame(ImagePackage *pkg);

 private slots:
  void rx_finish();

 signals:
  void tx_frame(PingPangBuffer<ImagePackage> *buffer);

 private:
  Vi *pvi_bgr_;
  Vpss *pvpss_bgr_;
  Vi_Vpss *pvi_vpss_bgr_;

  Vi *pvi_nir_;
  Vpss *pvpss_nir_;
  Vi_Vpss *pvi_vpss_nir_;

  const int DEV_IDX_BRG = 1;
  const int PIPE_IDX_BRG = 2;
  const int DEV_IDX_NIR = 0;
  const int PIPE_IDX_NIR = 0;

  const Size VPSS_CH_SIZES_BGR[3] = {
      {1920, 1080}, {1080, 704}, {320, 224}};  // larger small
  const Size VPSS_CH_SIZES_NIR[3] = {
      {1920, 1080}, {1080, 704}, {320, 224}};  // larger small
  const int CH_INDEXES_BGR[3] = {0, 1, 2};
  const bool CH_ROTATES_BGR[3] = {false, true, true};
  const int CH_INDEXES_NIR[3] = {0, 1, 2};
  const bool CH_ROTATES_NIR[3] = {false, true, true};

  const int VO_W = 800;
  const int VO_H = 1280;

  bool b_tx_ok_;
  Config::ptr config_;
};

}  // namespace suanzi

#endif