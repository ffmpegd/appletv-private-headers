/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UICalloutBarOverlay, UICalloutBarButton, NSString, NSMutableArray;

@interface UICalloutBar : UIView {
	id m_delegate;	// 48 = 0x30
	CGPoint m_pointBelowControls;	// 52 = 0x34
	CGPoint m_pointAboveControls;	// 60 = 0x3c
	CGPoint m_pointLeftOfControls;	// 68 = 0x44
	CGPoint m_pointRightOfControls;	// 76 = 0x4c
	CGPoint m_targetPoint;	// 84 = 0x54
	int m_targetDirection;	// 92 = 0x5c
	BOOL m_targetHorizontal;	// 96 = 0x60
	BOOL m_fadeAfterCommand;	// 97 = 0x61
	BOOL m_recalcVisibleItems;	// 98 = 0x62
	BOOL m_shouldAppear;	// 99 = 0x63
	int m_pageCount;	// 100 = 0x64
	int m_currentPage;	// 104 = 0x68
	BOOL m_supressesHorizontalMovement;	// 108 = 0x6c
	CGRect m_controlFrame;	// 112 = 0x70
	CGRect m_targetRect;	// 128 = 0x80
	CGRect m_supressesHorizontalMovementFrame;	// 144 = 0x90
	float m_supressedHorizontalMovementX;	// 160 = 0xa0
	int m_arrowDirection;	// 164 = 0xa4
	NSMutableArray *m_systemButtons;	// 168 = 0xa8
	NSMutableArray *m_extraButtons;	// 172 = 0xac
	UICalloutBarButton *m_nextButton;	// 176 = 0xb0
	UICalloutBarButton *m_previousButton;	// 180 = 0xb4
	NSMutableArray *m_rectsToEvade;	// 184 = 0xb8
	UICalloutBarOverlay *m_overlay;	// 188 = 0xbc
	double m_fadedTime;	// 192 = 0xc0
	id m_responderTarget;	// 200 = 0xc8
	NSArray *m_replacements;	// 204 = 0xcc
	NSArray *m_extraItems;	// 208 = 0xd0
	NSString *m_untruncatedString;	// 212 = 0xd4
	BOOL m_didPromptForReplace;	// 216 = 0xd8
	BOOL m_ignoringEvents;	// 217 = 0xd9
	BOOL m_showAllReplacements;	// 218 = 0xda
	BOOL m_ignoreFade;	// 219 = 0xdb
}
@property(assign, nonatomic) int arrowDirection;	// G=0x32fc6aed; S=0x32fc4a29; @synthesize=m_arrowDirection
@property(assign, nonatomic) CGRect controlFrame;	// G=0x3301fb8d; S=0x32fc5771; @synthesize=m_controlFrame
@property(assign, nonatomic) id delegate;	// G=0x32fc4ce9; S=0x32fc4ded; @synthesize=m_delegate
@property(copy, nonatomic) NSArray *extraItems;	// G=0x33021965; S=0x3301d85d; @synthesize=m_extraItems
@property(assign, nonatomic) CGPoint pointAboveControls;	// G=0x3318c21d; S=0x32fc4a5d; @synthesize=m_pointAboveControls
@property(assign, nonatomic) CGPoint pointBelowControls;	// G=0x3301fbc1; S=0x32fc4a49; @synthesize=m_pointBelowControls
@property(assign, nonatomic) CGPoint pointLeftOfControls;	// G=0x3318c239; S=0x3318c255; @synthesize=m_pointLeftOfControls
@property(assign, nonatomic) CGPoint pointRightOfControls;	// G=0x3318c269; S=0x3318c285; @synthesize=m_pointRightOfControls
@property(readonly, assign, nonatomic) NSArray *rectsToEvade;	// G=0x3301fb7d; @synthesize=m_rectsToEvade
@property(copy, nonatomic) NSArray *replacements;	// G=0x3318c2ed; S=0x32fc3ca1; @synthesize=m_replacements
@property(assign, nonatomic) UIResponder *responderTarget;	// G=0x3318c2cd; S=0x3318c2dd; @synthesize=m_responderTarget
@property(assign, nonatomic) BOOL showAllReplacements;	// G=0x3318c2fd; S=0x3318c30d; @synthesize=m_showAllReplacements
@property(assign, nonatomic) BOOL supressesHorizontalMovement;	// G=0x3301fa21; S=0x3318c351; @synthesize=m_supressesHorizontalMovement
@property(assign, nonatomic) int targetDirection;	// G=0x3301fbb1; S=0x32fc5761; @synthesize=m_targetDirection
@property(assign, nonatomic) BOOL targetHorizontal;	// G=0x3318c299; S=0x32fc4a39; @synthesize=m_targetHorizontal
@property(assign, nonatomic) CGPoint targetPoint;	// G=0x3301fbf1; S=0x3301fbdd; @synthesize=m_targetPoint
@property(assign, nonatomic) CGRect targetRect;	// G=0x3318c2a9; S=0x32fc4a0d; @synthesize=m_targetRect
@property(copy, nonatomic) NSString *untruncatedString;	// G=0x3318c31d; S=0x3318c32d; @synthesize=m_untruncatedString
@property(readonly, assign, nonatomic) BOOL visible;	// G=0x32fc4a71; 
+ (void)_releaseSharedInstance;	// 0x3318b2c5
+ (id)activeCalloutBar;	// 0x32ed41d1
+ (void)fadeSharedCalloutBar;	// 0x32ed4209
+ (void)hideSharedCalloutBar;	// 0x32f2ab0d
+ (id)sharedCalloutBar;	// 0x32fc3009
+ (BOOL)sharedCalloutBarIsVisible;	// 0x32fc6c41
- (id)initWithFrame:(CGRect)frame;	// 0x32fc3065
- (void)_fadeAfterCommand:(SEL)command;	// 0x330214a5
- (void)_showNextItems:(id)items;	// 0x3318b459
- (void)_showPreviousItems:(id)items;	// 0x3318b429
- (BOOL)_updateVisibleItemsAnimated:(BOOL)animated;	// 0x32fc4dfd
- (void)addRectToEvade:(CGRect)evade;	// 0x32fc41f9
- (void)appear;	// 0x32fc4add
- (void)appearAnimationDidStop:(id)appearAnimation finished:(id)finished context:(void *)context;	// 0x33021215
// declared property getter: - (int)arrowDirection;	// 0x32fc6aed
- (void)buttonHighlighted:(id)highlighted highlighted:(BOOL)highlighted2;	// 0x32fc60c9
- (void)buttonPressed:(id)pressed;	// 0x33022341
- (BOOL)calculateControlFrameForCalloutSize:(CGSize)calloutSize below:(BOOL)below;	// 0x3301f745
- (BOOL)calculateControlFrameForCalloutSize:(CGSize)calloutSize right:(BOOL)right;	// 0x3318b4d9
- (BOOL)calculateControlFrameInsideTargetRect:(CGSize)rect;	// 0x3318b645
- (void)clearEvadeRects;	// 0x32fc4095
- (void)clearReplacements;	// 0x32fc6c15
- (void)clearSupressesHorizontalMovementFrame;	// 0x3302167d
- (void)configureButtons:(float)buttons;	// 0x3301fc0d
// declared property getter: - (CGRect)controlFrame;	// 0x3301fb8d
- (void)dealloc;	// 0x3318b315
// declared property getter: - (id)delegate;	// 0x32fc4ce9
- (void)expandAfterAlertOrBecomeActive:(id)active;	// 0x3318b415
// declared property getter: - (id)extraItems;	// 0x33021965
- (void)fade;	// 0x33021479
- (void)flattenForAlertOrResignActive:(id)alertOrResignActive;	// 0x3318b401
- (BOOL)hasReplacements;	// 0x32fc61a1
- (void)hide;	// 0x3318c0a1
- (void)hideAnimationDidStop:(id)hideAnimation finished:(id)finished context:(void *)context;	// 0x330216c1
// declared property getter: - (CGPoint)pointAboveControls;	// 0x3318c21d
// declared property getter: - (CGPoint)pointBelowControls;	// 0x3301fbc1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x330213ed
// declared property getter: - (CGPoint)pointLeftOfControls;	// 0x3318c239
// declared property getter: - (CGPoint)pointRightOfControls;	// 0x3318c269
- (BOOL)recentlyFaded;	// 0x32fc70c1
- (BOOL)rectClear:(CGRect)clear;	// 0x3301fa31
// declared property getter: - (id)rectsToEvade;	// 0x3301fb7d
- (void)removeFromSuperview;	// 0x3318b499
// declared property getter: - (id)replacements;	// 0x3318c2ed
// declared property getter: - (id)responderTarget;	// 0x3318c2cd
// declared property setter: - (void)setArrowDirection:(int)direction;	// 0x32fc4a29
// declared property setter: - (void)setControlFrame:(CGRect)frame;	// 0x32fc5771
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32fc4ded
// declared property setter: - (void)setExtraItems:(id)items;	// 0x3301d85d
- (BOOL)setFrameForSize:(CGSize)size;	// 0x3301f371
// declared property setter: - (void)setPointAboveControls:(CGPoint)controls;	// 0x32fc4a5d
// declared property setter: - (void)setPointBelowControls:(CGPoint)controls;	// 0x32fc4a49
// declared property setter: - (void)setPointLeftOfControls:(CGPoint)controls;	// 0x3318c255
// declared property setter: - (void)setPointRightOfControls:(CGPoint)controls;	// 0x3318c285
// declared property setter: - (void)setReplacements:(id)replacements;	// 0x32fc3ca1
// declared property setter: - (void)setResponderTarget:(id)target;	// 0x3318c2dd
// declared property setter: - (void)setShowAllReplacements:(BOOL)replacements;	// 0x3318c30d
// declared property setter: - (void)setSupressesHorizontalMovement:(BOOL)movement;	// 0x3318c351
// declared property setter: - (void)setTargetDirection:(int)direction;	// 0x32fc5761
// declared property setter: - (void)setTargetHorizontal:(BOOL)horizontal;	// 0x32fc4a39
// declared property setter: - (void)setTargetPoint:(CGPoint)point;	// 0x3301fbdd
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x32fc4a0d
- (void)setTargetRect:(CGRect)rect arrowDirection:(int)direction;	// 0x3318bd2d
- (void)setTargetRect:(CGRect)rect pointBelowControls:(CGPoint)controls pointAboveControls:(CGPoint)controls3;	// 0x32fc4911
- (void)setTargetRect:(CGRect)rect pointLeftOfControls:(CGPoint)controls pointRightOfControls:(CGPoint)controls3;	// 0x3318bc31
// declared property setter: - (void)setUntruncatedString:(id)string;	// 0x3318c32d
- (void)show;	// 0x3318beed
// declared property getter: - (BOOL)showAllReplacements;	// 0x3318c2fd
- (float)supressHorizontalXMovementIfNeededForPoint:(CGPoint)point proposedX:(float)x;	// 0x3301f985
// declared property getter: - (BOOL)supressesHorizontalMovement;	// 0x3301fa21
// declared property getter: - (int)targetDirection;	// 0x3301fbb1
- (id)targetForAction:(SEL)action;	// 0x32fc61e1
// declared property getter: - (BOOL)targetHorizontal;	// 0x3318c299
// declared property getter: - (CGPoint)targetPoint;	// 0x3301fbf1
// declared property getter: - (CGRect)targetRect;	// 0x3318c2a9
- (int)textEffectsVisibilityLevel;	// 0x32fc4acd
- (CGRect)textEffectsWindowBoundsWithoutStatusBar;	// 0x32fc6b0d
// declared property getter: - (id)untruncatedString;	// 0x3318c31d
- (void)update;	// 0x3318c1d5
- (void)updateAnimated:(BOOL)animated;	// 0x3318c1f9
- (void)updateAvailableButtons;	// 0x32fc578d
- (void)updateForCurrentPage;	// 0x33020c21
// declared property getter: - (BOOL)visible;	// 0x32fc4a71
@end

