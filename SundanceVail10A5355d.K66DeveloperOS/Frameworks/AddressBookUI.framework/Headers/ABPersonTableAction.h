/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABStyleProviding.h"
#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView, NSString, UIButton;
@protocol ABPersonTableActionDelegate;

@interface ABPersonTableAction : NSObject <ABStyleProviding> {
	NSString *_title;	// 4 = 0x4
	NSString *_shortTitle;	// 8 = 0x8
	BOOL _displaysShortTitle;	// 12 = 0xc
	BOOL _indicatesFaceTimeHistory;	// 13 = 0xd
	NSString *_detailText;	// 16 = 0x10
	NSString *_differentiationSheetTitle;	// 20 = 0x14
	BOOL _allowDifferentiationSheet;	// 24 = 0x18
	id _target;	// 28 = 0x1c
	SEL _selector;	// 32 = 0x20
	int _style;	// 36 = 0x24
	int _property;	// 40 = 0x28
	CFArrayRef _properties;	// 44 = 0x2c
	int _grouping;	// 48 = 0x30
	int _ordering;	// 52 = 0x34
	UIButton *_button;	// 56 = 0x38
	UIButton *_FMFButton;	// 60 = 0x3c
	UIView *_customContentView;	// 64 = 0x40
	id<ABPersonTableActionDelegate> _delegate;	// 68 = 0x44
}
@property(retain, nonatomic) UIView *actionContentView;	// G=0x34fca4b5; S=0x34fca4c5; @synthesize=_customContentView
@property(assign, nonatomic) BOOL allowDifferentiationSheet;	// G=0x34fca435; S=0x34f78661; @synthesize=_allowDifferentiationSheet
@property(readonly, assign, nonatomic) UIButton *button;	// G=0x34f72679; 
@property(assign, nonatomic) id<ABPersonTableActionDelegate> delegate;	// G=0x34fca401; S=0x34f71891; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *detailText;	// G=0x34fca475; @synthesize=_detailText
@property(copy, nonatomic) NSString *differentiationSheetTitle;	// G=0x34fca421; S=0x34f786a5; @synthesize=_differentiationSheetTitle
@property(assign, nonatomic) BOOL displaysShortTitle;	// G=0x34fca465; S=0x34f72975; @synthesize=_displaysShortTitle
@property(readonly, assign, nonatomic) UIButton *existingButton;	// G=0x34fca495; @synthesize=_button
@property(assign, nonatomic) int grouping;	// G=0x34fca4a5; S=0x34f71821; @synthesize=_grouping
@property(assign, nonatomic) BOOL indicatesFaceTimeHistory;	// G=0x34fca411; S=0x34f78a6d; @synthesize=_indicatesFaceTimeHistory
@property(assign, nonatomic) int ordering;	// G=0x34f78651; S=0x34f71831; @synthesize=_ordering
@property(assign, nonatomic) CFArrayRef properties;	// G=0x34f71a69; S=0x34f78671; @synthesize=_properties
@property(readonly, assign, nonatomic) int property;	// G=0x34f71a79; @synthesize=_property
@property(readonly, assign, nonatomic) SEL selector;	// G=0x34f719c1; @synthesize=_selector
@property(readonly, assign, nonatomic) NSString *shortTitle;	// G=0x34fca455; @synthesize=_shortTitle
@property(readonly, assign, nonatomic) int style;	// G=0x34fca485; @synthesize=_style
@property(readonly, assign, nonatomic) id target;	// G=0x34f719b1; @synthesize=_target
@property(readonly, assign, nonatomic) NSString *title;	// G=0x34fca445; @synthesize=_title
- (id)initWithTitle:(id)title detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector;	// 0x34fca299
- (id)initWithTitle:(id)title shortTitle:(id)title2 detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector property:(int)property;	// 0x34f716a5
- (id)initWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector property:(int)property;	// 0x34fca261
- (id)initWithTitle:(id)title style:(int)style target:(id)target selector:(SEL)selector;	// 0x34f7263d
// declared property getter: - (id)actionContentView;	// 0x34fca4b5
// declared property getter: - (BOOL)allowDifferentiationSheet;	// 0x34fca435
// declared property getter: - (id)button;	// 0x34f72679
- (void)buttonClicked:(id)clicked;	// 0x34f91aed
- (int)compareOrderingToAction:(id)action;	// 0x34f78619
- (void)dealloc;	// 0x34f7d14d
// declared property getter: - (id)delegate;	// 0x34fca401
- (id)description;	// 0x34fca399
// declared property getter: - (id)detailText;	// 0x34fca475
// declared property getter: - (id)differentiationSheetTitle;	// 0x34fca421
// declared property getter: - (BOOL)displaysShortTitle;	// 0x34fca465
// declared property getter: - (id)existingButton;	// 0x34fca495
// declared property getter: - (int)grouping;	// 0x34fca4a5
// declared property getter: - (BOOL)indicatesFaceTimeHistory;	// 0x34fca411
- (void)modifyDetailText:(id)text;	// 0x34fca2a9
// declared property getter: - (int)ordering;	// 0x34f78651
- (void)performWithSender:(id)sender person:(void *)person property:(int)property identifier:(int)identifier;	// 0x34f91b8d
- (void)prepareButton:(id)button forValueAtIndex:(int)index inPropertyGroup:(id)propertyGroup;	// 0x34fca339
// declared property getter: - (CFArrayRef)properties;	// 0x34f71a69
// declared property getter: - (int)property;	// 0x34f71a79
// declared property getter: - (SEL)selector;	// 0x34f719c1
// declared property setter: - (void)setActionContentView:(id)view;	// 0x34fca4c5
// declared property setter: - (void)setAllowDifferentiationSheet:(BOOL)sheet;	// 0x34f78661
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34f71891
// declared property setter: - (void)setDifferentiationSheetTitle:(id)title;	// 0x34f786a5
// declared property setter: - (void)setDisplaysShortTitle:(BOOL)title;	// 0x34f72975
- (void)setFMFActionButton:(id)button;	// 0x34fca2e5
// declared property setter: - (void)setGrouping:(int)grouping;	// 0x34f71821
// declared property setter: - (void)setIndicatesFaceTimeHistory:(BOOL)history;	// 0x34f78a6d
// declared property setter: - (void)setOrdering:(int)ordering;	// 0x34f71831
// declared property setter: - (void)setProperties:(CFArrayRef)properties;	// 0x34f78671
// declared property getter: - (id)shortTitle;	// 0x34fca455
// declared property getter: - (int)style;	// 0x34fca485
- (id)styleProvider;	// 0x34f72955
// declared property getter: - (id)target;	// 0x34f719b1
// declared property getter: - (id)title;	// 0x34fca445
@end

