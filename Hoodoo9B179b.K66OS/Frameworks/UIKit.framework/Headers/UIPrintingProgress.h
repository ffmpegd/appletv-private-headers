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
- (id)initWithPrinterName:(id)printerName cancelHandler:(id)handler;	// 0x33225cf5
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x332263dd
- (void)alertViewCancel:(id)cancel;	// 0x332263cd
- (void)dealloc;	// 0x33225d69
- (void)didPresentAlertView:(id)view;	// 0x33226395
- (void)endProgress;	// 0x332263f9
- (void)hideProgressAnimated:(BOOL)animated;	// 0x33226241
- (double)nextPrintDelay;	// 0x33226775
- (void)progressCancel;	// 0x33226321
- (BOOL)progressVisible;	// 0x33225e09
- (void)setPage:(int)page ofPage:(int)page2;	// 0x332265a9
- (void)setPrintInfoState:(int)state;	// 0x33226511
- (void)showProgress:(id)progress immediately:(BOOL)immediately;	// 0x33225ea1
@end
