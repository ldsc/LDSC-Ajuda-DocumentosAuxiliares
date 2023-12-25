NOTA: esta referencia é de versão antiga,  usava QT 4.6.

Sugere-se dar uma olhada no arquivo .h mais atual para ter certeza do uso de determinadas funções em versões mais atuais do Qt.

class QCustomPlot : public QWidget
{
public:
  QCustomPlot(QWidget *parent = 0);
   ~QCustomPlot();

  // getters:
  QRect viewport() const;
  double bufferDevicePixelRatio() const ;
  QPixmap background() const ;
  bool backgroundScaled() const ;
  Qt_AspectRatioMode backgroundScaledMode() const;
  QCPLayoutGrid *plotLayout() const;
  QCP_AntialiasedElements antialiasedElements() const;
  QCP_AntialiasedElements notAntialiasedElements() const ;
  bool autoAddPlottableToLegend() const ;
  const QCP_Interactions interactions() const;
  int selectionTolerance() const ;
  bool noAntialiasingOnDrag() const ;
  QCP_PlottingHints plottingHints() const;
  Qt_KeyboardModifier multiSelectModifier() const;
  QCP_SelectionRectMode selectionRectMode() const ;
  QCPSelectionRect *selectionRect() const;
  bool openGl() const ;

  // setters:
  void setViewport(const QRect &rect);
  void setBufferDevicePixelRatio(double ratio);
  void setBackground(const QPixmap &pm);
  void setBackground(const QPixmap &pm, bool scaled, Qt_AspectRatioMode mode);
  void setBackground(const QBrush &brush);
  void setBackgroundScaled(bool scaled);
  void setBackgroundScaledMode(Qt_AspectRatioMode mode);
  void setAntialiasedElements(const QCP_AntialiasedElements &antialiasedElements);
  void setAntialiasedElement(QCP_AntialiasedElement antialiasedElement, bool enabled);
  void setNotAntialiasedElements(const QCP_AntialiasedElements &notAntialiasedElements);
  void setNotAntialiasedElement(QCP_AntialiasedElement notAntialiasedElement, bool enabled);
  void setAutoAddPlottableToLegend(bool on);
  void setInteractions(const QCP_Interactions &interactions);
  void setInteraction(const QCP_Interaction &interaction, bool enabled);
  void setSelectionTolerance(int pixels);
  void setNoAntialiasingOnDrag(bool enabled);
  void setPlottingHints(const QCP_PlottingHints &hints);
  void setPlottingHint(QCP_PlottingHint hint, bool enabled);
  void setMultiSelectModifier(Qt_KeyboardModifier modifier);
  void setSelectionRectMode(QCP_SelectionRectMode mode);
  void setSelectionRect(QCPSelectionRect *selectionRect);
  void setOpenGl(bool enabled, int multisampling=16);

  // non-property methods:
  // plottable interface:
  QCPAbstractPlottable *plottable(int index);
  QCPAbstractPlottable *plottable();
  bool removePlottable(QCPAbstractPlottable *plottable);
  bool removePlottable(int index);
  int clearPlottables();
  int plottableCount() const;
  QList selectedPlottables() const;
  QCPAbstractPlottable *plottableAt(const QPointF &pos, bool onlySelectable) const;
  bool hasPlottable(QCPAbstractPlottable *plottable) const;

  // specialized interface for QCPGraph:
  QCPGraph *graph(int index) const;
  QCPGraph *graph() const;
  QCPGraph *addGraph(QCPAxis *keyAxis=0, QCPAxis *valueAxis=0);
  bool removeGraph(QCPGraph *graph);
  bool removeGraph(int index);
  int clearGraphs();
  int graphCount() const;
  QList< selectedGraphs() const;

  // item interface:
  QCPAbstractItem *item(int index) const;
  QCPAbstractItem *item() const;
  bool removeItem(QCPAbstractItem *item);
  bool removeItem(int index);
  int clearItems();
  int itemCount() const;
  QList selectedItems() const;
  QCPAbstractItem *itemAt(const QPointF &pos, bool onlySelectable) const;
  bool hasItem(QCPAbstractItem *item) const;

  // layer interface:
  QCPLayer *layer(const QString &name) const;
  QCPLayer *layer(int index) const;
  QCPLayer *currentLayer() const;
  bool setCurrentLayer(const QString &name);
  bool setCurrentLayer(QCPLayer *layer);
  int layerCount() const;
  bool addLayer(const QString &name, QCPLayer *otherLayer=0, LayerInsertMode insertMode=limAbove);
  bool removeLayer(QCPLayer *layer);
  bool moveLayer(QCPLayer *layer, QCPLayer *otherLayer, LayerInsertMode insertMode=limAbove);

  // axis rect/layout interface:
  int axisRectCount() const;
  QCPAxisRect* axisRect(int index=0) const;
  QList axisRects() const;
  QCPLayoutElement* layoutElementAt(const QPointF &pos) const;
  QCPAxisRect* axisRectAt(const QPointF &pos) const;
  Q_SLOT void rescaleAxes(bool onlyVisiblePlottables);

  QList selectedAxes() const;
  QList selectedLegends() const;
  Q_SLOT void deselectAll();

  bool savePdf(const QString &fileName, int width=0, int height=0, QCP_ExportPen exportPen=QCP::epAllowCosmetic, const QString &pdfCreator=QString(), const QString &pdfTitle=QString());
  bool savePng(const QString &fileName, int width=0, int height=0, double scale=1.0, int quality=-1, int resolution=96, QCP::ResolutionUnit resolutionUnit=QCP::ruDotsPerInch);
  bool saveJpg(const QString &fileName, int width=0, int height=0, double scale=1.0, int quality=-1, int resolution=96, QCP::ResolutionUnit resolutionUnit=QCP::ruDotsPerInch);
  bool saveBmp(const QString &fileName, int width=0, int height=0, double scale=1.0, int resolution=96, QCP::ResolutionUnit resolutionUnit=QCP::ruDotsPerInch);
  bool saveRastered(const QString &fileName, int width, int height, double scale, const char *format, int quality=-1, int resolution=96, QCP::ResolutionUnit resolutionUnit=QCP::ruDotsPerInch);
  QPixmap toPixmap(int width=0, int height=0, double scale=1.0);
  void toPainter(QCPPainter *painter, int width=0, int height=0);
  Q_SLOT void replot(QCustomPlot::RefreshPriority refreshPriority=QCustomPlot::rpRefreshHint);

  QCPAxis *xAxis, *yAxis, *xAxis2, *yAxis2;
  QCPLegend *legend;
};
