/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class NSArray, UIActivity, NSOperationQueue, UIActivityListViewController, NSString;

@interface UIActivityViewController : UIViewController {
	unsigned _backgroundTaskIdentifier;	// 196 = 0xc4
	int _completedProviderCount;	// 200 = 0xc8
	BOOL _useBlackPopoverStyle;	// 204 = 0xcc
	UIActivity *_activity;	// 208 = 0xd0
	Class _originalPopoverBackgroundViewClass;	// 212 = 0xd4
	int _originalPopoverBackgroundStyle;	// 216 = 0xd8
	NSArray *_activityItems;	// 220 = 0xdc
	id _completionHandler;	// 224 = 0xe0
	NSArray *_applicationActivities;	// 228 = 0xe4
	NSString *_subject;	// 232 = 0xe8
	NSArray *_excludedActivityTypes;	// 236 = 0xec
	UIActivityListViewController *_activityListViewController;	// 240 = 0xf0
	int _totalProviderCount;	// 244 = 0xf4
	NSOperationQueue *_activityItemProviderOperationQueue;	// 248 = 0xf8
}
@property(retain, nonatomic) UIActivity *activity;	// G=0x30a53005; S=0x30a4723d; @synthesize=_activity
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue;	// G=0x30cfe181; S=0x30a473dd; @synthesize=_activityItemProviderOperationQueue
@property(copy, nonatomic) NSArray *activityItems;	// G=0x30cfe0dd; S=0x30a40469; @synthesize=_activityItems
@property(retain, nonatomic) UIActivityListViewController *activityListViewController;	// G=0x30cfe151; S=0x30a533a1; @synthesize=_activityListViewController
@property(copy, nonatomic) NSArray *applicationActivities;	// G=0x30cfe105; S=0x30a40479; @synthesize=_applicationActivities
@property(assign, nonatomic) unsigned backgroundTaskIdentifier;	// G=0x30cfe04d; S=0x30a4048d; @synthesize=_backgroundTaskIdentifier
@property(assign, nonatomic) int completedProviderCount;	// G=0x30cfe05d; S=0x30cfe06d; @synthesize=_completedProviderCount
@property(copy, nonatomic) id completionHandler;	// G=0x30cfe0f1; S=0x30a4049d; @synthesize=_completionHandler
@property(copy, nonatomic) NSArray *excludedActivityTypes;	// G=0x30a418e5; S=0x30cfe141; @synthesize=_excludedActivityTypes
@property(assign, nonatomic) int originalPopoverBackgroundStyle;	// G=0x30cfe0bd; S=0x30cfe0cd; @synthesize=_originalPopoverBackgroundStyle
@property(assign, nonatomic) Class originalPopoverBackgroundViewClass;	// G=0x30cfe09d; S=0x30cfe0ad; @synthesize=_originalPopoverBackgroundViewClass
@property(copy, nonatomic) NSString *subject;	// G=0x30cfe119; S=0x30cfe12d; @synthesize=_subject
@property(assign, nonatomic) int totalProviderCount;	// G=0x30cfe161; S=0x30cfe171; @synthesize=_totalProviderCount
@property(assign, nonatomic) BOOL useBlackPopoverStyle;	// G=0x30cfe07d; S=0x30cfe08d; @synthesize=_useBlackPopoverStyle
+ (id)_builtinActivities;	// 0x30a41821
+ (BOOL)_hasSystemActivityForActivityItems:(id)activityItems;	// 0x30cfd451
- (id)initWithActivityItems:(id)activityItems applicationActivities:(id)activities;	// 0x30a4036d
- (id)_activityItemValues;	// 0x30a40cd1
- (id)_availableActivities;	// 0x30a405e1
- (void)_cancel;	// 0x30cfdfb1
- (void)_cleanupActivityWithSuccess:(BOOL)success;	// 0x30a52995
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x30cfdf21
- (void)_executeActivity;	// 0x30a47451
- (void)_hideView;	// 0x30a52531
- (void)_performActivity:(id)activity;	// 0x30a46ecd
- (void)_prepareActivity:(id)activity;	// 0x30a489b9
- (void)_reloadImageForActivity:(id)activity;	// 0x30cfdd69
- (void)_setPopoverController:(id)controller;	// 0x30cfddd9
- (BOOL)_shouldShowSystemActivity:(id)activity;	// 0x30cfd685
- (id)_titleForActivity:(id)activity;	// 0x30a42745
// declared property getter: - (id)activity;	// 0x30a53005
// declared property getter: - (id)activityItemProviderOperationQueue;	// 0x30cfe181
// declared property getter: - (id)activityItems;	// 0x30cfe0dd
// declared property getter: - (id)activityListViewController;	// 0x30cfe151
// declared property getter: - (id)applicationActivities;	// 0x30cfe105
// declared property getter: - (unsigned)backgroundTaskIdentifier;	// 0x30cfe04d
// declared property getter: - (int)completedProviderCount;	// 0x30cfe05d
// declared property getter: - (id)completionHandler;	// 0x30cfe0f1
- (CGSize)contentSizeForViewInPopover;	// 0x30cfd701
- (void)dealloc;	// 0x30a531e5
// declared property getter: - (id)excludedActivityTypes;	// 0x30a418e5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30a47309
// declared property getter: - (int)originalPopoverBackgroundStyle;	// 0x30cfe0bd
// declared property getter: - (Class)originalPopoverBackgroundViewClass;	// 0x30cfe09d
// declared property setter: - (void)setActivity:(id)activity;	// 0x30a4723d
// declared property setter: - (void)setActivityItemProviderOperationQueue:(id)queue;	// 0x30a473dd
// declared property setter: - (void)setActivityItems:(id)items;	// 0x30a40469
// declared property setter: - (void)setActivityListViewController:(id)controller;	// 0x30a533a1
// declared property setter: - (void)setApplicationActivities:(id)activities;	// 0x30a40479
// declared property setter: - (void)setBackgroundTaskIdentifier:(unsigned)identifier;	// 0x30a4048d
// declared property setter: - (void)setCompletedProviderCount:(int)count;	// 0x30cfe06d
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x30a4049d
// declared property setter: - (void)setExcludedActivityTypes:(id)types;	// 0x30cfe141
// declared property setter: - (void)setOriginalPopoverBackgroundStyle:(int)style;	// 0x30cfe0cd
// declared property setter: - (void)setOriginalPopoverBackgroundViewClass:(Class)aClass;	// 0x30cfe0ad
// declared property setter: - (void)setSubject:(id)subject;	// 0x30cfe12d
// declared property setter: - (void)setTotalProviderCount:(int)count;	// 0x30cfe171
// declared property setter: - (void)setUseBlackPopoverStyle:(BOOL)style;	// 0x30cfe08d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30cfd6b9
// declared property getter: - (id)subject;	// 0x30cfe119
- (unsigned)supportedInterfaceOrientations;	// 0x30cfd68d
// declared property getter: - (int)totalProviderCount;	// 0x30cfe161
// declared property getter: - (BOOL)useBlackPopoverStyle;	// 0x30cfe07d
- (void)viewDidAppear:(BOOL)view;	// 0x30a46c7d
- (void)viewDidLoad;	// 0x30a404b1
- (void)viewWillAppear:(BOOL)view;	// 0x30a45d41
- (void)viewWillDisappear:(BOOL)view;	// 0x30a52d09
@end
