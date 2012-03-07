/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITabBarItem, UIColor, UIImage, NSArray;
@protocol UITabBarDelegate;

@interface UITabBar : UIView {
@private
	UIView *_customizeView;	// 48 = 0x30
	UIView *_backgroundView;	// 52 = 0x34
	id<UITabBarDelegate> _delegate;	// 56 = 0x38
	NSArray *_items;	// 60 = 0x3c
	UITabBarItem *_selectedItem;	// 64 = 0x40
	NSArray *_customizationItems;	// 68 = 0x44
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} _tabBarFlags;	// 72 = 0x48
	NSArray *_buttonItems;	// 76 = 0x4c
	CFArrayRef _hiddenItems;	// 80 = 0x50
	id _appearanceStorage;	// 84 = 0x54
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x3533023d; S=0x35330119; 
@property(retain) NSArray *buttonItems;	// G=0x35330b91; S=0x35330ba1; converted property
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// G=0x35330695; S=0x3514a4d1; @synthesize=_delegate
@property(copy, nonatomic) NSArray *items;	// G=0x3518fad1; S=0x3532fd0d; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x3514a539; S=0x3514a3fd; converted property
@property(retain, nonatomic) UIColor *selectedImageTintColor;	// G=0x35330675; S=0x353305dd; 
@property(assign, nonatomic) UITabBarItem *selectedItem;	// G=0x3516a1dd; S=0x3514edc9; 
@property(retain, nonatomic) UIImage *selectionIndicatorImage;	// G=0x353303a5; S=0x3533025d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3514cbdd; S=0x35330531; 
+ (float)_buttonGap;	// 0x35330be5
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x353306a5
- (id)initWithCoder:(id)coder;	// 0x3532f7ad
- (id)initWithFrame:(CGRect)frame;	// 0x35149db9
- (void)_adjustButtonSelection:(id)selection;	// 0x351d672d
- (void)_alertDidHide;	// 0x35330ec1
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x35330bed
- (id)_appearanceStorage;	// 0x3514cbcd
- (void)_buttonCancel:(id)cancel;	// 0x35330f69
- (void)_buttonDown:(id)down;	// 0x351d6661
- (void)_buttonDownDelayed:(id)delayed;	// 0x35330f21
- (void)_buttonUp:(id)up;	// 0x351d66b5
- (BOOL)_canDrawContent;	// 0x35149e85
- (void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;	// 0x353317d9
- (void)_customizeDoneButtonAction:(id)action;	// 0x353311a9
- (void)_customizeWithAvailableItems:(id)availableItems;	// 0x35331321
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x3515126d
- (void)_dismissCustomizeSheet:(BOOL)sheet;	// 0x35330fa1
- (void)_finishCustomizeAnimation:(id)animation;	// 0x353311bd
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x3532fd21
- (BOOL)_isHidden:(id)hidden;	// 0x35331a1d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3532f909
- (void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;	// 0x3514e4d5
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x351d6839
- (void)_setBackgroundImage:(id)image;	// 0x3532f29d
- (void)_setLabelFont:(id)font;	// 0x3532f2bd
- (void)_setLabelShadowColor:(id)color;	// 0x3532f541
- (void)_setLabelShadowOffset:(CGSize)offset;	// 0x3532f669
- (void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;	// 0x3532f3e5
- (void)_setSelectionIndicatorImage:(id)image;	// 0x3532f2ad
- (BOOL)_subclassImplementsDrawRect;	// 0x35149e05
- (void)_tabBarFinishedAnimating;	// 0x353306cd
- (void)_updateBackgroundImage;	// 0x35149f8d
- (void)_updateTintedImages:(id)images selected:(BOOL)selected;	// 0x353303c5
// declared property getter: - (id)backgroundImage;	// 0x3533023d
- (void)beginCustomizingItems:(id)items;	// 0x3532ffa5
// converted property getter: - (id)buttonItems;	// 0x35330b91
- (void)dealloc;	// 0x3532fb65
// declared property getter: - (id)delegate;	// 0x35330695
- (void)dismissCustomizeSheet:(BOOL)sheet;	// 0x353306ed
- (void)drawRect:(CGRect)rect;	// 0x35330969
- (void)encodeWithCoder:(id)coder;	// 0x3532fa19
- (BOOL)endCustomizingAnimated:(BOOL)animated;	// 0x35330099
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x353319b1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x351d6501
- (BOOL)isCustomizing;	// 0x35180929
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x35340635
// converted property getter: - (BOOL)isLocked;	// 0x3514a539
// declared property getter: - (id)items;	// 0x3518fad1
- (void)layoutSubviews;	// 0x35151759
// declared property getter: - (id)selectedImageTintColor;	// 0x35330675
// declared property getter: - (id)selectedItem;	// 0x3516a1dd
// declared property getter: - (id)selectionIndicatorImage;	// 0x353303a5
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x35330119
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x35330919
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x353308c9
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x35330879
- (void)setBounds:(CGRect)bounds;	// 0x3532fef5
// converted property setter: - (void)setButtonItems:(id)items;	// 0x35330ba1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3514a4d1
- (void)setFrame:(CGRect)frame;	// 0x35149ed5
- (void)setFrame:(CGRect)frame;	// 0x3532fe45
// declared property setter: - (void)setItems:(id)items;	// 0x3532fd0d
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x3514c08d
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x3514a3fd
// declared property setter: - (void)setSelectedImageTintColor:(id)color;	// 0x353305dd
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x3514edc9
// declared property setter: - (void)setSelectionIndicatorImage:(id)image;	// 0x3533025d
// declared property setter: - (void)setTintColor:(id)color;	// 0x35330531
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3514a431
// declared property getter: - (id)tintColor;	// 0x3514cbdd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35330719
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35330821
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x353307c9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35330771
@end

