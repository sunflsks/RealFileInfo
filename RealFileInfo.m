#import "DOCItemInfoViewController.h"
#import <MRYIPCCenter.h>
#import <UIKit/UIKit.h>

static MRYIPCCenter* center;

void realFileInfo(UILabel* sizeAndKindLabel, UILabel* justKindLabel, FPItem* file) {
    NSString* origText = justKindLabel.text;

    if (sizeAndKindLabel == NULL || justKindLabel == NULL) {
        return;
    }

    if (center == nil)
        center = [MRYIPCCenter centerNamed:@"RealFileInfo/IPC"];

    NSString* justKindText = [center callExternalMethod:@selector(RFIGetTypeFromPath:)
                                          withArguments:file.fileURL.path];

    if (justKindText == nil) {
        justKindLabel.text = origText;
        return;
    }

    if (justKindText.length > 85)
        justKindText = [NSString stringWithFormat:@"%@...", [justKindText substringToIndex:85]];

    justKindLabel.text = justKindText;
}
