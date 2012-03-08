/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIAlertView, UIPrintingProgressViewController, NSString;

__attribute__((visibility("hidden")))
@interface UIPrintingProgress : NSObject {
@private
	NSString *_printerName;	// 4 = 0x4
	id _cancelHandler;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _displayTime;	// 20 = 0x14
	int _printInfoState;	// 28 = 0x1c
	UIAlertView *_alert;	// 32 = 0x20
	UIPrintingProgressViewController *_viewController;	// 36 = 0x24
	BOOL _donePrinting;	// 40 = 0x28
}
- (id)initWithPrinterName:(id)printerName cancelHandler:(id)handler;	// 0x359d9a05
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x359da0ed
- (void)alertViewCancel:(id)cancel;	// 0x359da0dd
- (void)dealloc;	// 0x359d9a79
- (void)didPresentAlertView:(id)view;	// 0x359da0a5
- (void)endProgress;	// 0x359da109
- (void)hideProgressAnimated:(BOOL)animated;	// 0x359d9f51
- (double)nextPrintDelay;	// 0x359da485
- (void)progressCancel;	// 0x359da031
- (BOOL)progressVisible;	// 0x359d9b19
- (void)setPage:(int)page ofPage:(int)page2;	// 0x359da2b9
- (void)setPrintInfoState:(int)state;	// 0x359da221
- (void)showProgress:(id)progress immediately:(BOOL)immediately;	// 0x359d9bb1
@end
