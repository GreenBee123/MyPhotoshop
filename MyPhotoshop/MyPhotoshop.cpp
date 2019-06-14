#include "MyPhotoshop.h"

QString filename;
Mat image;
String name;
QImage img;

MyPhotoshop::MyPhotoshop(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	addMenubar();
	addConncet();
	//ui.scrollArea->setWidget(ui.label);
	ui.scrollArea->setWidgetResizable(true);

}

void MyPhotoshop::addConncet() {
	connect(this, SIGNAL(QR_Code_MyPhotoshop_sendData(QString)), Pqr_Code, SLOT(QR_Code_receiveData(QString)));
	connect(this, SIGNAL(ScreenShot_MyPhotoshop_sendData(QString)), Pscreenshot, SLOT(ScreenShot_receiveData(QString)));
	connect(this, SIGNAL(Snow_Special_Effects_sendData(QString)), Psnow_special_effects, SLOT(Snow_Special_Effects_receiveData(QString)));
	connect(this, SIGNAL(Word_Processing_sendData(QString)), Pword_processing, SLOT(Word_Processing_receiveData(QString)));
	connect(this, SIGNAL(Sobel_Operator_sendData(QString)), Psobel_operator, SLOT(Sobel_Operator_receiveData(QString)));
	connect(this, SIGNAL(Laplacian_Operator_sendData(QString)), Plaplacian_operator, SLOT(Laplacian_Operator_receiveData(QString)));
	connect(this, SIGNAL(Canny_EdgeDetection_sendData(QString)), Pcanny_edgedetection, SLOT(Canny_EdgeDetection_receiveData(QString)));
	connect(this, SIGNAL(hough_Line_Transformation_sendData(QString)), Phough_line_rransformation, SLOT(hough_Line_Transformation_receiveData(QString)));
	connect(this, SIGNAL(hough_Circle_Transformation_sendData(QString)), Phough_circle_transformation, SLOT(hough_Circle_Transformation_receiveData(QString)));
	connect(this, SIGNAL(finding_Image_Contour_sendData(QString)), Pfinding_image_contour, SLOT(finding_Image_Contour_receiveData(QString)));
	connect(this, SIGNAL(trademark_Watermark_sendData(QString)), Ptrademark_watermark, SLOT(Trademark_Watermark_receiveData(QString)));
	connect(this, SIGNAL(Image_Transformation_sendData(QString)), Pimage_transformation, SLOT(Image_Transformation_receiveData(QString)));
	connect(this, SIGNAL(Lightness_Contrastclass_sendData(QString)), Plightness_contrast, SLOT(Lightness_Contrast_receiveData(QString)));
	connect(this, SIGNAL(rain_Special_Effects_sendData(QString)), Prain_special_effect, SLOT(rain_Special_Effects_receiveData(QString)));
	connect(this, SIGNAL(casting_sendData(QString)), Pcasting, SLOT(casting_receiveData(QString)));
	connect(this, SIGNAL(nostalgic_colar_sendData(QString)), Pnostalgic_colar, SLOT(nostalgic_colar_receiveData(QString)));
	connect(this, SIGNAL(comic_Strips_sendData(QString)), Pcomic_Strips, SLOT(comic_Strips_receiveData(QString)));
	connect(this, SIGNAL(frozen_sendData(QString)), Pfrozen, SLOT(frozen_receiveData(QString)));
	connect(this, SIGNAL(feather_sendData(QString)), Pfeather, SLOT(feather_receiveData(QString)));
	connect(this, SIGNAL(zhong_zhi_sendData(QString)), Zhongzhi, SLOT(Zhong_zhireceiveData(QString)));
	connect(this, SIGNAL(diao_ke_sendData(QString)), Diaoke, SLOT(Diao_kereceiveData(QString)));
}

