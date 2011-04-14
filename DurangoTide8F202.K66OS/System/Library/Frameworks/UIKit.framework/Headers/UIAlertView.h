/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIToolbar, NSMutableArray, UIWindow, UILabel, NSString;
@protocol UIAlertViewDelegate;

@interface UIAlertView : UIView {
@private
	id<UIAlertViewDelegate> _delegate;	// 44 = 0x2c
	UILabel *_titleLabel;	// 48 = 0x30
	UILabel *_subtitleLabel;	// 52 = 0x34
	UILabel *_bodyTextLabel;	// 56 = 0x38
	UILabel *_taglineTextLabel;	// 60 = 0x3c
	float _startY;	// 64 = 0x40
	CGPoint _center;	// 68 = 0x44
	id _context;	// 76 = 0x4c
	int _cancelButton;	// 80 = 0x50
	int _defaultButton;	// 84 = 0x54
	int _firstOtherButton;	// 88 = 0x58
	UIToolbar *_toolbar;	// 92 = 0x5c
	UIWindow *_originalWindow;	// 96 = 0x60
	UIWindow *_dimWindow;	// 100 = 0x64
	int _suspendTag;	// 104 = 0x68
	int _dismissButtonIndex;	// 108 = 0x6c
	float _bodyTextHeight;	// 112 = 0x70
	NSMutableArray *_buttons;	// 116 = 0x74
	NSMutableArray *_textFields;	// 120 = 0x78
	UIView *_keyboard;	// 124 = 0x7c
	UIView *_table;	// 128 = 0x80
	UIView *_dimView;	// 132 = 0x84
	UIView *_backgroundImageView;	// 136 = 0x88
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned includesCancel : 1;
		unsigned useUndoStyle : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned forceHorizontalButtonsLayout : 1;
		unsigned suppressKeyboardOnPopup : 1;
		unsigned keyboardShowing : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned manualKeyboardVisible : 1;
		unsigned rotatingManualKeybaord : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned forceKeyboardUse : 1;
		unsigned cancelWhenDoneAnimating : 1;
	} _modalViewFlags;	// 140 = 0x8c
}
@property(assign) int alertSheetStyle;	// G=0x30854cf9; S=0x30855561; converted property
@property(assign) BOOL blocksInteraction;	// G=0x30854dad; S=0x30854d85; converted property
@property(retain) id bodyText;	// G=0x30856475; S=0x306b34b5; converted property
@property(readonly, retain) UILabel *bodyTextLabel;	// G=0x30854cb1; converted property
@property(readonly, retain) NSMutableArray *buttons;	// G=0x306b3db5; converted property
@property(assign, nonatomic) int cancelButtonIndex;	// G=0x306b8e11; S=0x306b3dc5; 
@property(retain) id context;	// G=0x306b8db9; S=0x306b3dfd; converted property
@property(retain) id defaultButton;	// G=0x30855e15; S=0x30855e4d; converted property
@property(assign) int defaultButtonIndex;	// G=0x30854e31; S=0x30854e1d; converted property
@property(assign, nonatomic) id delegate;	// G=0x30854e0d; S=0x306b373d; 
@property(retain) id destructiveButton;	// G=0x30855da5; S=0x30855ddd; converted property
@property(assign) BOOL dimsBackground;	// G=0x30854d4d; S=0x30854d29; converted property
@property(readonly, assign, nonatomic) int firstOtherButtonIndex;	// G=0x306b3dd9; 
@property(assign) BOOL forceHorizontalButtonsLayout;	// G=0x30854d11; S=0x306b326d; converted property
@property(assign) BOOL groupsTextFields;	// G=0x30854b65; S=0x30854b7d; converted property
@property(readonly, retain) UIView *keyboard;	// G=0x3085713d; converted property
@property(copy, nonatomic) NSString *message;	// G=0x308552d1; S=0x306b34a1; 
@property(readonly, assign, nonatomic) int numberOfButtons;	// G=0x30855281; 
@property(assign) int numberOfRows;	// G=0x30854ce5; S=0x306b3251; converted property
@property(assign) BOOL runsModal;	// G=0x30854ddd; S=0x30854dc1; converted property
@property(assign) BOOL showsOverSpringBoardAlerts;	// G=0x30854c55; S=0x30854c39; converted property
@property(retain) id subtitle;	// G=0x30856499; S=0x308564b9; converted property
@property(assign) int suspendTag;	// G=0x30854d75; S=0x30854d65; converted property
@property(readonly, retain) UIView *table;	// G=0x30859409; converted property
@property(assign) BOOL tableShouldShowMinimumContent;	// G=0x30854c0d; S=0x30854bf1; converted property
@property(readonly, retain) UILabel *taglineTextLabel;	// G=0x30854cc1; converted property
@property(copy, nonatomic) NSString *title;	// G=0x306b3305; S=0x306b3289; 
@property(readonly, retain) UILabel *titleLabel;	// G=0x30854ca1; converted property
@property(assign) int titleMaxLineCount;	// G=0x30854b99; S=0x308563d1; converted property
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x30855259; 
+ (id)_alertWindow;	// 0x305d1e11
+ (id)_popupAlertBackground:(BOOL)background;	// 0x306b7f49
+ (void)applyTransformToAllAlerts:(CGAffineTransform)allAlerts;	// 0x30856771
+ (CGSize)minimumSize;	// 0x3085725d
- (id)initWithFrame:(CGRect)frame;	// 0x306b3101
- (id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;	// 0x308565fd
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate cancelButtonTitle:(id)title4 otherButtonTitles:(id)titles;	// 0x306b2fb1
- (id)initWithTitle:(id)title message:(id)message delegate:(id)delegate defaultButton:(id)button cancelButton:(id)button5 otherButtons:(id)buttons;	// 0x30857d7d
- (id)_addButtonWithTitle:(id)title;	// 0x30855d61
- (id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;	// 0x306b3a5d
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x306b3429
- (void)_adjustLabelFontSizes;	// 0x30855931
- (void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;	// 0x308575dd
- (void)_alertSheetTextFieldDidEndEditing:(id)_alertSheetTextField;	// 0x30856011
- (void)_alertSheetTextFieldDidStartEditing:(id)_alertSheetTextField;	// 0x30855f95
- (void)_alertSheetTextFieldReturn:(id)aReturn;	// 0x30855e85
- (void)_appSuspended:(id)suspended;	// 0x30855681
- (float)_bottomVerticalInset;	// 0x306b8175
- (void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;	// 0x306b87f1
- (void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;	// 0x306b8721
- (void)_buttonClicked:(id)clicked;	// 0x306b8c0d
- (float)_buttonHeight;	// 0x306b7fb9
- (BOOL)_canShowAlerts;	// 0x306b4d8d
- (void)_cancelAnimated:(BOOL)animated;	// 0x30855a5d
- (void)_cleanupAfterPopupAnimation;	// 0x306b8805
- (void)_cleanupKBWatcher;	// 0x3085750d
- (void)_createBodyTextLabelIfNeeded;	// 0x306b3535
- (void)_createSubtitleLabelIfNeeded;	// 0x30858f69
- (void)_createTaglineTextLabelIfNeeded;	// 0x30858d7d
- (void)_createTitleLabelIfNeeded;	// 0x306b3329
- (int)_currentOrientation;	// 0x306b4f55
- (id)_dimView;	// 0x30856ad5
- (BOOL)_dimsBackground;	// 0x30854c85
- (void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;	// 0x306b862d
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x30857cfd
- (BOOL)_isAnimating;	// 0x30854c6d
- (void)_jiggleStage1AnimationDidStop:(id)_jiggleStage1Animation finished:(id)finished;	// 0x3085703d
- (void)_jiggleStage2AnimationDidStop:(id)_jiggleStage2Animation finished:(id)finished;	// 0x30856f21
- (void)_jiggleStage3AnimationDidStop:(id)_jiggleStage3Animation finished:(id)finished;	// 0x30856e05
- (void)_jiggleStage4AnimationDidStop:(id)_jiggleStage4Animation finished:(id)finished;	// 0x30856ce9
- (void)_jiggleStage5AnimationDidStop:(id)_jiggleStage5Animation finished:(id)finished;	// 0x30856bcd
- (void)_jiggleStage6AnimationDidStop:(id)_jiggleStage6Animation finished:(id)finished;	// 0x30855bb5
- (void)_keyboardDidHide:(id)_keyboard;	// 0x30855205
- (void)_keyboardHiddingAnimationDidStop:(id)_keyboardHiddingAnimation finished:(id)finished;	// 0x30855c45
- (void)_keyboardWillHide:(id)_keyboard;	// 0x30857905
- (void)_keyboardWillShow:(id)_keyboard;	// 0x306b9439
- (void)_layoutIfNeeded;	// 0x306b4ded
- (void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;	// 0x306b4fcd
- (BOOL)_manualKeyboardIsVisible;	// 0x30854c21
- (float)_maxHeight;	// 0x306b819d
- (BOOL)_needsKeyboard;	// 0x306b4db1
- (void)_performPopoutAnimationAnimated:(BOOL)animated;	// 0x306b9115
- (void)_performPopup:(BOOL)popup;	// 0x30855be9
- (void)_performPopup:(BOOL)popup animationType:(int)type;	// 0x306b4035
- (void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;	// 0x306b9729
- (void)_prepareForDisplay;	// 0x30855395
- (void)_prepareToBeReplaced;	// 0x30854df5
- (void)_presentSheetFromView:(id)view above:(BOOL)above;	// 0x30859a09
- (void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;	// 0x30858125
- (void)_removeAlertWindowOrShowAnOldAlert;	// 0x306b9a59
- (void)_repopup;	// 0x30855b2d
- (void)_repopupNoAnimation;	// 0x30855b71
- (void)_rotatingAnimationDidStop:(id)_rotatingAnimation;	// 0x30855a49
- (void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;	// 0x30856591
- (void)_setFirstOtherButtonIndex:(int)index;	// 0x306b3de9
- (void)_setTextFieldsHidden:(BOOL)hidden;	// 0x30857299
- (void)_setupKBWatcher;	// 0x308573d9
- (void)_setupTitleStyle;	// 0x306b7c41
- (BOOL)_shouldOrderInAutomaticKeyboard;	// 0x30855c69
- (void)_showKeyboard:(BOOL)keyboard animated:(BOOL)animated;	// 0x30858985
- (void)_showManualKBIfNecessary;	// 0x30855c01
- (void)_slideSheetOut:(BOOL)anOut;	// 0x30857ea1
- (void)_temporarilyHideAnimated:(BOOL)animated;	// 0x30855ac5
- (float)_titleHorizontalInset;	// 0x306b8015
- (float)_titleVerticalBottomInset;	// 0x306b80d9
- (float)_titleVerticalTopInset;	// 0x306b803d
- (void)_truncateViewHeight:(id)height toFitInFrame:(CGRect)frame withMinimumHeight:(float)minimumHeight;	// 0x30857b11
- (void)_updateFrameForDisplay;	// 0x306b82f9
- (void)_updateKeyboardStateForPreviousResponder:(id)previousResponder;	// 0x30855f59
- (void)_useUndoStyle:(BOOL)style;	// 0x30854e41
- (void)_willRotateKeyboard;	// 0x30854e5d
- (int)addButtonWithTitle:(id)title;	// 0x306b3a2d
- (id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;	// 0x30855d41
- (id)addButtonWithTitle:(id)title label:(id)label;	// 0x30855d81
- (id)addTextFieldWithValue:(id)value label:(id)label;	// 0x308560c5
// converted property getter: - (int)alertSheetStyle;	// 0x30854cf9
- (CGSize)backgroundSize;	// 0x30856aad
- (BOOL)becomeFirstResponder;	// 0x306b8b8d
// converted property getter: - (BOOL)blocksInteraction;	// 0x30854dad
- (int)bodyMaxLineCount;	// 0x30854bb1
// converted property getter: - (id)bodyText;	// 0x30856475
// converted property getter: - (id)bodyTextLabel;	// 0x30854cb1
- (id)buttonAtIndex:(int)index;	// 0x30855d01
- (int)buttonCount;	// 0x30855d21
- (id)buttonTitleAtIndex:(int)index;	// 0x308552a1
// converted property getter: - (id)buttons;	// 0x306b3db5
- (BOOL)canBecomeFirstResponder;	// 0x306b8bc9
// declared property getter: - (int)cancelButtonIndex;	// 0x306b8e11
// converted property getter: - (id)context;	// 0x306b8db9
- (void)dealloc;	// 0x306b9e71
// converted property getter: - (id)defaultButton;	// 0x30855e15
// converted property getter: - (int)defaultButtonIndex;	// 0x30854e31
// declared property getter: - (id)delegate;	// 0x30854e0d
// converted property getter: - (id)destructiveButton;	// 0x30855da5
// converted property getter: - (BOOL)dimsBackground;	// 0x30854d4d
- (void)dismiss;	// 0x306b8dc9
- (void)dismissAnimated:(BOOL)animated;	// 0x306b8de1
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x306b8e21
// declared property getter: - (int)firstOtherButtonIndex;	// 0x306b3dd9
// converted property getter: - (BOOL)forceHorizontalButtonsLayout;	// 0x30854d11
// converted property getter: - (BOOL)groupsTextFields;	// 0x30854b65
- (BOOL)isBodyTextTruncated;	// 0x30854cd1
// declared property getter: - (BOOL)isVisible;	// 0x30855259
// converted property getter: - (id)keyboard;	// 0x3085713d
- (void)layout;	// 0x306b52c5
- (void)layoutAnimated:(BOOL)animated;	// 0x306b5039
// declared property getter: - (id)message;	// 0x308552d1
// declared property getter: - (int)numberOfButtons;	// 0x30855281
- (int)numberOfLinesInTitle;	// 0x30859541
// converted property getter: - (int)numberOfRows;	// 0x30854ce5
- (void)popupAlertAnimated:(BOOL)animated;	// 0x308558f9
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type;	// 0x306b3e69
- (void)popupAlertAnimated:(BOOL)animated animationType:(int)type atOffset:(float)offset;	// 0x306b3e91
- (void)popupAlertAnimated:(BOOL)animated atOffset:(float)offset;	// 0x30855911
- (void)presentSheetFromAboveView:(id)aboveView;	// 0x308558c9
- (void)presentSheetFromBehindView:(id)behindView;	// 0x308558e1
- (void)presentSheetFromButtonBar:(id)buttonBar;	// 0x308554c9
- (void)presentSheetInView:(id)view;	// 0x308598b9
- (void)presentSheetToAboveView:(id)aboveView;	// 0x30859685
- (void)replaceAlert:(id)alert;	// 0x308552e5
- (BOOL)requiresPortraitOrientation;	// 0x306b4fc9
- (BOOL)resignFirstResponder;	// 0x306b8d79
// converted property getter: - (BOOL)runsModal;	// 0x30854ddd
// converted property setter: - (void)setAlertSheetStyle:(int)style;	// 0x30855561
// converted property setter: - (void)setBlocksInteraction:(BOOL)interaction;	// 0x30854d85
// converted property setter: - (void)setBodyText:(id)text;	// 0x306b34b5
- (void)setBodyTextMaxLineCount:(int)count;	// 0x30856309
// declared property setter: - (void)setCancelButtonIndex:(int)index;	// 0x306b3dc5
// converted property setter: - (void)setContext:(id)context;	// 0x306b3dfd
// converted property setter: - (void)setDefaultButton:(id)button;	// 0x30855e4d
// converted property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x30854e1d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x306b373d
// converted property setter: - (void)setDestructiveButton:(id)button;	// 0x30855ddd
- (void)setDimView:(id)view;	// 0x30855891
// converted property setter: - (void)setDimsBackground:(BOOL)background;	// 0x30854d29
// converted property setter: - (void)setForceHorizontalButtonsLayout:(BOOL)layout;	// 0x306b326d
// converted property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x30854b7d
- (void)setKeyboardShowsOnPopup:(BOOL)popup;	// 0x30854bcd
// declared property setter: - (void)setMessage:(id)message;	// 0x306b34a1
// converted property setter: - (void)setNumberOfRows:(int)rows;	// 0x306b3251
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x30854dc1
// converted property setter: - (void)setShowsOverSpringBoardAlerts:(BOOL)alerts;	// 0x30854c39
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x308564b9
// converted property setter: - (void)setSuspendTag:(int)tag;	// 0x30854d65
// converted property setter: - (void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;	// 0x30854bf1
- (void)setTaglineText:(id)text;	// 0x30856525
// declared property setter: - (void)setTitle:(id)title;	// 0x306b3289
// converted property setter: - (void)setTitleMaxLineCount:(int)count;	// 0x308563d1
- (void)show;	// 0x306b3e39
- (void)showWithAnimationType:(int)animationType;	// 0x306b3e51
// converted property getter: - (BOOL)showsOverSpringBoardAlerts;	// 0x30854c55
// converted property getter: - (id)subtitle;	// 0x30856499
// converted property getter: - (int)suspendTag;	// 0x30854d75
// converted property getter: - (id)table;	// 0x30859409
// converted property getter: - (BOOL)tableShouldShowMinimumContent;	// 0x30854c0d
- (id)tableView;	// 0x30859135
// converted property getter: - (id)taglineTextLabel;	// 0x30854cc1
- (id)textField;	// 0x30856041
- (id)textFieldAtIndex:(int)index;	// 0x308560a1
- (int)textFieldCount;	// 0x3085607d
// declared property getter: - (id)title;	// 0x306b3305
// converted property getter: - (id)titleLabel;	// 0x30854ca1
// converted property getter: - (int)titleMaxLineCount;	// 0x30854b99
- (CGRect)titleRect;	// 0x30856a75
@end
