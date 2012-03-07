/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIView.h"

@class UIImageView, UITextField, UIButton, _UITableViewCellOldEditingData, UITableView, UIColor, UIImage, NSString, UILongPressGestureRecognizer, UILabel, NSTimer;

@interface UITableViewCell : UIView <NSCoding, UIGestureRecognizerDelegate> {
@private
	UITableView *_tableView;	// 48 = 0x30
	id _layoutManager;	// 52 = 0x34
	id _target;	// 56 = 0x38
	SEL _editAction;	// 60 = 0x3c
	SEL _accessoryAction;	// 64 = 0x40
	id _oldEditingData;	// 68 = 0x44
	id _editingData;	// 72 = 0x48
	float _rightMargin;	// 76 = 0x4c
	int _indentationLevel;	// 80 = 0x50
	float _indentationWidth;	// 84 = 0x54
	NSString *_reuseIdentifier;	// 88 = 0x58
	UIView *_contentView;	// 92 = 0x5c
	UIImageView *_imageView;	// 96 = 0x60
	UILabel *_textLabel;	// 100 = 0x64
	UILabel *_detailTextLabel;	// 104 = 0x68
	UIView *_backgroundView;	// 108 = 0x6c
	UIView *_selectedBackgroundView;	// 112 = 0x70
	UIView *_multipleSelectionBackgroundView;	// 116 = 0x74
	UIView *_selectedOverlayView;	// 120 = 0x78
	float _selectionFadeDuration;	// 124 = 0x7c
	UIColor *_backgroundColor;	// 128 = 0x80
	UIColor *_separatorColor;	// 132 = 0x84
	UIColor *_topShadowColor;	// 136 = 0x88
	UIColor *_bottomShadowColor;	// 140 = 0x8c
	UIColor *_sectionBorderColor;	// 144 = 0x90
	UIView *_floatingSeparatorView;	// 148 = 0x94
	UIView *_topShadowAnimationView;	// 152 = 0x98
	UIView *_bottomShadowAnimationView;	// 156 = 0x9c
	CFDictionaryRef _unhighlightedStates;	// 160 = 0xa0
	id _selectionSegueTemplate;	// 164 = 0xa4
	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selectionFadeFraction : 11;
		unsigned editing : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsAccessoryWhenEditing : 1;
		unsigned showsReorderControl : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned disclosureClickable : 1;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 1;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned showingMenu : 1;
		unsigned clipsContents : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned dontDrawTopShadow : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned layoutLoopCounter : 2;
	} _tableCellFlags;	// 168 = 0xa8
	UIButton *_accessoryView;	// 180 = 0xb4
	UIButton *_editingAccessoryView;	// 184 = 0xb8
	UIView *_customAccessoryView;	// 188 = 0xbc
	UIView *_customEditingAccessoryView;	// 192 = 0xc0
	UIView *_separatorView;	// 196 = 0xc4
	UIView *_topSeparatorView;	// 200 = 0xc8
	UIView *_topShadowView;	// 204 = 0xcc
	UITextField *_editableTextField;	// 208 = 0xd0
	double _lastSelectionTime;	// 212 = 0xd4
	NSTimer *_deselectTimer;	// 220 = 0xdc
	float _textFieldOffset;	// 224 = 0xe0
	SEL _returnAction;	// 228 = 0xe4
	UIColor *_selectionTintColor;	// 232 = 0xe8
	UIColor *_accessoryTintColor;	// 236 = 0xec
	UIImage *_reorderControlImage;	// 240 = 0xf0
	UILongPressGestureRecognizer *longPressGesture;	// 244 = 0xf4
}
@property(assign) SEL accessoryAction;	// G=0x3028b5dd; S=0x3028b4f1; converted property
@property(assign, nonatomic) int accessoryType;	// G=0x3008c691; S=0x3008db89; 
@property(retain, nonatomic) UIView *accessoryView;	// G=0x300fc96d; S=0x300ed685; 
@property(retain) UIColor *backgroundColor;	// G=0x300f6275; S=0x3008e6b5; converted property
@property(retain, nonatomic) UIView *backgroundView;	// G=0x30101dc5; S=0x30101c59; 
@property(retain) UIColor *bottomShadowColor;	// G=0x3010309d; S=0x30092dbd; converted property
@property(assign) BOOL clipsContents;	// G=0x3028a479; S=0x3028a43d; converted property
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x3008c7f9; 
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x300f6339; 
@property(assign) BOOL drawingEnabled;	// G=0x3016842d; S=0x30197379; converted property
@property(assign, nonatomic, getter=_drawsTopShadow, setter=_setDrawsTopShadow:) BOOL drawsTopShadow;	// G=0x3010121d; S=0x30092879; 
@property(assign) SEL editAction;	// G=0x3028b4e1; S=0x3028b4d1; converted property
@property(readonly, assign, nonatomic) UITextField *editableTextField;	// G=0x3017311d; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x3008dfa1; S=0x30159411; 
@property(assign, nonatomic) int editingAccessoryType;	// G=0x3008dfb5; S=0x300ddabd; 
@property(retain, nonatomic) UIView *editingAccessoryView;	// G=0x3028a395; S=0x301571f5; 
@property(readonly, assign, nonatomic) int editingStyle;	// G=0x300ddbfd; 
@property(retain) id font;	// G=0x30289bcd; S=0x3015a209; converted property
@property(assign) BOOL hidesAccessoryWhenEditing;	// G=0x3028a425; S=0x3028a3cd; converted property
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x300ca665; S=0x300946ad; 
@property(retain) id image;	// G=0x30289dbd; S=0x30289d91; converted property
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x300b1425; 
@property(assign, nonatomic) int indentationLevel;	// G=0x300917b9; S=0x3017242d; 
@property(assign, nonatomic) float indentationWidth;	// G=0x300917c9; S=0x30172459; 
@property(retain) id layoutManager;	// G=0x3008bae1; S=0x3008ba9d; converted property
@property(assign) int lineBreakMode;	// G=0x30289ced; S=0x30289ca9; converted property
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;	// G=0x3028b649; S=0x3008c831; @synthesize
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;	// G=0x30289e69; S=0x30289ea1; 
@property(assign, nonatomic, getter=_needsSetup, setter=_setNeedsSetup:) BOOL needsSetup;	// G=0x3015b679; S=0x3008ec69; 
@property(retain, nonatomic) _UITableViewCellOldEditingData *oldEditingData;	// G=0x30287f3d; S=0x30287f8d; 
@property(assign) SEL returnAction;	// G=0x3028bcc5; S=0x3028bcb5; converted property
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;	// G=0x301048f5; 
@property(retain) UIColor *sectionBorderColor;	// G=0x30101fe1; S=0x30092e9d; converted property
@property(assign) int sectionLocation;	// G=0x3008c2cd; S=0x3028b635; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x300b1405; S=0x300943ed; 
@property(retain, nonatomic) UIView *selectedBackgroundView;	// G=0x300df93d; S=0x300b10b5; 
@property(retain) id selectedImage;	// G=0x30289e11; S=0x30289de5; converted property
@property(readonly, retain) UIView *selectedOverlayView;	// G=0x3028a1ed; converted property
@property(retain) id selectedTextColor;	// G=0x30289d69; S=0x30289d3d; converted property
@property(assign) float selectionFadeDuration;	// G=0x30165f85; S=0x3008b929; converted property
@property(retain) id selectionSegueTemplate;	// G=0x301560f1; S=0x30289011; converted property
@property(assign, nonatomic) int selectionStyle;	// G=0x300dfd75; S=0x300b1651; 
@property(retain) UIColor *selectionTintColor;	// G=0x300dff21; S=0x3028a185; converted property
@property(retain) UIColor *separatorColor;	// G=0x30102b19; S=0x300926cd; converted property
@property(assign) int separatorStyle;	// G=0x30101209; S=0x300923b5; converted property
@property(assign, nonatomic) BOOL shouldIndentWhileEditing;	// G=0x30100c45; S=0x3028a25d; 
@property(readonly, assign, nonatomic) BOOL showingDeleteConfirmation;	// G=0x30090149; 
@property(assign, nonatomic) BOOL showsReorderControl;	// G=0x300b15cd; S=0x300f71e9; 
@property(retain) id tableBackgroundColor;	// G=0x30102f79; S=0x3028a005; converted property
@property(assign) int tableViewStyle;	// G=0x3008bed1; S=0x3008e4f1; converted property
@property(retain) id target;	// G=0x3028b4c1; S=0x3028b3d5; converted property
@property(retain) id text;	// G=0x30289ba1; S=0x3015a2c1; converted property
@property(assign) int textAlignment;	// G=0x30289c81; S=0x30289c55; converted property
@property(retain) id textColor;	// G=0x30289d15; S=0x3015a27d; converted property
@property(assign, nonatomic, setter=setTextFieldOffset:) float textFieldOffset;	// G=0x301b3aa5; S=0x301b3381; 
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x300f5fa5; 
@property(retain) UIColor *topShadowColor;	// G=0x30101f25; S=0x300927c5; converted property
@property(assign, nonatomic) BOOL wasSwiped;	// G=0x300b15b5; S=0x300942c1; 
- (id)init;	// 0x30289055
- (id)initWithCoder:(id)coder;	// 0x30289085
- (id)initWithFrame:(CGRect)frame;	// 0x301b5cc5
- (id)initWithFrame:(CGRect)frame reuseIdentifier:(id)identifier;	// 0x3008b441
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x3008b455
- (SEL)_accessoryAction;	// 0x3028babd
- (id)_accessoryTintColor;	// 0x3028a35d
- (id)_accessoryView:(BOOL)view;	// 0x3008c359
- (void)_animateFloatingSeparatorForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x30159651
- (void)_animateInnerShadowForInsertion:(BOOL)insertion withRowAnimation:(int)rowAnimation;	// 0x30159a65
- (BOOL)_backgroundColorSet;	// 0x3008e5ed
- (float)_backgroundInset;	// 0x3008c1fd
- (id)_backgroundView:(BOOL)view;	// 0x30090275
- (BOOL)_canDrawContent;	// 0x3008b7a1
- (void)_cancelInternalPerformRequests;	// 0x30153915
- (void)_clearOpaqueViewState:(id)state;	// 0x30155e11
- (id)_contentBackgroundColor;	// 0x300f6211
- (id)_createRemoveControlForStyle:(int)style;	// 0x30288705
- (void)_createReorderControlIfNeeded;	// 0x30287fd1
- (id)_currentAccessoryView:(BOOL)view;	// 0x3028849d
- (id)_customAccessoryView:(BOOL)view;	// 0x30091241
- (id)_customEditingAccessoryView:(BOOL)view;	// 0x30091665
- (id)_defaultAccessoryView;	// 0x3008c399
- (id)_defaultFont;	// 0x30288be1
- (void)_delayedDeselect;	// 0x301c36b5
- (CGRect)_delegateConfirmationRect;	// 0x3028a491
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x30155efd
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x30155db5
- (void)_deselectAnimationFinished;	// 0x30166cc5
- (id)_detailTextLabel;	// 0x300f6349
- (id)_detailTextLabel:(BOOL)label;	// 0x30091861
- (void)_didCreateContentView;	// 0x30289b9d
- (id)_disclosureImage:(BOOL)image;	// 0x3008dfc9
- (id)_disclosurePressedImage:(BOOL)image;	// 0x3008e439
- (void)_drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x3028a1e9
- (void)_drawSeparatorInRect:(CGRect)rect;	// 0x300ca545
- (BOOL)_drawsTopSeparatorDuringReordering;	// 0x3016eda5
// declared property getter: - (BOOL)_drawsTopShadow;	// 0x3010121d
- (id)_editableTextField;	// 0x3017312d
- (id)_editableTextField:(BOOL)field;	// 0x301b3ab5
- (id)_editingAccessoryView:(BOOL)view;	// 0x300908f1
- (float)_editingButtonOffset;	// 0x30158ddd
- (void)_editingTransitionAnimationDidStop:(id)_editingTransitionAnimation finished:(id)finished context:(void *)context;	// 0x3015b865
- (void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;	// 0x30288301
- (void)_grabberBeganReorder:(id)reorder;	// 0x3016c5c5
- (void)_grabberDragged:(id)dragged yDelta:(float)delta;	// 0x3016eb99
- (void)_grabberReleased:(id)released;	// 0x3016efb1
- (BOOL)_hasAccessoryView;	// 0x3015a119
- (BOOL)_hasEditingAccessoryView;	// 0x3015a191
- (CGSize)_imageInsetSize;	// 0x30288c39
- (id)_imageView;	// 0x300b1435
- (id)_imageView:(BOOL)view;	// 0x300917d9
- (BOOL)_isCurrentlyConsideredHighlighted;	// 0x3008ea61
- (BOOL)_isHighlighted;	// 0x300f62c1
- (BOOL)_isReorderable;	// 0x3028b8a9
- (void)_layoutSubviewsAnimated:(BOOL)animated;	// 0x30288871
- (void)_longPressGestureRecognized:(id)recognized;	// 0x30288c75
- (void)_menuDismissed:(id)dismissed;	// 0x30288e25
- (id)_multiselectBackgroundColor;	// 0x30153ed9
- (void)_multiselectColorChanged;	// 0x3028bc49
// declared property getter: - (BOOL)_needsSetup;	// 0x3015b679
- (void)_performAction:(SEL)action sender:(id)sender;	// 0x30288f2d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30289781
- (void)_releaseRemoveControl;	// 0x302887c1
- (void)_releaseReorderingControl;	// 0x30288179
- (id)_removeControl;	// 0x300924e9
- (void)_removeFloatingSeparator;	// 0x3015b8d9
- (void)_removeInnerShadow;	// 0x3015b919
- (void)_removeRemoveControl;	// 0x301073f1
- (id)_reorderControlImage;	// 0x3016c4f1
- (id)_reorderingControl;	// 0x30288101
- (id)_reorderingSeparatorView;	// 0x3028813d
- (void)_resetSelectionTimer;	// 0x30107395
- (void)_saveOpaqueViewState:(id)state;	// 0x30154091
- (id)_scriptingInfo;	// 0x30172e51
- (id)_selectedBackgroundView:(BOOL)view;	// 0x30090285
- (void)_setAccessoryAction:(SEL)action;	// 0x3028b9d1
- (void)_setAccessoryTintColor:(id)color;	// 0x3028a2d1
- (void)_setDrawsTopSeparator:(BOOL)separator;	// 0x3010732d
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)reordering;	// 0x30288fdd
// declared property setter: - (void)_setDrawsTopShadow:(BOOL)shadow;	// 0x30092879
- (void)_setEditingStyle:(int)style;	// 0x30094239
- (void)_setFont:(id)font layout:(BOOL)layout;	// 0x3015a21d
- (void)_setGrabberHidden:(BOOL)hidden;	// 0x30288239
- (void)_setMultiselecting:(BOOL)multiselecting;	// 0x300942f1
// declared property setter: - (void)_setNeedsSetup:(BOOL)setup;	// 0x3008ec69
- (void)_setOpaque:(BOOL)opaque forSubview:(id)subview;	// 0x30154481
- (void)_setReorderControlImage:(id)image;	// 0x3028b669
- (void)_setReordering:(BOOL)reordering;	// 0x3016cca1
- (void)_setSelectionStyle:(int)style selectionTintColor:(id)color;	// 0x300b1665
- (void)_setShouldIndentWhileEditing:(BOOL)_set;	// 0x30094251
- (void)_setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x300942d9
- (void)_setShowsReorderControl:(BOOL)control;	// 0x30094269
- (void)_setTableBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x3009250d
- (void)_setTableView:(id)view;	// 0x3028b659
- (void)_setTarget:(id)target;	// 0x3028b8d5
- (void)_setUnhighlightedBackgroundColor:(id)color forSubview:(id)subview;	// 0x3028a0a9
- (void)_setupMenuGesture;	// 0x3008c725
- (void)_setupSelectedBackgroundView;	// 0x300df989
- (void)_setupTableViewCellCommon;	// 0x3008b915
- (void)_showReorderControl;	// 0x30288925
- (void)_startToEditTextField;	// 0x3028bc11
- (void)_syncAccessoryViewsIfNecessary;	// 0x3008de75
- (id)_tableView;	// 0x3008c25d
- (id)_target;	// 0x3028b9c1
- (CGSize)_textInsetSize;	// 0x30288c29
- (id)_textLabel;	// 0x300f5fb5
- (id)_textLabel:(BOOL)label;	// 0x30091809
- (id)_tintedDisclosureImagePressed:(BOOL)pressed;	// 0x30288311
- (id)_titleForDeleteConfirmationButton;	// 0x301704dd
- (void)_topShadowDidFadeOut;	// 0x30288de5
- (id)_topShadowView:(BOOL)view;	// 0x30091839
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;	// 0x3028b6ad
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)highlightIgnoringSelection;	// 0x3015402d
- (void)_updateContentClip;	// 0x3008ea91
- (void)_updateHighlightColors;	// 0x30107545
- (void)_updateHighlightColorsForAnimationHalfwayPoint;	// 0x30165f95
- (void)_updateHighlightColorsForView:(id)view highlighted:(BOOL)highlighted;	// 0x3008e081
- (void)_updateSeparatorContent;	// 0x30091891
- (void)_updateTopShadowView:(BOOL)view;	// 0x300928b5
- (void)_willBeDeleted;	// 0x3028b6dd
// converted property getter: - (SEL)accessoryAction;	// 0x3028b5dd
- (CGRect)accessoryRectForBounds:(CGRect)bounds;	// 0x3028b07d
// declared property getter: - (int)accessoryType;	// 0x3008c691
// declared property getter: - (id)accessoryView;	// 0x300fc96d
// converted property getter: - (id)backgroundColor;	// 0x300f6275
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x3028a535
// declared property getter: - (id)backgroundView;	// 0x30101dc5
// converted property getter: - (id)bottomShadowColor;	// 0x3010309d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30288ecd
// converted property getter: - (BOOL)clipsContents;	// 0x3028a479
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x3028a5d5
- (CGRect)contentRectForState:(unsigned)state;	// 0x3028b5ed
// declared property getter: - (id)contentView;	// 0x3008c7f9
- (void)copy:(id)copy;	// 0x30288fb5
- (unsigned)currentStateMask;	// 0x30091b8d
- (void)cut:(id)cut;	// 0x30288fa1
- (void)dealloc;	// 0x301664b1
- (void)deleteConfirmationControlWasCancelled:(id)cancelled;	// 0x3028b7f9
- (void)deleteConfirmationControlWasClicked:(id)clicked;	// 0x301716d5
// declared property getter: - (id)detailTextLabel;	// 0x300f6339
- (void)didMoveToSuperview;	// 0x30093739
- (void)didTransitionToState:(unsigned)state;	// 0x30159259
// converted property getter: - (BOOL)drawingEnabled;	// 0x3016842d
// converted property getter: - (SEL)editAction;	// 0x3028b4e1
- (void)editControlWasClicked:(id)clicked;	// 0x301702b1
- (CGRect)editRectForBounds:(CGRect)bounds;	// 0x3028b03d
// declared property getter: - (id)editableTextField;	// 0x3017311d
// declared property getter: - (int)editingAccessoryType;	// 0x3008dfb5
// declared property getter: - (id)editingAccessoryView;	// 0x3028a395
- (id)editingData:(BOOL)data;	// 0x3009015d
// declared property getter: - (int)editingStyle;	// 0x300ddbfd
- (void)encodeWithCoder:(id)coder;	// 0x3028980d
// converted property getter: - (id)font;	// 0x30289bcd
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x30288c49
// converted property getter: - (BOOL)hidesAccessoryWhenEditing;	// 0x3028a425
// converted property getter: - (id)image;	// 0x30289dbd
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x3028ae81
// declared property getter: - (id)imageView;	// 0x300b1425
// declared property getter: - (int)indentationLevel;	// 0x300917b9
// declared property getter: - (float)indentationWidth;	// 0x300917c9
- (void)insertControl:(id)control shouldInsertWithTarget:(id)target;	// 0x3028b745
- (BOOL)isAtLeastHalfSelected;	// 0x3028a199
// declared property getter: - (BOOL)isEditing;	// 0x3008dfa1
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302b563d
// declared property getter: - (BOOL)isHighlighted;	// 0x300ca665
// declared property getter: - (BOOL)isSelected;	// 0x300b1405
// converted property getter: - (id)layoutManager;	// 0x3008bae1
- (void)layoutSubviews;	// 0x3008ed11
// converted property getter: - (int)lineBreakMode;	// 0x30289ced
// declared property getter: - (id)longPressGesture;	// 0x3028b649
// declared property getter: - (id)multipleSelectionBackgroundView;	// 0x30289e69
// declared property getter: - (id)oldEditingData;	// 0x30287f3d
- (void)paste:(id)paste;	// 0x30288fc9
- (void)prepareForReuse;	// 0x30107121
- (CGRect)removeControl:(id)control endFrameForTarget:(id)target;	// 0x3028bb61
- (CGRect)removeControl:(id)control startFrameForTarget:(id)target;	// 0x3028bacd
- (void)removeControl:(id)control wasCanceledForTarget:(id)target;	// 0x3028bbcd
- (void)removeControl:(id)control willRemoveTarget:(id)target;	// 0x3028b705
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x3028b775
- (void)removeEditingData;	// 0x30107441
- (void)removeFromSuperview;	// 0x3010492d
- (CGRect)reorderRectForBounds:(CGRect)bounds;	// 0x3028b2d9
// converted property getter: - (SEL)returnAction;	// 0x3028bcc5
// declared property getter: - (id)reuseIdentifier;	// 0x301048f5
// converted property getter: - (id)sectionBorderColor;	// 0x30101fe1
// converted property getter: - (int)sectionLocation;	// 0x3008c2cd
// declared property getter: - (id)selectedBackgroundView;	// 0x300df93d
- (void)selectedBackgroundViewChange:(id)change finished:(id)finished context:(id)context;	// 0x30289e39
// converted property getter: - (id)selectedImage;	// 0x30289e11
// converted property getter: - (id)selectedOverlayView;	// 0x3028a1ed
// converted property getter: - (id)selectedTextColor;	// 0x30289d69
// converted property getter: - (float)selectionFadeDuration;	// 0x30165f85
- (float)selectionPercent;	// 0x3028a1bd
// converted property getter: - (id)selectionSegueTemplate;	// 0x301560f1
// declared property getter: - (int)selectionStyle;	// 0x300dfd75
// converted property getter: - (id)selectionTintColor;	// 0x300dff21
// converted property getter: - (id)separatorColor;	// 0x30102b19
// converted property getter: - (int)separatorStyle;	// 0x30101209
// converted property setter: - (void)setAccessoryAction:(SEL)action;	// 0x3028b4f1
// declared property setter: - (void)setAccessoryType:(int)type;	// 0x3008db89
// declared property setter: - (void)setAccessoryView:(id)view;	// 0x300ed685
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x3008e6b5
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x30101c59
// converted property setter: - (void)setBottomShadowColor:(id)color;	// 0x30092dbd
// converted property setter: - (void)setClipsContents:(BOOL)contents;	// 0x3028a43d
// converted property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x30197379
// converted property setter: - (void)setEditAction:(SEL)action;	// 0x3028b4d1
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x30159411
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x30093d81
// declared property setter: - (void)setEditingAccessoryType:(int)type;	// 0x300ddabd
// declared property setter: - (void)setEditingAccessoryView:(id)view;	// 0x301571f5
- (void)setEditingStyle:(int)style;	// 0x301c6911
- (void)setEditingStyle:(int)style;	// 0x3028a1fd
// converted property setter: - (void)setFont:(id)font;	// 0x3015a209
- (void)setFrame:(CGRect)frame;	// 0x3008b7ed
// converted property setter: - (void)setHidesAccessoryWhenEditing:(BOOL)editing;	// 0x3028a3cd
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x300946ad
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x300946c1
// converted property setter: - (void)setImage:(id)image;	// 0x30289d91
// declared property setter: - (void)setIndentationLevel:(int)level;	// 0x3017242d
// declared property setter: - (void)setIndentationWidth:(float)width;	// 0x30172459
// converted property setter: - (void)setLayoutManager:(id)manager;	// 0x3008ba9d
// converted property setter: - (void)setLineBreakMode:(int)mode;	// 0x30289ca9
// declared property setter: - (void)setLongPressGesture:(id)gesture;	// 0x3008c831
// declared property setter: - (void)setMultipleSelectionBackgroundView:(id)view;	// 0x30289ea1
// declared property setter: - (void)setOldEditingData:(id)data;	// 0x30287f8d
- (void)setPlaceHolderValue:(id)value;	// 0x3028bc85
// converted property setter: - (void)setReturnAction:(SEL)action;	// 0x3028bcb5
- (void)setReuseIdentifier:(id)identifier;	// 0x3028a065
// converted property setter: - (void)setSectionBorderColor:(id)color;	// 0x30092e9d
// converted property setter: - (void)setSectionLocation:(int)location;	// 0x3028b635
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x300930e9
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x300943ed
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x30094401
// declared property setter: - (void)setSelectedBackgroundView:(id)view;	// 0x300b10b5
- (void)setSelectedBackgroundView:(id)view animated:(BOOL)animated;	// 0x300b10c9
// converted property setter: - (void)setSelectedImage:(id)image;	// 0x30289de5
// converted property setter: - (void)setSelectedTextColor:(id)color;	// 0x30289d3d
// converted property setter: - (void)setSelectionFadeDuration:(float)duration;	// 0x3008b929
// converted property setter: - (void)setSelectionSegueTemplate:(id)aTemplate;	// 0x30289011
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x300b1651
// converted property setter: - (void)setSelectionTintColor:(id)color;	// 0x3028a185
// converted property setter: - (void)setSeparatorColor:(id)color;	// 0x300926cd
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x300923b5
// declared property setter: - (void)setShouldIndentWhileEditing:(BOOL)indentWhileEditing;	// 0x3028a25d
- (void)setShowingDeleteConfirmation:(BOOL)confirmation;	// 0x3017033d
// declared property setter: - (void)setShowsReorderControl:(BOOL)control;	// 0x300f71e9
// converted property setter: - (void)setTableBackgroundColor:(id)color;	// 0x3028a005
// converted property setter: - (void)setTableViewStyle:(int)style;	// 0x3008e4f1
// converted property setter: - (void)setTarget:(id)target;	// 0x3028b3d5
// converted property setter: - (void)setText:(id)text;	// 0x3015a2c1
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x30289c55
// converted property setter: - (void)setTextColor:(id)color;	// 0x3015a27d
// declared property setter: - (void)setTextFieldOffset:(float)offset;	// 0x301b3381
// converted property setter: - (void)setTopShadowColor:(id)color;	// 0x300927c5
// declared property setter: - (void)setWasSwiped:(BOOL)swiped;	// 0x300942c1
// declared property getter: - (BOOL)shouldIndentWhileEditing;	// 0x30100c45
- (void)showSelectedBackgroundView:(BOOL)view animated:(BOOL)animated;	// 0x30153955
// declared property getter: - (BOOL)showingDeleteConfirmation;	// 0x30090149
// declared property getter: - (BOOL)showsReorderControl;	// 0x300b15cd
- (int)style;	// 0x30091849
// converted property getter: - (id)tableBackgroundColor;	// 0x30102f79
// converted property getter: - (int)tableViewStyle;	// 0x3008bed1
// converted property getter: - (id)target;	// 0x3028b4c1
// converted property getter: - (id)text;	// 0x30289ba1
// converted property getter: - (int)textAlignment;	// 0x30289c81
// converted property getter: - (id)textColor;	// 0x30289d15
- (void)textFieldDidBecomeFirstResponder:(id)textField;	// 0x3028bcb1
// declared property getter: - (float)textFieldOffset;	// 0x301b3aa5
// declared property getter: - (id)textLabel;	// 0x300f5fa5
- (CGRect)textRectForContentRect:(CGRect)contentRect;	// 0x3028a9e9
// converted property getter: - (id)topShadowColor;	// 0x30101f25
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30152709
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30189ac5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30154ce1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x301c6971
// declared property getter: - (BOOL)wasSwiped;	// 0x300b15b5
- (void)willMoveToSuperview:(id)superview;	// 0x300934bd
- (void)willTransitionToState:(unsigned)state;	// 0x30157ee5
@end

