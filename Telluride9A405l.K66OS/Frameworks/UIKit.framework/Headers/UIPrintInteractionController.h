/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, UIPrintPageRenderer, UIPrintInfo, UIPrintPaper, UIPrintFormatter, PKPrinter;
@protocol UIPrintInteractionControllerDelegate;

@interface UIPrintInteractionController : NSObject {
@private
	UIPrintInfo *_printInfo;	// 4 = 0x4
	id<UIPrintInteractionControllerDelegate> _delegate;	// 8 = 0x8
	BOOL _showsPageRange;	// 12 = 0xc
	UIPrintPageRenderer *_printPageRenderer;	// 16 = 0x10
	UIPrintFormatter *_printFormatter;	// 20 = 0x14
	id _printingItem;	// 24 = 0x18
	NSArray *_printingItems;	// 28 = 0x1c
	UIPrintPaper *_printPaper;	// 32 = 0x20
	id _completionHandler;	// 36 = 0x24
	unsigned _backgroundTaskIdentifier;	// 40 = 0x28
	id _printState;	// 44 = 0x2c
}
@property(assign, nonatomic) id<UIPrintInteractionControllerDelegate> delegate;	// G=0x32fd6691; S=0x32fd66a1; @synthesize=_delegate
@property(readonly, assign, nonatomic) int pageCount;	// G=0x32fd36e1; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x32fd3705; S=0x32fd3769; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x32fd3839; S=0x32fd3a4d; 
@property(retain, nonatomic) UIPrintFormatter *printFormatter;	// G=0x32fd6715; S=0x32fd6725; @synthesize=_printFormatter
@property(retain, nonatomic) UIPrintInfo *printInfo;	// G=0x32fd665d; S=0x32fd666d; @synthesize=_printInfo
@property(retain, nonatomic) UIPrintPageRenderer *printPageRenderer;	// G=0x32fd66e1; S=0x32fd66f1; @synthesize=_printPageRenderer
@property(readonly, assign, nonatomic) UIPrintPaper *printPaper;	// G=0x32fd66d1; @synthesize=_printPaper
@property(retain, nonatomic) PKPrinter *printer;	// G=0x32fd378d; S=0x32fd37b1; 
@property(copy, nonatomic) id printingItem;	// G=0x32fd6749; S=0x32fd3031; @synthesize=_printingItem
@property(copy, nonatomic) NSArray *printingItems;	// G=0x32fd6759; S=0x32fd6769; @synthesize=_printingItems
@property(assign, nonatomic) BOOL showsPageRange;	// G=0x32fd66b1; S=0x32fd66c1; @synthesize=_showsPageRange
+ (BOOL)canPrintData:(id)data;	// 0x32fd2e61
+ (BOOL)canPrintURL:(id)url;	// 0x32fd2c91
+ (BOOL)isPrintingAvailable;	// 0x32fd2bcd
+ (id)printableUTIs;	// 0x32fd2c01
+ (id)sharedPrintController;	// 0x32fd2e79
- (id)init;	// 0x32fd2efd
- (BOOL)_canShowDuplex;	// 0x32fd35f1
- (BOOL)_canShowPageRange;	// 0x32fd3635
- (BOOL)_canShowPaperList;	// 0x32fd36a1
- (void)_cleanPrintState;	// 0x32fd34dd
- (id)_currentPrintInfo;	// 0x32fd35cd
- (void)_endPrintJob:(BOOL)job error:(id)error;	// 0x32fd6495
- (id)_init;	// 0x32fd2f4d
- (id)_paperForContentType:(int)contentType;	// 0x32fd4931
- (id)_paperForPDFItem:(id)pdfitem withDuplexMode:(int)duplexMode;	// 0x32fd4735
- (void)_preparePrintInfo;	// 0x32fd45f9
- (id)_printItem:(id)item;	// 0x32fd5745
- (void)_printPage;	// 0x32fd555d
- (id)_printPageRenderer:(id)renderer;	// 0x32fd6335
- (void)_printPanelDidDismiss;	// 0x32fd44b1
- (void)_printPanelDidPresent;	// 0x32fd4255
- (void)_printPanelWillDismiss:(BOOL)_printPanel;	// 0x32fd429d
- (void)_setPrintInfoState:(int)state;	// 0x32fd4339
- (BOOL)_setupPrintPanel:(id)panel;	// 0x32fd3fe1
- (void)_startPrinting;	// 0x32fd5069
- (void)_updatePageCount;	// 0x32fd3ab1
- (void)_updatePrintPaper;	// 0x32fd4a6d
- (void)dealloc;	// 0x32fd2f99
// declared property getter: - (id)delegate;	// 0x32fd6691
- (void)dismissAnimated:(BOOL)animated;	// 0x32fd3485
// declared property getter: - (int)pageCount;	// 0x32fd36e1
// declared property getter: - (NSRange)pageRange;	// 0x32fd3705
// declared property getter: - (id)paper;	// 0x32fd3839
- (BOOL)presentAnimated:(BOOL)animated completionHandler:(id)handler;	// 0x32fd30ad
- (BOOL)presentFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated completionHandler:(id)handler;	// 0x32fd3365
- (BOOL)presentFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated completionHandler:(id)handler;	// 0x32fd3229
// declared property getter: - (id)printFormatter;	// 0x32fd6715
// declared property getter: - (id)printInfo;	// 0x32fd665d
// declared property getter: - (id)printPageRenderer;	// 0x32fd66e1
// declared property getter: - (id)printPaper;	// 0x32fd66d1
// declared property getter: - (id)printer;	// 0x32fd378d
// declared property getter: - (id)printingItem;	// 0x32fd6749
// declared property getter: - (id)printingItems;	// 0x32fd6759
- (oneway void)release;	// 0x32fd2ec1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32fd66a1
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x32fd3769
// declared property setter: - (void)setPaper:(id)paper;	// 0x32fd3a4d
// declared property setter: - (void)setPrintFormatter:(id)formatter;	// 0x32fd6725
// declared property setter: - (void)setPrintInfo:(id)info;	// 0x32fd666d
// declared property setter: - (void)setPrintPageRenderer:(id)renderer;	// 0x32fd66f1
// declared property setter: - (void)setPrinter:(id)printer;	// 0x32fd37b1
// declared property setter: - (void)setPrintingItem:(id)item;	// 0x32fd3031
// declared property setter: - (void)setPrintingItems:(id)items;	// 0x32fd6769
// declared property setter: - (void)setShowsPageRange:(BOOL)range;	// 0x32fd66c1
// declared property getter: - (BOOL)showsPageRange;	// 0x32fd66b1
@end

