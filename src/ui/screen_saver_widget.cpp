#include "screen_saver_widget.hpp"

#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QPaintEvent>
#include <QPainter>
#include <QString>
#include <quface/logger.hpp>
#include "config.hpp"

using namespace suanzi;

ScreenSaverWidget::ScreenSaverWidget(int width, int height, QWidget *parent)
    : QWidget(parent) {
  //
  setAttribute(Qt::WA_StyledBackground, true);
  setAutoFillBackground(true);

  move(0, 0);
  setFixedSize(width, height);

  // set background image
  QString style_str = "QWidget {border-image: url(";
  QString filename(Config::get_app().screensaver_image_path.c_str());
  if (QFile(filename).exists())
    style_str += filename;
  else {
    style_str += ":asserts/background.jpg";
  }
  style_str += ");}";
  setStyleSheet(style_str);

  refresh_timer_ = new QTimer(this);
  connect(refresh_timer_, SIGNAL(timeout()), this, SLOT(resfresh_timeout()));
}

ScreenSaverWidget::~ScreenSaverWidget() {}

void ScreenSaverWidget::rx_display(bool visible) {
  if (visible) {
    show();
    if (!refresh_timer_->isActive()) refresh_timer_->start(500);
  } else {
    hide();
    if (refresh_timer_->isActive()) refresh_timer_->stop();
  }
}

void ScreenSaverWidget::resfresh_timeout() { update(); }

void ScreenSaverWidget::mousePressEvent(QMouseEvent *event) {
  emit tx_detect_result(true);
}

void ScreenSaverWidget::paintEvent(QPaintEvent *event) {
  QPainter painter(this);
  const int w = width();
  const int h = height();

  // draw datetime
  QDateTime now = QDateTime::currentDateTime();

  QString time = now.toString("hh   mm");
  QString date = now.toString(tr("yyyy年MM月dd日"));

  int base_font_size = h * 2 / 100;

  QFont font = painter.font();
  font.setPixelSize(base_font_size * 5);
  painter.setFont(font);
  painter.setPen(Qt::white);
  painter.drawText(w * 25 / 100, h * 33 / 100, time);

  static bool flag = true;
  if (flag) {
    painter.drawText(w * 47 / 100, h * 33 / 100, ":");
  }
  flag = !flag;

  font.setPixelSize(base_font_size * 2);
  painter.setFont(font);
  painter.drawText(w * 26 / 100, h * 40 / 100, date);
}
