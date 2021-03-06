/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, UIBarButtonItem, UIImageView, UINavigationBar, NSArray, NSMutableDictionary, UIView;

@interface UINavigationItem : NSObject <NSCoding> {
	NSString *_title;	// 4 = 0x4
	NSString *_backButtonTitle;	// 8 = 0x8
	UIBarButtonItem *_backBarButtonItem;	// 12 = 0xc
	NSString *_prompt;	// 16 = 0x10
	int _tag;	// 20 = 0x14
	id _context;	// 24 = 0x18
	UINavigationBar *_navigationBar;	// 28 = 0x1c
	UIView *_defaultTitleView;	// 32 = 0x20
	UIView *_titleView;	// 36 = 0x24
	UIView *_backButtonView;	// 40 = 0x28
	NSArray *_leftBarButtonItems;	// 44 = 0x2c
	NSArray *_rightBarButtonItems;	// 48 = 0x30
	NSArray *_customLeftViews;	// 52 = 0x34
	NSArray *_customRightViews;	// 56 = 0x38
	BOOL _hidesBackButton;	// 60 = 0x3c
	BOOL _leftItemsSupplementBackButton;	// 61 = 0x3d
	UIImageView *_frozenTitleView;	// 64 = 0x40
	BOOL _barStyleIndependent;	// 68 = 0x44
	int _independentBarStyle;	// 72 = 0x48
	NSArray *_leftItemSpaceList;	// 76 = 0x4c
	NSArray *_rightItemSpaceList;	// 80 = 0x50
	unsigned _leftFlexibleSpaceCount;	// 84 = 0x54
	unsigned _rightFlexibleSpaceCount;	// 88 = 0x58
	NSMutableDictionary *_backgroundImages;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) NSMutableDictionary *_backgroundImages;	// G=0x346b411d; @synthesize
