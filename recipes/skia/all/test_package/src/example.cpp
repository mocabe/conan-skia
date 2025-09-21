#include "include/core/SkCanvas.h"
#include "include/core/SkSurface.h"

#include "modules/skcms/skcms.h"
#include "modules/skottie/include/Skottie.h"
#include "modules/skparagraph/include/Paragraph.h"
#include "modules/skresources/include/SkResources.h"
#include "modules/sksg/include/SkSGScene.h"
#include "modules/skshaper/include/SkShaper.h"
#include "modules/skunicode/include/SkUnicode.h"
#include "modules/svg/include/SkSVGDOM.h"

int main()
{
    sk_sp<SkSurface> surface = SkSurfaces::Raster(SkImageInfo::MakeN32Premul({1280, 720}));

    SkCanvas* canvas = surface->getCanvas();

    SkPaint p;
    p.setColor(SK_ColorRED);
    p.setAntiAlias(true);
    p.setStyle(SkPaint::kStroke_Style);
    p.setStrokeWidth(10);

    canvas->drawLine(20, 20, 100, 100, p);
}