void MyPhotoshop::addMenubar() {
	//菜单栏添加
	openFile = new QAction(this);
	openFile->setText(QString::fromLocal8Bit("打开图片"));
	openFile->setStatusTip("this is ac1");
	openFile->setShortcut(QKeySequence("Ctrl+8"));
	connect(openFile, SIGNAL(triggered()), this, SLOT(OpenFile()));

	saveFile = new QAction(this);
	saveFile->setText(QString::fromLocal8Bit("保存图片"));
	connect(saveFile, SIGNAL(triggered()), this, SLOT(SaveFile()));

	eixtMyPhotoshop = new QAction(this);
	eixtMyPhotoshop->setText(QString::fromLocal8Bit("退出"));
	connect(eixtMyPhotoshop, SIGNAL(triggered()), this, SLOT(EixtMyPhotoshop()));

	snow_Special_Effects = new QAction(this);
	snow_Special_Effects->setText(QString::fromLocal8Bit("下雪特效"));
	connect(snow_Special_Effects, SIGNAL(triggered()), this, SLOT(Snow_Special_Effects()));

	rain_Special_Effects = new QAction(this);
	rain_Special_Effects->setText(QString::fromLocal8Bit("下雨特效"));
	connect(rain_Special_Effects, SIGNAL(triggered()), this, SLOT(Rain_Special_Effects()));

	mixing_Graphic_File = new QAction(this);
	mixing_Graphic_File->setText(QString::fromLocal8Bit("图文件混合"));
	connect(mixing_Graphic_File, SIGNAL(triggered()), this, SLOT(Mixing_Graphic_File()));

	trademark_Watermark = new QAction(this);
	trademark_Watermark->setText(QString::fromLocal8Bit("商标/水印"));
	connect(trademark_Watermark, SIGNAL(triggered()), this, SLOT(Trademark_Watermark()));

	image_Transformation = new QAction(this);
	image_Transformation->setText(QString::fromLocal8Bit("图像变换"));
	connect(image_Transformation, SIGNAL(triggered()), this, SLOT(Image_Transformation()));

	histogram_Equalization = new QAction(this);
	histogram_Equalization->setText(QString::fromLocal8Bit("直方图均衡化"));
	connect(histogram_Equalization, SIGNAL(triggered()), this, SLOT(Histogram_Equalization()));

	lightness_Contrast = new QAction(this);
	lightness_Contrast->setText(QString::fromLocal8Bit("明度/对比度"));
	connect(lightness_Contrast, SIGNAL(triggered()), this, SLOT(Lightness_Contrast()));

	word_Processing = new QAction(this);
	word_Processing->setText(QString::fromLocal8Bit("文字处理"));
	connect(word_Processing, SIGNAL(triggered()), this, SLOT(Word_Processing()));

	discrete_Fourier_Transform = new QAction(this);
	discrete_Fourier_Transform->setText(QString::fromLocal8Bit("*离散傅里叶变换"));
	connect(discrete_Fourier_Transform, SIGNAL(triggered()), this, SLOT(Discrete_Fourier_Transform()));

	sobel_Operator = new QAction(this);
	sobel_Operator->setText(QString::fromLocal8Bit("sobel算子"));
	connect(sobel_Operator, SIGNAL(triggered()), this, SLOT(Sobel_Operator()));

	laplacian_Operator = new QAction(this);
	laplacian_Operator->setText(QString::fromLocal8Bit("拉普拉斯算子"));
	connect(laplacian_Operator, SIGNAL(triggered()), this, SLOT(Laplacian_Operator()));

	canny_EdgeDetection = new QAction(this);
	canny_EdgeDetection->setText(QString::fromLocal8Bit("Canny图像边缘检测"));
	connect(canny_EdgeDetection, SIGNAL(triggered()), this, SLOT(Canny_EdgeDetection()));

	hough_Line_Transformation = new QAction(this);
	hough_Line_Transformation->setText(QString::fromLocal8Bit("霍夫线变换"));
	connect(hough_Line_Transformation, SIGNAL(triggered()), this, SLOT(Hough_Line_Transformation()));

	hough_Circle_Transformation = new QAction(this);
	hough_Circle_Transformation->setText(QString::fromLocal8Bit("霍夫圆变换"));
	connect(hough_Circle_Transformation, SIGNAL(triggered()), this, SLOT(Hough_Circle_Transformation()));

	finding_Image_Contour = new QAction(this);
	finding_Image_Contour->setText(QString::fromLocal8Bit("综合应用：寻找车牌位置"));
	connect(finding_Image_Contour, SIGNAL(triggered()), this, SLOT(Finding_Image_Contour()));

	create_RectanglesAndEllipses = new QAction(this);
	create_RectanglesAndEllipses->setText(QString::fromLocal8Bit("为图像建立矩阵或者椭圆形"));
	connect(create_RectanglesAndEllipses, SIGNAL(triggered()), this, SLOT(Create_RectanglesAndEllipses()));

	image_Moments = new QAction(this);
	image_Moments->setText(QString::fromLocal8Bit("图像矩"));
	connect(image_Moments, SIGNAL(triggered()), this, SLOT(Image_Moments()));

	gray = new QAction(this);
	gray->setText(QString::fromLocal8Bit("基本操作"));
	connect(gray, SIGNAL(triggered()), this, SLOT(Gray()));

	binaryzation = new QAction(this);
	binaryzation->setText(QString::fromLocal8Bit("二值化"));
	connect(binaryzation, SIGNAL(triggered()), this, SLOT(SaveFile()));

	gaussion_Filter = new QAction(this);
	gaussion_Filter->setText(QString::fromLocal8Bit("高斯滤波"));
	connect(gaussion_Filter, SIGNAL(triggered()), this, SLOT(Gaussion_Filter()));

	mean_Filter = new QAction(this);
	mean_Filter->setText(QString::fromLocal8Bit("均值滤波"));
	connect(mean_Filter, SIGNAL(triggered()), this, SLOT(Mean_Filter()));

	meadian_Filter = new QAction(this);
	meadian_Filter->setText(QString::fromLocal8Bit("中值滤波"));
	connect(meadian_Filter, SIGNAL(triggered()), this, SLOT(Meadian_Filter()));

	box_Filter = new QAction(this);
	box_Filter->setText(QString::fromLocal8Bit("方框滤波"));
	connect(box_Filter, SIGNAL(triggered()), this, SLOT(Box_Filter()));

	carve_Relief = new QAction(this);
	carve_Relief->setText(QString::fromLocal8Bit("雕刻/浮雕"));
	connect(carve_Relief, SIGNAL(triggered()), this, SLOT(Carve_Relief()));

	expansion_Backlog = new QAction(this);
	expansion_Backlog->setText(QString::fromLocal8Bit("扩张/挤压"));
	connect(expansion_Backlog, SIGNAL(triggered()), this, SLOT(Expansion_Backlog()));

	color_Change = new QAction(this);
	color_Change->setText(QString::fromLocal8Bit("颜色变换"));
	connect(color_Change, SIGNAL(triggered()), this, SLOT(Color_Change()));

	radial_Blur = new QAction(this);
	radial_Blur->setText(QString::fromLocal8Bit("径向模糊"));
	connect(radial_Blur, SIGNAL(triggered()), this, SLOT(Radial_Blur()));

	wave = new QAction(this);
	wave->setText(QString::fromLocal8Bit("波浪"));
	connect(saveFile, SIGNAL(triggered()), this, SLOT(Wave()));

	wind = new QAction(this);
	wind->setText(QString::fromLocal8Bit("风"));
	connect(wind, SIGNAL(triggered()), this, SLOT(Wind()));

	vortex = new QAction(this);
	vortex->setText(QString::fromLocal8Bit("漩涡"));
	connect(vortex, SIGNAL(triggered()), this, SLOT(Vortex()));

	sketch = new QAction(this);
	sketch->setText(QString::fromLocal8Bit("素描"));
	connect(sketch, SIGNAL(triggered()), this, SLOT(Sketch()));

	spread = new QAction(this);
	spread->setText(QString::fromLocal8Bit("扩散"));
	connect(spread, SIGNAL(triggered()), this, SLOT(Spread()));

	nostalgic_color = new QAction(this);
	nostalgic_color->setText(QString::fromLocal8Bit("怀旧色"));
	connect(nostalgic_color, SIGNAL(triggered()), this, SLOT(Nostalgic_color()));

	comic_Strips = new QAction(this);
	comic_Strips->setText(QString::fromLocal8Bit("连环画"));
	connect(comic_Strips, SIGNAL(triggered()), this, SLOT(Comic_Strips()));

	casting = new QAction(this);
	casting->setText(QString::fromLocal8Bit("熔铸"));
	connect(casting, SIGNAL(triggered()), this, SLOT(Casting()));

	frozen = new QAction(this);
	frozen->setText(QString::fromLocal8Bit("冰冻"));
	connect(frozen, SIGNAL(triggered()), this, SLOT(Frozen()));

	feather = new QAction(this);
	feather->setText(QString::fromLocal8Bit("羽化"));
	connect(feather, SIGNAL(triggered()), this, SLOT(Feather()));

	screenshot = new QAction(this);
	screenshot->setText(QString::fromLocal8Bit("图像截图"));
	connect(screenshot, SIGNAL(triggered()), this, SLOT(Screenshot()));

	image_EncryptionAndDecryption = new QAction(this);
	image_EncryptionAndDecryption->setText(QString::fromLocal8Bit("图像加密/图像解密"));
	connect(image_EncryptionAndDecryption, SIGNAL(triggered()), this, SLOT(Image_EncryptionAndDecryption()));

	QR_code = new QAction(this);
	QR_code->setText(QString::fromLocal8Bit("二维码检测"));
	connect(QR_code, SIGNAL(triggered()), this, SLOT(QR_Code()));

	fileMenu = menuBar()->addMenu(QString::fromLocal8Bit("文件"));
	fileMenu->addAction(openFile);
	fileMenu->addAction(saveFile);
	fileMenu->addAction(eixtMyPhotoshop);

	imageMenu = menuBar()->addMenu(QString::fromLocal8Bit("图像"));
	imageMenu->addAction(snow_Special_Effects);
	imageMenu->addAction(rain_Special_Effects);
	imageMenu->addAction(mixing_Graphic_File);
	mixing_Graphic_File->setEnabled(false);
	imageMenu->addAction(image_Transformation);
	imageMenu->addAction(histogram_Equalization);
	imageMenu->addAction(lightness_Contrast);
	imageMenu->addAction(trademark_Watermark);
	imageMenu->addAction(word_Processing);
	imageMenu->addAction(discrete_Fourier_Transform);
	discrete_Fourier_Transform->setEnabled(false);

	filterMenu = menuBar()->addMenu(QString::fromLocal8Bit("滤镜"));
	filterMenu->addAction(gray);
	filterMenu->addAction(binaryzation);
	binaryzation->setEnabled(false);
	filterMenu->addAction(gaussion_Filter);
	gaussion_Filter->setEnabled(false);;
	filterMenu->addAction(mean_Filter);
	mean_Filter->setEnabled(false);;
	filterMenu->addAction(meadian_Filter);
	meadian_Filter->setEnabled(false);
	filterMenu->addAction(box_Filter);
	box_Filter->setEnabled(false);
	filterMenu->addAction(carve_Relief);
	filterMenu->addAction(expansion_Backlog);
	filterMenu->addAction(color_Change);
	filterMenu->addAction(radial_Blur);
	filterMenu->addAction(wave);
	filterMenu->addAction(wind);
	filterMenu->addAction(vortex);
	filterMenu->addAction(sketch);
	filterMenu->addAction(spread);
	filterMenu->addAction(nostalgic_color);
	filterMenu->addAction(comic_Strips);
	filterMenu->addAction(casting);
	filterMenu->addAction(frozen);
	filterMenu->addAction(feather);

	edgeDetectionMenu = menuBar()->addMenu(QString::fromLocal8Bit("边缘检测"));
	edgeDetectionMenu->addAction(sobel_Operator);
	edgeDetectionMenu->addAction(laplacian_Operator);
	edgeDetectionMenu->addAction(canny_EdgeDetection);
	edgeDetectionMenu->addAction(hough_Line_Transformation);
	edgeDetectionMenu->addAction(hough_Circle_Transformation);
	edgeDetectionMenu->addAction(finding_Image_Contour);
	edgeDetectionMenu->addAction(create_RectanglesAndEllipses);
	create_RectanglesAndEllipses->setEnabled(false);
	edgeDetectionMenu->addAction(image_Moments);
	image_Moments->setEnabled(false);


	aboratory_FunctionMenu = menuBar()->addMenu(QString::fromLocal8Bit("实验室功能"));
	aboratory_FunctionMenu->addAction(screenshot);
	aboratory_FunctionMenu->addAction(image_EncryptionAndDecryption);
	image_EncryptionAndDecryption->setEnabled(false);
	aboratory_FunctionMenu->addAction(QR_code);
}

