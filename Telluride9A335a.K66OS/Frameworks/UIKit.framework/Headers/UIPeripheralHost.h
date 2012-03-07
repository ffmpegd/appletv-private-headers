/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <NSObject.h> // Unknown library
#import "UIKeyboardSplitTransitionDelegate.h"

@class UIPeripheralHostView, UIPanGestureRecognizer, UIInputViewTransition, UIResponder, UIKeyboardAutomatic, UIKeyboardRotationState, CADisplayLink, NSMutableArray, UIKeyboard, UIPeripheralHostState, UIInputViewPostPinningReloadState, UIKeyboardCornerView, NSMutableSet, UIView, UIInputViewSet;

@interface UIPeripheralHost : NSObject <UIKeyboardSplitTransitionDelegate, UIGestureRecognizerDelegate> {
	UIPeripheralHostView *_hostView;	// 4 = 0x4
	UIKeyboardAutomatic *_automaticKeyboard;	// 8 = 0x8
	UIKeyboardCornerView *_cornerViewLeft;	// 12 = 0xc
	UIKeyboardCornerView *_cornerViewRight;	// 16 = 0x10
	BOOL _automaticAppearanceEnabled;	// 20 = 0x14
	BOOL _automaticAppearanceEnabledInternal;	// 21 = 0x15
	BOOL _automaticKeyboardAnimatingIn;	// 22 = 0x16
	BOOL _automaticKeyboardAnimatingOut;	// 23 = 0x17
	int _automaticKeyboardState;	// 24 = 0x18
	int _ignoringReloadInputViews;	// 28 = 0x1c
	BOOL _suppresingNotifications;	// 32 = 0x20
	BOOL _useHideNotificationsWhenNotVisible;	// 33 = 0x21
	BOOL _reloadInputViewsForcedIsAllowed;	// 34 = 0x22
	int _nextAutomaticOrderInDirection;	// 36 = 0x24
	int _targetRotatedOrientation;	// 40 = 0x28
	BOOL _isTranslating;	// 44 = 0x2c
	BOOL _isSplitting;	// 45 = 0x2d
	BOOL _isUndocked;	// 46 = 0x2e
	BOOL _splitLockState;	// 47 = 0x2f
	UIPanGestureRecognizer *_translateRecognizer;	// 48 = 0x30
	CADisplayLink *_displayLink;	// 52 = 0x34
	double _lastBounceTime;	// 56 = 0x38
	double _lastTranslationNotificationTime;	// 64 = 0x40
	CGAffineTransform _targetTransform;	// 72 = 0x48
	CGAffineTransform _initialTransform;	// 96 = 0x60
	CGPoint _velocity;	// 120 = 0x78
	NSMutableArray *_dropShadowViews;	// 128 = 0x80
	int _shadowStyle;	// 132 = 0x84
	BOOL _wasBackgroundSplit;	// 136 = 0x88
	CGRect _previousShadowFrameLeft;	// 140 = 0x8c
	CGRect _previousShadowFrameRight;	// 156 = 0x9c
	id _bounceCompletionBlock;	// 172 = 0xac
	float m_keyboardAttachedViewHeight;	// 176 = 0xb0
	CGRect _lastKnownIVFrame;	// 180 = 0xb4
	CGRect _lastKnownIAVFrame;	// 196 = 0xc4
	float _splitHeightDelta;	// 212 = 0xd4
	NSMutableArray *_animationStyleStack;	// 216 = 0xd8
	BOOL _hasCustomAnimationProperties;	// 220 = 0xdc
	double _nextAutomaticOrderInDuration;	// 224 = 0xe0
	double _lastAutomaticKeyboardDuration;	// 232 = 0xe8
	int _disableAnimationsCount;	// 240 = 0xf0
	NSMutableArray *_targetStateStack;	// 244 = 0xf4
	UIInputViewSet *_inputViewSet;	// 248 = 0xf8
	UIResponder *_responder;	// 252 = 0xfc
	NSMutableSet *_pinningResponders;	// 256 = 0x100
	BOOL _ignoresPinning;	// 260 = 0x104
	UIInputViewPostPinningReloadState *_postPinningReloadState;	// 264 = 0x108
	BOOL _animationFencingEnabled;	// 268 = 0x10c
	BOOL _interfaceAutorotationDisabled;	// 269 = 0x10d
	UIKeyboardRotationState *_rotationState;	// 272 = 0x110
	UIInputViewTransition *_currentTransition;	// 276 = 0x114
	UIResponder *_selfHostingTrigger;	// 280 = 0x118
	BOOL _didFadeInputViews;	// 284 = 0x11c
	BOOL _blockedReloadInputViewsForDictation;	// 285 = 0x11d
	BOOL _animateCornerRefresh;	// 286 = 0x11e
	BOOL _showCorners;	// 287 = 0x11f
}
@property(retain, nonatomic) UIInputViewSet *_inputViews;	// G=0x33c9503d; S=0x339bf9dd; @synthesize=_inputViewSet
@property(assign, nonatomic) BOOL animationFencingEnabled;	// G=0x33a5a7d9; S=0x33c9502d; @synthesize=_animationFencingEnabled
@property(assign, nonatomic) BOOL animationFencingEnabled;	// @dynamic
@property(readonly, assign, nonatomic) BOOL animationsEnabled;	// G=0x33980669; 
@property(assign, nonatomic) BOOL automaticAppearanceEnabled;	// G=0x339a282d; S=0x33a4c625; @synthesize=_automaticAppearanceEnabled
@property(assign, nonatomic) BOOL automaticAppearanceInternalEnabled;	// G=0x33c95795; S=0x33a5fab1; 
@property(readonly, assign, nonatomic) BOOL automaticAppearanceReallyEnabled;	// G=0x33980305; 
@property(readonly, assign, nonatomic) UIKeyboardAutomatic *automaticKeyboard;	// G=0x33a6545d; 
@property(readonly, assign, nonatomic) UIKeyboard *automaticKeyboard;
@property(assign, nonatomic) int currentState;	// G=0x33c9504d; S=0x339febf1; @synthesize=_automaticKeyboardState
@property(retain, nonatomic) UIInputViewTransition *currentTransition;	// G=0x33980b19; S=0x339feda1; @synthesize=_currentTransition
@property(readonly, assign, nonatomic) NSMutableArray *dropShadowViews;	// G=0x33a01cc1; 
@property(assign, nonatomic) BOOL ignoresPinning;	// G=0x33ab4431; S=0x33c95781; 
@property(readonly, assign, nonatomic, getter=_isIgnoringReloadInputViews) BOOL ignoringReloadInputViews;	// G=0x33980575; 
@property(retain, nonatomic) UIInputViewSet *inputViews;	// G=0x33980a7d; S=0x33980635; 
@property(readonly, assign) BOOL isSplitting;	// G=0x33a98281; converted property
@property(readonly, assign) BOOL isTranslating;	// G=0x339ff6e1; converted property
@property(readonly, assign) BOOL isUndocked;	// G=0x339f0c31; converted property
@property(readonly, assign, nonatomic) BOOL keyClicksEnabled;	// G=0x33c96b79; 
@property(readonly, assign) float keyboardAttachedViewHeight;	// G=0x33c95e3d; converted property
@property(retain, nonatomic) UIInputViewPostPinningReloadState *postPinningReloadState;	// G=0x3399d875; S=0x33980551; @synthesize=_postPinningReloadState
@property(readonly, assign, nonatomic) UIResponder *responder;	// @dynamic
@property(retain, nonatomic) UIResponder *responder;	// G=0x33980091; S=0x33980611; @synthesize=_responder
@property(retain, nonatomic) UIKeyboardRotationState *rotationState;	// G=0x33ad34a9; S=0x33c95009; @synthesize=_rotationState
@property(retain, nonatomic) UIResponder *selfHostingTrigger;	// G=0x33a98bc5; S=0x339805ed; @synthesize=_selfHostingTrigger
@property(retain, nonatomic) UIPeripheralHostState *targetState;	// G=0x33a74aa1; S=0x33a9aec5; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x339fce15; 
+ (void)_releaseSharedInstance;	// 0x33c90925
+ (CGRect)screenBoundsInAppOrientation;	// 0x33c90331
+ (id)sharedInstance;	// 0x3397f9c1
+ (CGRect)visiblePeripheralFrame;	// 0x33a74569
- (id)init;	// 0x339bf731
- (void)_beginDisablingAnimations;	// 0x339d90a1
- (void)_beginIgnoringReloadInputViews;	// 0x3397fa09
- (void)_beginPinningInputViewsOnBehalfOfResponder:(id)responder;	// 0x33ab440d
- (id)_currentInputView;	// 0x33c96b51
- (void)_endDisablingAnimations;	// 0x339d9489
- (void)_endIgnoringReloadInputViews;	// 0x3397fbb5
- (BOOL)_hasPostPinningReloadState;	// 0x33add9c5
- (BOOL)_hostFirstResponder:(id)responder onBehalfOfResponder:(id)responder2;	// 0x33c96bc1
- (CGRect)_inputViewRectToAvoid;	// 0x33a84801
// declared property getter: - (id)_inputViews;	// 0x33c9503d
- (id)_inputViewsForResponder:(id)responder;	// 0x339800a5
// declared property getter: - (BOOL)_isIgnoringReloadInputViews;	// 0x33980575
- (BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)responder;	// 0x33a57e65
- (BOOL)_isSelfHosting;	// 0x339d9425
- (BOOL)_isSuppressedByManualKeyboard;	// 0x33a74789
- (BOOL)_isTrackingResponder:(id)responder;	// 0x3399d80d
- (void)_performRefreshCorners;	// 0x33a058cd
- (void)_reloadInputViewsForResponder:(id)responder;	// 0x3397fcbd
- (void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)responder;	// 0x339d92f9
- (void)_setIgnoresPinning:(BOOL)pinning allowImmediateReload:(BOOL)reload;	// 0x339d902d
- (void)_setReloadInputViewsForcedIsAllowed:(BOOL)allowed;	// 0x33c95771
- (id)_sizingWindowForOrientation:(int)orientation;	// 0x339fe109
- (BOOL)_somePartOfKeyboardIsOnScreen:(id)keyboardIsOnScreen;	// 0x33c92bc5
- (void)_stopPinningInputViewsOnBehalfOfResponder:(id)responder;	// 0x33a57ec1
- (void)_updateBounceAnimation:(id)animation;	// 0x33c91a49
- (void)adjustHostViewForTransitionCompletion:(id)transitionCompletion;	// 0x33a016f9
- (void)adjustHostViewForTransitionEndFrame:(id)transitionEndFrame;	// 0x33a0151d
- (void)adjustHostViewForTransitionStartFrame:(id)transitionStartFrame;	// 0x339ff815
- (CGPoint)adjustedPersistentOffset;	// 0x33c9588d
// declared property getter: - (BOOL)animationFencingEnabled;	// 0x33a5a7d9
// declared property getter: - (BOOL)animationsEnabled;	// 0x33980669
// declared property getter: - (BOOL)automaticAppearanceEnabled;	// 0x339a282d
// declared property getter: - (BOOL)automaticAppearanceInternalEnabled;	// 0x33c95795
// declared property getter: - (BOOL)automaticAppearanceReallyEnabled;	// 0x33980305
// declared property getter: - (id)automaticKeyboard;	// 0x33a6545d
- (void)bounceAnimationDidFinish;	// 0x33c917b9
- (UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(int)orientation outDirection:(int)direction forTransition:(int)transition;	// 0x33c95105
- (void)completeCurrentTransitionIfNeeded;	// 0x339ee355
- (id)computeTransitionForInputViews:(id)inputViews fromOrientation:(int)orientation toOrientation:(int)orientation3;	// 0x33c96a11
- (id)computeTransitionFromInputViews:(id)inputViews toInputViews:(id)inputViews2 animationStyle:(id)style;	// 0x339fce25
- (id)containerWindow;	// 0x339fe299
- (void)createAutomaticKeyboardIfNeeded;	// 0x33a65485
- (void)createCornerViews;	// 0x33a00399
- (void)createHostViewIfNeeded;	// 0x33a000b5
- (int)currentState;	// 0x339d9121
// declared property getter: - (int)currentState;	// 0x33c9504d
// declared property getter: - (id)currentTransition;	// 0x33980b19
- (void)dealloc;	// 0x33c904bd
- (void)disableInterfaceAutorotation:(BOOL)autorotation;	// 0x33c91cfd
- (CGRect)displayRectForViewSet:(id)viewSet orientation:(int)orientation position:(int)position;	// 0x339fdda9
- (void)dock;	// 0x33c91311
// declared property getter: - (id)dropShadowViews;	// 0x33a01cc1
- (void)executeTransition:(id)transition;	// 0x339fe5b5
- (void)fadeInInputViews:(BOOL)inputViews;	// 0x33c913d1
- (void)fadeInputViewsIfNeeded;	// 0x33c9149d
- (void)finishRotation;	// 0x33c92d2d
- (void)finishRotationOfKeyboard:(id)keyboard;	// 0x33c94231
- (void)finishSplitTransition:(id)transition;	// 0x33c915c9
- (void)forceOrderInAutomatic;	// 0x33b14b41
- (void)forceOrderInAutomaticAnimated:(BOOL)automaticAnimated;	// 0x33c946bd
- (void)forceOrderInAutomaticFromDirection:(int)direction withDuration:(double)duration;	// 0x33af0a81
- (void)forceOrderOutAutomatic;	// 0x33b15c61
- (void)forceOrderOutAutomaticAnimated:(BOOL)animated;	// 0x33c94719
- (void)forceOrderOutAutomaticToDirection:(int)direction withDuration:(double)duration;	// 0x33a4c6ad
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x33c927c1
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x33c927c5
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33c927c9
- (double)getLastAutomaticDuration;	// 0x33c95e25
- (float)getVerticalOverlapForView:(id)view usingKeyboardInfo:(id)info;	// 0x33abbca5
- (void)handleTranslateDetectedFinished:(id)finished;	// 0x33c91da9
- (BOOL)hasCustomInputView;	// 0x33a9a475
- (BOOL)hasDictationKeyboard;	// 0x33c90689
// declared property getter: - (BOOL)ignoresPinning;	// 0x33ab4431
- (void)implBoundsHeightChangeDoneForGeometry:(UIPeripheralAnimationGeometry)geometry;	// 0x33c96515
- (void)initializeTranslateGestureRecognizer;	// 0x33c907c5
- (BOOL)inputViewKeyboardIsSplit;	// 0x339ff701
// declared property getter: - (id)inputViews;	// 0x33980a7d
- (void)invalidateDisplayLink;	// 0x33c91a01
- (BOOL)isHostingActiveImpl;	// 0x33c9505d
- (BOOL)isOffScreen;	// 0x33a60019
- (BOOL)isOnScreen;	// 0x339d90e9
// converted property getter: - (BOOL)isSplitting;	// 0x33a98281
// converted property getter: - (BOOL)isTranslating;	// 0x339ff6e1
// converted property getter: - (BOOL)isUndocked;	// 0x339f0c31
// declared property getter: - (BOOL)keyClicksEnabled;	// 0x33c96b79
// converted property getter: - (float)keyboardAttachedViewHeight;	// 0x33c95e3d
- (void)layoutIfNeeded;	// 0x33a99c75
- (void)layoutInputViews;	// 0x33a99ca9
- (void)layoutInputViewsForGeometry:(UIPeripheralAnimationGeometry)geometry;	// 0x33a9a4c5
- (CGRect)localDisplayRectForViewSet:(id)viewSet;	// 0x339fe429
- (CGRect)localDisplayRectForViewSet:(id)viewSet position:(int)position;	// 0x339fdc41
- (void)logGeometryDescriptionFromUserInfo:(id)userInfo;	// 0x33c953b9
- (void)manualKeyboardWasOrderedIn:(id)anIn;	// 0x33c909e5
- (void)manualKeyboardWasOrderedOut:(id)anOut;	// 0x33c90a95
- (void)manualKeyboardWillBeOrderedIn:(id)manualKeyboard;	// 0x33c9097d
- (void)manualKeyboardWillBeOrderedOut:(id)manualKeyboard;	// 0x33c90a2d
- (BOOL)maximize;	// 0x33c96119
- (BOOL)maximizeWithAnimation:(BOOL)animation;	// 0x33c96131
- (BOOL)minimize;	// 0x33c95ecd
- (float)minimumOffsetForBuffer:(float)buffer;	// 0x33c957a5
- (void)moveToPersistentOffset;	// 0x33c95b1d
- (id)nextAnimationStyle;	// 0x33b14b99
- (id)nextAnimationStyle:(BOOL)style;	// 0x339806b9
- (CGPoint)offHostPointForPoint:(CGPoint)point;	// 0x33c95be1
- (void)orderInAutomatic;	// 0x33c94761
- (void)orderInAutomaticFromDirection:(int)direction withDuration:(double)duration;	// 0x33ad2f55
- (void)orderInAutomaticSkippingAnimation;	// 0x33c947ad
- (void)orderInWithAnimationStyle:(id)animationStyle;	// 0x33ad2fd1
- (void)orderOutAutomatic;	// 0x33c947f9
- (void)orderOutAutomaticSkippingAnimation;	// 0x33a4dfe9
- (void)orderOutAutomaticToDirection:(int)direction withDuration:(double)duration;	// 0x33a45925
- (void)orderOutWithAnimation:(BOOL)animation toDirection:(int)direction duration:(double)duration;	// 0x33c94855
- (void)orderOutWithAnimationStyle:(id)animationStyle;	// 0x33a459a1
- (void)peripheralHostDidEnterBackground:(id)peripheralHost;	// 0x339ee345
- (void)peripheralHostWillResume:(id)peripheralHost;	// 0x33c906ed
- (void)peripheralViewMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x33c963ed
- (BOOL)pinningPreventsInputViews:(id)views;	// 0x339804e1
- (void)popAnimationStyle;	// 0x339d9449
- (void)postDidHideNotification;	// 0x33c90bd5
- (void)postDidHideNotificationForGeometry:(UIPeripheralAnimationGeometry)post;	// 0x33c9559d
- (void)postDidShowNotification;	// 0x33c90add
- (void)postDidShowNotificationForGeometry:(UIPeripheralAnimationGeometry)post;	// 0x33a9b73d
- (void)postDockingNotification;	// 0x33c90c9d
- (void)postKeyboardFrameChangeNotification:(id)notification withInfo:(id)info;	// 0x33c911f1
// declared property getter: - (id)postPinningReloadState;	// 0x3399d875
- (void)postUndockingNotification;	// 0x33c90e8d
- (void)postWillHideNotificationForGeometry:(UIPeripheralAnimationGeometry)post duration:(double)duration;	// 0x33c953bd
- (void)postWillShowNotificationForGeometry:(UIPeripheralAnimationGeometry)post duration:(double)duration;	// 0x33a9ab15
- (void)prepareForPinning;	// 0x33c95719
- (void)prepareForRotationOfKeyboard:(id)keyboard toOrientation:(int)orientation;	// 0x33c92d6d
- (void)prepareForRotationToOrientation:(int)orientation;	// 0x33c92ca5
- (void)prepareForSplitTransition;	// 0x33c91561
- (void)pushAnimationStyle:(id)style;	// 0x339d928d
- (void)refreshCorners;	// 0x33a01c51
- (void)resetCurrentOrderOutAnimationDuration:(double)duration;	// 0x33adc4a1
- (void)resetNextAutomaticOrderInDirectionAndDuration;	// 0x33a01fed
// declared property getter: - (id)responder;	// 0x33980091
- (id)retain;	// 0x33a00af1
- (void)rotateKeyboard:(id)keyboard toOrientation:(int)orientation;	// 0x33c935c5
- (void)rotateToOrientation:(int)orientation;	// 0x33c92ce9
// declared property getter: - (id)rotationState;	// 0x33ad34a9
- (CGRect)screenRectFromBounds:(CGRect)bounds atCenter:(CGPoint)center applyingSourceHeightDelta:(float)delta;	// 0x33a9b49d
// declared property getter: - (id)selfHostingTrigger;	// 0x33a98bc5
- (void)setAccessoryViewVisible:(BOOL)visible delay:(float)delay;	// 0x33c948c1
// declared property setter: - (void)setAnimationFencingEnabled:(BOOL)enabled;	// 0x33c9502d
// declared property setter: - (void)setAutomaticAppearanceEnabled:(BOOL)enabled;	// 0x33a4c625
// declared property setter: - (void)setAutomaticAppearanceInternalEnabled:(BOOL)enabled;	// 0x33a5fab1
// declared property setter: - (void)setCurrentState:(int)state;	// 0x339febf1
// declared property setter: - (void)setCurrentTransition:(id)transition;	// 0x339feda1
// declared property setter: - (void)setIgnoresPinning:(BOOL)pinning;	// 0x33c95781
// declared property setter: - (void)setInputViews:(id)views;	// 0x33980635
- (void)setInputViews:(id)views animated:(BOOL)animated;	// 0x33980681
- (void)setInputViews:(id)views animationStyle:(id)style;	// 0x33980881
- (void)setKeyboardOnScreenNotifyKey:(BOOL)key;	// 0x339fec5d
- (void)setListeningToSpringBoardKeyboardNotifications:(BOOL)springBoardKeyboardNotifications;	// 0x33c903cd
- (void)setNextAutomaticOrderInDirection:(int)direction duration:(double)duration;	// 0x33a5a2ed
- (void)setPeripheralFrameForHostBounds:(CGRect)hostBounds;	// 0x33a9a7a9
- (void)setPeripheralToolbarFrameForHostWidth:(float)hostWidth;	// 0x33a9a6c5
// declared property setter: - (void)setPostPinningReloadState:(id)state;	// 0x33980551
// declared property setter: - (void)setResponder:(id)responder;	// 0x33980611
// declared property setter: - (void)setRotationState:(id)state;	// 0x33c95009
// declared property setter: - (void)setSelfHostingTrigger:(id)trigger;	// 0x339805ed
// declared property setter: - (void)setTargetState:(id)state;	// 0x33a9aec5
- (void)setUndockedWithOffset:(CGPoint)offset animated:(BOOL)animated;	// 0x33c95935
// declared property setter: - (void)set_inputViews:(id)views;	// 0x339bf9dd
- (void)setkeyboardAttachedViewHeight:(float)height;	// 0x33c95ebd
- (BOOL)shouldUseHideNotificationForGeometry:(UIPeripheralAnimationGeometry)geometry;	// 0x33a9b689
- (void)showCorners:(BOOL)corners withDuration:(float)duration;	// 0x33a00805
- (void)showDropShadows:(BOOL)shadows;	// 0x33c929e1
- (void)showInputViewsIfNeeded;	// 0x339bfa01
- (CGSize)sizeOfInputViewForInputViewSet:(id)inputViewSet withInterfaceOrientation:(int)interfaceOrientation;	// 0x33a001d9
- (void)syncToExistingAnimations;	// 0x33a5a729
// declared property getter: - (id)targetState;	// 0x33a74aa1
- (CGSize)totalPeripheralSizeForOrientation:(int)orientation;	// 0x33a9a311
- (void)transitionDidFinish;	// 0x33c94ed9
- (void)translateDetected:(id)detected;	// 0x33c92229
- (void)undock;	// 0x33c9138d
- (id)undockedInfoFromDefaultInfo:(id)defaultInfo forNotification:(id)notification;	// 0x33c91041
- (void)updateCandidateHeight:(float)height withDuration:(float)duration;	// 0x33c96c61
- (void)updateDropShadow;	// 0x33a00b1d
- (void)updateFrame:(CGRect)frame withDuration:(float)duration;	// 0x33c94a81
- (void)updateFrame:(CGRect)frame withDuration:(float)duration splitHeightDelta:(float)delta;	// 0x33c94e91
- (void)updateInputAccessoryViewVisibility:(BOOL)visibility withDuration:(float)duration;	// 0x33c96e29
- (BOOL)userInfoContainsActualGeometryChange:(id)change;	// 0x33a9b5dd
- (id)userInfoFromGeometry:(UIPeripheralAnimationGeometry)geometry duration:(double)duration forWill:(BOOL)aFor forShow:(BOOL)show;	// 0x33a9af1d
// declared property getter: - (id)view;	// 0x339fce15
- (CGRect)visiblePeripheralFrame:(BOOL)frame;	// 0x33a74811
@end

