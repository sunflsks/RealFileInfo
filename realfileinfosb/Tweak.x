#import <UIKit/UIKit.h>
#include <MRYIPCCenter.h>
#include <magic.h>

// I use my own magic database because I don't want to rely on other bootstraps having libmagic.
#define MAGDIR "/usr/share/realfileinfo/Magic.mgc"

static MRYIPCCenter* center;
static dispatch_once_t once;
static magic_t wand;

%hook SpringBoard

-(void)applicationDidFinishLaunching:(id)arg1 {
    center = [MRYIPCCenter centerNamed:@"RealFileInfo/IPC"];
    [center addTarget:self action:@selector(RFIGetTypeFromPath:)];
    %orig(arg1);
}

%new
-(NSString*)RFIGetTypeFromPath:(NSString*)path {
    dispatch_once(&once, ^{
        wand = magic_open(MAGIC_NONE);
        magic_load(wand, MAGDIR);
    });
    
    NSLog(@"Docitem ;pad");

    NSString* ret = [NSString stringWithCString:magic_file(wand, [path UTF8String]) encoding:NSUTF8StringEncoding];

    if ([ret hasPrefix:@"cannot open "] && [ret hasSuffix:@")"]) {
        return nil;
    }

    NSLog(@"Docitem %@", ret);

    return ret;
}

%end