void suofang(Mat & image, int & size)
{
	if (image.cols < size) {
		float n = (float)size / image.cols;
		cv::resize(image, image, Size((float)image.cols*n, (float)image.rows*n), 0, 0, INTER_AREA);
	}
	else {
		float n = (float)size / image.cols;
		cv::resize(image, image, Size((float)image.cols / n, (float)image.rows / n), 0, 0, INTER_AREA);
	}
}

void no_ImageData() {
	QMessageBox box(QMessageBox::Warning, QString::fromLocal8Bit("提示"), QStringLiteral("请选择图像！"));
	box.setStandardButtons(QMessageBox::Ok);
	box.setButtonText(QMessageBox::Ok, QString::fromLocal8Bit("确定"));
	box.exec();
}

QImage cvMat2QImage(const cv::Mat& mat)
{
	// 8-bits unsigned, NO. OF CHANNELS = 1  
	if (mat.type() == CV_8UC1)
	{
		QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
		// Set the color table (used to translate colour indexes to qRgb values)  
		image.setColorCount(256);
		for (int i = 0; i < 256; i++)
		{
			image.setColor(i, qRgb(i, i, i));
		}
		// Copy input Mat  
		uchar *pSrc = mat.data;
		for (int row = 0; row < mat.rows; row++)
		{
			uchar *pDest = image.scanLine(row);
			memcpy(pDest, pSrc, mat.cols);
			pSrc += mat.step;
		}
		return image;
	}
	// 8-bits unsigned, NO. OF CHANNELS = 3  
	else if (mat.type() == CV_8UC3)
	{
		// Copy input Mat  
		const uchar *pSrc = (const uchar*)mat.data;
		// Create QImage with same dimensions as input Mat  
		QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
		return image.rgbSwapped();
	}
	else if (mat.type() == CV_8UC4)
	{
		//qDebug() << "CV_8UC4";
		// Copy input Mat  
		const uchar *pSrc = (const uchar*)mat.data;
		// Create QImage with same dimensions as input Mat  
		QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
		return image.copy();
	}
	else
	{
		qDebug() << "ERROR: Mat could not be converted to QImage.";
		return QImage();
	}
}

