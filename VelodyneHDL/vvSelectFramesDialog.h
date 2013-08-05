#ifndef __vvSelectFramesDialog_h
#define __vvSelectFramesDialog_h

#include <QDialog>

#include "vvConfigure.h"

class VelodyneHDLPlugin_EXPORT vvSelectFramesDialog : public QDialog
{
  Q_OBJECT
public:

  vvSelectFramesDialog(QWidget *p=0);
  virtual ~vvSelectFramesDialog();

  enum
  {
    CURRENT_FRAME = 0,
    ALL_FRAMES,
    FRAME_RANGE
  };

  int frameMode() const;
  void setFrameMode(int frameMode);

  int frameStart() const;
  int frameStop() const;
  int frameStride() const;

  void setFrameStart(int frameStart);
  void setFrameStop(int frameStop);
  void setFrameStride(int frameStride);

  void setFrameMinimum(int frameMin);
  void setFrameMaximum(int frameMax);

  void setFrameStrideVisibility(bool visible);

  void saveState();
  void restoreState();

private:


  class pqInternal;
  pqInternal* Internal;

  Q_DISABLE_COPY(vvSelectFramesDialog);
};

#endif