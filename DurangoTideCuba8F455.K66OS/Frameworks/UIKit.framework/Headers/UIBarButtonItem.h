/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarItem.h"

@class NSSet, NSString, UIImage, UIToolbarButton, UIView;

@interface UIBarButtonItem : UIBarItem {
@private
	NSString *_title;	// 4 = 0x4
	NSSet *_possibleTitles;	// 8 = 0x8
	SEL _action;	// 12 = 0xc
	id _target;	// 16 = 0x10
	UIImage *_image;	// 20 = 0x14
	UIImage *_miniImage;	// 24 = 0x18
	UIEdgeInsets _imageInsets;	// 28 = 0x1c
	UIEdgeInsets _miniImageInsets;	// 44 = 0x2c
	float _width;	// 60 = 0x3c
	UIView *_view;	// 64 = 0x40
	int _tag;	// 68 = 0x44
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	} _barButtonItemFlags;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) UIToolbarButton *_toolbarButton;	// G=0x3028aac9; 
@property(assign, nonatomic) SEL action;	// G=0x300b32d5; S=0x300ad4a9; @synthesize=_action
@property(retain, nonatomic) UIView *customView;	// G=0x301a4dad; S=0x30112151; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x300b697d; S=0x300ad085; 
@property(retain) UIImage *image;	// G=0x301165d9; S=0x3028ab55; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x300b32b9; S=0x301a4a4d; converted property
@property(assign) BOOL isMinibarView;	// G=0x300b8a19; S=0x300b6f35; converted property
@property(readonly, assign, nonatomic) BOOL isSystemItem;	// G=0x300b24dd; 
@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage *miniImage;	// G=0x300d00b9; S=0x3028ab19; 
@property(assign, nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) UIEdgeInsets miniImageInsets;	// G=0x3028a85d; S=0x3028a879; 
@property(copy, nonatomic) NSSet *possibleTitles;	// G=0x300bb37d; S=0x30102891; 
@property(assign, nonatomic) BOOL selected;	// G=0x3028a829; S=0x301c9961; 
@property(assign, nonatomic) int style;	// G=0x300b32a5; S=0x300ad45d; 
@property(readonly, assign, nonatomic) int systemItem;	// G=0x301122f1; 
@property(assign, nonatomic) int tag;	// G=0x3028a83d; S=0x3028a84d; @synthesize=_tag
@property(assign, nonatomic) id target;	// G=0x30120c41; S=0x300ad499; @synthesize=_target
@property(retain) NSString *title;	// G=0x300bb335; S=0x300ad0f9; converted property
@property(retain) UIView *view;	// G=0x300b18c5; S=0x300b6eb9; converted property
@property(assign, nonatomic) float width;	// G=0x300b3305; S=0x301159c9; 
+ (Class)classForNavigationButton;	// 0x300b32e5
- (id)init;	// 0x300ad045
- (id)initWithBarButtonSystemItem:(int)barButtonSystemItem target:(id)target action:(SEL)action;	// 0x300ad799
- (id)initWithCoder:(id)coder;	// 0x3028ac19
- (id)initWithCustomView:(id)customView;	// 0x30112125
- (id)initWithImage:(id)image style:(int)style target:(id)target action:(SEL)action;	// 0x3028abb5
- (id)initWithTitle:(id)title style:(int)style target:(id)target action:(SEL)action;	// 0x300acfe1
- (void)_getNavBarEdgeSizeAdjust:(CGSize *)adjust imageInsets:(UIEdgeInsets *)insets landscape:(BOOL)landscape;	// 0x300b3185
- (void)_getSystemItemStyle:(int *)style title:(id *)title image:(id *)image selectedImage:(id *)image4 action:(SEL *)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x300b2b6d
- (void)_getToolbarEdgeInsets:(UIEdgeInsets *)insets imageInsets:(UIEdgeInsets *)insets2 glowInsets:(UIEdgeInsets *)insets3 forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x30112aa5
// declared property getter: - (id)_miniImage;	// 0x300d00b9
// declared property getter: - (UIEdgeInsets)_miniImageInsets;	// 0x3028a85d
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x30120bc5
// declared property setter: - (void)_setMiniImage:(id)image;	// 0x3028ab19
// declared property setter: - (void)_setMiniImageInsets:(UIEdgeInsets)insets;	// 0x3028a879
- (void)_setWidth:(float)width;	// 0x3028aa6d
- (BOOL)_shouldBezelNavButtonImage;	// 0x300b3341
// declared property getter: - (id)_toolbarButton;	// 0x3028aac9
- (void)_updateView;	// 0x300ad171
- (float)_width;	// 0x3028a8a5
// declared property getter: - (SEL)action;	// 0x300b32d5
- (id)createViewForNavigationItem:(id)navigationItem;	// 0x300b2689
- (id)createViewForToolbar:(id)toolbar;	// 0x3011230d
// declared property getter: - (id)customView;	// 0x301a4dad
- (void)dealloc;	// 0x300d71dd
- (void)encodeWithCoder:(id)coder;	// 0x3028ae99
// converted property getter: - (id)image;	// 0x301165d9
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x300b32b9
- (BOOL)isCustomViewItem;	// 0x300b24c5
// declared property getter: - (BOOL)isEnabled;	// 0x300b697d
// converted property getter: - (BOOL)isMinibarView;	// 0x300b8a19
// declared property getter: - (BOOL)isSystemItem;	// 0x300b24dd
- (id)nextResponder;	// 0x301b37a9
// declared property getter: - (id)possibleTitles;	// 0x300bb37d
- (id)scriptingID;	// 0x3028a8b5
// declared property getter: - (BOOL)selected;	// 0x3028a829
// declared property setter: - (void)setAction:(SEL)action;	// 0x300ad4a9
// declared property setter: - (void)setCustomView:(id)view;	// 0x30112151
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x300ad085
// converted property setter: - (void)setImage:(id)image;	// 0x3028ab55
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x301a4a4d
// converted property setter: - (void)setIsMinibarView:(BOOL)view;	// 0x300b6f35
// declared property setter: - (void)setPossibleTitles:(id)titles;	// 0x30102891
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x301c9961
// declared property setter: - (void)setStyle:(int)style;	// 0x300ad45d
// declared property setter: - (void)setTag:(int)tag;	// 0x3028a84d
// declared property setter: - (void)setTarget:(id)target;	// 0x300ad499
// converted property setter: - (void)setTitle:(id)title;	// 0x300ad0f9
// converted property setter: - (void)setView:(id)view;	// 0x300b6eb9
// declared property setter: - (void)setWidth:(float)width;	// 0x301159c9
// declared property getter: - (int)style;	// 0x300b32a5
// declared property getter: - (int)systemItem;	// 0x301122f1
// declared property getter: - (int)tag;	// 0x3028a83d
// declared property getter: - (id)target;	// 0x30120c41
// converted property getter: - (id)title;	// 0x300bb335
// converted property getter: - (id)view;	// 0x300b18c5
// declared property getter: - (float)width;	// 0x300b3305
@end