cv::Mat QImage2cvMat(QImage image)
{
	cv::Mat mat;
	//qDebug() << image.format();
	switch (image.format())
	{
	case QImage::Format_ARGB32:
	case QImage::Format_RGB32:
	case QImage::Format_ARGB32_Premultiplied:
		mat = cv::Mat(image.height(), image.width(), CV_8UC4, (void*)image.constBits(), image.bytesPerLine());
		break;
	case QImage::Format_RGB888:
		mat = cv::Mat(image.height(), image.width(), CV_8UC3, (void*)image.constBits(), image.bytesPerLine());
		cv::cvtColor(mat, mat, CV_BGR2RGB);
		break;
	case QImage::Format_Indexed8:
		mat = cv::Mat(image.height(), image.width(), CV_8UC1, (void*)image.constBits(), image.bytesPerLine());
		break;
	}
	return mat;
}

void MyPhotoshop::OpenFile()
{
	filename = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image File(*.bmp *.jpg *.jpeg *.png)"));
	QTextCodec *code = QTextCodec::codecForName("gb18030");
	name = code->fromUnicode(filename.data());
	image = imread(/*filename.toLocal8Bit().data()*/name);
	if (!image.data) {
		QMessageBox box(QMessageBox::Warning, QString::fromLocal8Bit("提示"), QStringLiteral("请选择图像！"));
		box.setStandardButtons(QMessageBox::Ok);
		box.setButtonText(QMessageBox::Ok, QString::fromLocal8Bit("确定"));
		box.exec();
	}
	else {
		int size2 = 600;
		//suofang(image, size2);
		cvtColor(image, image, CV_BGR2RGB);
		img = QImage((const unsigned char*)(image.data), image.cols, image.rows, image.cols*image.channels(), QImage::Format_RGB888);
		ui.label->clear();
		ui.label->setPixmap(QPixmap::fromImage(img));
		ui.label->resize(ui.label->pixmap()->size());
	}
}

