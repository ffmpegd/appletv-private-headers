/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, UINavigationBar, UIView, UIImageView, UIBarButtonItem, NSArray;

@interface UINavigationItem : NSObject <NSCoding> {
@private
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
}
@property(assign, nonatomic, getter=_isBarStyleIndependent, setter=_setBarStyleIndependent:) BOOL _barStyleIndependent;	// G=0x350f48b5; S=0x3527df99; @synthesize
@property(retain) id _customLeftView;	// G=0x35108e1d; S=0x35108cf5; converted property
@property(retain) id _customLeftViews;	// G=0x350f4e1d; S=0x3527dd39; converted property
@property(retain) id _customRightView;	// G=0x3510ce91; S=0x3510cd69; converted property
@property(retain) id _customRightViews;	// G=0x350f4e79; S=0x3527dd49; converted property
@property(assign, nonatomic, setter=_setIndependentBarStyle:) int _independentBarStyle;	// G=0x3527dfa9; S=0x3527df6d; @synthesize
@property(retain) id _leftBarButtonItem;	// G=0x35108acd; S=0x35108b15; converted property
@property(retain) id _leftBarButtonItems;	// G=0x3527ddc9; S=0x3527dd29; converted property
@property(assign, nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned _leftFlexibleSpaceCount;	// G=0x350f636d; S=0x3510c91d; @synthesize
@property(copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList;	// G=0x350f634d; S=0x3510c8f9; @synthesize
@property(retain) id _rightBarButtonItem;	// G=0x350e2e95; S=0x3510cc61; converted property
@property(retain) id _rightBarButtonItems;	// G=0x3527ddb9; S=0x3527dd19; converted property
@property(assign, nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned _rightFlexibleSpaceCount;	// G=0x350f637d; S=0x3510dcd1; @synthesize
@property(copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList;	// G=0x350f635d; S=0x3510dcad; @synthesize
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem;	// G=0x3512becd; S=0x3527da61; 
@property(retain) NSString *backButtonTitle;	// G=0x3512bedd; S=0x350e0d15; converted property
@property(readonly, retain) UIView *backButtonView;	// G=0x3510dd81; converted property
@property(retain) id context;	// G=0x352617b5; S=0x35261771; converted property
@property(retain) id customLeftItem;	// G=0x3527df05; S=0x351089ed; converted property
@property(retain) id customLeftView;	// G=0x3527dd59; S=0x3521d691; converted property
@property(retain) id customRightItem;	// G=0x3527df25; S=0x351facf1; converted property
@property(retain) id customRightView;	// G=0x351697c1; S=0x351697f9; converted property
@property(retain) id customTitleView;	// G=0x3527def5; S=0x3527dee5; converted property
@property(retain) id font;	// G=0x3527dc29; S=0x3527dbe5; converted property
@property(assign, nonatomic) BOOL hidesBackButton;	// G=0x350f62f5; S=0x35163091; 
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;	// G=0x35169789; S=0x351089fd; 
@property(copy, nonatomic) NSArray *leftBarButtonItems;	// G=0x351951a9; S=0x3527dd91; 
@property(assign, nonatomic) BOOL leftItemsSupplementBackButton;	// G=0x350f6305; S=0x3527de99; 
@property(retain) UINavigationBar *navigationBar;	// G=0x350e26e5; S=0x350f4719; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x350f6475; S=0x3514b235; 
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;	// G=0x3510cb85; S=0x350e2bd9; 
@property(copy, nonatomic) NSArray *rightBarButtonItems;	// G=0x351951e1; S=0x3527dda5; 
@property(assign) int tag;	// G=0x3527dc85; S=0x3527dc75; converted property
@property(copy, nonatomic) NSString *title;	// G=0x350f6315; S=0x350e0f1d; 
@property(retain, nonatomic) UIView *titleView;	// G=0x350f4941; S=0x350e0e95; @synthesize=_titleView
@property(assign) float width;	// G=0x3527dbdd; S=0x3527dbe1; converted property
+ (id)defaultFont;	// 0x3527d3d5
- (id)initWithCoder:(id)coder;	// 0x3527d3f9
- (id)initWithTitle:(id)title;	// 0x350f3e2d
- (BOOL)_accumulateViewsFromItems:(id)items isLeft:(BOOL)left refreshViews:(BOOL)views;	// 0x35108e65
- (id)_automationID;	// 0x3527df45
- (void)_cleanupFrozenTitleView;	// 0x3527da11
// converted property getter: - (id)_customLeftView;	// 0x35108e1d
// converted property getter: - (id)_customLeftViews;	// 0x350f4e1d
// converted property getter: - (id)_customRightView;	// 0x3510ce91
// converted property getter: - (id)_customRightViews;	// 0x350f4e79
- (void)_freezeCurrentTitleView;	// 0x3527d89d
// declared property getter: - (int)_independentBarStyle;	// 0x3527dfa9
// declared property getter: - (BOOL)_isBarStyleIndependent;	// 0x350f48b5
// converted property getter: - (id)_leftBarButtonItem;	// 0x35108acd
// converted property getter: - (id)_leftBarButtonItems;	// 0x3527ddc9
// declared property getter: - (unsigned)_leftFlexibleSpaceCount;	// 0x350f636d
// declared property getter: - (id)_leftItemSpaceList;	// 0x350f634d
- (void)_removeBackButtonView;	// 0x35146329
- (void)_removeTitleAndButtonViews;	// 0x351462bd
- (void)_replaceCustomLeftViewAtIndex:(unsigned)index withView:(id)view;	// 0x3527dc95
- (void)_replaceCustomRightViewAtIndex:(unsigned)index withView:(id)view;	// 0x352394a5
// converted property getter: - (id)_rightBarButtonItem;	// 0x350e2e95
// converted property getter: - (id)_rightBarButtonItems;	// 0x3527ddb9
// declared property getter: - (unsigned)_rightFlexibleSpaceCount;	// 0x350f637d
// declared property getter: - (id)_rightItemSpaceList;	// 0x350f635d
- (void)_setBackButtonTitle:(id)title lineBreakMode:(int)mode;	// 0x350e0d29
// declared property setter: - (void)_setBarStyleIndependent:(BOOL)independent;	// 0x3527df99
- (void)_setCustomLeftView:(id)view;	// 0x35108d05
- (void)_setCustomLeftViews:(id)views;	// 0x3510c869
- (void)_setCustomRightView:(id)view;	// 0x3510cd79
- (void)_setCustomRightViews:(id)views;	// 0x3510dc1d
// declared property setter: - (void)_setIndependentBarStyle:(int)style;	// 0x3527df6d
- (void)_setLeftBarButtonItem:(id)item;	// 0x35108b25
- (void)_setLeftBarButtonItems:(id)items;	// 0x3516b0fd
// declared property setter: - (void)_setLeftFlexibleSpaceCount:(unsigned)count;	// 0x3510c91d
// declared property setter: - (void)_setLeftItemSpaceList:(id)list;	// 0x3510c8f9
- (void)_setRightBarButtonItem:(id)item;	// 0x3510cc71
- (void)_setRightBarButtonItems:(id)items;	// 0x3516b185
// declared property setter: - (void)_setRightFlexibleSpaceCount:(unsigned)count;	// 0x3510dcd1
// declared property setter: - (void)_setRightItemSpaceList:(id)list;	// 0x3510dcad
- (void)_setTitle:(id)title animated:(BOOL)animated;	// 0x35214d91
- (void)_setTitleAnimationDidStop:(id)_setTitleAnimation finished:(id)finished context:(void *)context;	// 0x3527da51
- (id)_titleView;	// 0x350f48c5
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)barSizeChangeAndApply;	// 0x350f4d11
// declared property getter: - (id)backBarButtonItem;	// 0x3512becd
// converted property getter: - (id)backButtonTitle;	// 0x3512bedd
// converted property getter: - (id)backButtonView;	// 0x3510dd81
// converted property getter: - (id)context;	// 0x352617b5
- (id)currentBackButtonTitle;	// 0x3512bdc5
// converted property getter: - (id)customLeftItem;	// 0x3527df05
// converted property getter: - (id)customLeftView;	// 0x3527dd59
// converted property getter: - (id)customRightItem;	// 0x3527df25
// converted property getter: - (id)customRightView;	// 0x351697c1
// converted property getter: - (id)customTitleView;	// 0x3527def5
- (void)dealloc;	// 0x3516afc1
- (void)encodeWithCoder:(id)coder;	// 0x3527d681
- (id)existingBackButtonView;	// 0x35169f31
// converted property getter: - (id)font;	// 0x3527dc29
// declared property getter: - (BOOL)hidesBackButton;	// 0x350f62f5
// declared property getter: - (id)leftBarButtonItem;	// 0x35169789
// declared property getter: - (id)leftBarButtonItems;	// 0x351951a9
// declared property getter: - (BOOL)leftItemsSupplementBackButton;	// 0x350f6305
// converted property getter: - (id)navigationBar;	// 0x350e26e5
// declared property getter: - (id)prompt;	// 0x350f6475
// declared property getter: - (id)rightBarButtonItem;	// 0x3510cb85
// declared property getter: - (id)rightBarButtonItems;	// 0x351951e1
// declared property setter: - (void)setBackBarButtonItem:(id)item;	// 0x3527da61
// converted property setter: - (void)setBackButtonTitle:(id)title;	// 0x350e0d15
// converted property setter: - (void)setContext:(id)context;	// 0x35261771
// converted property setter: - (void)setCustomLeftItem:(id)item;	// 0x351089ed
- (void)setCustomLeftItem:(id)item animated:(BOOL)animated;	// 0x3527df15
// converted property setter: - (void)setCustomLeftView:(id)view;	// 0x3521d691
- (void)setCustomLeftView:(id)view animated:(BOOL)animated;	// 0x3521d6a5
// converted property setter: - (void)setCustomRightItem:(id)item;	// 0x351facf1
- (void)setCustomRightItem:(id)item animated:(BOOL)animated;	// 0x3527df35
// converted property setter: - (void)setCustomRightView:(id)view;	// 0x351697f9
- (void)setCustomRightView:(id)view animated:(BOOL)animated;	// 0x3516980d
// converted property setter: - (void)setCustomTitleView:(id)view;	// 0x3527dee5
// converted property setter: - (void)setFont:(id)font;	// 0x3527dbe5
// declared property setter: - (void)setHidesBackButton:(BOOL)button;	// 0x35163091
- (void)setHidesBackButton:(BOOL)button animated:(BOOL)animated;	// 0x35152621
// declared property setter: - (void)setLeftBarButtonItem:(id)item;	// 0x351089fd
- (void)setLeftBarButtonItem:(id)item animated:(BOOL)animated;	// 0x35108a11
// declared property setter: - (void)setLeftBarButtonItems:(id)items;	// 0x3527dd91
- (void)setLeftBarButtonItems:(id)items animated:(BOOL)animated;	// 0x3527de39
// declared property setter: - (void)setLeftItemsSupplementBackButton:(BOOL)button;	// 0x3527de99
// converted property setter: - (void)setNavigationBar:(id)bar;	// 0x350f4719
- (void)setObject:(id)object forLeftRightKeyPath:(id)leftRightKeyPath animated:(BOOL)animated;	// 0x350e2c95
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x3514b235
// declared property setter: - (void)setRightBarButtonItem:(id)item;	// 0x350e2bd9
- (void)setRightBarButtonItem:(id)item animated:(BOOL)animated;	// 0x350e2bed
// declared property setter: - (void)setRightBarButtonItems:(id)items;	// 0x3527dda5
- (void)setRightBarButtonItems:(id)items animated:(BOOL)animated;	// 0x3527ddd9
// converted property setter: - (void)setTag:(int)tag;	// 0x3527dc75
// declared property setter: - (void)setTitle:(id)title;	// 0x350e0f1d
// declared property setter: - (void)setTitleView:(id)view;	// 0x350e0e95
// converted property setter: - (void)setWidth:(float)width;	// 0x3527dbe1
// converted property setter: - (void)set_customLeftView:(id)view;	// 0x35108cf5
// converted property setter: - (void)set_customLeftViews:(id)views;	// 0x3527dd39
// converted property setter: - (void)set_customRightView:(id)view;	// 0x3510cd69
// converted property setter: - (void)set_customRightViews:(id)views;	// 0x3527dd49
// converted property setter: - (void)set_leftBarButtonItem:(id)item;	// 0x35108b15
// converted property setter: - (void)set_leftBarButtonItems:(id)items;	// 0x3527dd29
// converted property setter: - (void)set_rightBarButtonItem:(id)item;	// 0x3510cc61
// converted property setter: - (void)set_rightBarButtonItems:(id)items;	// 0x3527dd19
// converted property getter: - (int)tag;	// 0x3527dc85
// declared property getter: - (id)title;	// 0x350f6315
// declared property getter: - (id)titleView;	// 0x350f4941
- (void)updateNavigationBarButtonsAnimated:(BOOL)animated;	// 0x3510c92d
// converted property getter: - (float)width;	// 0x3527dbdd
@end
