/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPrintPanelTableViewController, PKPrinter, UIWindow, UIPrintInteractionController, UIPopoverController, NSArray, UIPrintPaper, UIViewController, UINavigationController;

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
	BOOL _parentHasNoPopover;	// 35 = 0x23
}
@property(assign, nonatomic) int copies;	// G=0x35664165; S=0x3566420d; 
@property(assign, nonatomic) BOOL duplex;	// G=0x35664095; S=0x356640d5; 
@property(readonly, assign, nonatomic) int pageCount;	// G=0x3566419d; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x356641bd; S=0x356641ed; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x3566435d; S=0x3566437d; 
@property(readonly, assign, nonatomic) NSArray *paperList;	// G=0x35664249; 
@property(retain, nonatomic) PKPrinter *printer;	// G=0x356644ad; S=0x35663e3d; @synthesize=_printer
@property(readonly, assign, nonatomic) BOOL showDuplex;	// G=0x3566439d; 
@property(readonly, assign, nonatomic) BOOL showPageRange;	// G=0x35664409; 
@property(readonly, assign, nonatomic) BOOL showPaper;	// G=0x3566442d; 
- (id)initWithPrintInterationController:(id)printInterationController inParentController:(id)parentController;	// 0x35662a49
- (void)_keyWindowWillRotate:(id)_keyWindow;	// 0x35663211
- (void)_presentInParentAnimated:(BOOL)parentAnimated;	// 0x35662e55
- (void)_presentWindow;	// 0x35662f65
- (void)cancelPrinting;	// 0x35663c49
- (void)controllerDidDisappear;	// 0x35663c5d
// declared property getter: - (int)copies;	// 0x35664165
- (void)dealloc;	// 0x35662d41
- (void)dismissAnimated:(BOOL)animated;	// 0x35663a65
- (void)dismissPrintPanel:(BOOL)panel animated:(BOOL)animated;	// 0x356636a5
// declared property getter: - (BOOL)duplex;	// 0x35664095
// declared property getter: - (int)pageCount;	// 0x3566419d
// declared property getter: - (NSRange)pageRange;	// 0x356641bd
// declared property getter: - (id)paper;	// 0x3566435d
// declared property getter: - (id)paperList;	// 0x35664249
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x35663bc5
- (void)presentPrintPanelAnimated:(BOOL)animated;	// 0x356632a5
- (void)presentPrintPanelFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x356635a1
- (void)presentPrintPanelFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x35663479
// declared property getter: - (id)printer;	// 0x356644ad
// declared property setter: - (void)setCopies:(int)copies;	// 0x3566420d
// declared property setter: - (void)setDuplex:(BOOL)duplex;	// 0x356640d5
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x356641ed
// declared property setter: - (void)setPaper:(id)paper;	// 0x3566437d
// declared property setter: - (void)setPrinter:(id)printer;	// 0x35663e3d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x35663a79
// declared property getter: - (BOOL)showDuplex;	// 0x3566439d
// declared property getter: - (BOOL)showPageRange;	// 0x35664409
// declared property getter: - (BOOL)showPaper;	// 0x3566442d
- (void)startPrinting;	// 0x35663bd9
@end