void MyPhotoshop::SaveFile()
{
	if (!image.data) {
		no_ImageData();
	}
	QString filename1 = QFileDialog::getSaveFileName(this, tr("Save Image"), "", tr("Images (*.png *.bmp *.jpg)"));
	if (filename1 == "")
	{
		return;
	}
	/*QScreen *screen = QGuiApplication::primaryScreen();
	screen->grabWindow(ui.label->winId()).save(filename1);*/
	img.save(filename1);
}

void MyPhotoshop::EixtMyPhotoshop()
{
	qApp->exit(0);
}

void MyPhotoshop::Snow_Special_Effects()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit Snow_Special_Effects_sendData(QString::fromStdString(name));
		Psnow_special_effects->show();
	}
}

void MyPhotoshop::Rain_Special_Effects()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit rain_Special_Effects_sendData(QString::fromStdString(name));
		Prain_special_effect->show();
	}
}

void MyPhotoshop::Mixing_Graphic_File()
{
}

void MyPhotoshop::Image_Transformation()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit Image_Transformation_sendData(QString::fromStdString(name));
		Pimage_transformation->show();
	}
}

void MyPhotoshop::Histogram_Equalization()
{
}

void MyPhotoshop::Lightness_Contrast()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit Lightness_Contrastclass_sendData(QString::fromStdString(name));
		Plightness_contrast->show();
	}
}

