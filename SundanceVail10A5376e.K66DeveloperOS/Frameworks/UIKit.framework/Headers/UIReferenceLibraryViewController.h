/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIWebView, _UIDictionaryDownloadViewController, UIWindow, UIView, NSString;

@interface UIReferenceLibraryViewController : UIViewController {
	int _oldPopoverStyle;	// 196 = 0xc4
	unsigned _definitionLanguageDirection;	// 200 = 0xc8
	NSString *_stringToDefine;	// 204 = 0xcc
	UIWebView *_definitionView;	// 208 = 0xd0
	UIView *_definitionContainerView;	// 212 = 0xd4
	UIView *_modalHeaderView;	// 216 = 0xd8
	NSString *_stylesheet;	// 220 = 0xdc
	NSString *_definitionHTML;	// 224 = 0xe0
	id _dismissCompletionHandler;	// 228 = 0xe4
	UIWindow *_rotationDecider;	// 232 = 0xe8
	_UIDictionaryDownloadViewController *_downloadViewController;	// 236 = 0xec
	BOOL _downloadableDictionaryAvailable;	// 240 = 0xf0
}
@property(retain, nonatomic, setter=_setRotationDecider:) UIWindow *_rotationDecider;	// G=0x305b2e65; S=0x305b2e75; @synthesize
@property(readonly, assign, nonatomic) UIView *definitionContainerView;	// G=0x305b2069; @synthesize=_definitionContainerView
@property(retain, nonatomic) NSString *definitionHTML;	// G=0x305b2e21; S=0x305b2e31; @synthesize=_definitionHTML
@property(readonly, assign, nonatomic) UIWebView *definitionView;	// G=0x305b2e01; @synthesize=_definitionView
@property(copy, nonatomic) id dismissCompletionHandler;	// G=0x305b2e41; S=0x305b2e55; @synthesize=_dismissCompletionHandler
@property(retain, nonatomic) _UIDictionaryDownloadViewController *downloadViewController;	// G=0x305b2e85; S=0x305b2e95; @synthesize=_downloadViewController
@property(assign, nonatomic) BOOL downloadableDictionaryAvailable;	// G=0x305b2ea5; S=0x305b2eb5; @synthesize=_downloadableDictionaryAvailable
@property(readonly, assign, nonatomic) UIView *modalHeaderView;	// G=0x305b1a01; @synthesize=_modalHeaderView
@property(readonly, assign, nonatomic) NSString *stringToDefine;	// G=0x305b2df1; @synthesize=_stringToDefine
@property(readonly, assign, nonatomic) NSString *stylesheet;	// G=0x305b2e11; @synthesize=_stylesheet
+ (id)_backgroundColor;	// 0x305b17f9
+ (id)_diddlydoLineColor;	// 0x305b17d1
+ (id)_foregroundColor;	// 0x305b1841
+ (id)_noDefinitionLabel;	// 0x305b1889
+ (id)_popoverControllerForReferenceLibraryWithString:(id)string;	// 0x305b16ed
+ (id)_viewControllerForReferenceWithString:(id)string options:(unsigned)options;	// 0x305b1789
+ (BOOL)dictionaryHasDefinitionForTerm:(id)term;	// 0x305b0fb9
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x305b1021
- (id)initWithTerm:(id)term;	// 0x305b1061
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x305b2d29
- (void)_dismissModalReferenceView:(id)view;	// 0x305b1fe9
- (void)_repositionSubviews;	// 0x305b2875
// declared property getter: - (id)_rotationDecider;	// 0x305b2e65
- (void)_setPopoverController:(id)controller;	// 0x305b2ba5
// declared property setter: - (void)_setRotationDecider:(id)decider;	// 0x305b2e75
- (void)_userChoseToDownload:(id)download;	// 0x305b258d
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x305b2c99
- (void)dealloc;	// 0x305b1639
// declared property getter: - (id)definitionContainerView;	// 0x305b2069
// declared property getter: - (id)definitionHTML;	// 0x305b2e21
// declared property getter: - (id)definitionView;	// 0x305b2e01
// declared property getter: - (id)dismissCompletionHandler;	// 0x305b2e41
- (void)downloadActionsAreComplete:(id)complete;	// 0x305b259d
// declared property getter: - (id)downloadViewController;	// 0x305b2e85
// declared property getter: - (BOOL)downloadableDictionaryAvailable;	// 0x305b2ea5
// declared property getter: - (id)modalHeaderView;	// 0x305b1a01
// declared property setter: - (void)setDefinitionHTML:(id)html;	// 0x305b2e31
// declared property setter: - (void)setDismissCompletionHandler:(id)handler;	// 0x305b2e55
// declared property setter: - (void)setDownloadViewController:(id)controller;	// 0x305b2e95
// declared property setter: - (void)setDownloadableDictionaryAvailable:(BOOL)available;	// 0x305b2eb5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x305b2da5
- (void)showDownloadInterface;	// 0x305b24a9
// declared property getter: - (id)stringToDefine;	// 0x305b2df1
// declared property getter: - (id)stylesheet;	// 0x305b2e11
- (void)viewDidAppear:(BOOL)view;	// 0x305b2be9
- (void)viewDidLayoutSubviews;	// 0x305b2c3d
- (void)viewDidLoad;	// 0x305b2865
- (void)viewWillAppear:(BOOL)view;	// 0x305b2be5
@end