@property(assign, nonatomic, getter=_isBarStyleIndependent, setter=_setBarStyleIndependent:) BOOL _barStyleIndependent;	// G=0x34567745; S=0x3459db45; @synthesize
@property(retain) id _customLeftView;	// G=0x3455fd25; S=0x3455fc05; converted property
@property(retain) id _customLeftViews;	// G=0x3455fd39; S=0x3472dcbd; converted property
@property(retain) id _customRightView;	// G=0x345b2549; S=0x345b2525; converted property
@property(retain) id _customRightViews;	// G=0x345661c5; S=0x3472dccd; converted property
@property(assign, nonatomic, setter=_setIndependentBarStyle:) int _independentBarStyle;	// G=0x345a236d; S=0x3459db19; @synthesize
@property(retain) id _leftBarButtonItem;	// G=0x3455f8fd; S=0x3455f945; converted property
@property(retain) id _leftBarButtonItems;	// G=0x3472ded5; S=0x3472dcad; converted property
@property(assign, nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned _leftFlexibleSpaceCount;	// G=0x3456a9b5; S=0x345661b5; @synthesize
@property(copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList;	// G=0x3456a8a5; S=0x345661a1; @synthesize
@property(retain) id _rightBarButtonItem;	// G=0x3456c071; S=0x345b241d; converted property
@property(retain) id _rightBarButtonItems;	// G=0x3472dec5; S=0x3472dc9d; converted property
@property(assign, nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned _rightFlexibleSpaceCount;	// G=0x3456a9c5; S=0x345b29fd; @synthesize
@property(copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList;	// G=0x3456a9a1; S=0x345b29ed; @synthesize
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem;	// G=0x345adca5; S=0x3472d915; 
@property(retain) NSString *backButtonTitle;	// G=0x345adcb9; S=0x345a5cb9; converted property
@property(readonly, retain) UIView *backButtonView;	// G=0x345a5e35; converted property
@property(retain) id context;	// G=0x3472dbcd; S=0x3472db89; converted property
@property(retain) id customLeftItem;	// G=0x3472e001; S=0x345c0f61; converted property
@property(retain) id customLeftView;	// G=0x3472dd95; S=0x346b3e85; converted property
@property(retain) id customRightItem;	// G=0x3472e031; S=0x3472e021; converted property
@property(retain) id customRightView;	// G=0x34606419; S=0x3472de89; converted property
@property(retain) id customTitleView;	// G=0x3472dff1; S=0x3472dfe1; converted property
@property(retain) id font;	// G=0x3472db21; S=0x3472dadd; converted property
@property(assign, nonatomic) BOOL hidesBackButton;	// G=0x34567ba9; S=0x345fc641; 
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;	// G=0x34602651; S=0x345b1f69; 
@property(copy, nonatomic) NSArray *leftBarButtonItems;	// G=0x34567b31; S=0x3472de9d; 
@property(assign, nonatomic) BOOL leftItemsSupplementBackButton;	// G=0x34567bbd; S=0x3472dfa5; 
@property(retain) UINavigationBar *navigationBar;	// G=0x3455fea5; S=0x345a21b5; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x345a28f5; S=0x345d311d; 
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;	// G=0x345c0f75; S=0x345b2405; 
@property(copy, nonatomic) NSArray *rightBarButtonItems;	// G=0x34567b6d; S=0x3472deb1; 
@property(assign) int tag;	// G=0x3472db79; S=0x3472db69; converted property
@property(copy, nonatomic) NSString *title;	// G=0x3456a371; S=0x345a5b29; 
@property(retain, nonatomic) UIView *titleView;	// G=0x3456a3a9; S=0x345a6219; @synthesize=_titleView
@property(assign) float width;	// G=0x3472dad5; S=0x3472dad9; converted property
+ (id)defaultFont;	// 0x3472d2cd
- (id)initWithCoder:(id)coder;	// 0x3472d2f5
- (id)initWithTitle:(id)title;	// 0x3459dac1
- (BOOL)_accumulateViewsFromItems:(id)items isLeft:(BOOL)left refreshViews:(BOOL)views;	// 0x3455ff41
- (id)_automationID;	// 0x3472e051
// declared property getter: - (id)_backgroundImages;	// 0x346b411d
- (void)_cleanupFrozenTitleView;	// 0x3472d8c5
// converted property getter: - (id)_customLeftView;	// 0x3455fd25
- (id)_customLeftViewCreating:(BOOL)creating;	// 0x3472dd4d
// converted property getter: - (id)_customLeftViews;	// 0x3455fd39
- (id)_customLeftViewsCreating:(BOOL)creating;	// 0x3472dcdd
// converted property getter: - (id)_customRightView;	// 0x345b2549
- (id)_customRightViewCreating:(BOOL)creating;	// 0x3472de41
// converted property getter: - (id)_customRightViews;	// 0x345661c5
- (id)_customRightViewsCreating:(BOOL)creating;	// 0x3472ddd1
- (void)_freezeCurrentTitleView;	// 0x3472d75d
- (id)_independentBackgroundImageForBarMetrics:(int)barMetrics;	// 0x345a27e5
// declared property getter: - (int)_independentBarStyle;	// 0x345a236d
- (id)_independentShadowImage;	// 0x346b73d1
// declared property getter: - (BOOL)_isBarStyleIndependent;	// 0x34567745
// converted property getter: - (id)_leftBarButtonItem;	// 0x3455f8fd
// converted property getter: - (id)_leftBarButtonItems;	// 0x3472ded5
// declared property getter: - (unsigned)_leftFlexibleSpaceCount;	// 0x3456a9b5
// declared property getter: - (id)_leftItemSpaceList;	// 0x3456a8a5
- (void)_removeBackButtonView;	// 0x345ca7bd
- (void)_removeTitleAndButtonViews;	// 0x345ca755
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned)index withView:(id)view left:(BOOL)left;	// 0x3472dbe1
// converted property getter: - (id)_rightBarButtonItem;	// 0x3456c071
// converted property getter: - (id)_rightBarButtonItems;	// 0x3472dec5
// declared property getter: - (unsigned)_rightFlexibleSpaceCount;	// 0x3456a9c5
// declared property getter: - (id)_rightItemSpaceList;	// 0x3456a9a1
- (void)_setBackButtonPressed:(BOOL)pressed;	// 0x3472d2a1
- (void)_setBackButtonTitle:(id)title lineBreakMode:(int)mode;	// 0x345a5ccd
// declared property setter: - (void)_setBarStyleIndependent:(BOOL)independent;	// 0x3459db45
- (void)_setCustomLeftRightView:(id)view left:(BOOL)left;	// 0x3455fc31
- (void)_setCustomLeftView:(id)view;	// 0x3455fc19
- (void)_setCustomLeftViews:(id)views;	// 0x3455fd4d
- (void)_setCustomRightView:(id)view;	// 0x345b2535
- (void)_setCustomRightViews:(id)views;	// 0x345b2969
- (void)_setIndependentBackgroundImage:(id)image shadowImage:(id)image2 forBarMetrics:(int)barMetrics;	// 0x346b3edd
// declared property setter: - (void)_setIndependentBarStyle:(int)style;	// 0x3459db19
- (void)_setLeftBarButtonItem:(id)item;	// 0x3455f959
- (void)_setLeftBarButtonItems:(id)items;	// 0x3460c94d
// declared property setter: - (void)_setLeftFlexibleSpaceCount:(unsigned)count;	// 0x345661b5
// declared property setter: - (void)_setLeftItemSpaceList:(id)list;	// 0x345661a1
- (void)_setRightBarButtonItem:(id)item;	// 0x345b242d
- (void)_setRightBarButtonItems:(id)items;	// 0x3460c9dd
// declared property setter: - (void)_setRightFlexibleSpaceCount:(unsigned)count;	// 0x345b29fd
// declared property setter: - (void)_setRightItemSpaceList:(id)list;	// 0x345b29ed
- (void)_setTitle:(id)title animated:(BOOL)animated;	// 0x3469b9c1
- (void)_setTitleAnimationDidStop:(id)_setTitleAnimation finished:(id)finished context:(void *)context;	// 0x3472d901
- (id)_titleView;	// 0x3456be41
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)barSizeChangeAndApply;	// 0x34581ac5
// declared property getter: - (id)backBarButtonItem;	// 0x345adca5
// converted property getter: - (id)backButtonTitle;	// 0x345adcb9
// converted property getter: - (id)backButtonView;	// 0x345a5e35
// converted property getter: - (id)context;	// 0x3472dbcd
- (id)currentBackButtonTitle;	// 0x345adb91
// converted property getter: - (id)customLeftItem;	// 0x3472e001
// converted property getter: - (id)customLeftView;	// 0x3472dd95
// converted property getter: - (id)customRightItem;	// 0x3472e031
// converted property getter: - (id)customRightView;	// 0x34606419
// converted property getter: - (id)customTitleView;	// 0x3472dff1
- (void)dealloc;	// 0x3460c7fd
- (void)encodeWithCoder:(id)coder;	// 0x3472d53d
- (id)existingBackButtonView;	// 0x345d8d9d
// converted property getter: - (id)font;	// 0x3472db21
// declared property getter: - (BOOL)hidesBackButton;	// 0x34567ba9
// declared property getter: - (id)leftBarButtonItem;	// 0x34602651
// declared property getter: - (id)leftBarButtonItems;	// 0x34567b31
// declared property getter: - (BOOL)leftItemsSupplementBackButton;	// 0x34567bbd
// converted property getter: - (id)navigationBar;	// 0x3455fea5
// declared property getter: - (id)prompt;	// 0x345a28f5
// declared property getter: - (id)rightBarButtonItem;	// 0x345c0f75
// declared property getter: - (id)rightBarButtonItems;	// 0x34567b6d
// declared property setter: - (void)setBackBarButtonItem:(id)item;	// 0x3472d915
// converted property setter: - (void)setBackButtonTitle:(id)title;	// 0x345a5cb9
// converted property setter: - (void)setContext:(id)context;	// 0x3472db89
// converted property setter: - (void)setCustomLeftItem:(id)item;	// 0x345c0f61
- (void)setCustomLeftItem:(id)item animated:(BOOL)animated;	// 0x3472e011
// converted property setter: - (void)setCustomLeftView:(id)view;	// 0x346b3e85
- (void)setCustomLeftView:(id)view animated:(BOOL)animated;	// 0x346b3e99
// converted property setter: - (void)setCustomRightItem:(id)item;	// 0x3472e021
- (void)setCustomRightItem:(id)item animated:(BOOL)animated;	// 0x3472e041
// converted property setter: - (void)setCustomRightView:(id)view;	// 0x3472de89
- (void)setCustomRightView:(id)view animated:(BOOL)animated;	// 0x346b416d
// converted property setter: - (void)setCustomTitleView:(id)view;	// 0x3472dfe1
// converted property setter: - (void)setFont:(id)font;	// 0x3472dadd
// declared property setter: - (void)setHidesBackButton:(BOOL)button;	// 0x345fc641
- (void)setHidesBackButton:(BOOL)button animated:(BOOL)animated;	// 0x345fc655
// declared property setter: - (void)setLeftBarButtonItem:(id)item;	// 0x345b1f69
- (void)setLeftBarButtonItem:(id)item animated:(BOOL)animated;	// 0x3455f61d
// declared property setter: - (void)setLeftBarButtonItems:(id)items;	// 0x3472de9d
- (void)setLeftBarButtonItems:(id)items animated:(BOOL)animated;	// 0x3472df45
// declared property setter: - (void)setLeftItemsSupplementBackButton:(BOOL)button;	// 0x3472dfa5
// converted property setter: - (void)setNavigationBar:(id)bar;	// 0x345a21b5
- (void)setObject:(id)object forLeftRightKeyPath:(id)leftRightKeyPath animated:(BOOL)animated;	// 0x3455f6f5
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x345d311d
// declared property setter: - (void)setRightBarButtonItem:(id)item;	// 0x345b2405
- (void)setRightBarButtonItem:(id)item animated:(BOOL)animated;	// 0x3456bfc1
// declared property setter: - (void)setRightBarButtonItems:(id)items;	// 0x3472deb1
- (void)setRightBarButtonItems:(id)items animated:(BOOL)animated;	// 0x3472dee5
// converted property setter: - (void)setTag:(int)tag;	// 0x3472db69
// declared property setter: - (void)setTitle:(id)title;	// 0x345a5b29
// declared property setter: - (void)setTitleView:(id)view;	// 0x345a6219
// converted property setter: - (void)setWidth:(float)width;	// 0x3472dad9
// converted property setter: - (void)set_customLeftView:(id)view;	// 0x3455fc05
// converted property setter: - (void)set_customLeftViews:(id)views;	// 0x3472dcbd
// converted property setter: - (void)set_customRightView:(id)view;	// 0x345b2525
// converted property setter: - (void)set_customRightViews:(id)views;	// 0x3472dccd
// converted property setter: - (void)set_leftBarButtonItem:(id)item;	// 0x3455f945
// converted property setter: - (void)set_leftBarButtonItems:(id)items;	// 0x3472dcad
// converted property setter: - (void)set_rightBarButtonItem:(id)item;	// 0x345b241d
// converted property setter: - (void)set_rightBarButtonItems:(id)items;	// 0x3472dc9d
// converted property getter: - (int)tag;	// 0x3472db79
// declared property getter: - (id)title;	// 0x3456a371
// declared property getter: - (id)titleView;	// 0x3456a3a9
- (void)updateNavigationBarButtonsAnimated:(BOOL)animated;	// 0x3455fdd1
// converted property getter: - (float)width;	// 0x3472dad5
@end