void MyPhotoshop::Trademark_Watermark()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit trademark_Watermark_sendData(QString::fromStdString(name));
		Ptrademark_watermark->show();
	}
}

void MyPhotoshop::Word_Processing()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit Word_Processing_sendData(QString::fromStdString(name));
		Pword_processing->show();
	}
}

void MyPhotoshop::Discrete_Fourier_Transform()
{
}

void MyPhotoshop::Sobel_Operator()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit Sobel_Operator_sendData(QString::fromStdString(name));
		Psobel_operator->show();
	}
}

void MyPhotoshop::Laplacian_Operator()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit Laplacian_Operator_sendData(QString::fromStdString(name));
		Plaplacian_operator->show();
	}
}

void MyPhotoshop::Canny_EdgeDetection()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit Canny_EdgeDetection_sendData(QString::fromStdString(name));
		Pcanny_edgedetection->show();
	}
}

void MyPhotoshop::Hough_Line_Transformation()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit hough_Line_Transformation_sendData(QString::fromStdString(name));
		Phough_line_rransformation->show();
	}
}

void MyPhotoshop::Hough_Circle_Transformation()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit hough_Circle_Transformation_sendData(QString::fromStdString(name));
		Phough_circle_transformation->show();
	}
}

void MyPhotoshop::Finding_Image_Contour()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit finding_Image_Contour_sendData(QString::fromStdString(name));
		Pfinding_image_contour->show();
	}
}

void MyPhotoshop::Create_RectanglesAndEllipses()
{
}

void MyPhotoshop::Image_Moments()
{

}

void MyPhotoshop::Gray()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit zhong_zhi_sendData(QString::fromStdString(name));
		Zhongzhi->show();
	}
}

void MyPhotoshop::Binaryzation()
{
}

void MyPhotoshop::Gaussion_Filter()
{
}

void MyPhotoshop::Mean_Filter()
{
}

void MyPhotoshop::Meadian_Filter()
{
	
}

void MyPhotoshop::Box_Filter()
{
}

void MyPhotoshop::Carve_Relief()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit diao_ke_sendData(QString::fromStdString(name));
		Diaoke->show();
	}
}

void MyPhotoshop::Expansion_Backlog()
{
}

void MyPhotoshop::Color_Change()
{
}

void MyPhotoshop::Radial_Blur()
{
}

void MyPhotoshop::Wave()
{
}

void MyPhotoshop::Wind()
{
}

void MyPhotoshop::Vortex()
{
}

void MyPhotoshop::Sketch()
{
}

void MyPhotoshop::Spread()
{
}

void MyPhotoshop::Nostalgic_color()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit nostalgic_colar_sendData(QString::fromStdString(name));
		Pnostalgic_colar->show();
	}
}

void MyPhotoshop::Comic_Strips()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit comic_Strips_sendData(QString::fromStdString(name));
		Pcomic_Strips->show();
	}
}

void MyPhotoshop::Casting()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit casting_sendData(QString::fromStdString(name));
		Pcasting->show();
	}
}

void MyPhotoshop::Frozen()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit frozen_sendData(QString::fromStdString(name));
		Pfrozen->show();
	}
}

void MyPhotoshop::Feather()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit feather_sendData(QString::fromStdString(name));
		Pfeather->show();
	}
}

void MyPhotoshop::Screenshot()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit ScreenShot_MyPhotoshop_sendData(QString::fromStdString(name));
		Pscreenshot->show();
	}
}

void MyPhotoshop::Image_EncryptionAndDecryption()
{
}

void MyPhotoshop::QR_Code()
{
	if (!image.data) {
		no_ImageData();
	}
	else {
		emit QR_Code_MyPhotoshop_sendData(QString::fromStdString(name));
		Pqr_Code->show();
	}
}


