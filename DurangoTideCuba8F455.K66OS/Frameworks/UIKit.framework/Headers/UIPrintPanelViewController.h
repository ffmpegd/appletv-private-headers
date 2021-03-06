/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class PKPrinter, UIPopoverController, UIPrintPanelTableViewController, UIWindow, UIPrintInteractionController, UIViewController, UINavigationController;

__attribute__((visibility("hidden")))
@interface UIPrintPanelViewController : NSObject {
@private
	UIPrintInteractionController *_printInteractionController;	// 4 = 0x4
	UINavigationController *_navigationController;	// 8 = 0x8
	UIPrintPanelTableViewController *_tableViewController;	// 12 = 0xc
	UIViewController *_parentController;	// 16 = 0x10
	UIPopoverController *_poverController;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	PKPrinter *_printer;	// 28 = 0x1c
	BOOL _dismissed;	// 32 = 0x20
	BOOL _animated;	// 33 = 0x21
	BOOL _observingRotation;	// 34 = 0x22
}
@property(assign, nonatomic) int copies;	// G=0x30199409; S=0x3034b8cd; 
@property(assign, nonatomic) BOOL duplex;	// G=0x3034b9c1; S=0x3034b941; 
@property(readonly, assign, nonatomic) int pageCount;	// G=0x3034b921; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x3034c091; S=0x3034b901; 
@property(retain, nonatomic) PKPrinter *printer;	// G=0x30198115; S=0x3034c2fd; @synthesize=_printer
@property(readonly, assign, nonatomic) BOOL showDuplex;	// G=0x301982c1; 
@property(readonly, assign, nonatomic) BOOL showPageRange;	// G=0x30198259; 
- (id)initWithPrintInterationController:(id)printInterationController inParentController:(id)parentController;	// 0x30197855
- (void)_keyWindowWillRotate:(id)_keyWindow;	// 0x3034be59
- (void)_presentInParentAnimated:(BOOL)parentAnimated;	// 0x3034bfa1
- (void)_presentWindow;	// 0x301985a9
- (void)cancelPrinting;	// 0x3019a1a9
- (void)controllerDidDisappear;	// 0x3034b9f5
// declared property getter: - (int)copies;	// 0x30199409
- (void)dealloc;	// 0x3019aa09
- (void)dismissAnimated:(BOOL)animated;	// 0x3034bc15
- (void)dismissPrintPanel:(BOOL)panel animated:(BOOL)animated;	// 0x3019a1c1
// declared property getter: - (BOOL)duplex;	// 0x3034b9c1
// declared property getter: - (int)pageCount;	// 0x3034b921
// declared property getter: - (NSRange)pageRange;	// 0x3034c091
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3034bbfd
- (void)presentPrintPanelAnimated:(BOOL)animated;	// 0x301983e1
- (void)presentPrintPanelFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3034bc2d
- (void)presentPrintPanelFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3034bd31
// declared property getter: - (id)printer;	// 0x30198115
// declared property setter: - (void)setCopies:(int)copies;	// 0x3034b8cd
// declared property setter: - (void)setDuplex:(BOOL)duplex;	// 0x3034b941
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x3034b901
// declared property setter: - (void)setPrinter:(id)printer;	// 0x3034c2fd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3034c1e1
// declared property getter: - (BOOL)showDuplex;	// 0x301982c1
// declared property getter: - (BOOL)showPageRange;	// 0x30198259
- (void)startPrinting;	// 0x3034bb99
@end

