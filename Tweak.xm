#import <UIKit/UIKit.h>
#import <DOCItemInfoViewController.h>
#import <MRYIPCCenter.h>

%hook DOCItemInfoViewController

// kindAndSizeView and valueLabel are the only things here that actually matter. I could just nest
// MSHookIvar, but I still have some sanity left

-(void)viewWillAppear:(BOOL)animated {
	id contentViewController = nil;
	id metadataViewController = nil;

	FPItem* item = nil;
	UILabel* kindAndSizeLabel = nil;
	UILabel* valueLabel = nil;

	
	contentViewController = [self contentViewController];
	kindAndSizeLabel = MSHookIvar<id>(contentViewController, "$__lazy_storage_$_kindAndSizeView");
	metadataViewController = MSHookIvar<id>(contentViewController, "$__lazy_storage_$_metadataView");
	item = [self item];

	// This array has custom objects inside that have UILabel ivars, which contain the actual text
	// in the 'Info' panel.
	NSArray* metadataViewControllerEntries = MSHookIvar<id>(metadataViewController, "metadataEntries");

	for (id entry : metadataViewControllerEntries) {
		UILabel* key = MSHookIvar<UILabel*>(entry, "$__lazy_storage_$_label");
		if ([key.text isEqualToString:@"Kind"]) {
			valueLabel = MSHookIvar<UILabel*>(entry, "$__lazy_storage_$_value");
		}

		break;
	}

    valueLabel.text = @"Loading";
	realFileInfo(kindAndSizeLabel, valueLabel, item);

	%orig(animated);
}

%end